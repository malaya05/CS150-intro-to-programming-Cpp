/**
    @file h23.cpp
    @author your name here
    @version what day and meeting time
*/
#include <string>
#include <stdexcept>
// Add additional headers here
using namespace std;

string STUDENT = "amiri1";     // Add your name Blackboard/occ-email ID

#include "h23.h"

// Add your code here
  void copyEvens(const int a[], size_t aSize, int b[], size_t &bSize)
  {
     if(bSize <aSize)
     {
         throw length_error("ERROR: size of b is < a. ");
     }
     auto pb =b;
     for (auto p = a, end = a + aSize; p != end; p++)
     {
      if(*p % 2 == 0)  
           *pb++ = *p;
     }
      bSize = pb - b;
  }
