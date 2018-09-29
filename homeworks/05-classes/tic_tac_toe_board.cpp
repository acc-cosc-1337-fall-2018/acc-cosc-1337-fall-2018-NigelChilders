#include "tic_tac_toe_board.h"

bool TicTacToeBoard::game_over() {
	if (check_row_win() || check_column_win() || check_diagonal_win() || check_board_full()) {
		return true;
	}
	else { return false; }
}

void TicTacToeBoard::start_game(string player) {
	next_player = player;
	clear_board();
}

void TicTacToeBoard::mark_board(int position) {
	position--;
	pegs[position] = next_player;
	set_next_player();
}

string TicTacToeBoard::get_player() {
	return next_player;
}

void TicTacToeBoard::display_board() {
	std::cout << pegs[0] << "|" << pegs[1] << "|" << pegs[2] << std::endl;
	std::cout << "?+?+?" << std::endl;
	std::cout << pegs[3] << "|" << pegs[4] << "|" << pegs[5] << std::endl;
	std::cout << "?+?+?" << std::endl;
	std::cout << pegs[6] << "|" << pegs[7] << "|" << pegs[8] << std::endl;
}

void TicTacToeBoard::set_next_player() {
	if (next_player == "X") {
		next_player = "O";
	}
	else if (next_player == "O") {
		next_player = "X";
	}
	else next_player = "X";
}

bool TicTacToeBoard::check_column_win() {
	if (pegs.at(0) == "X" && pegs.at(3) == "X" && pegs.at(6) == "X") {
		return true;
	}
	else if (pegs.at(1) == "X" && pegs.at(4) == "X" && pegs.at(7) == "X") {
		return true;
	}
	else if (pegs.at(2) == "X" && pegs.at(5) == "X" && pegs.at(8) == "X") {
		return true;
	}
	else if (pegs.at(0) == "O" && pegs.at(3) == "O" && pegs.at(6) == "O") {
		return true;
	}
	else if (pegs.at(1) == "O" && pegs.at(4) == "O" && pegs.at(7) == "O") {
		return true;
	}
	else if (pegs.at(2) == "O" && pegs.at(5) == "O" && pegs.at(8) == "O") {
		return true;
	}
	else { return false; }
}

bool TicTacToeBoard::check_row_win() {
	if (pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X") {
		return true;
	}
	else if (pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X") {
		return true;
	}
	else if (pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X") {
		return true;
	}
	else if (pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O") {
		return true;
	}
	else if (pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O") {
		return true;
	}
	else if (pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O") {
		return true;
	}
	else { return false; }
}

bool TicTacToeBoard::check_diagonal_win() {
	if (pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X") {
		return true;
	}
	else if (pegs[2] == "X" && pegs[4] == "X" && pegs[6] == "X") {
		return true;
	}
	else if (pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O") {
		return true;
	}
	else if (pegs[2] == "O" && pegs[4] == "O" && pegs[6] == "O") {
		return true;
	}
	else { return false; }
}

void TicTacToeBoard::clear_board() {
	pegs = { " ", " ", " ", " ", " ", " ", " ", " ", " " };
}

bool TicTacToeBoard::check_board_full() {
	int SpaceCount{ 0 };
	for (auto i : pegs) {
		if (i == " ") {
			SpaceCount++;
		}
	}
	if (SpaceCount > 0) {
		return false;
	}
	else { return true; }
}
