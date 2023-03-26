//cpp
#include "tic_tac_toe.h"
#include "tic_tac_toe_data.h"
#include<string>
#include<vector>
using namespace std;

TicTacToe::TicTacToe()
{
    clear_board();
    
};

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

void TicTacToe::display_board()
{
    int k = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            vector<string>& newpeg = board.get_peg();
            cout<< newpeg[k];
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
    if (get_player().compare("X"))
    {
        get_player() = 'O';
    }
    else
    {
        get_player() = 'X';
    }
}

bool TicTacToe::check_board_full()
{
    vector<string> peg = board.get_peg();
    for(int i = 0; i < 9; i++)
    {
        if(peg[i].compare(" "))
        {
            return false;
        }        
    }
    return true;
}

int prompt_user(int option)
{
    int exit = 0;
    do
    {    
        auto choice = 'n';
            cout<<"Want to play another game? 'y' for yes, 'n' or no: ";
            cin>>choice;
            if (choice == 'y' || choice == 'Y')
            {
                cout<<"Goodbye!";
                return 1;
            }
            else if (choice == 'n' || choice == 'N')
                return 0;
            else
            {
                cout<<"Invalid option" << "\n";
                exit = 1;
            }
    }
    while (exit == 1);
}