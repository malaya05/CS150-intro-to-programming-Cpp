/**
    @file h27.cpp
    @author your name here
    @version what day and meeting time
*/
#include <string>
// Add additional headers here
using namespace std;

string STUDENT = "malaya";     // Add your name Blackboard/occ-email ID

#include "h27.h"
Bug::Bug(int initialPosition)
{
 position =  initialPosition;
isLeft = false;    
}

int Bug::getPosition() const
{
    
 return position;   
}
void Bug::turn()
{
isLeft = ! isLeft;    
}
void Bug::move()
{
 if(isLeft)
position--;
else
position++;    
}
