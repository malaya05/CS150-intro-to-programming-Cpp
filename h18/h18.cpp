/**
    @file h18.cpp
    @author your name here
    @version what day and meeting time
*/
#include <string>
// Add additional headers here
using namespace std;

string STUDENT = "amiri1";     // Add your name Blackboard/occ-email ID

#include "h18.h"

// Add your code here

double replaceIfGreater(double *ptr, double limit)
{
   double result = *ptr;
    if(limit > *ptr) 
    *ptr = limit ;
    return result;
}



