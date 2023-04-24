#include "ref_pointers.h"
#include<iostream>

using std::cout;

int main() 
{
	
	auto num = 5;
	int &num_ref = num;

	cout<<num_ref<<"\n";
	cout<<"Address num_ref references: "<<&num_ref<<"\n";
	cout<<"Address of num: "<<&num<<"\n";

	auto num1 = 10;
	num_ref = num1;

	cout<<num_ref<<"\n";
	cout<<"Address num_ref references: "<<&num_ref<<"\n";
	cout<<"Address of num: "<<&num<<"\n";
	cout<<"Address of num1: "<<&num1<<"\n";

	///Pointers
	int *num_ptr = &num;//create and assign address to point to
	cout<<"Address num_ptr points to: "<<num_ptr<<"\n";
	cout<<"Value of num: "<<num<<"\n";
	cout<<"Address of num: "<<&num<<"\n";

	*num_ptr = 10;//work with the value of the variable address num_pre points to
	cout<<"Value of num: "<<num<<"\n";

	num_ptr = &num1;//assign address to point to
	cout<<"Address of num1: "<<&num1<<"\n";
	cout<<"Address num_ptr points to: "<<num_ptr<<"\n";
	cout<<"Value at address that num_ptr points to: "<<*num_ptr<<"\n";

	return 0;
}