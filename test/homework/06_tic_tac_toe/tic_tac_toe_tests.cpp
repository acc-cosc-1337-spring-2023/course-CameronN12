#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_data.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("")
{
	TicTacToe newgame;
	newgame.start_game("X");
	for(int i = 0; i < 9; i++)
	{
		newgame.mark_board(i);
		newgame.game_over();
	}
	REQUIRE();
}

