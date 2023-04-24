#include <fstream>
#include <memory>
#include <vector>
#include <iostream>
#include "tic_tac_toe_3.h" 
#include "tic_tac_toe_4.h" 
#include "tic_tac_toe_data.h"
#include <string>
using namespace std;

TicTacToeData::TicTacToeData()
{


}

void TicTacToeData::save_games(const std::vector<std::unique_ptr<TicTacToe>>& games) {
    string filename = "save_game.txt";
    std::ofstream outfile(filename);
    if (!outfile) {
        throw std::runtime_error("Unable to open file for writing.");
    }

    for (const auto& game : games) {
        const auto& board = game->get_board();
        for (const auto& ch : board) {
            outfile << ch;
        }
        outfile << game->get_winner() << std::endl;
    }
}

vector<unique_ptr<TicTacToe>> TicTacToeData::get_games() {
    vector<unique_ptr<TicTacToe>> games;
    string filename = "save_game.txt";
    ifstream infile(filename);
    if (!infile) {
        throw runtime_error("Unable to open file for reading.");
    }

    string line;
    while (std::getline(infile, line)) {
        vector<string> pegs;
        for (size_t i = 0; i < line.size() - 1 && i < 16; i++) { // read only first 9 or 16 characters
            pegs.push_back(string(1, line[i]));
        }

        string winner(1, line.back());

        unique_ptr<TicTacToe> board;
        if (pegs.size() == 9) {
            board = make_unique<TicTacToe3>(pegs, winner);
        }
        else if (pegs.size() == 16) {
            board = make_unique<TicTacToe4>(pegs, winner);
        }

        games.push_back(move(board));
    }

    infile.close();

    return games;
}