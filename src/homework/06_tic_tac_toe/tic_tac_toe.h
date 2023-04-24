//h
#include<stdlib.h>
#include<iostream>
#include<vector>

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H
using namespace std;

int prompt_user(int option);
class TicTacToe
{
public:
    TicTacToe();
    TicTacToe(vector<string> p, string win); //more code here toinitialize the pegs vector with p and initialize winner.
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string get_player();
    void clear_board(int s);
    void set_player(string value);
    void set_winner(string value);
    string get_winner();
    friend std::ostream& operator<<(std::ostream& out, const TicTacToe& board);
    friend std::istream& operator>>(std::istream& in, TicTacToe& game);
    vector<string> get_board() const;
protected:
    string player;
    //Data board;
    string winner;
    vector<string> peg;
    virtual bool check_column_win();
    virtual bool check_diagonal_win();
    virtual bool check_row_win();
private:
    void set_next_player();
    bool check_board_full();
    
};

#endif