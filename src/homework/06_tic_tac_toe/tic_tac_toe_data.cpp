#include "tic_tac_toe_data.h"

//cpp
#include<vector>
using namespace std;

//string player;
// vector<string> peg(9);

Data::Data()
{
    peg.resize(9);
    clear();
}


void Data::clear()
{
    for (int i = 0; i < peg.size(); i++) {
        peg[i] = " ";
    }
}

vector<string>& Data::get_peg()
{

    return peg;
}

void Data::set_peg(string value, int position)
{
    peg[position - 1] = value;
}

void Data::set_winner(string value)
{
    winner = value;
}
 
string Data::get_winner()
{
    return winner;
}