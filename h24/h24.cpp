/**
    @file h24.cpp
    @author your name here
    @version what day and meeting time
*/
#include <string>
// Add additional headers here
using namespace std;

string STUDENT = "malaya";     // Add your name Blackboard/occ-email ID

#include "h24.h"

// Add your code here

void reverse(char * s)
{
 char * begin = s, *end = s;   
  while(* end != '\0') end++;
    end--;

while(end > begin)
{
char temp = *begin;
    *begin = *end;
    *end = temp;
    begin++;
    end--;
}    
    
}
