#ifndef H08_H_
#define H08_H_
/**
    @file h08.h
    @author your name goes here
    @version what section are you in?
*/
#include <string>

/**
@breif this function to transfer from number to English 
@param takes double as prameter, money value 
@return the English word for the number
*/
    std::string toEnglishWords(double money);
    /**
@breif this function to transfer three numbers to English 
@param takes int of three numbers, money value 
@return the English word for the numbers
*/
    
   std::string tripletToWords(int triple);
   
   
    /**
@breif this function to transfer cents numbers to English 
@param takes int of cents numbers, money value 
@return the English word for the cents
*/
   std::string centsToWords(int cents);
   /**
@breif this function to transfer singl number to English 
@param takes int of  number value 
@return the English word for the digit
*/
   std::string digitToWord(int digit);
   
  std::string tensToWord(int tens);
  
  
  std::string teensToWord(int teens);
  
  int triplet(double num, double cutoff);
const double ONES = 1.0;
const double THOUSANDS = 1E3;
const double MILLIONS = 1E6;
const double BILLIONS = 1E9;
const double TRILLIONS = 1E12;

#endif

