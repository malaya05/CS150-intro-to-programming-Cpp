/**
    @file h09.cpp
    @author your name here
    @version what day and meeting time
*/
#include <string>
#include <cmath>
#include<cassert>
using namespace std;

string STUDENT = "malaya";     // Add your name Blackboard/occ-email ID
const string OOR = "OUT OF RANGE";
#include "h09.h"

// Place your function definitions in this file.
string romanDigit(int digit, const string& one, const string& five, const string& ten)
{
   if(digit == 9) return one + ten;
   if(digit == 4) return one + five;
    
    string digitStr;
    if(digit >=5)
    {
        digitStr = five;
        digit = digit -5;
    }
    switch(digit)
    {
        case 3: return digitStr + one + one + one;
        case 2: return digitStr + one + one;
        case 1: return digitStr + one;
    }
    return digitStr;
 //  assert(false);
}






    string decToRoman(int num)
{
  

    // Make sure it's in range
    if (num <= 0 or num >= 4000)
    {
        return OOR;
    }
    else
    {
     string roman = romanDigit(num % 10, "I", "V", "X")  ;
     num/=10;        
        
    roman = romanDigit(num % 10, "X", "L", "C") + roman ;
     num/=10;
        
        roman = romanDigit(num % 10, "C", "D", "M") + roman ;
     num/=10;
        
        switch(num)
        {
            case 3: return "MMM" +roman;
            case 2: return "MM" +roman;
            case 1: return "M" +roman;
        }
         return roman;
    }
   
}
