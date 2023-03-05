#include <iostream>
#include <string>
using namespace std;

//add function(s) prototype here
double get_gc_content(const string& dna)
{
   int gc = 0;
   int strlength = dna.length();
   for (int i = 0; i < strlength; i++)
   {
      if(dna[i]== 'C' || dna[i] == 'G')
      {
         gc++;
      }
   }
   double gc_value = (double)gc / strlength;
   return gc_value;
}
string reverse_string(string dna)
{
   int strlength = dna.length();
   string reversedna;
   for (int i = strlength - 1; i >= 0; i--)
   {
      reversedna.push_back(dna[i]);
   }
   return reversedna;
}
string get_dna_complement(string dna)
{
   string complement_dna;
   string reversedna = reverse_string(dna);
   int strlength = dna.length();
   for (int i = 0; i < strlength; i++)
   {
      if (reversedna[i] == 'A')
      {
         complement_dna.push_back('T');
      }
      else if (reversedna[i] == 'T')
      {
         complement_dna.push_back('A');
      }
      else if (reversedna[i] == 'C')
      {
         complement_dna.push_back('G');
      }
      else if (reversedna[i] == 'G')
      {
         complement_dna.push_back('C');
      }
   }
   return complement_dna;
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