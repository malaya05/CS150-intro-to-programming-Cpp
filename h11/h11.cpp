/**
    @file h11.cpp
    @author your name here
    @version what day and meeting time
*/
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
// Add additional headers here
using namespace std;

string STUDENT = "malaya";     // Add your name Blackboard/occ-email ID

#include "h11.h"
// Define your function here
void searchFile(const string& fileName, const string& searchPhrase)
{
 ifstream in(fileName);   
    if(in.fail())
    {
        cerr << "File " + fileName + " cannot be opened."<< endl;
    }
    else {
        string line;
        int count=0;
    while(getline(in, line))
    {
        count++; 
        if(line.find(searchPhrase)!= std::string::npos)
              
      
      cout << setw(5) << count << " : " << line << endl;  
     
    }
}
    
    
    
}
//~ [    1 : Mary had a little lamb \n    4 : The lamb was sure to go! \n]
//~ [    1 : Mary had a little lamb \n    4 : The lamb was sure to go! \n]




