#include<iostream>
#include "if.h"//to use is_even function here

using std::cout;
using std::cin;

int main() 
{
	auto hours = 0;
	cout<<"Enter hours: ";
	cin>>hours;

	auto overtime = get_is_over_time(hours);

	if(overtime == true)
	{
		cout<<"Qualify for overtime.\n";
	}
	else
	{
		cout<<"No overtime\n";
	}

	//create a bool variable named even
	//create an int variable named value
	auto value = 0;

	//prompt user for a keyboard number
	//assign the number to the value variable
	cout<<"Enter a number: ";
	cin>>value;

	//call the is_even function with value as its argument
	//and assign its return value to the even variable
	auto even = is_even(value);

	//display even if number is even
	if(even)
	{
		cout<<value<<" is even\n";
	}
	else
	{
		cout<<value<<" is odd\n";
	}

	return 0;
}
