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
    if (check_column_win() )
    {
        board.set_winner(player);
        return true;
    }
    else if ( check_diagonal_win())
    {
        board.set_winner(player);
        return true;
    }
    else if (check_row_win())
    {
        board.set_winner(player);
        return true;
    }
    else if (check_board_full())
    {
        board.set_winner("C");
        return true;
    }
    set_next_player();
    return false;
}

void TicTacToe::start_game(string first_player)
{
    player = first_player;
  //  clear_board();
}

void TicTacToe::clear_board()
{
    board.clear();
}

string TicTacToe::get_player()
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
            cout << newpeg[k];
            k++;
        }
        cout << "\n";
    }
}

void TicTacToe::mark_board(int position)
{
    board.set_peg(player, position);
}

void TicTacToe::set_player(string value)
{
    player = value;
}

void TicTacToe::set_next_player()
{
    if (get_player() == "X" || get_player() == "x")
    {
        set_player("O");
    }
    else
    {
        set_player("X");
    }
}

bool TicTacToe::check_board_full()
{
    vector<string> peg = board.get_peg();
    for (int i = 0; i < 9; i++)
    {
        if (peg[i] == " ")
        {
            return false;
        }
    }
    return true;
}


    bool TicTacToe::check_column_win()
    {
    

        vector<string> peg = board.get_peg();

        if (peg[0] == player && peg[3] == player && peg[6] == player)
            return true;

        if (peg[1] == player && peg[4] == player && peg[7] == player)
            return true;
        
        if (peg[2] == player && peg[5] == player && peg[8] == player)
            return true;
        return false;
    }


    bool TicTacToe::check_diagonal_win()
    {


        vector<string> peg = board.get_peg();

        if (peg[0] == player && peg[4] == player && peg[8] == player)
            return true;

        if (peg[6] == player && peg[4] == player && peg[2] == player)
            return true;

        return false;
    }

    bool TicTacToe::check_row_win()
    {


        vector<string> peg = board.get_peg();

        if (peg[0] == player && peg[1] == player && peg[2] == player)
            return true;

        if (peg[3] == player && peg[4] == player && peg[5] == player)
            return true;

        if (peg[6] == player && peg[7] == player && peg[8] == player)
            return true;
        return false;
    }

string TicTacToe::get_winner()
{
    return board.get_winner();
}

int prompt_user(int option)
{
    int exit = 0;
    do
    {
        auto choice = 'n';
        cout << "Want to play another game? 'y' for yes, 'n' or no: ";
        cin >> choice;

        if (choice == 'n' || choice == 'N')
        {
            cout << "Goodbye!";
            return 1;
        }
        else if (choice == 'y' || choice == 'Y')
            return 0;
        else
        {
            cout << "Invalid option" << "\n";
            exit = 1;
        }
    } while (exit == 1);
}