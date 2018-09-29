#ifndef TICTACTOE_H
#define TIC_TAC_TOE_BOARD_H
#include <string>
#include <vector>

using std::vector; using std::string;

class TicTacToeBoard {
public:
	bool game_over();
	void start_game(string player);
	void mark_board(int position);
	string get_player();
	void display_board();

private:
	void set_next_player();
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	void clear_board();
	bool check_board_full();
	vector<string> pegs();
	string next_player();
};
#endif //TICTACTOE_H