#include "tic_tac_toe_manager.h"


std::unique_ptr<tic_tac_toe_board> tic_tac_toe_manager::get_game(game_type type) {
	std::unique_ptr<tic_tac_toe_board> a;
	if (type == Tic_tac_toe_3){
		a = std::make_unique<tic_tac_toe_3>();
	}else {
		a = std::make_unique<tic_tac_toe_4>();
	}
	return a;
}

void tic_tac_toe_manager::save_game(std::unique_ptr<tic_tac_toe_board> board) {
	update_winner_count(board->get_winner());
	boards.push_back(std::move(board));
}

void tic_tac_toe_manager::update_winner_count(std::string & count) {
	if (count == "X") {
		x_win++;
	} else if (count == "O") {
		o_win++;
	} else c_win++;
}

std::ostream & operator<<(std::ostream & out, const tic_tac_toe_manager & d) {
	d.display_board(out);
	return out;
}
