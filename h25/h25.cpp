/**
    @file h25.cpp
    @author your name here
    @version what day and meeting time
*/
#include <string>
// Add additional headers here
using namespace std;

string STUDENT = "malaya";     // Add your name Blackboard/occ-email ID

#include "h25.h"


const char * findStr(const char *str1, const char *str2)
{
 while(* str1 != '\0')
 {
     const char *p1 = str1;
     const char *p2 = str2;
     while(*p1 == * p2)
     {
         p1++;
         p2++;
     }
     if(*p2 == '\0')
         return str1;
 str1++;
 } 
return NULL; 
}
