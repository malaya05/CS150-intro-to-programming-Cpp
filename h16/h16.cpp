/**
    @file h16.cpp
    @author your name here
    @version what day and meeting time
*/
#include <string>
#include <vector>
// Add additional headers if desired
using namespace std;

string STUDENT = "htran511";     // Add your name Blackboard/occ-email ID

#include "h16.h"


vector<int> mergeSorted(const vector<int>& a, const vector<int>& b){
                           
   vector<int> result;                        
    int aLen = a.size();                       
    int bLen = b.size();
int aa =0;
    int bb =0;
while(aa < aLen && bb < bLen)
{
    if(a.at(aa) < b.at(bb))
    {
        result.push_back(a.at(aa));
        aa++;
    }
    else
    {
      result.push_back(b.at(bb));   
        bb++;
        }
    
}
if(aa < aLen) 
    for(;aa<aLen;aa++)  
result.push_back(a.at(aa));


if(bb < bLen) 
    for(;bb<bLen;bb++)  
result.push_back(b.at(bb));
    
    return result;                       
}                          
