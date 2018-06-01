/**
    @file h21.h
    @author Stephen Gilbert
    @version Declarations for CS 150 Homework
*/
#ifndef H21_H_
#define H21_H_

/**
 * Returns a pointer to the largest element in a.
 * @param a pointer the first element in an array of doubles
 * @param size the number of elements in the array.
 * @return 0 (nullptr) if size is 0; pointer to largest element if not.
 */
const double * pMax(const double *ptr, size_t size);

#endif
