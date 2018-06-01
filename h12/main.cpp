/**
 *  @author Stephen Gilbert
 *  @version Tests for CS 150 homework
 *  @file main.cpp
 */
#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
using namespace std;

#include "cs150check.h"

#include "simpleio.h"

/**
 * Run your program's tests
 */
void runTests()
{

	//    ///////////// Begin a set of tests
    beginTests(); // test heading

    /////// Tests for getLine //////////////////////
    beginFunctionTest("getLine");

    cerr << endl << " 1. Make sure getLine returns the text you ask for" << endl;
    // 1. Make sure getLine returns the text you ask for
    CHECK_GETLINE_RESULT("This is a line of text");
    CHECK_GETLINE_RESULT("Another line of input");
    CHECK_GETLINE_RESULT("");

    cerr << endl << " 2. getLine prints the prompt correctly" << endl;
    // 2. Make sure getLine prints the prompt correctly
    CHECK_GETLINE_PROMPT("Enter a number:");	// prompt should have a space added
    CHECK_GETLINE_PROMPT("Enter a number: "); 	// prompt should print as is
    CHECK_GETLINE_PROMPT("");					// prompt should print as is

    endFunctionTest();

    /////// Tests for getInt //////////////////////
    beginFunctionTest("getInt");

    cerr << endl << " 3. Make sure getInt returns values correctly" << endl;
    CHECK_GETINT("123", 123);								// should return 123
    CHECK_GETINT("  256  ", 256);							// should return 256 (leading, trailing spaces OK)

    cerr << endl << " 4. Make sure getInt prints the prompt correctly and returns values" << endl;
    CHECK_GETINT_PROMPT("Enter a number:", " 125 ", 125); 		// should return 125, print space after prompt
    CHECK_GETINT_PROMPT("Enter a number:   ", " 215 ", 215); 	// should return 215, no spaces after prompt
    CHECK_GETINT_PROMPT("", " 115 ", 115); 						// should return 115, no spaces after prompt

    cerr << endl << " 5. Try different combinations of bad input." << endl;
    CHECK_GETINT_REPROMPT("25.25", "235\n", "", 235);		// User enters 25.25, should reprompt with "Invalid integer format. Try again: "
    CHECK_GETINT_REPROMPT("25 extra", "135\n", "", 135);	// User enters 25 extra, should reprompt with "Invalid integer format. Try again: "
    CHECK_GETINT_REPROMPT("one", "-752\n", "Bad int input. Try again: ", -752);	// User enters "one", should reprompt with "Bad int input. Try again: "

    endFunctionTest();

    /////// Tests for getReal //////////////////////
    beginFunctionTest("getReal");

    cerr << endl << " 6. Make sure getReal returns values correctly" << endl;
    CHECK_GETREAL("123.", 123.0);								// should return 123
    CHECK_GETREAL("  .256  ", .256);							// should return 256 (leading, trailing spaces OK)
    CHECK_GETREAL(" 1.0e-15  ", 1.0e-15);						// scientific notation ok
    CHECK_GETREAL("2.2534E5", 225340.0);						// scientific notation ok

    cerr << endl << " 7. Make sure getReal prints the prompt correctly and returns values" << endl;
    CHECK_GETREAL_PROMPT("Enter a real:", " 125.25 ", 125.25); 				// should return 125.25, print space after prompt
    CHECK_GETREAL_PROMPT("Enter a real number:   ", " 215.21E2 ", 21521.0); // should return 21521.0, no spaces after prompt
    CHECK_GETREAL_PROMPT("", "2e-3", .002); 								// should return .002, no spaces after prompt

    cerr << endl << " 8. Try different combinations of bad input." << endl;
    CHECK_GETREAL_REPROMPT("25.25 extra", "115.25\n", "", 115.25);		// User enters 25.25 extra, should reprompt with "Invalid numeric format. Try again: "
    CHECK_GETREAL_REPROMPT("0x175", "1.35\n", "", 1.35);				// User enters 0x175, should reprompt with "Invalid numeric format. Try again: "
    CHECK_GETREAL_REPROMPT("one", "-.752\n", "Bad real number. Try again: ", -.752);	// User enters "one", should reprompt with "Bad real number. Try again: "

    endFunctionTest();

    endTests();
}

