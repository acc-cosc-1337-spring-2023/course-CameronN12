//cpp
#include "tic_tac_toe.h"
#include "tic_tac_toe_data.h"

private:
    string player;
    Data board;

bool TicTacToe::game_over()
{
    return check_board_full();
}

void TicTacToe::start_game(string first_player)
{
     player = first_player;
     clear_board();
}

void TicTacToe::clear_board()
{
    board.clear();
}

string TicTacToe::get_player() const
{
    return player;
}

void TicTacToe::display_board() const
{
    int k = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<board.get_peg()[k];
            k++;
        }
    }
}

void TicTacToe::mark_board(int position)
{
    board.set_peg(player, position);
}

void TicTacToe::set_next_player()
{
    if player = 'X'
    {
        player = 'O';
    }
    else
    {
        player = 'X';
    }
}

bool TicTacToe::check_board_full()
{
    for(int i = 0; i < board.get_peg.size(); i++)
    {
        if(peg[i] == ' ')
        {
            return false;
        }        
    }
    return true;
}

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