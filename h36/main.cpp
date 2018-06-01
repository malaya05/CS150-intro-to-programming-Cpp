/**
 *  @file main.cpp
 *  @author Stephen Gilbert
 */

#include <iostream>
#include <string>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <typeinfo>
using namespace std;

#include "cs150check.h"

#include "h36.h"

/**
 * Run your program's tests
 */
void runTests()
{
    ///////////// Begin a set of tests
    beginTests(); // test heading

    /////// Tests for //////////////////////
    beginFunctionTest("Checking the SalariedWorker classes.");

    struct x { string n; double r; virtual ~x(){}};
    int xSz = sizeof(x); // makes testing easier
    int wSz = sizeof(Worker);
    int sSz = sizeof(SalariedWorker);
    assertEqualsMsg("Checking size of Worker", xSz, wSz);
    assertEqualsMsg("Checking for extra fields in SalariedWorker", wSz, sSz);

    Worker * p = new SalariedWorker("Sam", 19.50);
    assertEqualsMsg("Checking inherited getName() method.", "Sam", p->getName());
    assertDoubleEqualsMsg("Checking inherited getRate() method.", 19.50, p->getRate(), .001);

    // Now, let's test the virtual function
    assertEqualsMsg("Checking less than 40 hours.", "Sam(Salaried, $ 19.50) worked 20 hours. Pay: $ 780.00", p->payInfo(20));
    assertEqualsMsg("Checking more than 40 hours.", "Sam(Salaried, $ 19.50) worked 50 hours. Pay: $ 780.00", p->payInfo(50));
    assertEqualsMsg("Checking 40 hours.", "Sam(Salaried, $ 19.50) worked 40 hours. Pay: $ 780.00", p->payInfo(40));

    delete p;

    endFunctionTest(); // end

    /////// Tests for //////////////////////
    beginFunctionTest("Checking the HourlyWorker classes.");

    int hSz = sizeof(HourlyWorker);
    assertEqualsMsg("Checking for extra fields in HourlyWorker", wSz, hSz);

    p = new HourlyWorker("Sally", 18.50);
    assertEqualsMsg("Checking inherited getName() method.", "Sally", p->getName());
    assertDoubleEqualsMsg("Checking inherited getRate() method.", 18.50, p->getRate(), .001);

    // Now, let's test the virtual function
    assertEqualsMsg("Checking less than 40 hours.", "Sally(Hourly, $ 18.50) worked 20 hours. Pay: $ 370.00", p->payInfo(20));
    assertEqualsMsg("Checking more than 40 hours.", "Sally(Hourly, $ 18.50) worked 50 hours. Pay: $ 1017.50", p->payInfo(50));
    assertEqualsMsg("Checking 40 hours.", "Sally(Hourly, $ 18.50) worked 40 hours. Pay: $ 740.00", p->payInfo(40));

    delete p;

    endFunctionTest(); // end

    ///////////// Important ////////////////////////////////////////
    // If any of the lines below compile, then you have done the
    // assignment incorrectly. Make sure you check them.


    // When the following line is uncommented you should get one error (similar to)
    // error: cannot declare variable 'w' to be of abstract type 'Worker'
    // There may be other lines explaining why this happened, like this:
    //      note:   because the following virtual functions are pure within 'Worker':
    //      note:   virtual std::string Worker::payInfo(int) const

    // Worker w("Sam", 2.5);

    endTests();
}

// When the following class is uncommented you should get
// EXACTLY 2 errors:
//  error: 'double Worker::rate' is private
//  error: 'std::string Worker::name' is private
/*
class Example : public Worker {
public:
    string payInfo(int hours) const {
        // Illegal use of variables
        double pay = rate * hours;
        if (pay > 0)
            return name;
        return "Nothing";
    }
};
*/
