/**
 *  @file main.cpp
 *  @author Stephen Gilbert
 *	@version CS 150 Homeork Testing
 */

#include <iostream>
#include <string>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

#include "cs150check.h"
#include "Account.h"
#include "h35.h"

/**
 * Run your program's tests
 */
void runTests()
{
    ///////////// Begin a set of tests
    beginTests(); // test heading

    /////// Tests for //////////////////////
    beginFunctionTest("Checking the Savings and Checking Classes.");

    struct x { string s; double d; virtual ~x(){}};
    int szX = sizeof(x);
    int szA = sizeof(Account);
    assertEqualsMsg("Checking size of Account class (Do not modify!!!)", szX, szA);

    int cSZ = sizeof(Checking);
    int sSZ = sizeof(Savings);

    assertEqualsMsg("No extra fields in checking?", szX, cSZ);
    assertEqualsMsg("No extra fields in savings?", szX, sSZ);

    Savings sObj("Sally Struthers", 12000.0);
    Checking cObj("Rob Reiner", 1875.0);

    Account& s = sObj;
    Account& c = cObj;
    // Check that toString() works
    assertEqualsMsg("Check toString in Savings.",
            "Savings Account owner: Sally Struthers, balance: $ 12000.00",
            s.toString());

    assertEqualsMsg("Check toString in Checking.",
            "Checking Account owner: Rob Reiner, balance: $ 1875.00",
            c.toString());

    assertEqualsMsg("Check base class toString in Savings.",
            "Account owner: Sally Struthers, balance: $ 12000.00",
            s.Account::toString());

    assertEqualsMsg("Check base class toString in Checking.",
            "Account owner: Rob Reiner, balance: $ 1875.00",
            c.Account::toString());

    // Apply 5 days of interest to each one
    for (int i = 0; i < 5; i++)
    {
        s.addDailyInterest();
        c.addDailyInterest();
    }

    assertEqualsMsg("Savings after 5 days.",
            "Savings Account owner: Sally Struthers, balance: $ 12004.08",
            s.toString());

    assertEqualsMsg("Checking after 5 days.",
            "Checking Account owner: Rob Reiner, balance: $ 1875.09",
            c.toString());

    // Apply 5 days of interest to each one
    for (int i = 0; i < 5; i++)
    {
        s.addDailyInterest();
        c.addDailyInterest();
    }

    assertEqualsMsg("Savings after 10 days.",
            "Savings Account owner: Sally Struthers, balance: $ 12008.17",
            s.toString());

    assertEqualsMsg("Checking after 10 days.",
            "Checking Account owner: Rob Reiner, balance: $ 1875.18",
            c.toString());

    // Apply 5 more days of interest to each one
    for (int i = 0; i < 5; i++)
    {
        s.addDailyInterest();
        c.addDailyInterest();
    }

    assertEqualsMsg("Savings after 15 days.",
            "Savings Account owner: Sally Struthers, balance: $ 12012.26",
            s.toString());

    assertEqualsMsg("Checking after 15 days.",
            "Checking Account owner: Rob Reiner, balance: $ 1875.27",
            c.toString());

    endFunctionTest(); // end

    endTests();
}

