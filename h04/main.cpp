/**
 *  @author Stephen Gilbert
 *  @date CS 150 Spring 2015
 *  @file main.cpp
 */

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

#include "cs150check.h"

//// #include your header files here
#include "h04.h"

/**
 * Run your program's tests
 * You may add to these, but don't change the existing tests.
 * You do not need to turn in this file.
 */
void runTests()
{
	///////////// Begin a set of tests
	const double TOLERANCE = .0001;	// How close?
	beginTests(); // test heading

    /////// Tests for focalLength - change refractiveIndex //////////////////////
	beginFunctionTest("focalLength(d, r1, r2, n)->modify n (refractiveIndex)"); // function name

	// Let's change the refractive index
	assertDoubleEqualsMsg("RI = 1.6", 160.6425, focalLength(5, 50, 100, 1.6), TOLERANCE);
	assertDoubleEqualsMsg("RI = 1.2", 491.8032, focalLength(5, 50, 100, 1.2), TOLERANCE);
	assertDoubleEqualsMsg("RI = 1.8", 119.6808, focalLength(5, 50, 100, 1.8), TOLERANCE);
	assertDoubleEqualsMsg("RI = 2.878", 49.9863, focalLength(5, 50, 100, 2.878), TOLERANCE);

    endFunctionTest(); // end

    /////// Tests for focalLength - change thickness //////////////////////
	beginFunctionTest("focalLength(d, r1, r2, n)->modify d (thickness)"); // function name

	// Let's change the thickness (d)
	assertDoubleEqualsMsg("d = 2.5", 122.2826, focalLength(2.5, 50, 100, 1.8), TOLERANCE);
	assertDoubleEqualsMsg("d = 3.3", 121.4378, focalLength(3.3, 50, 100, 1.8), TOLERANCE);
	assertDoubleEqualsMsg("d = 4.5", 120.1923, focalLength(4.5, 50, 100, 1.8), TOLERANCE);
	assertDoubleEqualsMsg("d = 5.5", 119.1737, focalLength(5.5, 50, 100, 1.8), TOLERANCE);

    endFunctionTest(); // end

    /////// Tests for focalLength - change r1 //////////////////////
	beginFunctionTest("focalLength(d, r1, r2, n)->modify r1 (Radius 1)"); // function name

	// Let's change the first radius (r1)
	assertDoubleEqualsMsg("r1 = 35", 65.0826, focalLength(5, 35, 100, 1.8), TOLERANCE);
	assertDoubleEqualsMsg("r1 = 40", 80.3571, focalLength(5, 40, 100, 1.8), TOLERANCE);
	assertDoubleEqualsMsg("r1 = 45", 98.3009, focalLength(5, 45, 100, 1.8), TOLERANCE);
	assertDoubleEqualsMsg("r1 = 60", 177.6315, focalLength(5, 60, 100, 1.8), TOLERANCE);

    endFunctionTest(); // end

    /////// Tests for focalLength - change r2 //////////////////////
	beginFunctionTest("focalLength(d, r1, r2, n)->modify r2 (Radius 2)"); // function name

	// Let's change the second radius (r2)
	assertDoubleEqualsMsg("r2 = 75", 172.1938, focalLength(5, 50, 75, 1.8), TOLERANCE);
	assertDoubleEqualsMsg("r2 = 95", 125.7352, focalLength(5, 50, 95, 1.8), TOLERANCE);
	assertDoubleEqualsMsg("r2 = 110", 110.4910, focalLength(5, 50, 110, 1.8), TOLERANCE);
	assertDoubleEqualsMsg("r2 = 150", 91.7119, focalLength(5, 50, 150, 1.8), TOLERANCE);

    endFunctionTest(); // end

    ///////// End all test runs /////////////////////////
    endTests();

}

