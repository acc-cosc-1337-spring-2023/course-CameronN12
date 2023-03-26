//cpp
#include<vector>
#include "tic_tac_toe_data.h"
using namespace std;

   //string player;
   // vector<string> peg(9);

    Data::Data()
    {
        peg.reserve(9);
        clear();
    }

    
    void Data::clear()
    {
        fill(peg.begin(), peg.end(), " ");
    }

    vector<string>& Data::get_peg()
    {
        
        return peg;
    }

    void Data::set_peg(string value, int position)
    {
        peg[position-1] = value;
    }