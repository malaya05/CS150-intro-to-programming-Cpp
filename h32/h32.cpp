/**
    @file h32.cpp
    @author your name here
    @version what day and meeting time
*/
#include <string>
#include <stdexcept>
// Add additional headers here
using namespace std;

string STUDENT = "malaya";     // Add your name Blackboard/occ-email ID

#include "h32.h"
// Add your implementation here

/**
    Compute recursively a new string where adjacent characters
    that are the same have been reduced to a single character.
    So "yyzzza" yields "yza". Here are some more examples:
        stringClean("yyzzza") -> "yza"
        stringClean("abbbcdd") -> "abcd"
        stringClean("Hello") -> "Helo"
    @param s the string to start with.
    @return the string modified as described.
*/

string stringClean(const string& str)
{
 
 if(str.size() <2)
   return str;
 
   if(str[0] == str[1])
       
       return stringClean(str.substr(1));
    else 
  
        return str.at(0)+stringClean(str.substr(1));
          
 return "";    
}
