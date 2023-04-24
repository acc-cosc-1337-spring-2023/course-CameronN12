#include<stdlib.h>
#include<iostream>
#include "tic_tac_toe.h"

#ifndef TIC_TAC_TOE_4_H
#define TIC_TAC_TOE_4_H
using namespace std;

class TicTacToe4 : public TicTacToe{
public:
    TicTacToe4();
    TicTacToe4(vector<string> p, string win);
private:
    bool check_column_win();
    bool check_diagonal_win();
    bool check_row_win();
};

#endif