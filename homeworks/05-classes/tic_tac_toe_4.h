#ifndef TIC_TAC_TOE_4_H
#define TIC_TAC_TOE_4_H

#include "tic_tac_toe_board.h"

class tic_tac_toe_4 : public tic_tac_toe_board {
public:
	tic_tac_toe_4();
protected:
	bool check_column_win() const override;
	bool check_diagonal_win() const override;
	bool check_row_win() const override;
	void display_board(std::ostream & out) const override;
	void get_input(std::istream & in) override;

private:
};
#endif //TICTACTOE_H