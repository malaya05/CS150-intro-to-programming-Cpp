/**
    @file h23.h
    @author Stephen Gilbert
    @version Declarations for CS 150 Homework
*/
#include "cs150check.h"

#ifndef H23_H_
#define H23_H_

/**
 * Copies all even numbers from a to b.
 *
 * @param a array of const int.
 * @param aSize size of array a.
 * @param[out] b array of int to be filled in with even numbers.
 * @param[int, out] bSize declared size of b on entry; returns number of elements copied.
 *
 * @pre bSize >= aSize
 * @post b filled with even numbers from a.
 *      bSize set to number of even values copied.
 *
 * @throw illegal_length exception if size of b < size of a
 *
 */
void copyEvens(const int a[], size_t aSize, int b[], size_t& bSize);



/// MACROS FOR CHECKING - PLEASE IGNORE THESE ///////////////////////////////////
#define ARRAY(...) __VA_ARGS__
#define CHECK_CE(A, E, N) { int b[1024] = {0}; const int a[] = A; int e[1024] = E;\
        const size_t aSize = sizeof(a) / sizeof(a[0]); size_t bSize = aSize;\
		string msg = "copyEvens({" + aToStr(a, aSize) + "})->"; \
        copyEvens(a, aSize, b, bSize);\
        msg += "{" + aToStr(b, bSize) + "}"; \
        assertArrayEqualsMsg(msg, e, b, bSize); \
        assertEqualsMsg("bSize is set to correct length.", N, bSize); }
#endif
