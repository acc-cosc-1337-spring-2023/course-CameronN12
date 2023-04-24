//write include statements
#include "dna.h"

//write using statements
using std::cout; using std::cin;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	int option = 0;
	int exit = 0;
	do
	{
		auto num1 = 0;
		auto num2 = 0;

		cout << "\t" << "MAIN MENU" << "\n\n";
		cout << "1: Factorial" <<"\n";
		cout << "2: Greatest Common Divisor" << "\n";
		cout << "3: Exit" << "\n\n";
		cout << "Pick your option: ";

		cin >> option;
		if (option == 1)
		{
			cout << "________________________________" << "\n";
			cout << "Enter a number: ";
			cin >> num1;
			auto result = factorial(num1);
			cout << "\n" << "The factorial of " << num1 << " is: " << result << "\n";
			cout << "________________________________" << "\n\n";
		}
		else if (option == 2)
		{
			cout << "________________________________" << "\n";
			cout << "Enter the first number: ";
			cin >> num1;
			cout << "Enter the second number: ";
			cin >> num2;
			auto result = gcd(num1, num2);
			cout << "\n" << "The greatest common divisor of " << num1 << " and " << num2 << " is: " << result << "\n";
			cout << "________________________________" << "\n\n";
		}
		else if (option == 3)
		{
			exit = prompt_user(option);
		}
		else
		{
			cout << "Invalid option" << "\n";
		}
	}
	while(exit != 1);
	return 0;
}