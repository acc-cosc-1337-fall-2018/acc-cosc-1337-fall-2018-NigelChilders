#include "tic_tac_toe_board.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

int main() {
	tic_tac_toe_3 board;
	board.start_game("X");
	board.mark_board(1);//X 
	board.mark_board(2);//O 
	board.mark_board(4);//X 
	board.mark_board(5);//O 
	board.mark_board(6);//X 
	
	std::cout << board << std::endl;

	system("pause");

	return 0;
}//CMakeBuilds\b969514a-f2a8-8138-83dc-f8b5f238cb77\build\x64-Debug (default)\homeworks\05-classes