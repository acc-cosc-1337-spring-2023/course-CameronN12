//customer.cpp
#include "customer.h"

using std::make_unique;

Customer::Customer()
{
    accounts.push_back(make_unique<CheckingAccount>());
    accounts.push_back(make_unique<SavingsAccount>());
}

Customer(std::unique_ptr<Checking> c, std::unique_ptr<SavingsAccount> s)
{
    accounts.push_back(make_unique<CheckingAccount>(checking_balance));
    accounts.push_back(make_unique<SavingsAccount>(savings_balance));
}