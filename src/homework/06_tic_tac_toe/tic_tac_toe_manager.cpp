//cpp
#include "tic_tac_toe_manager.h"

void Manager::save_game(TicTacToe b)
{
    games.push_back(b);
    update_winner_count(b.get_winner());
}

std::ostream& operator<<(std::ostream& out, const Manager& manager)
{

    for (const auto& b : manager.games)
    {
        out << b << "\n";
    }
    return out;
}

void Manager::get_winner_total(int& o, int& x, int& t)
{
    o = o_win;
    x = x_win;
    t = ties;
}

void Manager::update_winner_count(string winner)
{
    if (winner == "X")
    {
        x_win++;
    }
    else if (winner == "O")
    {
        o_win++;
    }
    else
    {
        ties++;
    }
}

void Manager::scoreboard()
{
    cout << "SCOREBOARD" << "\n";
    cout << "O: " << o_win << "\n";
    cout << "X: " << x_win << "\n";
    cout << "Ties: " << ties << "\n";
}