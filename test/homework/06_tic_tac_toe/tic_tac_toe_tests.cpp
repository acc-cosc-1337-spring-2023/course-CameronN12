#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_data.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test first player set to X")
{
	TicTacToe newgame;
	newgame.start_game("X");
	REQUIRE(newgame.get_player() == "X");
}

TEST_CASE("Test first player set to O")
{
	TicTacToe newgame;
	newgame.start_game("O");
	REQUIRE(newgame.get_player() == "O");
}

TEST_CASE("Modify this test case to determine if there is a tie")
{
	TicTacToe newgame;
	newgame.start_game("X");
	newgame.mark_board(1);
	newgame.game_over();
	newgame.mark_board(2);
	newgame.game_over();
	newgame.mark_board(3);
	newgame.game_over();
	newgame.mark_board(4);
	newgame.game_over();
	newgame.mark_board(6);
	newgame.game_over();
	newgame.mark_board(5);
	newgame.game_over();
	newgame.mark_board(7);
	newgame.game_over();
	newgame.mark_board(9);
	newgame.game_over();
	newgame.mark_board(8);
	newgame.game_over();
	REQUIRE(newgame.get_winner() == "C");
}

TEST_CASE("Test win by first column")
{
	TicTacToe newgame;
	newgame.start_game("X");
	newgame.mark_board(1);
	newgame.game_over();
	newgame.mark_board(2);
	newgame.game_over();
	newgame.mark_board(4);
	newgame.game_over();
	newgame.mark_board(3);
	newgame.game_over();
	newgame.mark_board(7);
	newgame.game_over();
	REQUIRE(newgame.game_over() == true);
}

TEST_CASE("Test win by second column")
{
	TicTacToe newgame;
	newgame.start_game("X");
	newgame.mark_board(2);
	newgame.game_over();
	newgame.mark_board(1);
	newgame.game_over();
	newgame.mark_board(5);
	newgame.game_over();
	newgame.mark_board(3);
	newgame.game_over();
	newgame.mark_board(8);
	newgame.game_over();
	REQUIRE(newgame.game_over() == true);
}

TEST_CASE("Test win by third column")
{
	TicTacToe newgame;
	newgame.start_game("X");
	newgame.mark_board(3);
	newgame.game_over();
	newgame.mark_board(1);
	newgame.game_over();
	newgame.mark_board(6);
	newgame.game_over();
	newgame.mark_board(2);
	newgame.game_over();
	newgame.mark_board(9);
	newgame.game_over();
	REQUIRE(newgame.game_over() == true);
}

TEST_CASE("Test win by first row")
{
	TicTacToe newgame;
	newgame.start_game("X");
	newgame.mark_board(1);
	newgame.game_over();
	newgame.mark_board(4);
	newgame.game_over();
	newgame.mark_board(2);
	newgame.game_over();
	newgame.mark_board(5);
	newgame.game_over();
	newgame.mark_board(3);
	newgame.game_over();
	REQUIRE(newgame.game_over() == true);
}

TEST_CASE("Test win by second row")
{
	TicTacToe newgame;
	newgame.start_game("X");
	newgame.mark_board(4);
	newgame.game_over();
	newgame.mark_board(1);
	newgame.game_over();
	newgame.mark_board(5);
	newgame.game_over();
	newgame.mark_board(2);
	newgame.game_over();
	newgame.mark_board(6);
	newgame.game_over();
	REQUIRE(newgame.game_over() == true);
}

TEST_CASE("Test win by third row")
{
	TicTacToe newgame;
	newgame.start_game("X");
	newgame.mark_board(7);
	newgame.game_over();
	newgame.mark_board(1);
	newgame.game_over();
	newgame.mark_board(8);
	newgame.game_over();
	newgame.mark_board(2);
	newgame.game_over();
	newgame.mark_board(9);
	newgame.game_over();
	REQUIRE(newgame.game_over() == true);
}

TEST_CASE("Test win diagonally from top left ")
{
	TicTacToe newgame;
	newgame.start_game("X");
	newgame.mark_board(1);
	newgame.game_over();
	newgame.mark_board(2);
	newgame.game_over();
	newgame.mark_board(5);
	newgame.game_over();
	newgame.mark_board(3);
	newgame.game_over();
	newgame.mark_board(9);
	newgame.game_over();
	REQUIRE(newgame.game_over() == true);
}

TEST_CASE("Test win diagonally from bottom left ")
{
	TicTacToe newgame;
	newgame.start_game("X");
	newgame.mark_board(7);
	newgame.game_over();
	newgame.mark_board(1);
	newgame.game_over();
	newgame.mark_board(5);
	newgame.game_over();
	newgame.mark_board(2);
	newgame.game_over();
	newgame.mark_board(3);
	newgame.game_over();
	REQUIRE(newgame.game_over() == true);
}