/**
 *  @file main.cpp
 *  @author Stephen Gilbert
 *  @version Test file for CS 150 Homework
 */

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <stdexcept>
using namespace std;

#include "cs150check.h"
#include "h29.h"

/**
 * Run your program's tests
 */
void runTests()
{
	///////////// Begin a set of tests
	beginTests(); // test heading

    /////// Tests for //////////////////////
	beginFunctionTest("Test the Bank class");

    // Test default constructor
    Bank b;
    double bal = b.getBalance();
    double sbal = b.getSavingsBalance();
    double cbal = b.getCheckingBalance();
    assertDoubleEqualsMsg("Default constructor; total balance.", 0.0, bal, 1e-14);
    assertDoubleEqualsMsg("Default constructor; savings balance.", 0.0, sbal, 1e-14);
    assertDoubleEqualsMsg("Default constructor; checking balance.", 0.0, cbal, 1e-14);

    // Test working constructor
    b = Bank(24.00, 36.00);
    bal = b.getBalance();
    sbal = b.getSavingsBalance();
    cbal = b.getCheckingBalance();
    assertDoubleEqualsMsg( "Working constructor; total balance.", 60.0, bal,1e-14);
    assertDoubleEqualsMsg("Working constructor; savings balance.", 36.0, sbal, 1e-14);
    assertDoubleEqualsMsg("Working constructor; checking balance.", 24.0, cbal, 1e-14);

    // Test deposit method
    b = Bank(24.00, 36.00);
    b.deposit(1000, "S");   // 1000 to savings
    b.deposit(2000, "C");   // 2000 to checking
    sbal = b.getSavingsBalance();
    cbal = b.getCheckingBalance();
    assertDoubleEqualsMsg("After deposit; savings balance.", 1036.0, sbal, 1e-14);
    assertDoubleEqualsMsg("After deposit; checking balance.", 2024.0, cbal, 1e-14);

    // Test withdrawal
    b = Bank(24.00, 36.00);
    b.deposit(1000, "S");
    b.deposit(2000, "C");
    b.withdraw(1500, "C");
    sbal = b.getSavingsBalance();
    cbal = b.getCheckingBalance();
    assertDoubleEqualsMsg("Testing withdrawal; savings balance.", 1036.0, sbal, 1e-14);
    assertDoubleEqualsMsg("Testing withdrawal; checking balance.", 524.0, cbal, 1e-14);

    // Test Transfer
    b = Bank(24.00, 36.00);
    b.deposit(1000, "S");
    b.deposit(2000, "C");
    b.transfer(200, "S");
    bal = b.getBalance();
    sbal = b.getSavingsBalance();
    cbal = b.getCheckingBalance();
    assertDoubleEqualsMsg("Testing transfer; savings balance.", 836.00, sbal, 1e-14);
    assertDoubleEqualsMsg("Testing transfer; checking balance.", 2224.0, cbal, 1e-14);
    assertDoubleEqualsMsg("Testing transfer; total balance.", 3060.0, bal, 1e-14);


    // Now, let's test some invalid calls.
    b = Bank(500.0, 200.0);
    try {
        b.deposit(300, "s"); // lowercase should fail
        failMsg("Should throw exception in deposit.");
    } catch (invalid_argument& e) {
        passMsg("Threw correct exception in deposit.");
    } catch (...) {
        failMsg("Threw INCORRECT exception in deposit.");
    }

	endFunctionTest(); // end


   ///////// End all test runs /////////////////////////
    endTests();
}


