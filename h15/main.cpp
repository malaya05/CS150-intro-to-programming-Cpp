/**
 *  @file main.cpp
 *  @author Stephen Gilbert
 *  @version CS 150 Homework Testing
 */
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "cs150check.h"
#include "h15.h"

/**
 * Run your program's tests
 */
void runTests()
{
    ///////////// Begin a set of tests
    beginTests(); // test heading

    /////// Tests for //////////////////////
    beginFunctionTest("Simple Merge"); // function name

    CHECK_MERGE(A({10, 10, 8}), A({7, 4, 1, 1, 8}), A({10, 7, 10, 4, 8, 1, 1, 8}));
    CHECK_MERGE(A({9, 6}), A({4, 5, 9, 10, 8, 6, 2, 10, 6}), A({9, 4, 6, 5, 9, 10, 8, 6, 2, 10, 6}));
    CHECK_MERGE(A({4, 2}), A({8, 9, 10, 5, 6, 6}), A({4, 8, 2, 9, 10, 5, 6, 6}));
    CHECK_MERGE(A({6, 6, 1}), A( {3, 5, 9, 4}), A({6, 3, 6, 5, 1, 9, 4}));
    CHECK_MERGE(A({9, 9, 6, 6}), A({9, 8, 8}), A({9, 9, 9, 8, 6, 8, 6}));
    CHECK_MERGE(A({1, 8, 4, 6, 6, 9, 5, 7}), A({2}), A({1, 2, 8, 4, 6, 6, 9, 5, 7}));
    CHECK_MERGE(A({8, 2, 4, 10, 7, 1, 6, 8}), A({7}), A({8, 7, 2, 4, 10, 7, 1, 6, 8}));
    CHECK_MERGE(A({3, 7, 6, 1, 9, 10}), A({2, 4, 4, 8, 1, 4, 3, 5}), A({3, 2, 7, 4, 6, 4, 1, 8, 9, 1, 10, 4, 3, 5}));
    CHECK_MERGE(A({9, 8, 4, 8, 7}), A({6, 5, 2, 4, 6, 4, 1, 8, 8}), A({9, 6, 8, 5, 4, 2, 8, 4, 7, 6, 4, 1, 8, 8}));
    CHECK_MERGE(A({4}), A({5, 4, 9, 7, 6, 10, 6}), A({4, 5, 4, 9, 7, 6, 10, 6}));

    endFunctionTest(); // end


   ///////// End all test runs /////////////////////////
    endTests();

}


