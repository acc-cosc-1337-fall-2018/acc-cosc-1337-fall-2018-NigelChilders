#ifndef TICTACTOE_H
#define TIC_TAC_TOE_BOARD_H
#include <string>
#include <vector>
#include <iostream>

using std::vector; using std::string;

class TicTacToeBoard {
public:
	TicTacToeBoard() = default;
	TicTacToeBoard(int x, int o, int c) : x_win(x), o_win(o), c_win(c) {};
	bool game_over();
	void start_game(string player);
	void mark_board(int position);
	string get_player();
	friend std::istream& operator>>(std::istream& in, TicTacToeBoard& d);
	friend std::ostream& operator<<(std::ostream& out, const TicTacToeBoard& d);
//	void display_board();
	friend TicTacToeBoard operator+(const TicTacToeBoard& b, const TicTacToeBoard& b2);

private:
	void set_next_player();
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	void clear_board();
	bool check_board_full();
	vector<string> pegs{ " ", " ", " ", " ", " ", " ", " ", " ", " "};
	string next_player;
	int x_win{ 0 };
	int o_win{ 0 };
	int c_win{ 0 };
};
#endif //TICTACTOE_H