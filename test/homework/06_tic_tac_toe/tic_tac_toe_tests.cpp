#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_data.h"
#include "tic_tac_toe_manager.h"

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
	REQUIRE((newgame.get_winner() == "X" || newgame.get_winner() == "O"));
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
	REQUIRE((newgame.get_winner() == "X" || newgame.get_winner() == "O"));
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
	REQUIRE((newgame.get_winner() == "X" || newgame.get_winner() == "O"));
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
	REQUIRE((newgame.get_winner() == "X" || newgame.get_winner() == "O"));
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
	REQUIRE((newgame.get_winner() == "X" || newgame.get_winner() == "O"));
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
	REQUIRE((newgame.get_winner() == "X" || newgame.get_winner() == "O"));
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
	REQUIRE((newgame.get_winner() == "X" || newgame.get_winner() == "O"));
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
	REQUIRE((newgame.get_winner() == "X" || newgame.get_winner() == "O"));
}

TEST_CASE("Test Manager get_winner_total function")
{
	int o = 0, w = 0, t = 0;
	
	TicTacToe newgame1;
	Manager manager;
	newgame1.start_game("X");
	newgame1.mark_board(3);
	newgame1.game_over();
	newgame1.mark_board(4);
	newgame1.game_over();
	newgame1.mark_board(6);
	newgame1.game_over();
	newgame1.mark_board(7);
	newgame1.game_over();
	newgame1.mark_board(9);
	newgame1.game_over();
	if(newgame1.game_over())
	{
		manager.save_game(newgame1);
	}

	TicTacToe newgame2;
	newgame2.start_game("O");
	newgame2.mark_board(3);
	newgame2.game_over();
	newgame2.mark_board(4);
	newgame2.game_over();
	newgame2.mark_board(6);
	newgame2.game_over();
	newgame2.mark_board(7);
	newgame2.game_over();
	newgame2.mark_board(9);
	newgame2.game_over();
	if(newgame2.game_over())
	{
		manager.save_game(newgame2);
	}

	TicTacToe newgame3;
	newgame3.start_game("X");
	newgame3.mark_board(1);
	newgame3.game_over();
	newgame3.mark_board(2);
	newgame3.game_over();
	newgame3.mark_board(5);
	newgame3.game_over();
	newgame3.mark_board(3);
	newgame3.game_over();
	newgame3.mark_board(6);
	newgame3.game_over();
	newgame3.mark_board(4);
	newgame3.game_over();
	newgame3.mark_board(7);
	newgame3.game_over();
	newgame3.mark_board(9);
	newgame3.game_over();
	newgame3.mark_board(8);
	newgame3.game_over();
	if(newgame3.game_over())
	{
		manager.save_game(newgame3);
	}
	
	
	manager.get_winner_total(o,w,t);
	REQUIRE(t == 1);
	REQUIRE(w == 1);
	REQUIRE(o == 1);
	
}

TEST_CASE("Test win by first column 4")
{
	TicTacToe4 newgame;
	newgame.start_game("X");
	newgame.mark_board(1);
	newgame.game_over();
	newgame.mark_board(2);
	newgame.game_over();
	newgame.mark_board(5);
	newgame.game_over();
	newgame.mark_board(6);
	newgame.game_over();
	newgame.mark_board(9);
	newgame.game_over();
	newgame.mark_board(10);
	newgame.game_over();
	newgame.mark_board(13);
	newgame.game_over();
	REQUIRE(newgame.game_over() == true);
	REQUIRE((newgame.get_winner() == "X" || newgame.get_winner() == "O"));
}

TEST_CASE("Test win by second column 4")
{
	TicTacToe4 newgame;
	newgame.start_game("X");
	newgame.mark_board(2);
	newgame.game_over();
	newgame.mark_board(1);
	newgame.game_over();
	newgame.mark_board(6);
	newgame.game_over();
	newgame.mark_board(5);
	newgame.game_over();
	newgame.mark_board(10);
	newgame.game_over();
	newgame.mark_board(9);
	newgame.game_over();
	newgame.mark_board(14);
	newgame.game_over();
	REQUIRE(newgame.game_over() == true);
	REQUIRE((newgame.get_winner() == "X" || newgame.get_winner() == "O"));
}

TEST_CASE("Test win by third column 4")
{
	TicTacToe4 newgame;
	newgame.start_game("X");
	newgame.mark_board(3);
	newgame.game_over();
	newgame.mark_board(1);
	newgame.game_over();
	newgame.mark_board(7);
	newgame.game_over();
	newgame.mark_board(2);
	newgame.game_over();
	newgame.mark_board(11);
	newgame.game_over();
	newgame.mark_board(4);
	newgame.game_over();
	newgame.mark_board(15);
	newgame.game_over();
	REQUIRE(newgame.game_over() == true);
	REQUIRE((newgame.get_winner() == "X" || newgame.get_winner() == "O"));
}

