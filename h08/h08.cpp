/**
    @file h08.cpp
    @author your name here
    @version what day and meeting time
*/
#include <string>
#include <cmath>
using namespace std;

string STUDENT = "malaya";     // Add your name Blackboard/occ-email ID

#include "h08.h"


  int triplet(double num, double cutoff)
        {
                long long numerator = static_cast<long long>(abs(num));
                long long divisor = static_cast<long long>(cutoff);
                long long quotient = numerator / divisor;
                return static_cast<int>(quotient % 1000);
        }
// Place your function definitions in this file.
    string toEnglishWords(double money)
    {
        string result = "";
        
          
        
        string temp = tripletToWords(triplet(money, TRILLIONS));
            if (! temp.empty()) result += temp + " Trillion ";
        
            temp = tripletToWords(triplet(money, BILLIONS));
            if (! temp.empty()) result += temp + " Billion ";
        
         temp = tripletToWords(triplet(money, MILLIONS));
            if (! temp.empty()) result += temp + " Millions ";

         temp = tripletToWords(triplet(money, THOUSANDS));
            if (! temp.empty()) result += temp + " Thousands ";
         temp = tripletToWords(triplet(money, ONES));
            if (! temp.empty()) result += temp ;
            
       
    int cents = static_cast<int>(round((money - trunc(money)) * 100));
        string tempt = "and " + centsToWords(cents);
        if (result.empty())
        result = "Ten ";
        
        result += tempt;

       return result;
    }
 
   
    //  the second function !!!!!!!!!!!!!!!!!!!!!
    
    string tripletToWords(int triple)
{
 // 1. Break into hundreds, tens, teens and ones
 int hundreds = triple / 100;
 int teens = triple % 10;
 int tens = triple % 100 / 10;
 int ones = triple % 100;
 // 2. Convert hundreds digit to English word
 // 3. add word " Hundred " afterwards
 string result;
 if (hundreds > 0)
 {
 result += digitToWord(hundreds) + " Hundred ";
 }
 // 4. If tens is greater than 1
 // 5. convert tens to tens word (2 -> twenty)
 // 6. convert ones to ones word (3 -> three)
 if (tens > 1)
 {
 result += tensToWord(tens) + " " + digitToWord(ones);
 }
 // 7. If tens is 1 then convert teens word
 else if (tens == 1)
 {
 result += teensToWord(teens);
 }
 // 8. Else convert ones word
 else
 {
 result += digitToWord(ones);
 }
return result;
}
    
    
   
     // Convert a digit to an English string
string digitToWord(int digit)
{
 switch (digit)
 {
 case 1: return "One";
 case 2: return "Two";
 case 3: return "Three ";
 case 4: return "Four ";
 case 5: return "Five ";
 case 6: return "Six";
 case 7: return "Seven";
 case 8: return "Eight";
 case 9: return "Nine";
 }
 return ""; // nothing   
    }
    
    
    
    
    string tensToWord(int tens)
{
 switch (tens)
 {
 case 2: return "Twenty";
 case 3: return "Thirty";
 case 4: return "Fourty";
 case 5: return "Fifty";
 case 6: return "Sixty";
 case 7: return "Seventy";
 case 8: return "Eighty";
 case 9: return "Ninety";
    // default: return "Ten ";
 }
 return "";
 
 
}

    
  

string teensToWord(int teens)
{
 switch (teens)
 {
 case 10: return "Ten";
 case 11: return "Eleven";
 case 12: return "Twelve";
 case 13: return "Thirteen";
 case 14: return "Fourteen";
 case 15: return "Fifteen";
 case 16: return "Sixteen";
 case 17: return "Seventeen";
 case 18: return "Eighteen";
 case 19: return "Nineteen";
 }
 return "";
}
   




    
    
    
    
    
    
    string centsToWords(int cents)
    {
     if (cents > 0)
 return to_string(cents) + "/100";
 else
 return "zero/100";

    }
    
    
    
    
    
    
    
    
    
    
