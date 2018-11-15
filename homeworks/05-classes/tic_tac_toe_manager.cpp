#include "tic_tac_toe_manager.h"

std::unique_ptr<tic_tac_toe_board> tic_tac_toe_manager::get_game(game_type type) {
	std::unique_ptr<tic_tac_toe_board> a;
	if (type == Tic_Tac_Toe_3){
		a = std::make_unique<tic_tac_toe_3>();
	}
	if (type == Tic_Tac_Toe_4){
		a = std::make_unique<tic_tac_toe_4>();
	}
	return a;
}

void tic_tac_toe_manager::save_game(std::unique_ptr<tic_tac_toe_board> board) {
	update_winner_count(board->get_winner());
	boards.push_back(std::move(board));
}

const std::vector<std::unique_ptr<tic_tac_toe_board>>& tic_tac_toe_manager::get_games() {
	return boards;
}

void tic_tac_toe_manager::update_winner_count(std::string & count) {
	if (count == "X") {
		x_win++;
	} else if (count == "O") {
		o_win++;
	} else c_win++;
}

std::ostream & operator<<(std::ostream & out, const tic_tac_toe_manager & d) {
	int option{ 0 };
	out << "Select Board (Insert number from 1 - " << d.boards.size() << ", or any key for full list): ";
	std::cin >> option;
	if (option <= d.boards.size()) {
		out << *d.boards[option-1];
	} else {
		for (int i = 0; i < d.boards.size(); ++i) {
			out << *d.boards[i];
		}
	}
	return out;
}
