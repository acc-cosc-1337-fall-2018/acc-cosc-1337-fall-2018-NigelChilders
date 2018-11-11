#include "tic_tac_toe_board.h"

bool tic_tac_toe_board::game_over() {
	if (check_row_win() || check_column_win() || check_diagonal_win()) {
		return true;
	}
	if (check_board_full()) { return true; }
	else { return false; }
}

void tic_tac_toe_board::start_game(std::string player) {
	next_player = player;
	clear_board();
}

void tic_tac_toe_board::mark_board(int position) {
	position--;
	pegs[position].val = next_player;
	set_next_player();
}

std::string tic_tac_toe_board::get_player() {
	return next_player;
}

void tic_tac_toe_board::get_input(std::istream & in) {
	int value{ 0 };
	std::cout << "Player " << get_player() << ", choose position between 1 and 9: ";
	in >> value;
	mark_board(value);

}

void tic_tac_toe_board::set_next_player() {
	if (next_player == "X") {
		next_player = "O";
	}
	else if (next_player == "O") {
		next_player = "X";
	}
	else next_player = "X";
}

void tic_tac_toe_board::clear_board() {
	for (auto& i : pegs) {
		i.val = " ";
	}
}

bool tic_tac_toe_board::check_board_full() const {
	int SpaceCount{ 0 };
	for (auto peg : pegs) {
		if (peg.val == " ") {
			SpaceCount++;
		}
	}
	if (SpaceCount > 0) {
		return false;
	}
	else { return true; }
}

std::istream & operator>>(std::istream & in, tic_tac_toe_board & d) {
	d.get_input(in);
	return in;
}

std::ostream & operator<<(std::ostream & out, const tic_tac_toe_board & d) {
	d.display_board(out);	
	return out;
}

std::string tic_tac_toe_board::get_winner() {
	if (check_column_win() || check_row_win() || check_diagonal_win()) {
		if (next_player == "X") {
			return "O";
		} else {
			return "X";
		}
	}
	if (check_board_full()) {
		return "C";
	}
	return "Failsafe";
}


std::vector<Peg>& tic_tac_toe_board::get_pegs() {
	return pegs;
}

