/**
 *  @author put your name here
 *  @version CS 150 H09 Testing
 *  @file main.cpp
 */

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

#include "cs150check.h"
#include "h09.h"

/**
 * Run your program's tests
 */
void runTests()
{
	///////////// Begin a set of tests
	beginTests(); // test heading

    /////// Tests for decToRoman//////////////////////
	beginFunctionTest("Tests for decToRoman()"); // function name

	assertEquals("OUT OF RANGE",    decToRoman(0));
	assertEquals("MMLXXXIV",        decToRoman(2084));
	assertEquals("OUT OF RANGE",    decToRoman(4250));
	assertEquals("DCLIV",           decToRoman(654));
	assertEquals("V",               decToRoman(5));
	assertEquals("XXV",             decToRoman(25));
    assertEquals("CLVI", 		    decToRoman(156));
    assertEquals("CXXII", 		    decToRoman(122));
    assertEquals("MDLXXXVIII",      decToRoman(1588));
    assertEquals("MDCXXV", 	        decToRoman(1625));
    assertEquals("DXLIII", 	        decToRoman(543));
    assertEquals("MMMX", 		    decToRoman(3010));
    assertEquals("DCXLV", 		    decToRoman(645));
    assertEquals("DLXXIX", 	        decToRoman(579));
    assertEquals("MMMCCXXXVIII",    decToRoman(3238));
    assertEquals("MMMDCCCII", 	    decToRoman(3802));
    assertEquals("XLIX", 		    decToRoman(49));
    assertEquals("MMMXI", 		    decToRoman(3011));
    assertEquals("MMMV", 		    decToRoman(3005));
    assertEquals("MMCMLXIII", 	    decToRoman(2963));
    assertEquals("MMMDCCLXVI",      decToRoman(3766));
    assertEquals("MDCXIII", 	    decToRoman(1613));
    assertEquals("MMCCCLVIII",      decToRoman(2358));
    assertEquals("MDLXVIII", 	    decToRoman(1568));
    assertEquals("DCXIII", 	        decToRoman(613));
    assertEquals("MMDCLII", 	    decToRoman(2652));
    assertEquals("DCCCLXXXIII",     decToRoman(883));
    assertEquals("LXXVIII", 	    decToRoman(78));
    assertEquals("MMMCLXXVII",      decToRoman(3177));
    assertEquals("DCCCXXXV", 	    decToRoman(835));

    endFunctionTest(); // end

    /////// Tests for romanDigit //////////////////////
    beginFunctionTest("Tests for romanDigit()"); // function name

    assertEquals("I",   romanDigit(1, "I", "V", "X"));
    assertEquals("X",   romanDigit(1, "X", "L", "C"));
    assertEquals("C",   romanDigit(1, "C", "D", "M"));
    assertEquals("II",  romanDigit(2, "I", "V", "X"));
    assertEquals("XX",  romanDigit(2, "X", "L", "C"));
    assertEquals("CC",  romanDigit(2, "C", "D", "M"));
    assertEquals("III", romanDigit(3, "I", "V", "X"));
    assertEquals("XXX", romanDigit(3, "X", "L", "C"));
    assertEquals("CCC", romanDigit(3, "C", "D", "M"));
    assertEquals("IV",  romanDigit(4, "I", "V", "X"));
    assertEquals("XL",  romanDigit(4, "X", "L", "C"));
    assertEquals("CD",  romanDigit(4, "C", "D", "M"));
    assertEquals("V",   romanDigit(5, "I", "V", "X"));
    assertEquals("L",   romanDigit(5, "X", "L", "C"));
    assertEquals("D",   romanDigit(5, "C", "D", "M"));
    assertEquals("VI",  romanDigit(6, "I", "V", "X"));
    assertEquals("LX",  romanDigit(6, "X", "L", "C"));
    assertEquals("DC",  romanDigit(6, "C", "D", "M"));
    assertEquals("VII", romanDigit(7, "I", "V", "X"));
    assertEquals("LXX", romanDigit(7, "X", "L", "C"));
    assertEquals("DCC", romanDigit(7, "C", "D", "M"));
    assertEquals("VIII",romanDigit(8, "I", "V", "X"));
    assertEquals("LXXX",romanDigit(8, "X", "L", "C"));
    assertEquals("DCCC",romanDigit(8, "C", "D", "M"));
    assertEquals("IX",  romanDigit(9, "I", "V", "X"));
    assertEquals("XC",  romanDigit(9, "X", "L", "C"));
    assertEquals("CM",  romanDigit(9, "C", "D", "M"));

    endFunctionTest(); // end


   ///////// End all test runs /////////////////////////
    endTests();

}


