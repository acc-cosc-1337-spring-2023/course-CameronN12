#include<iostream>
#include<time.h>
#include "checking_account.h"
#include "atm.h"

using std::cout;

int main()
{

	srand(time(NULL)); //generate true randoms on each main run execution
	
	CheckingAccount account;//cust 1
	cout<<account;
	cout<<account.get_balance()<<"\n";
	show_balance(account);//use the friend free function

	//run_menu(account);

	cout<<account.get_balance()<<"\n";

	return 0;
}