/**
 *  @file main.cpp
 *  @author What's your name, huh?
 *  @date What day and section?
 */
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;

/////////// PUT YOUR BLACKBOARD ID HERE ////////////////////////
string STUDENT = "malaya";     // Add your name Blackboard/occ-email ID


#include "cs150check.h"

//// #include your header files here
#include "h26.hxx"	// size 3

//// SIZE of 5
#undef SIZE
#define SIZE 5
#include "h26.hxx"

/// SIZE of 6
#undef SIZE
#define SIZE 6
#include "h26.hxx"

/**
 * Run your program's tests
 */
void runTests()
{
	///////////// Begin a set of tests
	beginTests(); // test heading

    /////// Tests for //////////////////////
	beginFunctionTest("rotateRight - size of 5"); // function name

	// ARRAY UNDER TEST WITH SIZE = 5;
#undef SIZE
#define SIZE 5
{
	const int A[SIZE][SIZE] =
	{
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25}
	};

	int lr = SIZE - 1; // lower-right corner
	int a[SIZE][SIZE]; // array that is tested
	// Rotate once
	{
	    memcpy(a, A, (SIZE * SIZE * sizeof(int)));
        rotateRight(a);
        assertEqualsMsg("After 1 rotate; Check [0][0]", 21, a[0][0]);
        assertEqualsMsg("After 1 rotate; Check lower-right", 5, a[lr][lr]);
	}

    // Rotate twice
    {
        memcpy(a, A, (SIZE * SIZE * sizeof(int)));
        rotateRight(a);
        rotateRight(a);
        assertEqualsMsg("After 2 rotates; Check [0][0]", 25, a[0][0]);
        assertEqualsMsg("After 2 rotates; Check lower-right", 1, a[lr][lr]);
    }

    // Rotate thrice
    {
        memcpy(a, A, (SIZE * SIZE * sizeof(int)));
        rotateRight(a);
        rotateRight(a);
        rotateRight(a);
        assertEqualsMsg("After 3 rotates; Check [0][0]", 5, a[0][0]);
        assertEqualsMsg("After 3 rotates; Check lower-right", 21, a[lr][lr]);
    }

    // Rotate 5x - around to 1 again
    {
        memcpy(a, A, (SIZE * SIZE * sizeof(int)));
        rotateRight(a);
        rotateRight(a);
        rotateRight(a);
        rotateRight(a);
        rotateRight(a);
        assertEqualsMsg("After 5 rotates; Check [0][0]", 21, a[0][0]);
        assertEqualsMsg("After 5 rotates; Check lower-right", 5, a[lr][lr]);
    }
}
    endFunctionTest(); // end

    /////// Tests for //////////////////////
	beginFunctionTest("rotateRight - size of 3"); // function name

	// ARRAY UNDER TEST WITH SIZE = 3;
{
#undef SIZE
#define SIZE 3
	const int A[SIZE][SIZE] =
	{
        {1,2,3},
        {6,7,8},
        {11,12,13},
	};

	int lr = SIZE - 1; // lower-right corner
	int a[SIZE][SIZE]; // array that is tested
	// Rotate once
	{
	    memcpy(a, A, (SIZE * SIZE * sizeof(int)));
        rotateRight(a);
        assertEqualsMsg("After 1 rotate; Check [0][0]", 11, a[0][0]);
        assertEqualsMsg("After 1 rotate; Check lower-right", 3, a[lr][lr]);
	}

    // Rotate twice
    {
        memcpy(a, A, (SIZE * SIZE * sizeof(int)));
        rotateRight(a);
        rotateRight(a);
        assertEqualsMsg("After 2 rotates; Check [0][0]", 13, a[0][0]);
        assertEqualsMsg("After 2 rotates; Check lower-right", 1, a[lr][lr]);
    }

    // Rotate thrice
    {
        memcpy(a, A, (SIZE * SIZE * sizeof(int)));
        rotateRight(a);
        rotateRight(a);
        rotateRight(a);
        assertEqualsMsg("After 3 rotates; Check [0][0]", 3, a[0][0]);
        assertEqualsMsg("After 3 rotates; Check lower-right", 11, a[lr][lr]);
    }

    // Rotate 5x - around to 1 again
    {
        memcpy(a, A, (SIZE * SIZE * sizeof(int)));
        rotateRight(a);
        rotateRight(a);
        rotateRight(a);
        rotateRight(a);
        rotateRight(a);
        assertEqualsMsg("After 5 rotates; Check [0][0]", 11, a[0][0]);
        assertEqualsMsg("After 5 rotates; Check lower-right", 3, a[lr][lr]);
    }

    endFunctionTest(); // end
}
// ARRAY UNDER TEST WITH SIZE = 6;
beginFunctionTest("rotateRight - size of 6"); // function name
#undef SIZE
#define SIZE 6
{
	const int A[SIZE][SIZE] =
	{
		{1,2,3,4,5,6},
		{7,8,9,10,11,12},
		{13,14,15,16,17,18},
		{19,20,21,22,23,24},
		{25,26,27,28,29,30},
		{31,32,33,34,35,36},
	};

	int lr = SIZE - 1; // lower-right corner
	int a[SIZE][SIZE]; // array that is tested
	// Rotate once
	{
		memcpy(a, A, (SIZE * SIZE * sizeof(int)));
		rotateRight(a);
		assertEqualsMsg("After 1 rotate; Check [0][0]", 31, a[0][0]);
		assertEqualsMsg("After 1 rotate; Check lower-right", 6, a[lr][lr]);
	}

	// Rotate twice
	{
		memcpy(a, A, (SIZE * SIZE * sizeof(int)));
		rotateRight(a);
		rotateRight(a);
		assertEqualsMsg("After 2 rotates; Check [0][0]", 36, a[0][0]);
		assertEqualsMsg("After 2 rotates; Check lower-right", 1, a[lr][lr]);
	}

	// Rotate thrice
	{
		memcpy(a, A, (SIZE * SIZE * sizeof(int)));
		rotateRight(a);
		rotateRight(a);
		rotateRight(a);
		assertEqualsMsg("After 3 rotates; Check [0][0]", 6, a[0][0]);
		assertEqualsMsg("After 3 rotates; Check lower-right", 31, a[lr][lr]);
	}

	// Rotate 5x - around to 1 again
	{
		memcpy(a, A, (SIZE * SIZE * sizeof(int)));
		rotateRight(a);
		rotateRight(a);
		rotateRight(a);
		rotateRight(a);
		rotateRight(a);
		assertEqualsMsg("After 5 rotates; Check [0][0]", 31, a[0][0]);
		assertEqualsMsg("After 5 rotates; Check lower-right", 6, a[lr][lr]);
	}
}
	endFunctionTest(); // end


///////// End all test runs /////////////////////////
    endTests();

}


