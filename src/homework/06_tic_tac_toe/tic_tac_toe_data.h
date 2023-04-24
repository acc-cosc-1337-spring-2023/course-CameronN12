#include<stdlib.h>
#include<iostream>
#include<vector>
#include<memory>
#include "tic_tac_toe.h"
using namespace std;

#ifndef TICTACTOEDATA_H
#define TICTACTOEDATA_H

class TicTacToeData
{
    public:
        TicTacToeData();
        void save_games(const std::vector<std::unique_ptr<TicTacToe>>& games);
        vector<std::unique_ptr<TicTacToe>> get_games();
private:

};

#endif