//cpp
#include "tic_tac_toe.h"

bool TicTacToe::game_over() {
    return check_board_full();
}

void TicTacToe::start_game(string first_player) {
    bool check = false;
    while(!check) {
        if(first_player == "X" || first_player == "O") {
            player = first_player;
            check = true;
        }
        else {
                cout<<("Player must be X or O. ");
                cin>>(first_player);
        }
    }
    clear_board();
}

void TicTacToe::mark_board(int position)
{
    pegs[position - 1] = player;
        set_next_player();
}

void TicTacToe::display_board()const
{
    cout<<" "<<board[0][0]<<" | " <<board[0][1]<<" | "<<board[0][2]<<" "<<endl;
    cout<<"-----------"<<endl;
	cout<<" "<<board[0][3]<<" | "<<board[0][4]<<" | "<<board[0][5]<<" "<<endl;
	cout<<"-----------"<<endl;
	cout<<" "<<board[0][6]<<" | "<<board[0][7]<<" | "<<board[0][8]<<" "<<endl;
}

void TicTacToe::set_next_player()
{
    if(player == "X")
    {
            player = "O";
    }
    else{
            player = "X";
    }
    cout<<"The next player is now playing"<<player<<".\n";
}

bool TicTacToe::check_board_full() {
    for(std::size_t i = 0; i <pegs.size(); ++i)
    {
        if(pegs[i] == " ")
        {
            return false;
        }

    }
    return true;

}

void TicTacToe::clear_board()
{
    for(auto &peg:pegs)
    {
            peg = " ";
    }
}