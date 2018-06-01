/**
 *  @file main.cpp
 *  @author Stephen Gilbert
 *  @version CS 150 Homework Grading
 */

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

#include "cs150check.h"
#include "h22.h"

/**
 * Run your program's tests
 */
void runTests()
{
    ///////////// Begin a set of tests
    beginTests(); // test heading

    /////// Tests for //////////////////////
    beginFunctionTest("sameSet"); // function name

    IS_SAME_SET(ARRAY({11}), ARRAY({11, 11, 11}));
    IS_SAME_SET(ARRAY({1, 4, 9, 16, 9, 7, 4, 9, 11}), ARRAY({11, 11, 7, 9, 16, 4, 1}));
    NOT_SAME_SET(ARRAY({1, 4, 1}), ARRAY({11, 11, 7, 9, 16, 4, 1}));
    NOT_SAME_SET(ARRAY({1, 1, 11}), ARRAY({11, 11, 7}));
    NOT_SAME_SET(ARRAY({1, 4, 9, 16}), ARRAY({9, 4, 1,}));
    IS_SAME_SET(ARRAY({11, 11}), ARRAY({11}));
    NOT_SAME_SET(ARRAY({1, 4, 9, 16}), ARRAY({9, 4, 1,}));
    IS_SAME_SET(ARRAY({11, 11, 550, 650}), ARRAY({11, 550, 550, 650, 550}));
    IS_SAME_SET(ARRAY({11, 11, 11, 11, 2}), ARRAY({2,2,2,11}));
    NOT_SAME_SET(ARRAY({1, 4, 9}), ARRAY({9, 4, 1,16}));


    endFunctionTest(); // end


   ///////// End all test runs /////////////////////////
    endTests();

}


