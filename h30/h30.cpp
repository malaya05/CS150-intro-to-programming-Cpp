/**
    @file h30.cpp
    @author your name here
    @version what day and meeting time
*/
#include <string>
#include <memory>
#include <iostream>
// Add additional headers here
using namespace std;

string STUDENT = "malaya";     // Add your name Blackboard/occ-email ID

#include "h30.h"

unique_ptr<int[]> readData(istream& in, size_t& size)
{
	size = 0;
	size_t capacity = START_SIZE;
	unique_ptr<int[]> result(new int[capacity]);
    int n;
    // Add your code here! Do not change any other part of this function
    while(in >>n)
    {
     if(size>=capacity) 
     {
        capacity *=2;
         unique_ptr<int[]> temp(new int[capacity]);
         for(size_t i=0; i<size; i++)
             temp[i]= result[i];
         
            result.reset(temp.release());
         
     }         
          result[size]=n;
            size++;    
    }
    unique_ptr<int[]> temp(new int[capacity]);
         for(size_t i=0; i<size; i++)
             temp[i]= result[i];
         
            result.reset(temp.release());
	return result;
}

