#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe_board.h"

TEST_CASE("Test game over") {
	TicTacToeBoard board;
	board.start_game("X");
	board.mark_board(1);//X 
	board.mark_board(2);//O 
	board.mark_board(4);//X 
	board.mark_board(5);//O 

	REQUIRE(board.game_over() == false);

	TicTacToeBoard board2;
	board2.start_game("X");
	board2.mark_board(1);//X 
	board2.mark_board(2);//O 
	board2.mark_board(4);//X 
	board2.mark_board(5);//O 
	board2.mark_board(7);//X 
	//X wins 
	REQUIRE(board2.game_over() == true);
}

TEST_CASE("Test set first player X") {
	TicTacToeBoard board;
	board.start_game("X");
	REQUIRE(board.get_player() == "X");
}

TEST_CASE("Test set first player O") {
	TicTacToeBoard board;
	board.start_game("O");
	REQUIRE(board.get_player() == "O");
}

TEST_CASE("Test win by first column","[X wins first column]") { 
	TicTacToeBoard board;
	board.start_game("X");
	board.mark_board(1);//X 
	board.mark_board(2);//O 
	board.mark_board(4);//X 
	board.mark_board(5);//O 
	board.mark_board(7);//X 
	//X wins 

	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by second column", "[X wins]") {
	TicTacToeBoard board;
	board.start_game("X");
	board.mark_board(2);//X 
	board.mark_board(3);//O 
	board.mark_board(5);//X 
	board.mark_board(4);//O 
	board.mark_board(8);//X 
	//X wins 

	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by third column", "[X wins]") {
	TicTacToeBoard board;
	board.start_game("X");
	board.mark_board(3);//X 
	board.mark_board(1);//O 
	board.mark_board(6);//X 
	board.mark_board(2);//O 
	board.mark_board(9);//X 
	//X wins 

	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by first row", "[X wins first row]") {
	TicTacToeBoard board;
	board.start_game("X");
	board.mark_board(1);//X 
	board.mark_board(4);//O 
	board.mark_board(2);//X 
	board.mark_board(5);//O 
	board.mark_board(3);//X 
	//X wins 

	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by second row", "[X wins]") {
	TicTacToeBoard board;
	board.start_game("X");
	board.mark_board(4);//X 
	board.mark_board(1);//O 
	board.mark_board(5);//X 
	board.mark_board(2);//O 
	board.mark_board(6);//X 
	//X wins 

	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by third row", "[X wins]") {
	TicTacToeBoard board;
	board.start_game("X");
	board.mark_board(8);//X 
	board.mark_board(2);//O 
	board.mark_board(9);//X 
	board.mark_board(5);//O 
	board.mark_board(9);//X 
	//X wins 

	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win diagonally from top", "[X wins]") {
	TicTacToeBoard board;
	board.start_game("X");
	board.mark_board(1);//X 
	board.mark_board(2);//O 
	board.mark_board(5);//X 
	board.mark_board(6);//O 
	board.mark_board(9);//X 
	//X wins 

	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win diagonally from bottom", "[X wins]") {
	TicTacToeBoard board;
	board.start_game("X");
	board.mark_board(3);//X 
	board.mark_board(2);//O 
	board.mark_board(5);//X 
	board.mark_board(6);//O 
	board.mark_board(7);//X 
	//X wins 

	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test for no winner", "[Nobody wins]") {
	TicTacToeBoard board;
	board.start_game("X");
	board.mark_board(1);//X 
	board.mark_board(2);//O 
	board.mark_board(3);//X 
	board.mark_board(5);//O 
	board.mark_board(4);//X
	board.mark_board(9);//O
	board.mark_board(6);//X
	board.mark_board(7);//O
	board.mark_board(8);//X
	//XOX
	//XOX
	//OXO

	REQUIRE(board.game_over() == true);
}