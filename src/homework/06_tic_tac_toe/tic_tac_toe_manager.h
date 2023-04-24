#include<stdlib.h>
#include<iostream>
#include<vector>
#include "tic_tac_toe.h"
#include "tic_tac_toe_data.h"
using namespace std;

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

class Manager
{
public:
    Manager(TicTacToeData game);
    ~Manager();
    void save_game(std::vector<std::unique_ptr<TicTacToe>>& b);
    vector <unique_ptr<TicTacToe >> get_game(TicTacToeData data);
    friend std::ostream& operator<<(std::ostream& out, const Manager& manager);
    void get_winner_total(int& o, int& x, int& t);
    void scoreboard();
private:
    vector <TicTacToe> games;
    int x_win = 0;
    int o_win = 0;
    int ties = 0;
    void update_winner_count(string winner);
    TicTacToeData game;
};

#endif