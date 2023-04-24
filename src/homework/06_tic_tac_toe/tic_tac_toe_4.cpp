#include "tic_tac_toe_4.h"
//#include "tic_tac_toe.h"
#include "tic_tac_toe_data.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;

//constructor
TicTacToe4::TicTacToe4():TicTacToe()
{
    clear_board(16);
}

TicTacToe4::TicTacToe4(vector<string> p, string win) :TicTacToe()
{
    clear_board(16);
};
/*
class function check_column_win
Win by column if and return true if (each column index)
0, 1,  2,  3
4, 5,  6,  7
8, 9, 10, 11
12,13,14, 15
else
false
*/
bool TicTacToe4::check_column_win()
{


 ///   vector<string> peg = board.get_peg();

    if (peg[0] == player && peg[4] == player && peg[8] == player && peg[12] == player)
        return true;
    if (peg[1] == player && peg[5] == player && peg[9] == player && peg[13] == player)
        return true;
    if (peg[2] == player && peg[6] == player && peg[10] == player && peg[14] == player)
        return true;
    if (peg[3] == player && peg[7] == player && peg[11] == player && peg[15] == player)
        return true;
    return false;
}

/*
class function check_row_win
Win by row if
0, 1,  2,  3 are equal
4, 5,  6,  7 are equal
8, 9, 10, 11 are equal
12,13,14, 15 are equal
*/
bool TicTacToe4::check_row_win()
{


  //  vector<string> peg = board.get_peg();

    if (peg[0] == player && peg[1] == player && peg[2] == player && peg[3] == player)
        return true;
    if (peg[4] == player && peg[5] == player && peg[6] == player && peg[7] == player)
        return true;
    if (peg[8] == player && peg[9] == player && peg[10] == player && peg[11] == player)
        return true;
    if (peg[12] == player && peg[13] == player && peg[14] == player && peg[15] == player)
        return true;
    return false;
}

/*
class function check_diagonal_win
Win diagonally
0, 1,  2,  3
4, 5,  6,  7
8, 9, 10, 11
12,13,14, 15

*/
bool TicTacToe4::check_diagonal_win()
{


   // vector<string> peg = board.get_peg();

    if (peg[0] == player && peg[5] == player && peg[10] == player && peg[15] == player)
        return true;

    if (peg[3] == player && peg[6] == player && peg[9] == player && peg[12] == player)
        return true;

    return false;
}