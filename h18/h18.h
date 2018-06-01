/**
    @file h18.h
    @author Stephen Gilbert
    @version Declarations for CS 150 Homework
*/
#ifndef H18_H_
#define H18_H_

/**
 * Replaces the value pointed to by ptr, if limit is larger than that value.
 * @param ptr a pointer to a double value to examine.
 * @param limit the value to compare it to (and replace with).
 * @return the old indirect value of ptr.
 */
double replaceIfGreater(double *ptr, double limit);

#endif
