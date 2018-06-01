/**
 *  @author Stephen Gilbert
 *  @date CS 150 Homework Check program
 *  @file main.cpp
 */

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <memory>
using namespace std;

#include "cs150check.h"
#include "debug_new.h"
#include "h30.h"

/**
 * Run your program's tests
 */
void runTests()
{
    new_output_fp = fopen("nul", "w");
    new_autocheck_flag = false;
    array_delete_after_new = true;
    delete_after_array_new = true;

    int leaks = 0;
    int system_leaks = 0;
    int corruption = 0;

    ///////////// Begin a set of tests
    beginTests(); // test heading

    /////// Tests for //////////////////////
    beginFunctionTest("Checking the read_data Function");

    system_leaks = check_leaks();

    size_t values = 0;
    {
        istringstream sin("12 15 17 18 19 5 75 3 -2 85 93 27 33 Q 15 25 33");

        unique_ptr<int[]>data(readData(sin, values));

        assertEqualsMsg("Correct number of values read.", 13, values);
        assertEqualsMsg("Checking first value. (-1 if NULL pointer)", 12, (data ? data[0] : -1));
        assertEqualsMsg("Checking last value. (-1 if NULL pointer)", 33, (data ? data[12] : -1));
        corruption = check_mem_corruption();
        assertEqualsMsg("Checking for corrupted memory", 0, corruption);
        if (values == 13) {
        	data[13] = 0xA3;
            corruption = check_mem_corruption();
           // assertEqualsMsg("Checking memory shrunk to correct size", 1, corruption);
        }
    }
    leaks = check_leaks() - system_leaks;
    assertEqualsMsg("Checking for memory leaks.", 0, leaks);

    {
        stringstream sin2("5 6 7 Q 3 4");
        values = 0;
        unique_ptr<int[]>data(readData(sin2, values));
        assertEqualsMsg("Correct number of values read.", 3, values);
        assertEqualsMsg("Checking first value. (-1 if NULL pointer)", 5, (data ? data[0] : -1));
        assertEqualsMsg("Checking last value. (-1 if NULL pointer)", 7, (data ? data[2] : -1));
        corruption = check_mem_corruption();
        assertEqualsMsg("Checking for corrupted memory", 0, corruption);
        if (values == 3) {
        	data[3] = 0xA3;
            corruption = check_mem_corruption();
           assertEqualsMsg("Checking memory shrunk to correct size", 0, corruption);
        }
    }
    leaks = check_leaks() - system_leaks;
    assertEqualsMsg("Checking for memory leaks.", 0, leaks);

    endFunctionTest(); // end

   ///////// End all test runs /////////////////////////
    endTests();

    fclose(new_output_fp);
    new_output_fp = stderr;

}


