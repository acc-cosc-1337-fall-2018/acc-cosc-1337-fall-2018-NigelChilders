#include "frame.h"

Frame::Frame()
	: wxFrame(NULL, wxID_ANY, "Clock Widget", wxDefaultPosition, wxSize(320, 360))
{
	auto panel = new Panel(this);

}
