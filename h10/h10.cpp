/**
    @file h10.cpp
    @author your name here
    @version what day and meeting time
*/
#include <iostream>
#include <string>
// Add additional headers here
using namespace std;

string STUDENT = "htran511";     // Add your name Blackboard/occ-email ID

#include "h10.h"

// Write your function here
void strip()
{
    bool inString = false; // not in a string
    bool inSingleCmt = false; // not inside a single-line comment
    bool inMultiCmt = false; // not inside a multi-line comment
    char ch;
    while (cin.get(ch))
    {
                    if (inSingleCmt && ch == '\n') inSingleCmt = false;
            else if (inString && ch == '"') inString = false;
            else if (inMultiCmt && ch == '*' && cin.peek() == '/')
            {
                cin.get(ch); // eat the /
               // cin.get(ch); 
            inMultiCmt = false; // turn off multiline comment mode
            }
            else if (inString && ch == '\\' && cin.peek() == '"') // \"
                {
                cout.put(ch);
                cin.get(ch);
                }

            else if (!inString && !inSingleCmt && !inMultiCmt)
            {
            if (ch == '/' && cin.peek() == '*')
            inMultiCmt = true;
            else if (ch == '/' && cin.peek() == '/')
            inSingleCmt = true;
            else if (ch == '"')
            inString = true;
            }
           if (cin && !inSingleCmt && !inMultiCmt)     
        cout.put(ch);
    }
} 

