#include<iostream>
//#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_data.h"
#include "tic_tac_toe_manager.h"
#include<string>
using namespace std;

using std::cout; using std::cin;

int main()
{
	TicTacToeData data;
	string player = "";
	int option = 0;
	int exit = 0;
	int board_size = 0;
	do
	{
		cout << "Enter player: ";
		cin >> player;
		cout << "Enter the size of the board (3 or 4): ";
		cin >> board_size;

		if (board_size == 3)
		{
			//TicTacToe newgame(3);
			TicTacToe3 newgame;
		
			Manager manager(data);
			newgame.start_game(player);
			do
			{

				cin >> newgame;
				cout << newgame << "\n";

				if (newgame.game_over())
				{
					std::vector<std::unique_ptr<TicTacToe>> games;
					cout << "Game over. Winner is " << newgame.get_winner() << "!\n";

					// Create a TicTacToe3 object and add it to the vector
					std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe3>();
					games.push_back(std::move(game));

					manager.save_game(games);
					manager.scoreboard();
					break;
				}
				//displayboard
				//prompt user to quit game
			} while (exit == 0);
			//newgame.clear_board();
			exit = prompt_user(option);
		}
		else if (board_size == 4)
		{
			TicTacToe4 newgame;
			Manager manager(data);
			newgame.start_game(player);
			do
			{

				cin >> newgame;
				cout << newgame << "\n";

				if (newgame.game_over())
				{
					std::vector<std::unique_ptr<TicTacToe>> games;
					cout << "Game over. Winner is " << newgame.get_winner() << "!\n";

					// Create a TicTacToe3 object and add it to the vector
					std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe4>();
					games.push_back(std::move(game));

					manager.save_game(games);
					manager.scoreboard();
					break;
				}
				//displayboard
				//prompt user to quit game
			} while (exit == 0);
			//newgame.clear_board();
			exit = prompt_user(option);
		}
		//TicTacToe newgame;

	
	} while (exit != 1);

	return 0;
}