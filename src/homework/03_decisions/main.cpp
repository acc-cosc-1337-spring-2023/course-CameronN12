//write include statements
#include "decisions.h"
using std::cout; using std::cin;

int main() 
{
    auto grade = 0;
    int option;

    cout << "\t" << "MAIN MENU" << "\n\n";
    cout << "1: Letter grade using if" <<"\n";
    cout << "2: Letter grade using switch" << "\n";
    cout << "3: Exit" << "\n\n";
    cout << "Pick your option: ";

    cin >> option;

if (option == 1)
{
	cout << "________________________________" << "\n";
    cout << "Enter grade: ";
    cin >> grade;
    auto result = get_letter_grade_using_if(grade);
    cout << "Letter grade: " << result << "\n";

}
else if (option == 2)
{
	cout << "________________________________" << "\n";
    cout << "Enter grade: ";
    cin >> grade;
    auto result = get_letter_grade_using_switch(grade);
    cout << "Letter grade: " << result << "\n";

}
else if (option == 3)
{
    cout << "Goodbye!";
}
else
{
	cout << "Invalid option";
}

}