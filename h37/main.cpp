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

#include "h37.h"

/**
 * Run your program's tests
 */
// UNCOMMENT THIS LINE TO ENABLE TESTING
#define TESTING
void runTests()
{
#ifndef TESTING
    string response;
    cout << boolalpha;

    // Ask a few questions
    vector<Question *> questions;
    questions.push_back(new Question("Who was the inventor of C++?", "Bjarne Stroustrup"));

    ChoiceQuestion * q2 = new ChoiceQuestion("In which country was the inventor of C++ born?");
    q2->addChoice("Australia");
    q2->addChoice("Denmark", true);
    q2->addChoice("Korea");
    q2->addChoice("United States");

    // Can add a ChoiceQuestion pointer
    questions.push_back(q2);

#if 0
    // Change the above to #if 1 when you have completed the
    // MultiChoiceQuestion class
    MultiChoiceQuestion * q3 = new MultiChoiceQuestion(
            "Which are true about C++?");
    q3->addChoice("It's fun", true);
    q3->addChoice("It's hard");
    q3->addChoice("It's a higher-level language", true);
    q3->addChoice("No one uses it anymore");

    // Can add a MultiChoiceQuestion pointer
    questions.push_back(q3);

#endif

    cout << "Answer the following questions:" << endl;
    for (unsigned i = 0; i < questions.size(); i++)
    {
        cout << endl;
        questions[i]->display();
        questions[i]->checkAnswer();
    }
#endif

#ifdef TESTING

    srand(time(0));
    ///////////// Begin a set of tests
    beginTests(); // test heading

    /////// Tests for //////////////////////
    beginFunctionTest("Checking the MultiChoiceQuestion Class.");

    // Test 1
    SETUP("All answers are correct", true, true, true, true, true);

    q.display(); // call display on the object
    assertEqualsMsg("Checking MultiChoiceQuestion display",
            "All answers are correct\n1: Choice 1\n2: Choice 2\n3: Choice 3\n4: Choice 4\n5: Choice 5\n",
            result);

    INPUT("1 2 3 4 5");
    CHECK("You answered 5/5 questions correctly (100%)");
    CHECK("You wrongly answered 0/0 questions (0%)");
    CHECK("Your total weighted score for this question is 100%");
    CHECK("Correct answers [ 1 2 3 4 5 ]");

    INPUT("1 2 3 4 ");
    CHECK("You answered 4/5 questions correctly (80%)");
    CHECK("Your total weighted score for this question is 80%");

    INPUT("2 3 4 ");
    CHECK("You answered 3/5 questions correctly (60%)");
    CHECK("Your total weighted score for this question is 60%");

    INPUT("3 4 ");
    CHECK("You answered 2/5 questions correctly (40%)");
    CHECK("Your total weighted score for this question is 40%");

    INPUT("3 ");
    CHECK("You answered 1/5 questions correctly (20%)");
    CHECK("Your total weighted score for this question is 20%");

    INPUT("");
    CHECK("You answered 0/5 questions correctly (0%)");
    CHECK("Your total weighted score for this question is 0%");

    CLEANUP()


    SETUP("All answers are wrong", false, false, false, false, false);
    INPUT("");
    CHECK("You answered 0/0 questions correctly (100%)");
    CHECK("You wrongly answered 0/5 questions (0%)");
    CHECK("Your total weighted score for this question is 100%");
    CHECK("Correct answers [ ]");

    INPUT("1 2 3 4 5");
    CHECK("You wrongly answered 5/5 questions (100%)");
    CHECK("Your total weighted score for this question is -25%");

    INPUT("1 2 3 4 ");
    CHECK("You wrongly answered 4/5 questions (80%)");
    CHECK("Your total weighted score for this question is 0%");

    INPUT("2 3 4 ");
    CHECK("You wrongly answered 3/5 questions (60%)");
    CHECK("Your total weighted score for this question is 25%");

    INPUT("2 3 ");
    CHECK("You wrongly answered 2/5 questions (40%)");
    CHECK("Your total weighted score for this question is 50%");

    INPUT("3 ");
    CHECK("You wrongly answered 1/5 questions (20%)");
    CHECK("Your total weighted score for this question is 75%");

    CLEANUP()

    endFunctionTest(); // end

    endTests();

#endif

}

