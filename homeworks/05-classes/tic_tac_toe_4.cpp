#include "tic_tac_toe_4.h"

tic_tac_toe_4::tic_tac_toe_4() {
	for (int i = 0; i < 16; i++) {
		Peg peg;
		pegs.push_back(peg);
	}
}

//00|01|02|03
//--+--+--+--
//04|05|06|07
//--+--+--+--
//08|09|10|11
//--+--+--+--
//12|13|14|15
bool tic_tac_toe_4::check_column_win() const {
	if (pegs[0].val == "X" && pegs[4].val == "X" && pegs[8].val == "X" && pegs[12].val == "X") {
		return true;
	} else if (pegs[1].val == "X" && pegs[5].val == "X" && pegs[9].val == "X" && pegs[13].val == "X") {
		return true;
	} else if (pegs[2].val == "X" && pegs[6].val == "X" && pegs[10].val == "X" && pegs[14].val == "X") {
		return true;
	} else if (pegs[3].val == "X" && pegs[7].val == "X" && pegs[11].val == "X" && pegs[15].val == "X") {
		return true;
	} else if (pegs[0].val == "O" && pegs[4].val == "O" && pegs[8].val == "O" && pegs[12].val == "O") {
		return true;
	} else if (pegs[1].val == "O" && pegs[5].val == "O" && pegs[9].val == "O" && pegs[13].val == "O") {
		return true;
	} else if (pegs[2].val == "O" && pegs[6].val == "O" && pegs[10].val == "O" && pegs[14].val == "O") {
		return true;
	} else if (pegs[3].val == "O" && pegs[7].val == "O" && pegs[11].val == "O" && pegs[15].val == "O") {
		return true;
	} else { return false; };
}

bool tic_tac_toe_4::check_row_win() const {
	if (pegs[0].val == "X" && pegs[1].val == "X" && pegs[2].val == "X" && pegs[3].val == "X") {
		return true;
	} else if (pegs[4].val == "X" && pegs[5].val == "X" && pegs[6].val == "X" && pegs[7].val == "X") {
		return true;
	} else if (pegs[8].val == "X" && pegs[9].val == "X" && pegs[10].val == "X" && pegs[11].val == "X") {
		return true;
	} else if (pegs[12].val == "X" && pegs[13].val == "X" && pegs[14].val == "X" && pegs[15].val == "X") {
		return true;
	} else if (pegs[0].val == "O" && pegs[1].val == "O" && pegs[2].val == "O" && pegs[3].val == "O") {
		return true;
	} else if (pegs[4].val == "O" && pegs[5].val == "O" && pegs[6].val == "O" && pegs[7].val == "O") {
		return true;
	} else if (pegs[8].val == "O" && pegs[9].val == "O" && pegs[10].val == "O" && pegs[11].val == "O") {
		return true;
	} else if (pegs[12].val == "O" && pegs[13].val == "O" && pegs[14].val == "O" && pegs[15].val == "O") {
		return true;
	} else { return false; };
}

bool tic_tac_toe_4::check_diagonal_win() const {
	if (pegs[0].val == "X" && pegs[5].val == "X" && pegs[10].val == "X" && pegs[15].val == "X") {
		return true;
	} else if (pegs[3].val == "X" && pegs[6].val == "X" && pegs[9].val == "X" && pegs[12].val == "X") {
		return true;
	} else if (pegs[0].val == "O" && pegs[5].val == "O" && pegs[10].val == "O" && pegs[15].val == "O") {
		return true;
	} else if (pegs[3].val == "O" && pegs[6].val == "O" && pegs[9].val == "O" && pegs[12].val == "O") {
		return true;
	} else { return false; }
}

void tic_tac_toe_4::display_board(std::ostream & out) const {
	out << "Current Player:  " << next_player << std::endl;

	for (unsigned i = 0; i < pegs.size(); i += 3) {
		out << pegs[i].val << "|" << pegs[i + 1].val << "|" << pegs[i + 2].val << std::endl;
	}
}

void tic_tac_toe_4::get_input(std::istream & in) {
	int value{ 0 };
	std::cout << "Player " << get_player() << ", choose position between 1 and 9: ";
	in >> value;
	mark_board(value);
}
