/**
    @file h04.cpp
    @author your name here
    @version what semester and meeting
*/
#include <string>
// Add additional headers as needed here

using namespace std;
string STUDENT = "malaya";    // Add your name Blackboard/occ-email ID

#include "h04.h"

// Place the implementation (definition) of your function here
double focalLength(double d, double r1, double r2, double n) 
{
   
    double eq= (n-1)*((1/r1)-(1/r2) + ((n-1)*d)/(n*r1*r2));
    double result = 1.0 / eq;
    return result;
    }

    
    
    
    
    
    
    
    
     //double x1 = (n-1);
    //~ double x2 = 1/r1;
    //~ double x3 = 1/r2;
    //~ double x4 = x1 * d;
    //~ double x5 = n* r1* r2;
    
    
    
    
    //~ double power = x1 * (x2 - x3 + (x4 / x5));
    //~ double flen = 1.0 / power;
    
    //~ return flen;
