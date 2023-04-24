#include <iostream>
#include <vector>
#include <string>
#include "tic_tac_toe.h" // assuming there is a TicTacToe class defined elsewhere
#include "tic_tac_toe_data.h"
#include "tic_tac_toe_manager.h"

Manager::Manager(TicTacToeData data)
{


}

Manager::~Manager()
{}

void Manager::save_game(std::vector<std::unique_ptr<TicTacToe>>& b) {
   // update_winner_count(b.get_winner()); 
    TicTacToeData data;
    data.save_games(b);
}

vector <unique_ptr<TicTacToe >> Manager::get_game(TicTacToeData data)
{
    return data.get_games();
}

std::ostream& operator<<(std::ostream& out, const Manager& manager) {
    out << "Number of games played: " << manager.games.size() << std::endl;
    out << "Number of X wins: " << manager.x_win << std::endl;
    out << "Number of O wins: " << manager.o_win << std::endl;
    out << "Number of ties: " << manager.ties << std::endl;
    return out;
}

void Manager::get_winner_total(int& o, int& x, int& t) {
    o = o_win;
    x = x_win;
    t = ties;
}

void Manager::scoreboard() {
    std::cout << "------------------------" << std::endl;
    std::cout << "| Player | Wins | Ties |" << std::endl;
    std::cout << "------------------------" << std::endl;
    std::cout << "| X      | " << x_win << "    |" << std::endl;
    std::cout << "| O      | " << o_win << "    |" << std::endl;
    std::cout << "| Ties   | " << ties << "    |" << std::endl;
    std::cout << "------------------------" << std::endl;
}

void Manager::update_winner_count(std::string winner) {
    if (winner == "X") {
        x_win++;
    }
    else if (winner == "O") {
        o_win++;
    }
    else {
        ties++;
    }
}