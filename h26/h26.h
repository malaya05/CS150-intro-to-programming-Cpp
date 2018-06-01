/**
    @file h26.h
    @author Stephen Gilbert
    @version Declarations for CS 150 Homework
*/
#ifndef H26_H_
#define H26_H_

/**
 *  Rotates a rectangular int array of SIZE clockwise
 *  to the right like this:
 *
 *     11  22  33                    77  44  11
 *     44  55  66       becomes      88  55  22
 *     77  88  99                    99  66  33
 *
 *  Note that your function must work with ANY value for SIZE.
 *  The example shown here is for 3.
 *  The testing code checks for arrays of several different sizes.
 */
#ifndef SIZE
#define SIZE 3
#endif

void rotateRight(int a[][SIZE]);


#endif
