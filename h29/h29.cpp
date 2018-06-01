/**
    @file h29.cpp
    @author your name here
    @version what day and meeting time
*/
#include <string>
#include <stdexcept>
// Add additional headers here
using namespace std;

string STUDENT = "malaya";     // Add your name Blackboard/occ-email ID

#include "h29.h"
// Add your implementation here
 Bank::Bank() {}
    Bank::Bank(double checkingBal, double savingBal)
     : checking(checkingBal), savings(savingBal) {}
void Bank::deposit(double amount, const string& accountType)
         {
          if(accountType =="S") savings.deposit(amount);
             else if(accountType == "C") checking.deposit(amount);
            else throw invalid_argument("accountType must be C or S not\"" +accountType+"\".");
         }
void Bank::withdraw(double amount, const string& accountType)
         {
    if(accountType =="S") savings.withdraw(amount);
    else if(accountType == "C") checking.withdraw(amount);
    else throw invalid_argument("accountType must be C or S not\"" +accountType+"\".");
         }   
         
         
         
         
void Bank::transfer(double amount, const string& accountType)
         {
             if(accountType =="S"){ savings.withdraw(amount); checking.deposit(amount);}
             else if(accountType == "C"){checking.withdraw(amount); savings.deposit(amount);}
                 else throw invalid_argument("accountType must be C or S not\"" +accountType+"\".");
         
         }
double Bank::getBalance() const { return getSavingsBalance() + getCheckingBalance() ;}
double Bank::getSavingsBalance()const {return savings.getBalance();}
double Bank::getCheckingBalance()const{ return checking.getBalance();}
