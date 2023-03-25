//cpp
#include "tic_tac_toe_data.h"

   string player;
    vector<string> peg(9);

    Data::Data(){
    fill(peg.begin(), peg.end(), " ");
    }

    
    void Data::clear()
    {
        fill(peg.begin(), peg.end(), " ");
    }

    vector<string> Data::get_peg()
    {
        return peg;
    }

    void Data::set_peg(string value, int position)
    {
        peg[position] = value;
    }