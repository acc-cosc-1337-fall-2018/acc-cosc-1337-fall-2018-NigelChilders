#include "tic_tac_toe_board.h"

bool tic_tac_toe_board::game_over() {
	if (check_row_win() || check_column_win() || check_diagonal_win() || check_board_full()) {
		if (!check_row_win() && !check_column_win() && !check_diagonal_win()) { winner = "C"; }
		else if (next_player == "O") { winner = "X"; }
		else if (next_player == "X") { winner = "O"; }
		else {	winner = "C"; }
		return true;
	}
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

std::string tic_tac_toe_board::get_winner()
{
	return winner;
}

void tic_tac_toe_board::display_board(std::ostream& out) const {
	out << "Current Player:  " << next_player << std::endl;
	out << pegs[0].val << "|" << pegs[1].val << "|" << pegs[2].val << std::endl;
	out << "-+-+-" << std::endl;
	out << pegs[3].val << "|" << pegs[4].val << "|" << pegs[5].val << std::endl;
	out << "-+-+-" << std::endl;
	out << pegs[6].val << "|" << pegs[7].val << "|" << pegs[8].val << std::endl;
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

bool tic_tac_toe_board::check_column_win() const {
	if (pegs[0].val == "X" && pegs[3].val == "X" && pegs[6].val == "X") {
		return true;
	}else if (pegs[1].val == "X" && pegs[4].val == "X" && pegs[7].val == "X") {
		return true;
	}else if (pegs[2].val == "X" && pegs[5].val == "X" && pegs[8].val == "X") {
		return true;
	}else if (pegs[0].val == "O" && pegs[3].val == "O" && pegs[6].val == "O") {
		return true;
	}else if (pegs[1].val == "O" && pegs[4].val == "O" && pegs[7].val == "O") {
		return true;
	}else if (pegs[2].val == "O" && pegs[5].val == "O" && pegs[8].val == "O") {
		return true;
	}else { return false; }
}

bool tic_tac_toe_board::check_row_win() const {
	if (pegs[0].val == "X" && pegs[1].val == "X" && pegs[2].val == "X") {
		return true;
	}
	else if (pegs[3].val == "X" && pegs[4].val == "X" && pegs[5].val == "X") {
		return true;
	}
	else if (pegs[6].val == "X" && pegs[7].val == "X" && pegs[8].val == "X") {
		return true;
	}
	else if (pegs[0].val == "O" && pegs[1].val == "O" && pegs[2].val == "O") {
		return true;
	}
	else if (pegs[3].val == "O" && pegs[4].val == "O" && pegs[5].val == "O") {
		return true;
	}
	else if (pegs[6].val == "O" && pegs[7].val == "O" && pegs[8].val == "O") {
		return true;
	}
	else { return false; }
}

bool tic_tac_toe_board::check_diagonal_win() const {
	if (pegs[0].val == "X" && pegs[4].val == "X" && pegs[8].val == "X") {
		return true;
	}
	else if (pegs[2].val == "X" && pegs[4].val == "X" && pegs[6].val == "X") {
		return true;
	}
	else if (pegs[0].val == "O" && pegs[4].val == "O" && pegs[8].val == "O") {
		return true;
	}
	else if (pegs[2].val == "O" && pegs[4].val == "O" && pegs[6].val == "O") {
		return true;
	}
	else { return false; }
}

void tic_tac_toe_board::clear_board() {
	pegs.clear();
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

