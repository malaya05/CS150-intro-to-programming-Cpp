/**
    @file h14.cpp
    @author your name here
    @version what day and meeting time
*/
#include <string>
#include <fstream>
#include <cctype>
#include <stdexcept>
#include <vector> 
// Add additional headers here
using namespace std;

string STUDENT = "malaya";     // Add your name Blackboard/occ-email ID

#include "h14.h"




vector<Country> readCountryInfo(const string& filename)
    {
vector<Country> result;
  ifstream in(filename.c_str());
    if (in.fail())
    throw invalid_argument("Cannot open " + filename);
// Read the entire file
 while(in){  
char ch;
string name;
long population;
     
while (in.get(ch)&& ! isdigit(ch))
name +=ch; 
    in.putback(ch);
    in>>population;
    if (in)
    {
        int len = name.length()-1;
        while(len >0 && isspace(name.at(len)))
            len--;
        name = name.substr(0, len+1);
        Country country = {name, population};
        result.push_back(country);
        string dummy;
        getline(in, dummy);
    }
}    
return result;
}
