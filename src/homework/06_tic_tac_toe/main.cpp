#include <iostream>
#include "tic_tac_toe.h"

int main() 
{
	TicTacToe game;
	string first_player;
	char replay;

	do
	{
		cout<<"Do you want 'X' or 'O'?\n  ";
		cin >> first_player;

		int position;
		game.start_game(first_player);

		while(!game.game_over() == false)
		{
			cout<<"Please select position 1 - 9";
			cin>>position;
			game.mark_board(position);
		}

			game.display_board();
			cout<<"Do you want to play again (Y/N): ";
			
	}while(replay == 'y' || replay =='Y');
	
	return 0;
}