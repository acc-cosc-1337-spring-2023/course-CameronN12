//h
#include<stdlib.h>
#include<iostream>

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H
using namespace std;

class TicTacToe
{
public:
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string get_player() const;
    void display_board() const;
private:
    void set_next_player();
    bool check_board_full();
    void clear_board();
};

#endif