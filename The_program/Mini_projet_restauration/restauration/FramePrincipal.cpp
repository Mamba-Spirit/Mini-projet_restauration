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

	m_textCtrlLog = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxHSCROLL|wxTE_MULTILINE|wxTE_READONLY );
	bSizer7->Add( m_textCtrlLog, 1, wxALL|wxEXPAND, 5 );


	bSizerPrincipal->Add( bSizer7, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );

	m_button_demande_fin = new wxButton( this, wxID_ANY, wxT("Demande FIN"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_button_demande_fin, 0, wxALIGN_CENTER|wxALL, 5 );


	bSizerPrincipal->Add( bSizer8, 0, wxEXPAND, 5 );


	this->SetSizer( bSizerPrincipal );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( FramePrincipal::OnClose_Click ) );
	m_button_passage_non_scolaire->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::OnButton_passage_non_scolaire_Click ), NULL, this );
	m_button_passage_scolaire->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::OnButton_passage_scolaire_Click ), NULL, this );
	m_button_passage_inconnu->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::OnButton_passage_inconnu_Click ), NULL, this );
	m_button_pass->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::OnButton_pass_Click ), NULL, this );
	m_button_demande_fin->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::OnButton_demande_fin_Click ), NULL, this );
}

FramePrincipal::~FramePrincipal()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( FramePrincipal::OnClose_Click ) );
	m_button_passage_non_scolaire->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::OnButton_passage_non_scolaire_Click ), NULL, this );
	m_button_passage_scolaire->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::OnButton_passage_scolaire_Click ), NULL, this );
	m_button_passage_inconnu->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::OnButton_passage_inconnu_Click ), NULL, this );
	m_button_pass->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::OnButton_pass_Click ), NULL, this );
	m_button_demande_fin->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::OnButton_demande_fin_Click ), NULL, this );

}
