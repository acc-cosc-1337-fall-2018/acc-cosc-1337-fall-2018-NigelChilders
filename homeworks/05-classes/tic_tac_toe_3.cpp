#include "tic_tac_toe_3.h"

tic_tac_toe_3::tic_tac_toe_3() {
	for (int i = 0; i < 9; i++) {
		Peg peg;
		pegs.push_back(peg);
	}
}

bool tic_tac_toe_3::check_column_win() const {
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

bool tic_tac_toe_3::check_row_win() const {
	if (pegs[0].val == "X" && pegs[1].val == "X" && pegs[2].val == "X") {
		return true;
	}else if (pegs[3].val == "X" && pegs[4].val == "X" && pegs[5].val == "X") {
		return true;
	}else if (pegs[6].val == "X" && pegs[7].val == "X" && pegs[8].val == "X") {
		return true;
	}else if (pegs[0].val == "O" && pegs[1].val == "O" && pegs[2].val == "O") {
		return true;
	}else if (pegs[3].val == "O" && pegs[4].val == "O" && pegs[5].val == "O") {
		return true;
	}else if (pegs[6].val == "O" && pegs[7].val == "O" && pegs[8].val == "O") {
		return true;
	}else { return false; }
}

bool tic_tac_toe_3::check_diagonal_win() const {
	if (pegs[0].val == "X" && pegs[4].val == "X" && pegs[8].val == "X") {
		return true;
	}else if (pegs[2].val == "X" && pegs[4].val == "X" && pegs[6].val == "X") {
		return true;
	}else if (pegs[0].val == "O" && pegs[4].val == "O" && pegs[8].val == "O") {
		return true;
	}else if (pegs[2].val == "O" && pegs[4].val == "O" && pegs[6].val == "O") {
		return true;
	}else { return false; }
}

void tic_tac_toe_3::display_board(std::ostream & out) const {
	out << "Current Player:  " << next_player << std::endl;

	for (unsigned i = 0; i < pegs.size(); i += 3) {
		out << pegs[i].val << "|" << pegs[i + 1].val << "|" << pegs[i + 2].val << std::endl;
	}
}

void tic_tac_toe_3::get_input(std::istream & in) {
	int value{ 0 };
	std::cout << "Player " << get_player() << ", choose position between 1 and 9: ";
	in >> value;
	mark_board(value);
}
