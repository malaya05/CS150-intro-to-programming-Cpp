/**
    @file h11.h
    @author Stephen Gilbert
    @version Declarations for CS 150 Homework
*/
#ifndef H11_H_
#define H11_H_

/**
 * Opens and searches in fileName for the searchPhrase
 * When found, prints the line number and line.
 * @param fileName name of the file.
 * @param searchPhrase phrase to search for.
 */
void searchFile(const string& fileName, const string& searchPhrase);


/////////// SOME STUFF TO TEST YOUR CODE -- IGNORE PLEASE ////////////////////////
#define CHECK(F, S, E) {\
        ostringstream sout; \
        streambuf* oldOut = cout.rdbuf(); \
        cout.rdbuf(sout.rdbuf()); \
        searchFile(F, S); \
        cout.rdbuf(oldOut); \
        string expected = E; replaceAll(expected, "\n", "\\n");\
        string actual = sout.str(); replaceAll(actual, "\n", "\\n");\
        assertEqualsMsg("Searching " #F " for " #S, expected, actual); \
        }
#define CHECKERR(F, S, E) {\
        ostringstream serr; \
        streambuf* oldErr = cerr.rdbuf(); \
        cerr.rdbuf(serr.rdbuf()); \
        searchFile(F, S); \
        cerr.rdbuf(oldErr); \
        string expected = E; replaceAll(expected, "\n", "\\n");\
        string actual = serr.str(); replaceAll(actual, "\n", "\\n");\
        assertEqualsMsg("Searching " #F " for " #S, expected, actual); \
        }
#endif
