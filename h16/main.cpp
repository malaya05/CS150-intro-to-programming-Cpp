/**
 *  @file main.cpp
 *  @author Stephen Gilbert
 *  @version CS 150 Homework Testing
 */
#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

#include "cs150check.h"
#include "h16.h"

/**
 * Run your program's tests
 */
void runTests()
{
    ///////////// Begin a set of tests
    beginTests(); // test heading

    /////// Tests for //////////////////////
    beginFunctionTest("Sorted Merge"); // function name

    CHECK_MERGE(A({3, 9}), A({2}), A({2, 3, 9}));
    CHECK_MERGE(A({4, 7, 10}), A({1, 3, 8, 9, 13, 13}), A({1, 3, 4, 7, 8, 9, 10, 13, 13}));
    CHECK_MERGE(A({2, 2, 4, 9, 10}), A({3, 4, 13}), A({2, 2, 3, 4, 4, 9, 10, 13}));
    CHECK_MERGE(A({6}), A({6, 7, 8, 8, 14, 15}), A({6, 6, 7, 8, 8, 14, 15}));

    CHECK_MERGE(A({13}), A({1, 2, 4, 5, 6, 11}), A({1, 2, 4, 5, 6, 11, 13}));
    CHECK_MERGE(A({4, 5, 12}), A({9}), A({4, 5, 9, 12}));
    CHECK_MERGE(A({7}), A({5, 5, 7, 9, 10}), A({5, 5, 7, 7, 9, 10}));
    CHECK_MERGE(A({1, 13, 13, 15}), A({12}), A({1, 12, 13, 13, 15}));
    CHECK_MERGE(A({1, 2, 4, 7, 15}), A({3, 4, 14}), A({1, 2, 3, 4, 4, 7, 14, 15}));
    CHECK_MERGE(A({5, 6, 9}), A({1, 3}), A({1, 3, 5, 6, 9}));

    endFunctionTest(); // end


   ///////// End all test runs /////////////////////////
    endTests();

}


