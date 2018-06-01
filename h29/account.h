#ifndef ACCOUNT_H       
#define ACCOUNT_H
class Account
{
  public:
Account(double =0);
double getBalance() const;
void deposit(double);
void withdraw(double);

private:
double balance;    
    
};
#endif
