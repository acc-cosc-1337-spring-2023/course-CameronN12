#include<iostream>
#include "tic_tac_toe.h"
#include "tic_tac_toe_data.h"
#include<string>
using namespace std;

using std::cout; using std::cin;

int main() 
{
	try
	{
	string player = "";
	int option = 0;
	int position = 0;
	int exit = 0;
	cout<< "Enter player: " << "\n";
	cin >> player;
	TicTacToe newgame;
	newgame.start_game(player);
	do
	{
	//ask user for position
	cout<< "Enter position: " << "\n";
	cin>>position;
	newgame.mark_board(position);
	//check if board is full
	newgame.display_board();

	if(newgame.game_over())
	{
		break;
	}
	//displayboard
	//prompt user to quit game
	exit = prompt_user(option);
	}
	while(exit == 0);

	newgame.clear_board();
	exit = prompt_user(option);
	}
	catch (std::exception const &exc)
	{
		std::cerr << " Exception caught " << exc.what() << "\n";
	}
	catch (...)
	{
		std::cerr << "Unknown exemption";
	}
	return 0;
}