/*
 *  h35.h
 *  @author your name here
 *  @version class day and time
 */

#ifndef H35_H_
#define H35_H_

#include "Account.h"
#include<string>
// Class definitions and constants
class Checking : public Account
{
    public:
Checking(const std::string& name, double bal);
void addDailyInterest();
std::string toString()const;    
};

class Savings : public Account
{
    public:
    Savings(const std::string& name, double bal);
    void addDailyInterest();
    std::string toString()const;
};

#endif
