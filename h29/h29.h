/**
    @file h29.h
    @author (Your name goes here)
    @version (Put the date here)
*/
#ifndef H29_H_
#define H29_H_

#include <string>
// REMEMBER TO INCLUDE THIS IN YOUR PROJECT
// WE CREATED THESE FILES IN CLASS
#include "account.h"

//////////// Add the declarations for the Bank class here //////
class Bank {
    public:
    Bank();
    Bank(double checkingBal, double savingBal);
void deposit(double amount, const string& accountType);
void withdraw(double amount, const string& accountType);
void transfer(double amount, const string& accountType);
double getBalance() const;
double getSavingsBalance()const;
double getCheckingBalance()const;
    /////// FILL IN THIS PART YOURSELF

private:
    // DO NOT ADD ANY OTHER data members
    Account checking, savings;
};

#endif
