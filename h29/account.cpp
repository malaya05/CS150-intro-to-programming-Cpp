#include "account.h"

Account::Account(double amt)
{
    balance = amt;
}
double Account::getBalance() const
{
    return balance;
}

void Account::deposit(double amt)
{
    balance +=amt;
}
void Account::withdraw(double amt)
{
    if(balance >=amt)
    balance -= amt;
    else
        balance -=5;
}
