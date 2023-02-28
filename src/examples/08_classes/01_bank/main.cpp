#include<iostream>
#include<time.h>
#include "checking_account.h"

using std::cout;

int main()
{
	srand(time(NULL));
	
	CheckingAccount account;
	cout<<"Balance: "<<account.get_balance()<<"\n";

	CheckingAccount account1(100);
	cout<<"Balance: "<<account1.get_balance()<<"\n";

	return 0;
}