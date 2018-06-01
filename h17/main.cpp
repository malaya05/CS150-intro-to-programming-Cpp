/**
 *  @file main.cpp
 *  @author Stephen Gilbert
 *  @version CS 150 Homework Testing
 */
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <stdexcept>
using namespace std;

#include "cs150check.h"
#include "h17.h"

/**
 * Run your program's tests
 */
void runTests()
{
    ///////////// Begin a set of tests
    beginTests(); // test heading

    /////// Tests for //////////////////////
    beginFunctionTest("Checking the fileToWords() function.");

    // Open the main dictionary
    vector<string> dictionary = fileToWords("words.txt");
    size_t len = dictionary.size();
    assertEqualsMsg("Number of words in file.", 38617, len);

    if (len > 0)
    {
    	assertEqualsMsg("First word in file.", "aback", dictionary.at(0));
    	assertEqualsMsg("Last word in file.", "zoos", dictionary.at(dictionary.size() - 1));
    }
    else
    	failMsg("No words in the dictionary.", 2);

    // Open the list of excluded words
    vector<string> ignore = fileToWords("excluded.txt");
    len = ignore.size();
    assertEqualsMsg("Number of words in file.", 8, len);
    if (len > 0)
    {
    	assertEqualsMsg("First word in file.", "a", ignore.at(0));
    	assertEqualsMsg("Last word in file.", "the", ignore.at(ignore.size() - 1));
    }
    else
    	failMsg("No words in the ignored file.", 2);

    // Make sure that invalid files are not opened
    try {
        vector<string> dummy = fileToWords("non-existent.txt");
        failMsg("Should throw exception for invalid file name.");
    } catch (invalid_argument& e) {
        string msg = "Correctly throws exception: ";
        msg += e.what();
        passMsg(msg);
    }

    endFunctionTest(); // end

    /////// Tests for //////////////////////
    beginFunctionTest("Checking the spellCheck function; number found.");

    CHECK_NUM("some examples with only correct words", 0);
    CHECK_NUM("more words spelled entirely correctly", 0);
    CHECK_NUM("an exaple with twoo misspelled words", 2);
    CHECK_NUM("facebook speak r u l8 2 wrk", 6);

    // Let's check some case and punctuation
    CHECK_NUM("SEE cAsE does NOT MaTTer", 0);
    CHECK_NUM("!punctuation should not make, any difference?", 0);

    // Some words spelled correctly, but not handled correctly
    // Could use a UK dictionary, for instance, or add slang
    CHECK_NUM("Two words that are OK but coloured wrong", 2);
    // Or update the dictionary with acronyms
    CHECK_NUM("Which is better, iOs or Android?", 2);

    endFunctionTest(); // end

    beginFunctionTest("spellCheck function; Check words found.");

    CHECK_ALL("an exaple with twoo misspelled words", "exaple twoo");
    CHECK_ALL("facebook speak r u l8 2 wrk", "facebook r u l8 2 wrk");

    // Some words spelled correctly, but not handled correctly
    // Could use a UK dictionary, for instance, or add slang
    CHECK_ALL("Two words that are OK but coloured wrong", "ok coloured");
    // Or update the dictionary with acronyms
    CHECK_ALL("Which is better, iOs or Android?", "ios android");

    endFunctionTest(); // end

    beginFunctionTest("spellCheck function; Multiple misspellings.");

    CHECK_POS("zots frog zots ape zots", "{0, 9, 18}");
    CHECK_POS("frog frg frog frg frog", "{4, 13}");
    CHECK_POS("a I cadillax", "{3}");

    endFunctionTest();

    endTests();

}

