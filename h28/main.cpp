/**
 *  @file main.cpp
 *  @author Stephen Gilbert
 *  @version CS 150 Test Programs
 */

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

#include "cs150check.h"
#include "h28.h"

/**
 * Run your program's tests
 */
void runTests()
{
	///////////// Begin a set of tests
	beginTests(); // test heading

    /////// Tests for //////////////////////
	beginFunctionTest("Test the Employee class"); // function name

	{ Employee emp("Fred", 2000.0);  } // don't remove this

	Employee emp;
	assertDoubleEqualsMsg("Default constructor initializes salary", 0.0, emp.getSalary(), 1E-10);

	Employee emp2("Harvey Weinstein", 1755235.25);
    assertDoubleEqualsMsg("Working constructor initializes salary", 1755235.25, emp2.getSalary(), 1E-10);
    assertEqualsMsg("Working constructor initializes name", "Harvey Weinstein", emp2.getName());

    emp2.setSalary(75932.63);
    assertDoubleEqualsMsg("Mutator setSalary() correcly sets salary", 75932.63, emp2.getSalary(), 1E-10);


	endFunctionTest(); // end


   ///////// End all test runs /////////////////////////
    endTests();

}


