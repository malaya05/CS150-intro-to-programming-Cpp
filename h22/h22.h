/**
    @file h22.h
    @author Stephen Gilbert
    @version Declarations for CS 150 Homework
*/

#ifndef H22_H_
#define H22_H_

/**
 * Checks if a and b have the same set of ints.
 *  - ignores multiplicity and order.
 *
 * @param a array of const int.
 * @param aEnd a pointer to past-the-end of a.
 * @param b array of const int.
 * @param bEnd pointer to past-the-end of b.
 *
 * @pre #aEnd and #bEnd are > a and b
 *
 * @return true if a and b have the "same set" as described above.
 * @examples:
 *      1  4  9  16  9  7  4  9  11 and 11  11  7  9  16  4  1 are same set
 *      3 1 1 11 and 3 11 11 7 are not the same set because b contains a 7
 *
 */
bool sameSet(const int *aBeg, const int *aEnd, 
             const int *bBeg, const int *bEnd);

/// MACROS FOR CHECKING - PLEASE IGNORE THESE ///////////////////////////////////
#define ARRAY(...) __VA_ARGS__
#define IS_SAME_SET(A, B) {const int a[] = A; const int b[] = B; \
    assertTrueMsg(sameSet(a, end(a), b, end(b)), \
        "For input of " #A ", " #B);}
#define NOT_SAME_SET(A, B) {const int a[] = A; const int b[] = B; \
    assertFalseMsg(sameSet(a, end(a), b, end(b)), \
        "For input of " #A ", " #B);}
#endif
