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
#include "h27.h"

/**
 * Run your program's tests
 */
void runTests()
{
	///////////// Begin a set of tests
	beginTests(); // test heading

    /////// Tests for //////////////////////
	beginFunctionTest("Testing Bugs"); // function name

#ifdef BUG_DONE

	// Test the constructor
	Bug sam(2), julie(12), fred(-10);
	assertEqualsMsg("Constructing sam at position 2", 2, sam.getPosition());
	assertEqualsMsg("Constructing julie at position 12", 12, julie.getPosition());
	assertEqualsMsg("Constructing fred at position -10",-10, fred.getPosition());

	// Test the move() method
	int pos = sam.getPosition();
	sam.move();
	assertEqualsMsg("Moving sam one to the right.", pos + 1, sam.getPosition());
	sam.move();
	assertEqualsMsg("Moving sam one more to the right.", pos + 2, sam.getPosition());

	// Test that turn works
	fred.turn();
	pos = fred.getPosition();
	fred.move();
	assertEqualsMsg("Moving fred one to the left.", pos - 1, fred.getPosition());
	fred.move();
	assertEqualsMsg("Moving fred one more to the left.", pos - 2, fred.getPosition());
	fred.turn();
	fred.move();
	fred.move();
	assertEqualsMsg("Moving fred back two places to the right.", pos, fred.getPosition());


#else
    cerr << "Define the Bug class and un-comment #define BUG_DONE in h28.h\n";
#endif

	endFunctionTest(); // end


   ///////// End all test runs /////////////////////////
    endTests();

}


