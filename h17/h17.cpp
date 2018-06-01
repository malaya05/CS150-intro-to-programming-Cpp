/**
    @file h17.cpp
    @author your name here
    @version what day and meeting time
*/
#include <string>
#include <vector>
#include <fstream>
#include <stdexcept>
using namespace std;

string STUDENT = "malaya";     // Add your name Blackboard/occ-email ID

#include "h17.h"

// Complete these two functions
vector<string>fileToWords(const string& filename)
{
    vector<string> result;
    ifstream in(filename.c_str());
    if(! in) throw invalid_argument("Cannot open " + filename);
    string word;
    while(in >> word)
    {
        
        result.push_back(word);
    }
    
    in.close();
    
    return result;
}


/**
    Reads any stream until end-of-file. Returns a vector of misspelled words,
    but not those words that have been excluded.
    @param in the stream to read from
    @param dictionary vector of string containing correct-spelled words.
    @param excluded vector of string containing words to ignore.
    @return a vector of misspelled words, along with their position in the
        original file.
*/
vector<WORD> spellCheck(istream& in,
                    const vector<string>& dictionary,
                    const vector<string>& excluded)
{
    vector<WORD> result;
    while(in)
    {
   long long pos = in.tellg();
            if(pos == -1) break;
        
        
        string word;
        in >> word;
        for(size_t i =0; i < word.size();i++)
        word.at(i) = tolower(word.at(i));
        
        
        
        int start =0;
        int len = word.size();
        while(start < len)
        {
       if(ispunct(word.at(start)))
           start++;
        else
            break;
            
        }
        while(len > start)
        {
            if(ispunct(word.at(len-1)))
                len--;
            else
                break;
        }
        
       if(len > start)
       {
    word = word.substr(start, len - start);
       }           
        
        
        
        bool found = false;
        for(size_t i =0; i < result.size();i++)
        {
            if(result.at(i).word == word)
            {
                result.at(i).positions.push_back(pos);
                found = true;
                break;
            }
        }
        if(! found)
        {
             for(size_t i =0; i < excluded.size();i++)
        {
            if(excluded.at(i) == word)
            {
                
                found = true;
                break;
            }
            
            
        }
        
    }
    
    if(! found)
    {
       for(size_t i =0; i < dictionary.size();i++)
        {
            if(dictionary.at(i) == word)
            {
                
                found = true;
                break;
            }   
            }   
    }
    
     if(! found)
    {
    WORD w;
        w.word = word;
        w.positions.push_back(pos);
        result.push_back(w);
        
    }
    
}
    
    
    return result;
}
