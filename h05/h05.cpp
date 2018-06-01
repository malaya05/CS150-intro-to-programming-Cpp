/**
    @file h05.cpp
    @author your name here
    @version what semester and meeting
*/
#include <string>
using namespace std;

string STUDENT = "malaya"; // Add your name Blackboard/occ-email ID

#include "h05.h"

// Place your function definitions in this file.
string zipZap(const std::string& str)
{
    string result;
size_t i = 0, len = str.length(); // 1.
if (len < 3) return str; // 2.
while(i < len - 2) // 3,
{
    
string word = str.substr(i, 3); // 4.
if (word.at(0) == 'z' && word.at(2) == 'p') // 5.
{
result += "zp"; // 5a.
i += 3; // 5b.
}
else
{
result += word.at(0); // 6a.
i++; // 6b.
}
}
result += str.substr(i); // 7. remaining
    //~ for(size_t i = 0, len = str.length(); i < len-2; i++)
    //~ {
        //~ string word = str.substr(i,3);
        //~ string front = word.substr(0);
        //~ string end = word.substr(2);
        
        //~ if(front == "z" && end == "p" ) r = front + end + word ;
        //~ }
    return result;
    }
    
    int countCode(const std::string& str)
    {
        int r = 0;
        for(size_t i = 0, len = str.length(); len > 3 && i < len-3 ; i++)
        {
            string code = str.substr(i,4);
            string co = code.substr(0,2);
            string e = code.substr(3,1);
            if( co == "co" && e == "e") r++;
            }
        return r;
        }
        
        //// 3
        string everyNth(const std::string& str, int n)
        {
            string r = "";
            for(size_t i = 0, len = str.length(); i < len ; i+=n)
        {
            r+= str.substr(i,1);
        }
            return r;}
            
            /// 4
            
            
             bool prefixAgain(const std::string& str, int n)
             {
                bool r = false;
                string prefix = str.substr(0,n);
                for(size_t i = 1, len = str.size(); i < len  ; i++)
                {
                    string word = str.substr(i,n);
                    if( word == prefix) return true;
                    
                    }
                 return r;
                }
