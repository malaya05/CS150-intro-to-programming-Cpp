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
#include "h32.h"

/**
 * Run your program's tests
 */
void runTests()
{
    ///////////// Begin a set of tests
    beginTests(); // test heading

    /////// Tests for //////////////////////
    beginFunctionTest("Checking the stringClean recursive function.");

    assertEquals("yza", stringClean("yyzzza"));
    assertEquals("abcd", stringClean("abbbcdd"));
    assertEquals("Helo", stringClean("Hello"));
    assertEquals("XabcY", stringClean("XXabcYY"));
    assertEquals("12ab45", stringClean("112ab445"));
    assertEquals("Helo Bokeper", stringClean("Hello Bookkeeper"));

    endFunctionTest(); // end
    endTests();

}

