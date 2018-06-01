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
#include "h31.h"

/**
 * Run your program's tests
 */
void runTests()
{
    ///////////// Begin a set of tests
    beginTests(); // test heading

    /////// Tests for //////////////////////
    beginFunctionTest("Checking the find recursive function.");

    assertTrue(find("Mississipi", "ipi"));  // at end
    assertFalse(find("Mississipi", "ipx")); // not found
    assertTrue(find("Sommertown", "Som"));  // at beginning
    assertFalse(find("Sommertown", "Sommertowne")); // search too long
    assertTrue(find("Somewhere in the middle", "in"));
    assertTrue(find("Alice in Wonderland", "Alice"));  // at beginning
    assertFalse(find("Ordinal", "Ordinale")); // search too long
    assertTrue(find("Eenie meenie miney moe", "min"));

    endFunctionTest(); // end
    endTests();

}

