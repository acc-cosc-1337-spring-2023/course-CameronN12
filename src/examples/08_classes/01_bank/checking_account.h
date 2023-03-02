//checking_account.h
#include<stdlib.h>
#include<iostream>

#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H

class CheckingAccount
{
friend void show_balance(CheckingAccount &account);
friend std::ostream& operator<<(std::ostream& out, const CheckingAccount &account);

public:
    CheckingAccount(){get_balance_from_db();}///default constructor
    CheckingAccount(int b) : balance(b){/*empty code block*/}
    int get_balance() const{return balance;}
    void deposit(int amount);
    void withdraw(int amount);
private:
    int balance{0}; //initialize to 0
    void get_balance_from_db();
};

#endif