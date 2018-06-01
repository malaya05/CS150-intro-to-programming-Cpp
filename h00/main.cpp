/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file main.cpp
 */
#include <iostream>
#include <string>
using namespace std;

#include "cs150check.h"           // Always include this

string STUDENT = "Your LoginID";  // Add your Blackboard login name
bool TESTING = false;             // Change to true for simple IO tests

// Include your own header files here

/**
 * Describe the purpose of your program here.
 * @return 0 for success.
 */
int run()
{
    /*
        Implementation comments.
        Describe the inputs, outputs, given values
        and calculations here.
    */
    int a = 1109991324;
    int count =0;
while(a>0)
{
a=a/10;
count++;
}
    cout << count;
    
 

    
    return 0;
}

