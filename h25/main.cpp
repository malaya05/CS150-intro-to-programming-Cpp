/**
 *  @file main.cpp
 *  @author Stephen Gilbert
 */

#include <iostream>
#include <string>
using namespace std;

#include "cs150check.h"
#include "h25.h"

/**
 * Run your program's tests
 */
void runTests()
{
	///////////// Begin a set of tests
	beginTests(); // test heading

    /////// Tests for //////////////////////
	beginFunctionTest("Test your findStr function.");
    const size_t SZ = 1024;
	char s[SZ] = "Sote soma some something somantha solly sonny";

    if (findStr(s, "Sote") != nullptr)
        assertEqualsMsg("Find at beginning.", s, findStr(s, "Sote"));
    else
        failMsg("Returns nullptrptr when it shouldn't");

    if (findStr(s, "son") != nullptr)
        assertEqualsMsg("Find at end.", "sonny", findStr(s, "son"));
    else
        failMsg("Returns nullptr when it shouldn't");

    if (findStr(s, "") != nullptr)
        assertEqualsMsg("Find anything", s, findStr(s, ""));
    else
        failMsg("Returns nullptr when it shouldn't");

    if (findStr(s, "some") != nullptr)
        assertEqualsMsg("Find some", (s + 10), findStr(s, "some"));
    else
        failMsg("Returns nullptr when it shouldn't");

    if (findStr(s, "soman") != nullptr)
        assertEqualsMsg("Find soman", "somantha solly sonny", findStr(s, "soman"));
    else
        failMsg("Returns nullptr when it shouldn't");

    if (findStr(s, "som") != nullptr)
        assertEqualsMsg("Find som", (s + 5), findStr(s, "som"));
    else
        failMsg("Returns nullptr when it shouldn't");

    if (findStr(s, "something") != nullptr)
        assertEqualsMsg("Find something", "something somantha solly sonny", findStr(s, "something"));
    else
        failMsg("Returns nullptr when it shouldn't");

    if (findStr(s, "solly") != nullptr)
        assertEqualsMsg("Find solly", "solly sonny", findStr(s, "solly"));
    else
        failMsg("Returns nullptr when it shouldn't");

    if (findStr(s, "thing") != nullptr)
        assertEqualsMsg("Find thing", "thing somantha solly sonny", findStr(s, "thing"));
    else
        failMsg("Returns nullptr when it shouldn't");

    assertTrueMsg(findStr(s, "cs150") == nullptr, "Not found.");

    endFunctionTest(); // end
    ///////// End all test runs /////////////////////////
    endTests();
}

