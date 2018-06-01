/**
    @file h31.cpp
    @author your name here
    @version what day and meeting time
*/
#include <string>
#include <stdexcept>
// Add additional headers here
using namespace std;

string STUDENT = "malaya";     // Add your name Blackboard/occ-email ID

#include "h31.h"
// Add your implementation here
/**
    Recursively searches a string to find a second string.
    @param s the string to search through.
    @param t the string to search for
    @return true if t is found in s.

    Tests whether the string t is contained in a string s.
    For instance, calling the function like this:
        bool b = find("Mississippi", "sip");
    returns true, since "sip" is contained in "Mississippi".
    You must write this as a recursive function, not by just
    calling the string::find() function, or by using a loop.
*/
bool find(const std::string& s, const std::string& t)
{
    size_t slen = s.size();
    size_t tlen = t.size();
    
    if(slen >= tlen)
    {
    if(s.substr(0,tlen) == t)
        return true;
  
    return find(s.substr(1),t);
    }
    
    
    return false;
}
