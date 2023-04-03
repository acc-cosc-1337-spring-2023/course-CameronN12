#include "atm_data.h"

using std::ofstream; using std::ifstream;

void ATMData::save_customers(std::vector<Customer>& customers)
{
    ofstream out;
    out.open(file_name);

    for(auto c: customers)
    {
        out<<c.get_account(0)->get_balance();//output checking balance
        out<<" ";
        out<<c.get_account(1)->get_balance();//output savings balance
        out<<"\n";
    }

    out.close();
}

std::vector<Customer>& ATMData::get_customers()
{
    auto checking_balance = 0;
    auto savings_balance = 0;

    ifstream in;
    in.open(file_name);

    if(in.is_open())
    {
        while(in>>checking_balance<<savings_balance)
        {
            customers.push_back(Customer(checking_balance, savings_balance));
        }

        in.close();
    }
    else
    {

    }

    return customers;
}