/**
 *  @author Stephen Gilbert
 *  @date Homework tests
 *  @file main.cpp
 */

#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
using namespace std;

#include "cs150check.h"
#include "h11.h"

/**
 * Run your program's tests
 */
void runTests()
{
    ///////////// Begin a set of tests
    beginTests(); // test heading

    /////// Tests for //////////////////////
    beginFunctionTest("Checking the searchFile function.");

    CHECK("Mary.txt", "lamb", "    1 : Mary had a little lamb \n    4 : The lamb was sure to go! \n");
    CHECK("Mary.txt", "Jack", "");
    CHECK("Mary.txt", "to go", "    4 : The lamb was sure to go! \n");
    CHECK("Mary.txt", "fleece", "    2 : Whose fleece was white as snow. \n");
    CHECK("Mary.txt", "everywhere", "    3 : And everywhere that Mary went, \n");
    CHECK("JackJill.txt", "Jack", "    1 : Jack and Jill went up the hill,\n    3 : Jack fell down and broke his crown,\n    6 : Up Jack got and home he ran,\n");
    CHECK("JackJill.txt", "Jill", "    1 : Jack and Jill went up the hill,\n    4 : And Jill came tumbling after.\n");
    CHECK("JackJill.txt", "vinegar", "    9 : With vinegar and brown paper.\n");
    CHECKERR("Marty.txt", "lamb", "File Marty.txt cannot be opened.\n");

    endFunctionTest();
    endTests();
}

