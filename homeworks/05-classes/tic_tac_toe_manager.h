#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
#include "tic_tac_toe_board.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <memory>

enum game_type {Tic_Tac_Toe_3, Tic_Tac_Toe_4};

class tic_tac_toe_manager {
public:
	tic_tac_toe_manager() = default;
	tic_tac_toe_manager(int x, int o, int c) : x_win(x), o_win(o), c_win(c) {}
	std::unique_ptr<tic_tac_toe_board> get_game(game_type type);
	void save_game(std::unique_ptr<tic_tac_toe_board> board);
	friend std::ostream& operator<<(std::ostream& out, const tic_tac_toe_manager& d);

protected:

private:
	std::vector<std::unique_ptr<tic_tac_toe_board>> boards;
	int c_win{ 0 };
	int o_win{ 0 };
	int x_win{ 0 };
	void update_winner_count(std::string& count);
};
#endif // !TIC_TAC_TOE_MANAGER_H
