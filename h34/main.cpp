/**
 *  @file main.cpp
 *  @author Stephen Gilbert
 *  @version CS 150 Homework Testing
 */

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

#include "cs150check.h"

#include "Point.h"
#include "h34.h"


/**
 * Run your program's tests
 */
void runTests()
{
    srand(static_cast<unsigned>(time(0)));
    ///////////// Begin a set of tests
    beginTests(); // test heading

    /////// Tests for //////////////////////
    beginFunctionTest("Checking the Point Class.");

    const double TOLERANCE = 1e-3;
    Point p; // create a default Point object
    assertDoubleEqualsMsg("Default Point. x should be 0", 0.0, p.getX(), TOLERANCE);
    assertDoubleEqualsMsg("Default Point. y should be 0", 0.0, p.getY(), TOLERANCE);

    // Check the mutator method to see that it works
    p.move(1.5, 2.51);
    assertDoubleEqualsMsg("After move(1.5, 2.51), x should be 1.5", 1.5, p.getX(), TOLERANCE);
    assertDoubleEqualsMsg("After move(1.5, 2.51), y should be 2.51", 2.51, p.getY(), TOLERANCE);

    // Check the toString method to see that it works
    string actual = p.toString();
    assertEqualsMsg("Formatted to 2 decimals: Point(1.50, 2.51)", "Point(1.50, 2.51)", actual);
    actual = p.toString(0);
    assertEqualsMsg("Formatted to 0 decimals: Point(2, 3)", "Point(2, 3)", actual);
    actual = p.toString(4);
    assertEqualsMsg("Formatted to 4 decimals: Point(1.5000, 2.5100)", "Point(1.5000, 2.5100)", actual);

    endFunctionTest(); // end

    /////// Tests for //////////////////////
    beginFunctionTest("Checking the Circle Class.");

    class x1 { double a, b, c; virtual ~x1(){}}; // should be size of Circle
    int szExpectedCircle = sizeof(x1);
    int szActualCircle = sizeof(Circle);

    assertEqualsMsg("Circle should have 3 fields (including inherited fields).", szExpectedCircle, szActualCircle);

    ////// IMPORTANT - ALL FIELDS IN ALL CLASSES MUST BE PRIVATE
    ////// I WILL CHECK THIS ON EXAMS

    Circle c(20, 50, 60);;
    assertDoubleEqualsMsg("Circle x at 50: ", 50.0, c.getX(), TOLERANCE);
    assertDoubleEqualsMsg("Circle y at 60: ", 60.0, c.getY(), TOLERANCE);
    assertDoubleEqualsMsg("Circle radius at 20: ", 20.0, c.getRadius(), TOLERANCE);

    // Check inherited move method
    c.move(100, 75);
    assertDoubleEqualsMsg("Circle x at 150: ", 150.0, c.getX(), TOLERANCE);
    assertDoubleEqualsMsg("Circle y at 135: ", 135.0, c.getY(), TOLERANCE);

    // Check getArea and Circumference (TOLERANCE is 3 decimals)
    assertDoubleEqualsMsg("Circle area: ", 1256.637, c.getArea(), TOLERANCE);
    assertDoubleEqualsMsg("Circle circumference: ", 125.664, c.getCircumference(), TOLERANCE);

    // Check the toString method to see that it works
    actual = c.toString();
    assertEqualsMsg("toString(): Circle(radius=20.00, center=Point(150.00, 135.00))",
            "Circle(radius=20.00, center=Point(150.00, 135.00))", actual);
    actual = c.toString(0);
    assertEqualsMsg("toString(0): Circle(radius=20, center=Point(150, 135))",
            "Circle(radius=20, center=Point(150, 135))", actual);

    endFunctionTest(); // end

    /////// Tests for //////////////////////
    beginFunctionTest("Checking the Cylinder Class.");

    struct x2 { double a, b, c, d; virtual ~x2(){}}; // should be size of Cylinder
    int szExpectedCylinder = sizeof(x2);
    int szActualCylinder = sizeof(Cylinder);

    assertEqualsMsg("Cylinder should have 4 fields (including inherited fields).",
            szExpectedCylinder, szActualCylinder);

    ////// IMPORTANT - ALL FIELDS IN ALL CLASSES MUST BE PRIVATE
    ////// I WILL CHECK THIS WHEN I GRADE YOUR ASSIGNMENT

    Cylinder c1(15, 20, 50, 60);;
    assertDoubleEqualsMsg("Cylinder x at 50: ", 50.0, c1.getX(), TOLERANCE);
    assertDoubleEqualsMsg("Cylinder y at 60: ", 60.0, c1.getY(), TOLERANCE);
    assertDoubleEqualsMsg("Cylinder radius at 20: ", 20.0, c1.getRadius(), TOLERANCE);
    assertDoubleEqualsMsg("Cylinder height at 15: ", 15.0, c1.getHeight(), TOLERANCE);

    // Check inherited move method
    c1.move(100, 75);
    assertDoubleEqualsMsg("Cylinder x at 150: ", 150.0, c1.getX(), TOLERANCE);
    assertDoubleEqualsMsg("Cylinder y at 135: ", 135.0, c1.getY(), TOLERANCE);

    // Check getArea and Circumference (TOLERANCE is 3 decimals)
    assertDoubleEqualsMsg("Cylinder circumference: ", 125.664, c1.getCircumference(), TOLERANCE);
    assertDoubleEqualsMsg("Cylinder surface area: ", 4398.23, c1.getArea(), TOLERANCE);
    assertDoubleEqualsMsg("Cylinder volume: ", 18849.556, c1.getVolume(), TOLERANCE);

    // Check the toString method to see that it works
    actual = c1.toString();
    assertEqualsMsg("toString(): Cylinder(height=15.00, base=Circle(radius=20.00, center=Point(150.00, 135.00)))",
            "Cylinder(height=15.00, base=Circle(radius=20.00, center=Point(150.00, 135.00)))", actual);
    actual = c1.toString(0);
    assertEqualsMsg("toString(0): Cylinder(height=15, base=Circle(radius=20, center=Point(150, 135)))",
            "Cylinder(height=15, base=Circle(radius=20, center=Point(150, 135)))", actual);

    endFunctionTest(); // end

    endTests();
}


