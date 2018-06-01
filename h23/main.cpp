/**
 *  @file main.cpp
 *  @author Stephen Gilbert
 *  @version CS 150 Homework Testing
 */
#include <iostream>
#include <string>
#include <cmath>
#include <stdexcept>
using namespace std;

#include "cs150check.h"
#include "h23.h"

/**
 * Run your program's tests
 */
void runTests()
{
	///////////// Begin a set of tests
	beginTests(); // test heading

    /////// Tests for //////////////////////
	beginFunctionTest("copyEvens"); // function name

	// Macros to test this problem (just to save some code)
	// Calls copyEvens and checks return value against
	//               ACTUAL,			EXPECTED            bSize on Exit
	CHECK_CE(ARRAY({3, 2, 4, 5, 8}),	ARRAY({2, 4, 8}),       3);
	CHECK_CE(ARRAY({6, 1, 2, 4, 5, 8}), ARRAY({6, 2, 4, 8}),    4);
	CHECK_CE(ARRAY({3, 1, 4, 1, 5}),	ARRAY({4}),             1);
	CHECK_CE(ARRAY({2}),				ARRAY({2}),             1);
	CHECK_CE(ARRAY({6, 2, 4, 8}),		ARRAY({6, 2, 4, 8}),    4);
	CHECK_CE(ARRAY({7, 2, 4, 8}),		ARRAY({2, 4, 8}),       3);
	CHECK_CE(ARRAY({7, 2, 3, 8}),		ARRAY({2, 8}),          2);
	CHECK_CE(ARRAY({1, 8, 4}),			ARRAY({8, 4}),          2);
	CHECK_CE(ARRAY({1, 3, 9}),			ARRAY({}),              0);

    endFunctionTest(); // end

    beginFunctionTest("copyEvens Error Check");

    try {
        const int a[] = {2, 4, 6};
        int b[3];
        size_t bSize = 2;
        copyEvens(a, 3, b, bSize); // should throw
        assertTrueMsg(false, "Should throw a standard length_error exception");

    } catch (exception& e) {
        string msg = e.what();
        assertTrueMsg(true, "copyEvens throws an exception: " + msg);
    }


    endFunctionTest();

   ///////// End all test runs /////////////////////////
    endTests();

}


