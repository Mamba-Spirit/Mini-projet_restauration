#include "ThreadGestionCB.h"


ThreadGestionCB::ThreadGestionCB(EvtFramePrincipal* frame, CommunicationThread* commThread, CommunicationThread* commThread_impression) : wxThread(wxTHREAD_DETACHED)
{
    m_frame = frame;
    m_commThread = commThread;
    m_commThread_impression = commThread_impression;
    m_fin_demandee = false;
}

ThreadGestionCB::~ThreadGestionCB()
{
}

void ThreadGestionCB::OnExit() {
    
    wxCommandEvent MyEvent( wxEVT_COMMAND_BUTTON_CLICKED,ID_THREAD_GESTIONCB);
    MyEvent.SetString("FIN");
    wxPostEvent(m_frame, MyEvent);
    std::cout << "Thread de gestion des codes-barres terminé." << std::endl;
}

void* ThreadGestionCB::Entry() {
    
    wxCommandEvent MyEvent( wxEVT_COMMAND_BUTTON_CLICKED,ID_THREAD_GESTIONCB);
    
    while (!m_fin_demandee || (m_commThread->FileVide())) {
        
        // Récupérer un code-barres depuis la file de communication
        
        PorteurCodeBarres pcb = m_commThread->RecupereDansFile();
        
        
        std::cout << "Code-barres reçu : " << pcb.GetCode() << std::endl;
        std::cout << "Code " << (pcb.EstValide() ? "valide" : "invalide") << std::endl;

        // Ajouter votre logique de gestion des codes-barres ici
        
        //m_commThread_impression
        m_commThread->MetDansFile(pcb);
        // Pause pour simuler le traitement
        wxMilliSleep(500);
    }

    return nullptr;
}


