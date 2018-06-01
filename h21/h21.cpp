/**
    @file h21.cpp
    @author your name here
    @version what day and meeting time
*/
#include <string>
// Add additional headers here
using namespace std;

string STUDENT = "malaya";     // Add your name Blackboard/occ-email ID

#include "h21.h"

// Add your code here
const double * pMax(const double *ptr, size_t size)
 {
  double max = ptr[0];
     
  const double * result = &ptr[0];
     
    if(size ==0)return nullptr;
     
    for(size_t i =0 ;i < size ; i++)
    {
    if(ptr[i] >max)
        {
        max = ptr[i];
        result = &ptr[i];
        }
    
    }        
    return result;
    }
