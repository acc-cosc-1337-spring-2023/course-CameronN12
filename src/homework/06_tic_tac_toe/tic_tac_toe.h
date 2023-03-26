//h
#include<stdlib.h>
#include<iostream>
#include "tic_tac_toe_data.h"

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H
using namespace std;

int prompt_user(int option);
class TicTacToe
{
public:
    TicTacToe();
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string get_player() const;
    void display_board();
    void clear_board();
private:
    void set_next_player();
    bool check_board_full();
    string player;
    Data board;
};

#endif