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
using namespace std;

#include "cs150check.h"
#include "h21.h"

/**
 * Run your program's tests
 */
void runTests()
{
    ///////////// Begin a set of tests
    beginTests(); // test heading

    /////// Tests for //////////////////////
    beginFunctionTest("Test the pMax function");

    double AR[] = {0, 2.2, 3.5, -1.2, -2, 9, 17, 4, 3, 12, 175, 9, 15};
    const size_t SZ = sizeof(AR) / sizeof(AR[0]);

    const double * a = &AR[0];

    assertTrueMsg(pMax(a, 4) == &AR[2], "maximum of first 4 elements is 3.5");
    assertTrueMsg(pMax(a, 1) == a, "maximum of first 1 element is 0");
    assertTrueMsg(pMax(a, 0) == NULL, "maximum of first 0 elements is NULL");
    assertTrueMsg(pMax(a, 2) == &AR[1], "maximum of first 2 elements is 2.2");
    assertTrueMsg(pMax(a, 5) == &AR[2], "maximum of first 5 elements is 3.5");
    assertTrueMsg(pMax(a, 6) == &AR[5], "maximum of first 6 elements is 9");
    assertTrueMsg(pMax(a, 7) == &AR[6], "maximum of first 7 elements is 17");
    assertTrueMsg(pMax(a, 10) == &AR[6], "maximum of first 10 elements is 17");
    assertTrueMsg(pMax(a, 11) == &AR[10], "maximum of first 10 elements is 175");
    assertTrueMsg(pMax(a, SZ) == &AR[10], "maximum of all elements is 175");

    endFunctionTest(); // end

   ///////// End all test runs /////////////////////////
    endTests();
}


