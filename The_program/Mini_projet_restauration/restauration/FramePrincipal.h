///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.9.0 Sep 14 2021)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/button.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/statbox.h>
#include <wx/textctrl.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class FramePrincipal
///////////////////////////////////////////////////////////////////////////////
class FramePrincipal : public wxFrame
{
	private:

	protected:
		wxButton* m_button_passage_non_scolaire;
		wxButton* m_button_passage_scolaire;
		wxButton* m_button_passage_inconnu;
		wxButton* m_button_pass;
		wxTextCtrl* m_textCtrlLog;
		wxButton* m_button_demande_fin;

		// Virtual event handlers, override them in your derived class
		virtual void OnClose_Click( wxCloseEvent& event ) { event.Skip(); }
		virtual void OnButton_passage_non_scolaire_Click( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnButton_passage_scolaire_Click( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnButton_passage_inconnu_Click( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnButton_pass_Click( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnButton_demande_fin_Click( wxCommandEvent& event ) { event.Skip(); }


	public:

		FramePrincipal( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Restauration"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 545,550 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~FramePrincipal();

};

