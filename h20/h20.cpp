/**
    @file h20.cpp
    @author your name here
    @version what day and meeting time
*/
#include <string>
// Add additional headers here
using namespace std;

string STUDENT = "htran511";     // Add your name Blackboard/occ-email ID

#include "h20.h"

// Add your code here
int alternatingSum(const int a[], size_t size)
{
 int sum =0;
    
for (size_t i = 0; i < size; i++)
    {
    if (i % 2 == 0)
 sum += a[i];
 else
 sum -= a[i];

    }
return sum;    
    
}
