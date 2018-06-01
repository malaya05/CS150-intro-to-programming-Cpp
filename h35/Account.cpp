/*
 * Account.cpp
 *  @author Stephen Gilbert.
 *  @version CS 150 Fall 2014
 */
#include <string>
#include <sstream>
#include <iomanip>
#include <stdexcept>
using namespace std;

#include "Account.h"


Account::Account(const string& name, double bal)
    : name(name), balance(bal)
{ /* no other code */ }

    /**
     * Deposit money into the account.
     * @param amt the amount to deposit.
     * @throw invalid_argument if amt is 0 or negative.
     */
void Account::deposit(double amt)
{
    if (amt <= 0)
        throw invalid_argument("Must deposit a positive amount.");
    balance += amt;
}

void Account::withdraw(double amt)
{
    if (amt <= 0)
        throw invalid_argument("Must withdraw a positive amount.");
    balance -= amt;
}

/**
 * Returns information about the account as a string.
 * "Owner: name, balance: $ 9345.25"
 */
string Account::toString() const
{
    ostringstream out;
    out << fixed << showpoint << setprecision(2);
    out << "Account owner: " << name << ", balance: $ " << balance;
    return out.str();
}

/**
 * Returns the balance of this account.
 * @return the balance of this account.
 */
double Account::getBalance() const
{
    return balance;
}


