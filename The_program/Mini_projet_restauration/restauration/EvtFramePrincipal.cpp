#include "EvtFramePrincipal.h"
#include "ThreadAcquisitionCB.h"
EvtFramePrincipal::EvtFramePrincipal( wxWindow* parent )
:
FramePrincipal( parent )
{

    m_Thread_AcquisitioncbFini = false;
    m_Thread_Gestioncbfini = false;
    m_Thread_Impressionfini = false;

    m_communication_pcb = new CommunicationThread(10, 0);
    m_communication_impression = new CommunicationThread(10, 0);

    Connect(ID_THREAD_ACQUISITIONCB, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(EvtFramePrincipal::OnThread_Acquisition_Event), NULL, this);
    Connect(ID_THREAD_GESTIONCB, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(EvtFramePrincipal::OnThread_Gestion_Event), NULL, this);

    m_Thread_AcquisitioncbFini = new ThreadAcquisitionCB(this, m_communication_pcb);
    
    if(m_thread_Acquisition->Create() != wxTHREAD_NO_ERROR){
        wxLogError("Création du thread acquisition impossible!");
    }
    else{
        m_thread_Acquisition->Run();
    }
    
    m_Thread_Gestioncbfini = new ThreadGestionCB(this, m_communication_pcb, m_communication_impression);
    
    if(m_thread_Gestion->Create() != wxTHREAD_NO_ERROR){
        
        wxLogError("Création du thread gestion impossible!");
    }
    else{
        m_thread_Gestion->Run();
    }



}

void EvtFramePrincipal::OnClose_Click( wxCloseEvent& event )
{
// TODO: Implement OnClose_Click
     if (m_Thread_AcquisitioncbFini && m_Thread_Gestioncbfini && m_Thread_AcquisitioncbFini)
    {
        Destroy();
    }
    else
    {
        m_textCtrlLog->AppendText("Pour arrêter le programme, cliquez sur le bouton ' Demande FIN' \ou attendez que le consommateur ait fini\n");
    }
}

void EvtFramePrincipal::OnButton_passage_non_scolaire_Click( wxCommandEvent& event )
{
// TODO: Implement OnButton_passage_non_scolaire_Click
}

void EvtFramePrincipal::OnButton_passage_scolaire_Click( wxCommandEvent& event )
{
// TODO: Implement OnButton_passage_scolaire_Click
}

void EvtFramePrincipal::OnButton_passage_inconnu_Click( wxCommandEvent& event )
{
// TODO: Implement OnButton_passage_inconnu_Click
}

void EvtFramePrincipal::OnButton_pass_Click( wxCommandEvent& event )
{
// TODO: Implement OnButton_pass_Click
}


void EvtFramePrincipal::OnThread_Gestion_Event(wxCommandEvent& event)
{
    if(event.GetString().IsSameAs("FIN")){
         m_textCtrlLog->AppendText("Le thread gestion a signalé qu'il avait fini.\n");
         m_Thread_Gestioncbfini = true;
         Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(EvtFramePrincipal::OnThread_Gestion_Event));
    }
}

void EvtFramePrincipal::OnThread_Acquisition_Event(wxCommandEvent& event)
{
    
    if(event.GetString().IsSameAs("FIN")){
        m_textCtrlLog->AppendText("Le thread acquisition a signalé qu'il avait fini.\n");
        m_Thread_AcquisitioncbFini= true;
        Disconnect( wxEVT_COMMAND_BUTTON_CLICKED,wxCommandEventHandler( EvtFramePrincipal::OnThread_Acquisition_Event));
    }
}