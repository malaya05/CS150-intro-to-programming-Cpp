/**
    @file h16.h
    @author Stephen Gilbert
    @version Declarations for CS 150 Homework
*/
#ifndef H16_H_
#define H16_H_

#include <vector>
#include <string>
#include <iostream>
#include <sstream>

/**
    Merges two sorted vectors by interleaving their elements.
    The resulting vector is also in sorted order.
    If different sizes, elements from the longer vector
    appear at the end.

    @param a the first vector.
    @param b the second vector.
    @return the merged vector.
*/
std::vector<int> mergeSorted(const std::vector<int>& a,
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
        vector<int> va = mergeSorted(v1, v2); \
        const string msg = "mergeSorted(" + to_string(v1) + ", " + to_string(v2) + ")";\
        assertEqualsMsg(msg, to_string(ve), to_string(va)); }
#endif
