#include "frame.h"

Frame::Frame() : wxFrame(NULL, wxID_ANY, "Tic Tac Toe", wxDefaultPosition, wxSize(800, 450)) {
	auto panel = new Panel(this);
}
