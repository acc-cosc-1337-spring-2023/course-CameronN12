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
    string get_player();
    void clear_board();
    void set_player(string value);
    string get_winner();
    friend std::ostream& operator<<(std::ostream& out, const TicTacToe& board);
    friend std::istream& operator>>(std::istream& in, TicTacToe& game);
    Data get_board() const;
  private:
    void set_next_player();
    bool check_board_full();
    bool check_column_win();
    bool check_diagonal_win();
    bool check_row_win();
    string player;
    Data board;
};

#endif