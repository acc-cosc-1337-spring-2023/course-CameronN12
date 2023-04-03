#include<time.h>
#include<vector>
#include "atm.h"
#include "customer.h"
#include "atm_data.h"
#include <iostream>

using std::vector;

int main()
{
	srand(time(NULL));

	ATMData data;

	run_menu(data);
	
	return 0;
}