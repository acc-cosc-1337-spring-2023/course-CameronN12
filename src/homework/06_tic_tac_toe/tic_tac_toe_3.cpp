#include "tic_tac_toe_3.h"
//#include "tic_tac_toe.h"
#include "tic_tac_toe_data.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;



TicTacToe3::TicTacToe3():TicTacToe()
{
    clear_board(9);
}

TicTacToe3::TicTacToe3(vector<string> p, string win):TicTacToe()
{
    clear_board(9);
};
/*
class function check_column_win
Win by column if and return true if
0,3, and 6 are equal
1, 4, and 7
2, 5, and 8
else
false
*/
bool TicTacToe3::check_column_win()
{


   // vector<string> peg = get_();

    if (peg[0] == player && peg[3] == player && peg[6] == player)
        return true;

    if (peg[1] == player && peg[4] == player && peg[7] == player)
        return true;

    if (peg[2] == player && peg[5] == player && peg[8] == player)
        return true;
    return false;
}

/*
class function check_row_win
Win by row if
0, 1, 2 are equal
3,4,5 are equal
6,7,8 are equal
*/
bool TicTacToe3::check_row_win()
{


    //<string> peg = board.get_peg();

    if (peg[0] == player && peg[1] == player && peg[2] == player)
        return true;

    if (peg[3] == player && peg[4] == player && peg[5] == player)
        return true;

    if (peg[6] == player && peg[7] == player && peg[8] == player)
        return true;
    return false;
}


/*
class function check_diagonal_win
Win diagonally
0 1 2
3 4 5
6 7 8

*/
bool TicTacToe3::check_diagonal_win()
{


//vector<string> peg = board.get_peg();

    if (peg[0] == player && peg[4] == player && peg[8] == player)
        return true;

    if (peg[6] == player && peg[4] == player && peg[2] == player)
        return true;

    return false;
}