#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe_board.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

TEST_CASE("Test game over") {
	tic_tac_toe_3 board;
	board.start_game("X");
	board.mark_board(1);//X 
	board.mark_board(2);//O 
	board.mark_board(4);//X 
	board.mark_board(5);//O 

	REQUIRE(board.game_over() == false);

	tic_tac_toe_3 board2;
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
	tic_tac_toe_3 board;
	board.start_game("X");
	REQUIRE(board.get_player() == "X");
}

TEST_CASE("Test set first player O") {
	tic_tac_toe_3 board;
	board.start_game("O");
	REQUIRE(board.get_player() == "O");
}

TEST_CASE("Test win by first column","[X wins first column]") { 
	tic_tac_toe_3 board;
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
	tic_tac_toe_3 board;
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
	tic_tac_toe_3 board;
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
	tic_tac_toe_3 board;
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
	tic_tac_toe_3 board;
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
	tic_tac_toe_3 board;
	board.start_game("X");
	board.mark_board(7);//X 
	board.mark_board(2);//O 
	board.mark_board(8);//X 
	board.mark_board(5);//O 
	board.mark_board(9);//X 
	//X wins 
	// O 
	// O 
	//XXX

	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win diagonally from top", "[X wins]") {
	tic_tac_toe_3 board;
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
	tic_tac_toe_3 board;
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
	tic_tac_toe_3 board;
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

TEST_CASE("Test game over") {
	tic_tac_toe_4 board;
	board.start_game("X");
	board.mark_board(1);//X 
	board.mark_board(2);//O 
	board.mark_board(5);//X 
	board.mark_board(6);//O 
	board.mark_board(9);//X
	board.mark_board(10);//O 
	board.mark_board(3);//X

	REQUIRE(board.game_over() == false);

	tic_tac_toe_4 board2;
	board2.start_game("X");
	board.mark_board(1);//X 
	board.mark_board(2);//O 
	board.mark_board(5);//X 
	board.mark_board(6);//O 
	board.mark_board(9);//X
	board.mark_board(10);//O 
	board.mark_board(13);//X
	//X wins 
	REQUIRE(board2.game_over() == true);
}

TEST_CASE("Test set first player X") {
	tic_tac_toe_4 board;
	board.start_game("X");
	REQUIRE(board.get_player() == "X");
}

TEST_CASE("Test set first player O") {
	tic_tac_toe_4 board;
	board.start_game("O");
	REQUIRE(board.get_player() == "O");
}

TEST_CASE("Test win by first column", "[X wins first column]") {
	tic_tac_toe_4 board;
	board.start_game("X");
	board.mark_board(1);//X 
	board.mark_board(2);//O 
	board.mark_board(5);//X 
	board.mark_board(6);//O 
	board.mark_board(9);//X
	board.mark_board(10);//O 
	board.mark_board(13);//X
// X| 0|  |     
//--+--+--+--
// X| 0|  |  
//--+--+--+--
// X| 0|  |  
//--+--+--+--
// X|  |  |  

	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by second column", "[X wins]") {
	tic_tac_toe_4 board;
	board.start_game("X");
	board.mark_board(2);//X 
	board.mark_board(1);//O 
	board.mark_board(6);//X 
	board.mark_board(5);//O 
	board.mark_board(10);//X
	board.mark_board(9);//O 
	board.mark_board(14);//X
// 0| X|  |     
//--+--+--+--
// 0| X|  |  
//--+--+--+--
// 0| X|  |  
//--+--+--+--
//  | X|  |  

	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by third column", "[X wins]") {
	tic_tac_toe_4 board;
	board.start_game("X");
	board.mark_board(3);//X 
	board.mark_board(1);//O 
	board.mark_board(7);//X 
	board.mark_board(5);//O 
	board.mark_board(11);//X
	board.mark_board(9);//O 
	board.mark_board(15);//X
// 0|  | X|     
//--+--+--+--
// 0|  | X|  
//--+--+--+--
// 0|  | X|  
//--+--+--+--
//  |  | X|  
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win by fourth column", "[X wins]") {
	tic_tac_toe_4 board;
	board.start_game("X");
	board.mark_board(4);//X 
	board.mark_board(1);//O 
	board.mark_board(8);//X 
	board.mark_board(5);//O 
	board.mark_board(12);//X
	board.mark_board(9);//O 
	board.mark_board(16);//X
// 0|  |  | X   
//--+--+--+--
// 0|  |  | X
//--+--+--+--
// 0|  |  | X
//--+--+--+--
//  |  |  | X
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by first row", "[X wins first row]") {
	tic_tac_toe_4 board;
	board.start_game("X");
	board.mark_board(1);//X 
	board.mark_board(13);//O 
	board.mark_board(2);//X 
	board.mark_board(14);//O 
	board.mark_board(3);//X
	board.mark_board(15);//O 
	board.mark_board(4);//X
// X| X| X| X  
//--+--+--+--
//  |  |  |
//--+--+--+--
//  |  |  |  
//--+--+--+--
// 0| 0| 0|  


	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by second row", "[X wins]") {
	tic_tac_toe_4 board;
	board.start_game("X");
	board.mark_board(5);//X 
	board.mark_board(1);//O 
	board.mark_board(6);//X 
	board.mark_board(2);//O 
	board.mark_board(7);//X
	board.mark_board(3);//O 
	board.mark_board(8);//X
// 0| 0| 0|  
//--+--+--+--
// X| X| X| X  
//--+--+--+--
//  |  |  |
//--+--+--+--
//  |  |  |  
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by third row", "[X wins]") {
	tic_tac_toe_4 board;
	board.start_game("X");
	board.mark_board(9);//X 
	board.mark_board(1);//O 
	board.mark_board(10);//X 
	board.mark_board(2);//O 
	board.mark_board(11);//X
	board.mark_board(3);//O 
	board.mark_board(12);//X
// 0| 0| 0|  
//--+--+--+--
//  |  |  |  
//--+--+--+--
// X| X| X| X
//--+--+--+--
//  |  |  |  
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by fourth row", "[X wins]") {
	tic_tac_toe_4 board;
	board.start_game("X");
	board.mark_board(13);//X 
	board.mark_board(1);//O 
	board.mark_board(14);//X 
	board.mark_board(2);//O 
	board.mark_board(15);//X
	board.mark_board(3);//O 
	board.mark_board(16);//X
// 0| 0| 0|  
//--+--+--+--
//  |  |  |  
//--+--+--+--
//  |  |  |  
//--+--+--+--
// X| X| X| X

	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win diagonally from top", "[X wins]") {
	tic_tac_toe_4 board;
	board.start_game("X");
	board.mark_board(1);//X 
	board.mark_board(2);//O 
	board.mark_board(6);//X 
	board.mark_board(7);//O 
	board.mark_board(11);//X
	board.mark_board(12);//0
	board.mark_board(16);//X
// X| 0|  |  
//--+--+--+--
//  | X| 0|  
//--+--+--+--
//  |  | X| 0
//--+--+--+--
//  |  |  | X

	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win diagonally from bottom", "[X wins]") {
	tic_tac_toe_4 board;
	board.start_game("X");
	board.mark_board(4);//X 
	board.mark_board(8);//O 
	board.mark_board(7);//X 
	board.mark_board(11);//O 
	board.mark_board(10);//X
	board.mark_board(14);//0
	board.mark_board(13);//X
//  |  |  | X
//--+--+--+--
//  |  | X| 0
//--+--+--+--
//  | X| 0|  
//--+--+--+--
// X| 0|  |  

	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test for no winner", "[Nobody wins]") {
	tic_tac_toe_4 board;
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
	board.mark_board(11);//0
	board.mark_board(10);//X
	board.mark_board(14);//0
	board.mark_board(12);//X
	board.mark_board(16);//O
	board.mark_board(13);//X
	board.mark_board(15);//0
// X| 0| X| X
//--+--+--+--
// 0| X| 0| X
//--+--+--+--
// 0| X| 0| X
//--+--+--+--
// X| 0| 0| 0

	REQUIRE(board.game_over() == true);
}