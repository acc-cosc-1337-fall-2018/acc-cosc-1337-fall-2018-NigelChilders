#include "tic_tac_toe_board.h"

int main() {
/*	std::cout << "Welcome to Tic-Tac-Toe!" << std::endl;

	int choice{ 0 };
	TicTacToeBoard game;
	game.start_game("X");
//	game.display_board();
	while (game.game_over() == false) {
		std::cout << "Enter the position for " << game.get_player() << ":  ";
		std::cin >> choice;
		game.mark_board(choice);
		std::cout << std::endl;
//		game.display_board();
	}
	std::cout << "Congradulations, player " << game.get_player() << " wins!" << std::endl;
*/	
	std::cout << "Round One:" << std::endl << std::endl;
	TicTacToeBoard a;
	a.start_game("X");
	while (a.game_over() != true) {
		std::cout << a;

		std::cin >> a;
	}
	std::cout << a;

	std::cout << "Round Two:" << std::endl << std::endl;
	TicTacToeBoard b;
	b.start_game("X");
	while (b.game_over() != true) {
		std::cout << b;

		std::cin >> b;
	}
	std::cout << b;

	std::cout << "Round Three:" << std::endl << std::endl;
	TicTacToeBoard c;
	c.start_game("X");
	while (c.game_over() != true) {
		std::cout << c;

		std::cin >> c;
	}
	std::cout << c;

	vector<TicTacToeBoard> result = {a,b,c};
	TicTacToeBoard total;

	for (auto i : result)
		total = total + i;

	std::cout << "Final Result:" << std::endl << std::endl;
	std::cout << total;

	std::cout << std::endl;

	std::cout << " \nPress any key to continue\n";
	std::cin.ignore();

	return 0;
}//CMakeBuilds\b969514a-f2a8-8138-83dc-f8b5f238cb77\build\x64-Debug (default)\homeworks\05-classes