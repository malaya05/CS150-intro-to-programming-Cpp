/**
 *  @author Stephen Gilbert
 *  @file main.cpp
 *  @version CS 150 Homework 6 Testing
 */

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

#include "cs150check.h"

#include "int411.h"

/**
 * Run your program's tests
 */
void runTests()
{
	///////////// Begin a set of tests
	beginTests(); // test heading

	// For example, firstDigit(1729) is 1,
	// lastDigit(1729) is 9, and
	// numDigits(1729) is 4.
    /////// Tests for //////////////////////
	beginFunctionTest("Tests for numDigits"); // function name

	assertEquals(3, numDigits(-152));
	assertEquals(1, numDigits(0));
	assertEquals(1, numDigits(9));
	assertEquals(2, numDigits(17));
	assertEquals(3, numDigits(172));
	assertEquals(4, numDigits(1729));
	assertEquals(5, numDigits(17299));
	assertEquals(6, numDigits(172956));
	assertEquals(7, numDigits(1729832));
	assertEquals(8, numDigits(87298322));
	assertEquals(9, numDigits(121729832));


    endFunctionTest(); // end

    /////// Tests for //////////////////////
	beginFunctionTest("Tests for lastDigit"); // function name

	assertEquals(1, lastDigit(21721));
	assertEquals(2, lastDigit(121722));
	assertEquals(3, lastDigit(23));
	assertEquals(4, lastDigit(4));
	assertEquals(5, lastDigit(2331725));
	assertEquals(6, lastDigit(123451726));
	assertEquals(7, lastDigit(435237));
	assertEquals(8, lastDigit(10008));
	assertEquals(9, lastDigit(19));
	assertEquals(0, lastDigit(10000000));

    endFunctionTest(); // end

    /////// Tests for //////////////////////
	beginFunctionTest("Tests for firstDigit"); // function name

	assertEquals(1172, firstDigit(-11721));
	assertEquals(22172, firstDigit(221722));
	assertEquals(3, firstDigit(33));
	assertEquals(0, firstDigit(4));
	assertEquals(533172, firstDigit(5331725));
	assertEquals(62345172, firstDigit(623451726));
	assertEquals(73523, firstDigit(735237));
	assertEquals(8000, firstDigit(80008));
	assertEquals(9, firstDigit(99));

    endFunctionTest(); // end

   ///////// End all test runs /////////////////////////
    endTests();

}
