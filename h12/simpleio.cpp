/**
    @file simpleio.cpp
    @author your name here
    @date what day and meeting time
*/
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <cctype>
using namespace std;

string STUDENT = "htran511";     // Add your name Blackboard/occ-email ID

#include "simpleio.h"

// Define your functions here
string getLine(const string& prompt)
{
cout << prompt; // 1. print the prompt; may be empty
if (! prompt.empty() && ! isspace(prompt.back()))
cout << " "; 
    
string result;
getline(cin, result);
return result;
}






int getInt(const string& prompt, const string& reprompt)
{
    /*
    1. Read an entire line from the user (use getLine)
2. Scan the line for an int (or double)
- skip any spaces before or after
3. If the scan failed, or, if there are any characters left
- Go back to line 1, passing the reprompt string
4. Otherwise, return the scanned value
*/
int result = 0;
bool inputFailing = true;
string line = getLine(prompt);
do
{
    istringstream in(line);
    in >> result >> ws;
    inputFailing = in.fail() || ! in.eof();
if (inputFailing)
line = getLine(reprompt);
} while (inputFailing);
    
    
return result;
}



double getReal(const string& prompt, const string& reprompt)
{
double result = 0.0;
    
 bool inputFailing = true;
string line = getLine(prompt);
do
{
    istringstream in(line);
    in >> result >> ws;
    inputFailing = in.fail() || ! in.eof();
if (inputFailing)
line = getLine(reprompt);
} while (inputFailing);   
    
    
    
return result;
}
