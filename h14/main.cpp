/**
 *  @file main.cpp
 *  @author Stephen Gilbert
 *  @version CS 150 Homework Testing
 */
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <stdexcept>
#include <vector>
using namespace std;

#include "cs150check.h"
#include "h14.h"

/**
 * Run your program's tests
 */
void runTests()
{
    ///////////// Begin a set of tests
    beginTests(); // test heading

    /////// Tests for //////////////////////
    beginFunctionTest("Checking the readCountryInfo() function.");

    // Open the main dictionary
    vector<Country> countries = readCountryInfo("worldpop.txt");

    // Check some names
    assertEqualsMsg("Number of countries in file.", 238, countries.size());
    assertEqualsMsg("First name in file is Afghanistan.", "Afghanistan", countries.at(0).name);
    assertEqualsMsg("Second name in file is Akrotiri.", "Akrotiri", countries.at(1).name);
    assertEqualsMsg("Fifth name in file is American Samoa.", "American Samoa", countries.at(4).name);
    assertEqualsMsg("Ninth name in file is Antigua and Barbuda.", "Antigua and Barbuda", countries.at(8).name);
    assertEqualsMsg("Sixteenth name in file is Bahamas, The.", "Bahamas, The", countries.at(15).name);
    assertEqualsMsg("Last name in file is Zimbabwe.", "Zimbabwe",
            countries.at(countries.size()-1).name);

    // Check some populations
    unsigned len = countries.size();
    assertEqualsMsg("Population of Afghanistan.", 32738376, countries.at(0).population);
    assertEqualsMsg("Population of Zambia.", 11669534, countries.at(len - 2).population);
    assertEqualsMsg("Population of Yemen.", 23013376, countries.at(len - 3).population);
    assertEqualsMsg("Population of Western Sahara.", 393831, countries.at(len - 4).population);
    assertEqualsMsg("Population of Zibabwe.", 12382920, countries.at(len - 1).population);

    // Make sure that invalid files are not opened
    try {
        vector<Country> dummy = readCountryInfo("non-existent.txt");
        failMsg("Should throw exception for invalid file name.");
    } catch (invalid_argument& e) {
        string msg = "Correctly throws exception: ";
        msg += e.what();
        passMsg(msg);
    }

    endFunctionTest(); // end


    endTests();

}

