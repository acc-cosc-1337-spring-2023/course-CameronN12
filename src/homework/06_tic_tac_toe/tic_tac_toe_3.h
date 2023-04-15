//h
#include<stdlib.h>
#include<iostream>
#include "tic_tac_toe.h"

#ifndef TIC_TAC_TOE_3_H
#define TIC_TAC_TOE_3_H
using namespace std;

class TicTacToe3:public TicTacToe
{
public:
    TicTacToe3();
private:
    bool check_column_win();
    bool check_diagonal_win();
    bool check_row_win();
};

#endif