#include "arrays_mem.h"


int main() 
{
	//use_stack_array();
	//array_months();
	//arrays_and_pointers();

	const auto SIZE = 3;
	int numbers[]{1, 2, 3, -1};
	display_array(numbers);

	int numbers1[SIZE] {5, 8, 0};
	display_array(numbers1, SIZE);

	for(auto num: numbers)
	{
		std::cout<<num<<"\n";
	}

	return 0;

}