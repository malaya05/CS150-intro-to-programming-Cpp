/**
    @file h35.cpp
    @author your name here
    @version what day and meeting time
*/
#include <string>
#include <stdexcept>
// Add additional headers here
using namespace std;

string STUDENT = "malaya";     // Add your name Blackboard/occ-email ID

#include "h35.h"
// Add your implementation here
Savings::Savings(const std::string& name, double bal)
:Account(name,bal)
{
    
    
}
void Savings::addDailyInterest()
{
 const double rate = 1.0/360 * .0245;    
deposit(getBalance()* rate);
}
string Savings::toString()const
{
    return "Savings " + Account::toString();
}

Checking::Checking(const std::string& name, double bal)
:Account(name,bal)
{
    
    
}
void Checking::addDailyInterest()
{
const double rate = 1.0 / 360 * 0.0075;
    if(getBalance() > 1000.0)
    deposit((getBalance()- 1000) * rate);
}
string Checking::toString()const
{
    return "Checking " + Account::toString();
}
