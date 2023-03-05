#include "func.h"
#include <string>
using namespace std;

int main() 
{
	int option = 0;
	int exit = 0;
	do
	{
		string num1;

		cout << "\t" << "MAIN MENU" << "\n\n";
		cout << "1: Get GC Content" <<"\n";
		cout << "2: Get DNA Complement" << "\n";
		cout << "3: Exit" << "\n\n";
		cout << "Pick your option: ";

		cin >> option;
		if (option == 1)
		{
			cout << "________________________________" << "\n";
			cout << "Enter DNA string: ";
			cin >> num1;
			auto result = get_gc_content(num1);
			cout << "\n" << "The GC content of " << num1 << " is: " << result << "%\n";
			cout << "________________________________" << "\n\n";
		}
		else if (option == 2)
		{
			cout << "________________________________" << "\n";
			cout << "Enter DNA String: ";
			cin >> num1;
			auto result = get_dna_complement(num1);
			cout << "\n" << "The DNA complement of " << num1 << " is: " << result << "\n";
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