TEST_CASE("Test win by fourth column 4")
{
	TicTacToe4 newgame;
	newgame.start_game("X");
	newgame.mark_board(4);
	newgame.game_over();
	newgame.mark_board(1);
	newgame.game_over();
	newgame.mark_board(8);
	newgame.game_over();
	newgame.mark_board(2);
	newgame.game_over();
	newgame.mark_board(12);
	newgame.game_over();
	newgame.mark_board(3);
	newgame.game_over();
	newgame.mark_board(16);
	newgame.game_over();
	REQUIRE(newgame.game_over() == true);
	REQUIRE((newgame.get_winner() == "X" || newgame.get_winner() == "O"));
}

TEST_CASE("Test win by first row 4")
{
	TicTacToe4 newgame;
	newgame.start_game("X");
	newgame.mark_board(1);
	newgame.game_over();
	newgame.mark_board(5);
	newgame.game_over();
	newgame.mark_board(2);
	newgame.game_over();
	newgame.mark_board(6);
	newgame.game_over();
	newgame.mark_board(3);
	newgame.game_over();
	newgame.mark_board(7);
	newgame.game_over();
	newgame.mark_board(4);
	newgame.game_over();
	REQUIRE(newgame.game_over() == true);
	REQUIRE((newgame.get_winner() == "X" || newgame.get_winner() == "O"));
}

TEST_CASE("Test win by second row 4")
{
	TicTacToe4 newgame;
	newgame.start_game("X");
	newgame.mark_board(5);
	newgame.game_over();
	newgame.mark_board(1);
	newgame.game_over();
	newgame.mark_board(6);
	newgame.game_over();
	newgame.mark_board(2);
	newgame.game_over();
	newgame.mark_board(7);
	newgame.game_over();
	newgame.mark_board(3);
	newgame.game_over();
	newgame.mark_board(8);
	newgame.game_over();
	REQUIRE(newgame.game_over() == true);
	REQUIRE((newgame.get_winner() == "X" || newgame.get_winner() == "O"));
}

TEST_CASE("Test win by third row 4")
{
	TicTacToe4 newgame;
	newgame.start_game("X");
	newgame.mark_board(9);
	newgame.game_over();
	newgame.mark_board(1);
	newgame.game_over();
	newgame.mark_board(10);
	newgame.game_over();
	newgame.mark_board(2);
	newgame.game_over();
	newgame.mark_board(11);
	newgame.game_over();
	newgame.mark_board(3);
	newgame.game_over();
	newgame.mark_board(12);
	newgame.game_over();
	REQUIRE(newgame.game_over() == true);
	REQUIRE((newgame.get_winner() == "X" || newgame.get_winner() == "O"));
}

TEST_CASE("Test win by fourth row 4")
{
	TicTacToe4 newgame;
	newgame.start_game("X");
	newgame.mark_board(13);
	newgame.game_over();
	newgame.mark_board(1);
	newgame.game_over();
	newgame.mark_board(14);
	newgame.game_over();
	newgame.mark_board(2);
	newgame.game_over();
	newgame.mark_board(15);
	newgame.game_over();
	newgame.mark_board(3);
	newgame.game_over();
	newgame.mark_board(16);
	newgame.game_over();
	REQUIRE(newgame.game_over() == true);
	REQUIRE((newgame.get_winner() == "X" || newgame.get_winner() == "O"));
}

TEST_CASE("Test win diagonally from top left 4")
{
	TicTacToe4 newgame;
	newgame.start_game("X");
	newgame.mark_board(1);
	newgame.game_over();
	newgame.mark_board(2);
	newgame.game_over();
	newgame.mark_board(6);
	newgame.game_over();
	newgame.mark_board(3);
	newgame.game_over();
	newgame.mark_board(11);
	newgame.game_over();
	newgame.mark_board(5);
	newgame.game_over();
	newgame.mark_board(16);
	newgame.game_over();
	REQUIRE(newgame.game_over() == true);
	REQUIRE((newgame.get_winner() == "X" || newgame.get_winner() == "O"));
}

TEST_CASE("Test win diagonally from bottom left 4")
{
	TicTacToe4 newgame;
	newgame.start_game("X");
	newgame.mark_board(13);
	newgame.game_over();
	newgame.mark_board(1);
	newgame.game_over();
	newgame.mark_board(10);
	newgame.game_over();
	newgame.mark_board(2);
	newgame.game_over();
	newgame.mark_board(7);
	newgame.game_over();
	newgame.mark_board(3);
	newgame.game_over();
	newgame.mark_board(4);
	newgame.game_over();
	REQUIRE(newgame.game_over() == true);
	REQUIRE((newgame.get_winner() == "X" || newgame.get_winner() == "O"));
}