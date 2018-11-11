#include "panel.h"

Panel::Panel(wxWindow * parent) : wxPanel(parent, -1) {
}

wxBoxSizer * Panel::get_top_box_sizer() {
	return nullptr;
}

wxBoxSizer * Panel::get_mid_box_sizer() {
	return nullptr;
}

wxGridSizer * Panel::get_grid_sizer(int size) {
	return nullptr;
}

void Panel::on_peg_click(wxCommandEvent & event) {
}

void Panel::on_start_click(wxCommandEvent & event) {
}

void Panel::on_list_select(wxCommandEvent & event) {
}

void Panel::set_button_properties(wxGridSizer * sizer) {
}
