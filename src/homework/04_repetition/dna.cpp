//add include statements
#include "dna.h"
using std::cout; using std::cin;

//add function(s) code here
int factorial (int num)
{
    long fact = 1;
    for(int i=1; i <= num; ++i)
    {
        fact *= i;
    }
    return fact;

}

int gcd (int num1, int num2)
{
    while(num1 != num2)
    {
        if (num2 > num1)
        {
            int temp = num2;
            num2 = num1;
            num1 = temp;
        }
        else if (num1 > num2)
        {
            num1 = num1 - num2;
        }
    }
    return num1;
}

int prompt_user(int option)
{
    int exit = 0;
    do
    {    
        auto choice = 'n';
            cout<<"Are you sure you want to exit? 'y' for yes, 'n' or no: ";
            cin>>choice;
            if (choice == 'y' || choice == 'Y')
            {
                cout<<"Goodbye!";
                return 1;
            }
            else if (choice == 'n' || choice == 'N')
                return 0;
            else
            {
                cout<<"Invalid option" << "\n";
                exit = 1;
            }
    }
    while (exit == 1);
}