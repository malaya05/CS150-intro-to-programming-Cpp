/**
    @file h30.h
    @author Stephen Gilbert
    @version Declarations for CS 150 Homework
*/
#ifndef H30_H_
#define H30_H_

/**
   Reads numeric data from an input stream and returns a pointer to a
   heap array containing the data.
   @param in the stream to read from
   @param size reference parameter that has the size of the
   created array
   @return a unique_ptr to the heap array created
*/
#include <memory>
#include <iostream>
const int START_SIZE = 2; // Use this in your code for starting size!

std::unique_ptr<int[]> readData(std::istream& in, size_t& size);

#endif
