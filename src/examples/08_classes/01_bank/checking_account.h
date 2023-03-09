//checking_account.h
#include<stdlib.h>
#include "bank_account.h"

#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H

class CheckingAccount: public BankAccount//inherit from BankAccount
{
public:
    CheckingAccount(){BankAccount::deposit(50);};//default constructor
    CheckingAccount(int b) : BankAccount(b){}
};

#endif