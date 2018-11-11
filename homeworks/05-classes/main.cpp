#include "tic_tac_toe_board.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"
#include <iostream>
#include <string>

int main() {
	tic_tac_toe_manager manager;
	int choice;
	game_type game_selection;
	std::unique_ptr<tic_tac_toe_board> game;
	std::string keep_playing;
	std::string player_choice;
	do {
		std::cout << "Press 1 for Tic Tac Toe 3, or 2 for Tic Tac Toe 4:  ";
		std::cin >> choice;
		std::cout << std::endl;
		if (choice == 1) {
			game_selection = tic_tac_toe_3;
		} else if (choice == 2) {
			game_selection = tic_tac_toe_4;
		} else { std::cout << "Invalid Selection" << std::endl; }
		game = manager.get_game(game_selection);
		std::cout << "Is first player X or O?:  ";
		std::cin >> player_choice;
		game->start_game(player_choice);
		while (!game->game_over()) {
			std::cout << *game;
			std::cin >> *game;
		}
		std::cout << *game << std::endl;
		if (game->get_winner() == "C") {
			std::cout << "Game is ends in a tie!" << std::endl;
		} else { std::cout << game->get_winner() << " wins the game!" << std::endl; }
		manager.save_game(std::move(game));
		std::cout << "Play again? (Y/N): ";
		std::cin >> keep_playing;
		std::cout << std::endl;
	} while (keep_playing == "Y" || keep_playing == "y");
	std::cout << manager;

	system("pause");

	return 0;
}//CMakeBuilds\b969514a-f2a8-8138-83dc-f8b5f238cb77\build\x64-Debug (default)\homeworks\05-classes