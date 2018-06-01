/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file main.cpp
 */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "cs150check.h"             

// Add your Blackboard login name
string STUDENT = "malaya";

// Change to true for simple IO tests
bool TESTING = true;               

//// Include your own header files here

/**
 * Describe the problem you are solving here.
 *
 * Add additional notes about inputs, outputs and algorithms.
 *
 * @return 0 for success.
 */
int run()
{
    // intro 
    cout << STUDENT <<"-H03-Grade Calculator" << endl;
    cout << "-----------------------------------------" << endl;
    // input
    cout << "Enter your letter grade Plz: " << endl;
    string grade;
    getline(cin, grade);
    
    // proc
    double points = -1;
    if(grade == "A") points = 4.0;
    else if(grade == "A-") points = 3.7;
    else if(grade == "B+") points = 3.3;
    else if(grade == "B") points = 3;
    else if(grade == "B-") points = 2.7;
    else if(grade == "C+") points = 2.3;
    else if(grade == "C") points = 2;
    else if(grade == "C-") points = 1.7;
    else if(grade == "D+") points = 1.3;
    else if(grade == "D") points = 1;
    else if(grade == "D-") points = 0.7;
    else if(grade == "F") points = 0;
    // output
    cout << fixed << showpoint << setprecision(1);
    
    if(points >= 0) {
    cout << "Grade value is [" << points << "]" << endl;
    }
    else {
        string bad = "";
        string errormessage;
        string validGrades = "ABCDF";
        if(grade == "A+" || grade == "F+"|| grade == "F-")
        {
            errormessage = "INVALID GRADE COMBINATION";
            }
            else if(validGrades.find(grade.substr(0,1) == bad))
            {
               errormessage = "INVALID LETTER GRADE";
                }
                else 
                {
                     errormessage =" INVALID INPUT";
                    }
        cout << "Grade value is [" << errormessage << "]" << endl;
                    
                }      
    return 0;

}

