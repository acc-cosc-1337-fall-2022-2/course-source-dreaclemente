//h
#include <string>
#include <iostream>
#include <vector>
using namespace std;

#ifndef tic_tac_toe.h
#define tic_tac_toe.h

class TicTacToe{
                public:
                        TicTacToe()=default;
                        
                        bool game_over();
                        void start_game(string first_player);
                        void mark_board(int position);
                        string get_player()const{return player;}
                        void display_board()const;
                private:
                        char board[3][3];
                        void set_next_player();
                        bool check_board_full();
                        void clear_board();

                string player;
                vector<string> pegs{" "," ", " ", " ", " ", " ", " ", " ", " "};

};

#endif  