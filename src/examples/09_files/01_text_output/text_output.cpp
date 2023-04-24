#include "text_output.h"

using std::cout;        using std::string;
using std::ofstream;    using std::string;
using std::ifstream;
using std::getline;     

void output_to_file()
{
    cout<<"Create file object/variable\n";
    ofstream myfile;//represents a file

    cout<<"open file for writing\n";
    myfile.open("example.dat");//open in text mode

    cout<<"Write to file...\n";
    myfile<<"Write a line to file\n";
    myfile<<"Write another line to file\n";
    myfile<<"Write another line to file\n";

    cout<<"Close the file\n";
    myfile.close();
}

void read_from_file()
{
    string line;//represents a line from a file

    ifstream infile("example.dat");

    if(infile.is_open())
    {
        cout<<"Read from file\n";
        while(getline(infile, line))
        {
            cout<<line<<"\n";
        }
        cout<<"Close the file object\n";
        infile.close();
    }
    else
    {
        cout<<"Could not open the file...\n";
    }
}