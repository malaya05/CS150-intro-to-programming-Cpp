/**
    @file h20.h
    @author Stephen Gilbert
    @version Declarations for CS 150 Homework
*/
#ifndef H20_H_
#define H20_H_

/**
 *  Calculates an alternating sum of the elements in a.
 *  @param a an array of const int.
 *  @param size the number of elements in the array.
 *  @pre #size is > 0
 *  @return the alternating sum of {a, b, c, d} -> a - b + c - d
 *  Don't worry about overflow of the result.
 */
int alternatingSum(const int a[], size_t size);

/// MACROS FOR CHECKING - PLEASE IGNORE THESE ///////////////////////////////////
#define ARRAY(...) __VA_ARGS__
#define CHECK_ALT_SUM(A, E) {int a[] = A;  \
    assertEqualsMsg("For input of " #A, E, alternatingSum(a, sizeof(a) / sizeof(a[0]))); }

#endif
