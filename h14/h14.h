/**
    @file h14.h
    @author Stephen Gilbert
    @version Declarations for CS 150 Homework
*/
#ifndef H14_H_
#define H14_H_
#include <string>
#include <vector>

struct Country
{
    std::string name;
    long population;
};

/**
 *  Opens a file and returns a vector<Country> containing information
 *  about countries.
 *  @param filename contains the path needed to open the file.
 *  @return a vector<Country> of countries.
 *  @throw invalid_argument if file cannot be found
 */
std::vector<Country> readCountryInfo(const std::string& filename);

#endif
