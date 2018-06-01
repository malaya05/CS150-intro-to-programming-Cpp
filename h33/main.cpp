/**
 *  @file main.cpp
 *  @author Stephen Gilbert
 *  @version CS 150 Homework Testing
 */

#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

#include "cs150check.h"
#include "h33.h"

/**
 * Run your program's tests
 */
void runTests()
{
    ///////////// Begin a set of tests
    beginTests(); // test heading

    /////// Tests for //////////////////////
    beginFunctionTest("Checking the subCount recursive function.");

    assertEquals(2, subCount("catcowcat", "cat"));
    assertEquals(1, subCount("catcowcat", "cow"));
    assertEquals(0, subCount("catcowcat", "dog"));
    assertEquals(2, subCount("cacatcowcat", "cat"));
    assertEquals(2, subCount("xyx", "x"));
    assertEquals(4, subCount("iiiijj", "i"));
    assertEquals(2, subCount("iiiijj", "ii"));
    assertEquals(1, subCount("iiiijj", "iii"));
    assertEquals(2, subCount("iiiijj", "j"));
    assertEquals(1, subCount("iiiijj", "jj"));
    assertEquals(4, subCount("aaabababab", "ab"));
    assertEquals(1, subCount("aaabababab", "aa"));
    assertEquals(6, subCount("aaabababab", "a"));
    assertEquals(4, subCount("aaabababab", "b"));

    endFunctionTest(); // end
    endTests();
}

