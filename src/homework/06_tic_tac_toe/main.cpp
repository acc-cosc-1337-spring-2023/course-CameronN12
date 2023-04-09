#include<iostream>
#include "tic_tac_toe.h"
#include "tic_tac_toe_data.h"
#include "tic_tac_toe_manager.h"
#include<string>
using namespace std;

using std::cout; using std::cin;

int main() 
{
	string player = "";
	int option = 0;
	int exit = 0;
	do
	{
	cout<< "Enter player: ";
	cin >> player;
	TicTacToe newgame;
	Manager manager;
	newgame.start_game(player);
	do
	{
	cin >> newgame;
    cout << newgame << "\n";
	
	if(newgame.game_over())
	{
		cout << "Game over. Winner is " << newgame.get_winner() << "!\n";
		manager.save_game(newgame);
		manager.scoreboard();
		break;
	}
	//displayboard
	//prompt user to quit game
	}
	while(exit == 0);
	//newgame.clear_board();
	exit = prompt_user(option);
	}
	while(exit != 1);

	return 0;
}