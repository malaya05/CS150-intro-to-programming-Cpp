/**
    @file h22.cpp
    @author your name here
    @version what day and meeting time
*/
#include <string>
// Add additional headers here
using namespace std;

string STUDENT = "amiri1";     // Add your name Blackboard/occ-email ID

#include "h22.h"

// Add your code here
 bool sameSet(const int *aBeg, const int *aEnd, const int *bBeg, const int *bEnd)
 {
   for(auto pa = aBeg; pa!= aEnd; pa++)
     {
         bool found = false;
      for(auto pb = bBeg ; pb != bEnd ; pb++)
            {
             if(*pa == *pb)
             {
                found = true;
                 break;
             }                 
            }
            if(! found) return false;
     }
     for(auto pb = bBeg ; pb != bEnd ; pb++)
     {
         bool found = false;
      for(auto pa = aBeg; pa!= aEnd; pa++)
            {
             if(*pa == *pb)
             {
                found = true;
                 break;
             }                
            }
            if(! found) return false;
     }
  return true;
 }
