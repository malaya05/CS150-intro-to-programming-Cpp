/*
 *  Account.h
 *  @author Stephen Gilbert.
 *  @version CS 150 Fall 2014
 */

#ifndef ACCOUNT_H_
#define ACCOUNT_H_

class Account
{
public:
    /**
     * Construct an account with a name and initial balance.
     * @param name of the owner.
     * @param bal initial balance.
     */
    Account(const std::string& name, double bal);

    /**
     * Deposit money into the account.
     * @param amt the amount to deposit.
     * @throw invalid_argument if amt is 0 or negative.
     */
    void deposit(double amt);

    /**
     * Withdraw money from the account.
     * @param amt the amount to deposit.
     * @throw invalid_argument if amt is 0 or negative.
     */
    void withdraw(double amt);

    /**
     * Returns the balance of this account.
     * @return the balance of this account.
     */
    double getBalance() const;

    /**
     * Returns information about the account as a string.
     * "Owner: name, balance: $ 9345.25"
     */
    virtual std::string toString() const;

    /**
     * Adds the daily interest to the account.
     */
    virtual void addDailyInterest() = 0;

    /**
        Virtual inline destructor.
    */
    virtual ~Account(){}
private:
    std::string name;
    double balance;
};

#endif /* ACCOUNT_H_ */
