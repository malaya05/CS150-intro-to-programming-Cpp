/**
 *  @file main.cpp
 *  @author Stephen Gilbert
 *  @version CS 150 Homework Testing
 */
#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <stdexcept>
#include <cstdlib>
#include <ctime>
using namespace std;

#include "cs150check.h"
#include "h18.h"

/**
 * Run your program's tests
 */
void runTests()
{
	srand(static_cast<unsigned>(time(0)));
    ///////////// Begin a set of tests
    beginTests(); // test heading

    /////// Tests for //////////////////////
    beginFunctionTest("Test the replaceIfGreater function");

    const double TOLERANCE = 1.0E-12; // small number
    const double PI = acos(-1.0);
    double number = PI;
    double limit = 5 + rand() / PI;
    double original = number;
    double actual = replaceIfGreater(&number, limit);

    assertDoubleEqualsMsg("Check returned value when replaced", original, actual, TOLERANCE);
    assertDoubleEqualsMsg("Check changed value when replaced", limit, number, TOLERANCE);

    original = number;
    actual = replaceIfGreater(&number, 1.0); // number will not be changed
    assertDoubleEqualsMsg("Check returned value when NOT replaced", original, actual, TOLERANCE);
    assertDoubleEqualsMsg("Check changed value when NOT replaced", original, number, TOLERANCE);


    endFunctionTest(); // end

   ///////// End all test runs /////////////////////////
    endTests();
}


