/**
 *  @author put your name here
 *  @version H08 - what section and day?
 *  @file main.cpp
 */

#include <iostream>
#include <string>
using namespace std;

#include "cs150check.h"

#include "h08.h"

/**
 * Let's test our program here
 */
void runTests()
{
	///////////// Begin a set of tests
	beginTests(); // test heading

    /////// Tests for toEnglishDollars() //////////////////////
	beginFunctionTest("toEnglishDollars()"); // function name
    
   assertEqualsMsg("toEnglishWrds(3.5)->","Three and 50/100", toEnglishWords(3.5));
    
     assertEqualsMsg("toEnglishWrds(10)->","Ten and zero/100", toEnglishWords(10));
    
      assertEqualsMsg("toEnglishWrds(100)->","One Hundred and zero/100",
                     toEnglishWords(100));
    
      assertEqualsMsg("toEnglishWrds(100.25)->","One Hundred and 25/100",
                     toEnglishWords(100.25));
    
      assertEqualsMsg("toEnglishWrds(1234)->","One Thousands Two Hundred Thirty Four and zero/100", toEnglishWords(1234));
    
     assertEqualsMsg("toEnglishWrds(1035.25)->","One Thousands Thirty Five and 25/100", toEnglishWords(1035.25));
    
    endFunctionTest();

    ///////// End all test runs /////////////////////////
    endTests();

}


