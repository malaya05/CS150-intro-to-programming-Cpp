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

#include "h05.h"

/**
 * Run your program's tests
 * You may change this file, but you don't need to.
 * You will not hand in this file.
 */
void runTests()
{

	///////////// Begin a set of tests
	beginTests(); // test heading

    /////// Tests for everyNth //////////////////////
	beginFunctionTest("everyNth"); // function name

	try { assertEquals("Mrce", everyNth("Miracle", 2)); } catch(exception& e) { string msg = "CRASH:";msg += e.what(); failMsg(msg); }
    try { assertEquals("adg", everyNth("abcdefg", 3)); } catch(exception& e) { string msg = "CRASH:";msg += e.what(); failMsg(msg); }
	try { assertEquals("aceg", everyNth("abcdefg", 2)); } catch(exception& e) { string msg = "CRASH:";msg += e.what(); failMsg(msg); }
	try { assertEquals("Cca", everyNth("Chocolate", 3)); } catch(exception& e) { string msg = "CRASH:";msg += e.what(); failMsg(msg); }
	try { assertEquals("Ccas", everyNth("Chocolates", 3)); } catch(exception& e) { string msg = "CRASH:";msg += e.what(); failMsg(msg); }
	try { assertEquals("Coe", everyNth("Chocolates", 4)); } catch(exception& e) { string msg = "CRASH:";msg += e.what(); failMsg(msg); }
	try { assertEquals("C", everyNth("Chocolates", 100)); } catch(exception& e) { string msg = "CRASH:";msg += e.what(); failMsg(msg); }

    endFunctionTest(); // end

    /////// Tests for zipZap //////////////////////
    beginFunctionTest("zipZap");

    try { assertEquals("zpXzp", zipZap("zipXzap")); } catch(exception& e) { string msg = "CRASH:";msg += e.what(); failMsg(msg); }
    try { assertEquals("zpzp", zipZap("zopzop")); } catch(exception& e) { string msg = "CRASH:";msg += e.what(); failMsg(msg); }
    try { assertEquals("zzzpzp", zipZap("zzzopzop")); } catch(exception& e) { string msg = "CRASH:";msg += e.what(); failMsg(msg); }
    try { assertEquals("zibzp", zipZap("zibzap")); } catch(exception& e) { string msg = "CRASH:";msg += e.what(); failMsg(msg); }
    try { assertEquals("zp", zipZap("zip")); } catch(exception& e) { string msg = "CRASH:";msg += e.what(); failMsg(msg); }
    try { assertEquals("zi", zipZap("zi")); } catch(exception& e) { string msg = "CRASH:";msg += e.what(); failMsg(msg); }
    try { assertEquals("z", zipZap("z")); } catch(exception& e) { string msg = "CRASH:";msg += e.what(); failMsg(msg); }
    try { assertEquals("", zipZap("")); } catch(exception& e) { string msg = "CRASH:";msg += e.what(); failMsg(msg); }
    try { assertEquals("zp", zipZap("zzp")); } catch(exception& e) { string msg = "CRASH:";msg += e.what(); failMsg(msg); }
    try { assertEquals("abcppp", zipZap("abcppp")); } catch(exception& e) { string msg = "CRASH:";msg += e.what(); failMsg(msg); }
    try { assertEquals("azbcppp", zipZap("azbcppp")); } catch(exception& e) { string msg = "CRASH:";msg += e.what(); failMsg(msg); }
    try { assertEquals("azbcpzp", zipZap("azbcpzpp")); } catch(exception& e) { string msg = "CRASH:";msg += e.what(); failMsg(msg); }

    endFunctionTest();

    /////// Tests for countCode //////////////////////
    beginFunctionTest("countCode");

    try { assertEquals(1, countCode("aaacodebbb")); } catch(exception& e) { string msg = "CRASH:";msg += e.what(); failMsg(msg); }
    try { assertEquals(2, countCode("codexxcode")); } catch(exception& e) { string msg = "CRASH:";msg += e.what(); failMsg(msg); }
    try { assertEquals(2, countCode("cozexxcope")); } catch(exception& e) { string msg = "CRASH:";msg += e.what(); failMsg(msg); }
    try { assertEquals(1, countCode("cozfxxcope")); } catch(exception& e) { string msg = "CRASH:";msg += e.what(); failMsg(msg); }
    try { assertEquals(1, countCode("xxcozeyycop")); } catch(exception& e) { string msg = "CRASH:";msg += e.what(); failMsg(msg); }
    try { assertEquals(0, countCode("cozcop")); } catch(exception& e) { string msg = "CRASH:";msg += e.what(); failMsg(msg); }
    try { assertEquals(0, countCode("abcxyz")); } catch(exception& e) { string msg = "CRASH:";msg += e.what(); failMsg(msg); }
    try { assertEquals(1, countCode("code")); } catch(exception& e) { string msg = "CRASH:";msg += e.what(); failMsg(msg); }
    try { assertEquals(0, countCode("ode")); } catch(exception& e) { string msg = "CRASH:";msg += e.what(); failMsg(msg); }
    try { assertEquals(0, countCode("c")); } catch(exception& e) { string msg = "CRASH:";msg += e.what(); failMsg(msg); }
    try { assertEquals(0, countCode("")); } catch(exception& e) { string msg = "CRASH:";msg += e.what(); failMsg(msg); }
    try { assertEquals(3, countCode("AAcodeBBcoleCCccoreDD")); } catch(exception& e) { string msg = "CRASH:";msg += e.what(); failMsg(msg); }
    try { assertEquals(2, countCode("AAcodeBBcoleCCccorfDD")); } catch(exception& e) { string msg = "CRASH:";msg += e.what(); failMsg(msg); }
    try { assertEquals(3, countCode("coAcodeBcoleccoreDD")); } catch(exception& e) { string msg = "CRASH:";msg += e.what(); failMsg(msg); }

    endFunctionTest();

    /////// Tests for prefixAgain //////////////////////
    beginFunctionTest("prefixAgain");

    try { assertTrue(prefixAgain("abXYabc", 1)); } catch(exception& e) { string msg = "CRASH:";msg += e.what(); failMsg(msg); }
    try { assertTrue(prefixAgain("abXYabc", 2)); } catch(exception& e) { string msg = "CRASH:";msg += e.what(); failMsg(msg); }
    try { assertFalse(prefixAgain("abXYabc", 3)); } catch(exception& e) { string msg = "CRASH:";msg += e.what(); failMsg(msg); }
    try { assertTrue(prefixAgain("xyzxyxyxy", 2)); } catch(exception& e) { string msg = "CRASH:";msg += e.what(); failMsg(msg); }
    try { assertFalse(prefixAgain("xyzxyxyxy", 3)); } catch(exception& e) { string msg = "CRASH:";msg += e.what(); failMsg(msg); }
    try { assertTrue(prefixAgain("Hi12345Hi6789Hi10", 1)); } catch(exception& e) { string msg = "CRASH:";msg += e.what(); failMsg(msg); }
    try { assertTrue(prefixAgain("Hi12345Hi6789Hi10", 2)); } catch(exception& e) { string msg = "CRASH:";msg += e.what(); failMsg(msg); }
    try { assertTrue(prefixAgain("Hi12345Hi6789Hi10", 3)); } catch(exception& e) { string msg = "CRASH:";msg += e.what(); failMsg(msg); }
    try { assertFalse(prefixAgain("Hi12345Hi6789Hi10", 4)); } catch(exception& e) { string msg = "CRASH:";msg += e.what(); failMsg(msg); }
    try { assertFalse(prefixAgain("a", 1)); } catch(exception& e) { string msg = "CRASH:";msg += e.what(); failMsg(msg); }
    try { assertTrue(prefixAgain("aa", 1)); } catch(exception& e) { string msg = "CRASH:";msg += e.what(); failMsg(msg); }
    try { assertFalse(prefixAgain("ab", 1)); } catch(exception& e) { string msg = "CRASH:";msg += e.what(); failMsg(msg); }

    endFunctionTest();

    ///////// End all test runs /////////////////////////
    endTests();

}


