/**
 *  @author Alaya
 *  @date Fall 2016
 *  @file main.cpp
 */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


#include "cs150check.h"           // Always include this

string STUDENT = "malaya";  // Add your Blackboard login name
bool TESTING = true;             // Change to true for simple IO tests

// Include your own header files here

/**
 * Describe the purpose of your program here.
 * @return 0 for success.
 */
int run()
{
    // intro 
    cout <<"malaya-H01-Time on my Hands"<<endl;
    cout << "---------------------------------"<<endl;
    // prmpy the user
    cout << "Give me a time (such as 3:57) and a duration (such as 1:05), and I'll tell you the sum: ";
    
    // inout section
    cout << "Enter the time here: ";
    
    int timeHours, timeMinutes;
    int durationHours, durationMinutes;
    char ignore;
    
    cin >> timeHours >> ignore >> timeMinutes;
    
    cout <<"Enter the time Duration here: ";
    cin >> durationHours >> ignore >> durationMinutes;
    // prosces 
    int sumMinutes= timeMinutes + durationMinutes;
    int sumHours = timeHours + durationHours;
    
    sumHours += sumMinutes /60;
    sumHours = (sumHours - 1) % 12 + 1;
    
    sumMinutes %= 60;
    int diffMinutes = 60 + timeMinutes - durationMinutes;
// 2. Add 12 to time hours, subtract duration; ->n diffHours
int diffHours = timeHours + 12 - durationHours;
diffHours = diffHours + diffMinutes / 60;
// 4. Remove any minutes >= 60 from diffMinutes
diffMinutes = diffMinutes % 60;
diffHours = (12+ diffHours - 1) % 12;

  
    // output
    cout << endl;
    cout<< setfill('0');
cout << durationHours << ":" << setw(2) << durationMinutes << " hours after, and before, "
 << timeHours << ":" << setw(2) << timeMinutes << " is [" << sumHours << ":" << setw(2) << sumMinutes << ", "
 << diffHours << ":" << setw(2) << diffMinutes << "]" << endl;
    
    return 0;
}
