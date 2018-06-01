/**
    @file h15.h
    @author Stephen Gilbert
    @version Declarations for CS 150 Homework
*/
#ifndef H15_H_
#define H15_H_
#include <string>
#include <vector>

/**
    Merges two vectors by interleaving their elements.
    If different sizes, elements from the longer vector
    appear at the end.

    @param a the first vector.
    @param b the second vector.
    @return the merged vector.
*/
std::vector<int> merge(const std::vector<int>& a,
                       const std::vector<int>& b);

//////////////////////// MACROS FOR TESTING - STUDENTS IGNORE ////////////////////
#include "cs150check.h"
#define A(...) __VA_ARGS__
#define CHECK_MERGE(A, B, E) {\
        int a[] = A; \
        int b[] = B; \
        int e[] = E; \
        vector<int> v1(a, a + sizeof(a)/sizeof(a[0])); \
        vector<int> v2(b, b + sizeof(b)/sizeof(b[0])); \
        vector<int> ve(e, e + sizeof(e)/sizeof(e[0])); \
        vector<int> va = merge(v1, v2); \
        const string msg = "merge(" + to_string(v1) + ", " + to_string(v2) + ")";\
        assertEqualsMsg(msg, to_string(ve), to_string(va)); }
#endif
