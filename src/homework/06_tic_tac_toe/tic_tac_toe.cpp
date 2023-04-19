#include "tic_tac_toe.h"
#include "tic_tac_toe_data.h"
#include<iostream>
#include<string>
#include<vector>
#include <cmath>

using namespace std;

TicTacToe::TicTacToe()
{
    clear_board(9);

};

/*TicTacToe::TicTacToe(int size)
{
    clear_board(size*size);

};*/

void TicTacToe::clear_board(int s)
{
    board.clear(s);
}


bool TicTacToe::game_over()
{
    if (check_column_win())
    {
        board.set_winner(player);
        return true;
    }
    else if (check_diagonal_win())
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



string TicTacToe::get_player()
{
    return player;
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

std::istream& operator>>(std::istream& in, TicTacToe& game)
{
    int position = 0;
    cout << "Enter position: ";
    in >> position;
    game.mark_board(position);
    return in;
}

std::ostream& operator<<(std::ostream& out, const TicTacToe& game)
{
    //Data board;zz
    Data board = game.get_board();
    int size = sqrt(board.get_peg().size());
    int k = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            vector<string>& newpeg = board.get_peg();
            out << newpeg[k];
            k++;
        }
        out << "\n";
    }
    return out;
}

Data TicTacToe::get_board() const
{
    return board;
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
    return 0;
}