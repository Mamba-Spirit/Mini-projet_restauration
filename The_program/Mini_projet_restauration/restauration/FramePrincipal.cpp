///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.9.0 Sep 14 2021)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "FramePrincipal.h"

///////////////////////////////////////////////////////////////////////////

FramePrincipal::FramePrincipal( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 545,300 ), wxSize( 600,900 ) );

	wxBoxSizer* bSizerPrincipal;
	bSizerPrincipal = new wxBoxSizer( wxVERTICAL );

	wxStaticBoxSizer* sbSizer3;
	sbSizer3 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Saisie Manuelle") ), wxHORIZONTAL );

	m_button_passage_non_scolaire = new wxButton( sbSizer3->GetStaticBox(), wxID_ANY, wxT("Passage Non Scolaire"), wxDefaultPosition, wxSize( 150,-1 ), 0 );
	sbSizer3->Add( m_button_passage_non_scolaire, 0, wxALL, 5 );

	m_button_passage_scolaire = new wxButton( sbSizer3->GetStaticBox(), wxID_ANY, wxT("Passage Scolaire"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer3->Add( m_button_passage_scolaire, 0, wxALL, 5 );

	m_button_passage_inconnu = new wxButton( sbSizer3->GetStaticBox(), wxID_ANY, wxT("Passage Inconnu"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer3->Add( m_button_passage_inconnu, 0, wxALL, 5 );

	m_button_pass = new wxButton( sbSizer3->GetStaticBox(), wxID_ANY, wxT("Pass"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer3->Add( m_button_pass, 0, wxALL, 5 );


	bSizerPrincipal->Add( sbSizer3, 0, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxVERTICAL );

	m_textCtrl2 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxHSCROLL|wxTE_MULTILINE|wxTE_READONLY );
	bSizer7->Add( m_textCtrl2, 1, wxALL|wxEXPAND, 5 );


	bSizerPrincipal->Add( bSizer7, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );

	m_button_demande_fin = new wxButton( this, wxID_ANY, wxT("Demande FIN"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_button_demande_fin, 0, wxALIGN_CENTER|wxALL, 5 );


	bSizerPrincipal->Add( bSizer8, 0, wxEXPAND, 5 );


	this->SetSizer( bSizerPrincipal );
	this->Layout();

	this->Centre( wxBOTH );
}

FramePrincipal::~FramePrincipal()
{
}
