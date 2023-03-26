//h
#include<stdlib.h>
#include<iostream>
#include<vector>
using namespace std;

#ifndef TIC_TAC_TOE_DATA_H
#define TIC_TAC_TOE_DATA_H

class Data
{
public:
    Data();
    void clear();
    vector<string> get_peg();
    void set_peg(string value, int position);
private:
    string player;
    vector<string> peg[9];
};

#endif