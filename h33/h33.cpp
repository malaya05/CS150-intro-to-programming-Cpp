/**
    @file h33.cpp
    @author your name here
    @version what day and meeting time
*/
#include <string>
#include <stdexcept>
// Add additional headers here
using namespace std;

string STUDENT = "malaya";     // Add your name Blackboard/occ-email ID

#include "h33.h"
// Add your implementation here
/**
    Compute recursively the number of times that sub appears inside
    str, without the substrings overlapping.

    @param str the string to search through.
    @param sub the string to look for.
    @return number of times that sub appears in str (without overlap).

    Here are some examples:
        subCount("catcowcat", "cat") returns 2
        subCount("catcowcat", "cow") returns 1
        subCount("catcowcat", "dog") returns 0

*/

int subCount(const std::string& str, const std::string& sub)
{   
     int strLen = str.size(); int subLen = sub.size();
    if(strLen <subLen)
    return 0;
    
    if(str.substr(0,subLen) == sub)
    return 1+ subCount(str.substr(subLen),sub);
    
    return subCount(str.substr(1),sub);
}
