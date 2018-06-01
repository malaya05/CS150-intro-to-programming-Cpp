/**
    @file h15.cpp
    @author your name here
    @version what day and meeting time
*/
#include <string>
#include <vector>
// Add additional headers here
using namespace std;

string STUDENT = "amiri1";     // Add your name Blackboard/occ-email ID

#include "h15.h"


vector<int> merge(const vector<int>& a,
                       const vector<int>& b){
                        vector<int> result;
                            
                        int aLen = a.size();
                            int bLen = b.size();
                           int i =0;
                           
 while(i < aLen && i < bLen) 
 {
  result.push_back(a.at(i));   
  result.push_back(b.at(i));   
i++;     
     }
if(i < aLen)
    for(; i < aLen;i++) result.push_back(a.at(i));
else if (i< bLen)
 for(; i < bLen;i++) result.push_back(b.at(i));


     return result;
                       }
