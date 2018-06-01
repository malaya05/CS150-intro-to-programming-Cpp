/**
    @file simpleio.h
    @author <your name>
    @date <the date goes here>
    @version Declarations for CS 150 Homework
*/
#ifndef SIMPLEIO_H
#define SIMPLEIO_H

// Add your prototypes here
#include <string>

std:: string getLine(const std::string& prompt = "");

int getInt(const std::string& prompt = "", const std::string& reprompt = "Invalid integer format. Try again: ");

double getReal(const std::string& prompt = "", const std::string& reprompt = "Invalid numeric format. Try again: ");

/////////// SOME STUFF TO TEST YOUR CODE -- IGNORE PLEASE ////////////////////////
#define CHECK_GETLINE_RESULT(S) { \
        ostringstream sout; \
        streambuf* oldOut = cout.rdbuf(); \
        cout.rdbuf(sout.rdbuf()); \
        istringstream sin(S); \
        streambuf* oldIn = cin.rdbuf(); \
        cin.rdbuf(sin.rdbuf()); \
        string s = getLine(); \
        cout.rdbuf(oldOut); \
        cin.rdbuf(oldIn); \
        string expected = S; \
        string actual = s; \
        assertEqualsMsg("Checking "#S" returned from getLine", expected, actual); \
        }

#define CHECK_GETLINE_PROMPT(P) { \
        ostringstream sout; \
        streambuf* oldOut = cout.rdbuf(); \
        cout.rdbuf(sout.rdbuf()); \
        istringstream sin; \
        streambuf* oldIn = cin.rdbuf(); \
        cin.rdbuf(sin.rdbuf()); \
        string s = getLine(P); \
        cout.rdbuf(oldOut); \
        cin.rdbuf(oldIn); \
        string prompt = P; \
        string expected = prompt; \
        if (prompt.length() > 0) if (prompt[prompt.length()-1] != ' ') expected = prompt + ' '; \
        string actual = sout.str(); \
        assertEqualsMsg("Checking getLine prompt "#P, expected, actual); \
        }

#define CHECK_GETINT(IN, OUT) { \
        ostringstream sout; \
        streambuf* oldOut = cout.rdbuf(); \
        cout.rdbuf(sout.rdbuf()); \
        istringstream sin(IN "\n -1"); \
        streambuf* oldIn = cin.rdbuf(); \
        cin.rdbuf(sin.rdbuf()); \
        int n = getInt(); \
        cout.rdbuf(oldOut); \
        cin.rdbuf(oldIn); \
        int expected = OUT; \
        int actual = n; \
        assertEqualsMsg("Calling getInt("#IN")->"#OUT, expected, actual); \
        }

#define CHECK_GETINT_PROMPT(P, IN, OUT) { \
        ostringstream sout; \
        streambuf* oldOut = cout.rdbuf(); \
        cout.rdbuf(sout.rdbuf()); \
        istringstream sin(IN); \
        streambuf* oldIn = cin.rdbuf(); \
        cin.rdbuf(sin.rdbuf()); \
        int n = getInt(P, IN); \
        cout.rdbuf(oldOut); \
        cin.rdbuf(oldIn); \
        string prompt = P; \
        string expected = prompt; \
        if (prompt.length() > 0) if (prompt[prompt.length()-1] != ' ') expected = prompt + ' '; \
        string actual = sout.str(); \
        assertEqualsMsg("Checking getInt prompt "#P, expected, actual); \
        assertEqualsMsg("Call getInt("#IN")->"#OUT, OUT, n); \
        }

#define CHECK_GETINT_REPROMPT(IN, IN2, RP, OUT) { \
        ostringstream sout; \
        streambuf* oldOut = cout.rdbuf(); \
        cout.rdbuf(sout.rdbuf()); \
        string input = IN " \n " IN2; \
        istringstream sin(input); \
        streambuf* oldIn = cin.rdbuf(); \
        cin.rdbuf(sin.rdbuf()); \
        int n = 0; string s = RP; if (s.length() == 0) n = getInt(input); \
        else n = getInt(input, s); \
        cout.rdbuf(oldOut); \
        cin.rdbuf(oldIn); \
        string prompt = RP; \
        string expected = prompt; \
        if (prompt.length() > 0) { if (prompt[prompt.length()-1] != ' ') expected = prompt + ' '; }\
        else expected = "Invalid integer format. Try again: "; \
        string actual = sout.str(); while (actual.find("\n") != string::npos) actual = actual.substr(actual.find("\n") + 1);\
        assertEqualsMsg("Checking getInt with initial input["#IN"].\n      -- Should reprompt with \"" + expected + "\"", expected, actual); \
        assertEqualsMsg("Retry with input["#IN2"]->"#OUT, OUT, n); \
        }

#define CHECK_GETREAL_REPROMPT(IN, IN2, RP, OUT) { \
        ostringstream sout; \
        streambuf* oldOut = cout.rdbuf(); \
        cout.rdbuf(sout.rdbuf()); \
        string input = IN " \n " IN2; \
        istringstream sin(input); \
        streambuf* oldIn = cin.rdbuf(); \
        cin.rdbuf(sin.rdbuf()); \
        double n; string s = RP; if (s.length() == 0) n = getReal(input); \
        else n = getReal(input, RP); \
        cout.rdbuf(oldOut); \
        cin.rdbuf(oldIn); \
        string prompt = RP; \
        string expected = prompt; \
        if (prompt.length() > 0) { if (prompt[prompt.length()-1] != ' ') expected = prompt + ' '; }\
        else expected = "Invalid numeric format. Try again: "; \
        string actual = sout.str(); while (actual.find("\n") != string::npos) actual = actual.substr(actual.find("\n") + 1);\
        assertEqualsMsg("Checking getReal("#IN").\n      -- Should reprompt with \"" + expected + "\"", expected, actual); \
        _assertEquals("Retry with input["#IN2"]->"#OUT, OUT, n, 1e-14); \
        }

#define CHECK_GETREAL(IN, OUT) { \
        ostringstream sout; \
        streambuf* oldOut = cout.rdbuf(); \
        cout.rdbuf(sout.rdbuf()); \
        istringstream sin(IN "\n -1"); \
        streambuf* oldIn = cin.rdbuf(); \
        cin.rdbuf(sin.rdbuf()); \
        double n = getReal(); \
        cout.rdbuf(oldOut); \
        cin.rdbuf(oldIn); \
        double expected = OUT; \
        double actual = n; \
        _assertEquals("Call getReal("#IN")->"#OUT, expected, actual, 1e-14); \
        }

#define CHECK_GETREAL_PROMPT(P, IN, OUT) { \
        ostringstream sout; \
        streambuf* oldOut = cout.rdbuf(); \
        cout.rdbuf(sout.rdbuf()); \
        istringstream sin(IN); \
        streambuf* oldIn = cin.rdbuf(); \
        cin.rdbuf(sin.rdbuf()); \
        double n = getReal(P, IN); \
        cout.rdbuf(oldOut); \
        cin.rdbuf(oldIn); \
        string prompt = P; \
        string expected = prompt; \
        if (prompt.length() > 0) if (prompt[prompt.length()-1] != ' ') expected = prompt + ' '; \
        string actual = sout.str(); \
        assertEqualsMsg("Checking getReal prompt "#P, expected, actual); \
        _assertEquals("Call getReal("#IN")->"#OUT, OUT, n, 1e-14); \
        }

#endif
