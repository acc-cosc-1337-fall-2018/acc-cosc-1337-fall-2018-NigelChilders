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
	TicTacToeBoard a,b,c;

	std::cin >> a;
	std::cin >> b;
	std::cin >> c;

	vector<TicTacToeBoard> result = {a,b,c};

	for (auto i : result)
		std::cout << i << ' ';
	std::cout << std::endl;

	std::cout << " \nPress any key to continue\n";
	std::cin.ignore();

	return 0;
}