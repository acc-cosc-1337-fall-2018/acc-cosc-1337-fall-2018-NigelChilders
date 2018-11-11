#ifndef PANEL_H
#define PANEL_H
#include <wx/wx.h>
#include <vector>
#include <string>
#include <memory>
#include "tic_tac_toe_manager.h"

class Panel : public wxPanel {
public:
	Panel(wxWindow* parent);
protected:

private:
	wxBoxSizer* get_top_box_sizer();
	wxBoxSizer* get_mid_box_sizer();
	wxGridSizer* get_grid_sizer(int size);
	void on_peg_click(wxCommandEvent& event);
	void on_start_click(wxCommandEvent& event);
	void on_list_select(wxCommandEvent& event);
	void set_button_properties(wxGridSizer* sizer);

	wxRadioBox* game_type;
	wxRadioBox* first_player;
	wxButton* start;
	wxGridSizer* ttt3_grid;
	wxGridSizer* ttt4_grid;
	wxListBox* history;
	wxTextCtrl* victory;
	std::unique_ptr<tic_tac_toe_manager> manage_this;
	std::unique_ptr<tic_tac_toe_board> board_me;
};

#endif // !PANEL_H
