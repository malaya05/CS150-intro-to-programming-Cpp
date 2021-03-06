/**
    @file h07.cpp
    @author your name here
    @version what semester and meeting
*/
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string STUDENT = "htran511"; // Add your name Blackboard/occ-email ID

#include "h07.h"
// Put your function implementation (definitions) in this file
/**
   Computes a barcode given a 5-digit zip code.
   @param zip the 5-digit zip code.
   @return the bar code with | for full bars and : for half bars.
 */
    string barCode(int zip)
    {
    int oz = zip;
        string bars = codeForDigit(zip % 10);
    zip = zip / 10;
        bars = codeForDigit(zip%10) + bars;
        zip = zip / 10;
        bars = codeForDigit(zip%10) + bars;
        zip = zip / 10;
        bars = codeForDigit(zip%10) + bars;
        zip = zip / 10;
         bars = codeForDigit(zip%10) + bars;
        
        int check = checkDigit(oz);
        bars = bars + codeForDigit(check);
    return  "|" + bars + "|";
    }

/**
   Returns the bar code value for a given digit.
   @param digit integer
   @return string encoding of the digit
*/

    string codeForDigit(int digit)
    {
            switch(digit)
        {
            case 1: return ":::||";
            case 2: return "::|:|";
            case 3:return "::||:";
            case 4:return ":|::|";
            case 5:return ":|:|:";
            case 6:return ":||::";
            case 7:return "|:::|";
            case 8:return "|::|:";
            case 9: return "|:|::";
            default : return "||:::";
        }
   
    }

/**
 * Calculates the check digit for a zip code.
 * @param zip the zip code
 * @return check digit for zip according to this rule.
 *
 * Sum all the digits in the zip code.
 */
    int checkDigit(int zip) 
    {
         int sum = 0;
        while(zip>0)
        {
            sum +=zip % 10;
            zip/=10;
            }
   
    return  (10 - sum % 10) % 10 ;
    }
