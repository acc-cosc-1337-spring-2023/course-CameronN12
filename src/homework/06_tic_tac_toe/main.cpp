#include<iostream>
#include "tic_tac_toe.h"
#include "tic_tac_toe_data.h"
#include<string>
using namespace std;

using std::cout; using std::cin;

int main() 
{
	
	string player = "";
	int option = 0;
	int position = 0;
	int exit = 0;
	do
	{
	cout<< "Enter player: ";
	cin >> player;
	TicTacToe newgame;
	newgame.start_game(player);
	do
	{
	//ask user for position
	cout<< "Enter position: ";
	cin>>position;
	newgame.mark_board(position);
	//check if board is full
	newgame.display_board();

	if(newgame.game_over())
	{
		cout << "Game over. Winner is " << newgame.get_winner() << "!\n";
		break;
	}
	//displayboard
	//prompt user to quit game
	}
	while(exit == 0);
	newgame.clear_board();
	exit = prompt_user(option);
	}
	while(exit != 1);

	return 0;
}