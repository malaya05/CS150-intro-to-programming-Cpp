/**
 *  @file main.cpp
 *  @author Stephen Gilbert
 *  @version CS 150 Homework Testing
 */

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

#include "cs150check.h"
#include "h20.h"


/**
 * Run your program's tests
 */
void runTests()
{
	///////////// Begin a set of tests
	beginTests(); // test heading

    /////// Tests for //////////////////////
	beginFunctionTest("alternatingSum"); // function name

	CHECK_ALT_SUM(ARRAY({564}), 564);
    CHECK_ALT_SUM(ARRAY({840, 269}), 571);
    CHECK_ALT_SUM(ARRAY({745, 290, 134}), 589);
    CHECK_ALT_SUM(ARRAY({653, 627, 502, 372}), 156);
    CHECK_ALT_SUM(ARRAY({53, 428, 800, 873, 59}), -389);
	CHECK_ALT_SUM(ARRAY({394, 870, 510, 519, 287, 388}), -586);
    CHECK_ALT_SUM(ARRAY({518, 267, 491, 721, 9, 179, 993}), 844);
    CHECK_ALT_SUM(ARRAY({311, 380, 953, 360, 603, 555, 220, 990}), -198);
    CHECK_ALT_SUM(ARRAY({622, 177, 562, 288, 3, 103, 444, 972, 626}), 717);
    CHECK_ALT_SUM(ARRAY({267, 729, 707, 292, 523, 301, 89, 600, 731, 707}), -312);
    CHECK_ALT_SUM(ARRAY({63, 598, 971, 489, 4, 834, 557, 819, 847, 778, 653}), -423);
    CHECK_ALT_SUM(ARRAY({947, 823, 611, 226, 847, 950, 882, 620, 875, 356, 215, 550}), 852);
    CHECK_ALT_SUM(ARRAY({369, 288, 846, 957, 694, 533, 257, 682, 807, 186, 688, 77, 483}), 1421);
    CHECK_ALT_SUM(ARRAY({17, 643, 914, 795, 117, 321, 329, 831, 518, 937, 808, 347, 55, 706}), -1822);

    endFunctionTest(); // end

   ///////// End all test runs /////////////////////////
    endTests();
}


