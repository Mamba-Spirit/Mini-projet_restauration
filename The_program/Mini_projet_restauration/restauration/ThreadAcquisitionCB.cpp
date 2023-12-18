#include "ThreadAcquisitionCB.h"
#include <cstdlib>
#include <ctime>


ThreadAcquisitionCB::ThreadAcquisitionCB(){
    
}

ThreadAcquisitionCB::ThreadAcquisitionCB(EvtFramePrincipal *frame, CommunicationThread* commThread): wxThread()
{
    m_frame = frame;
    m_commThread = commThread;
    m_fin_demandee = false;
}

ThreadAcquisitionCB::~ThreadAcquisitionCB()
{
}

void ThreadAcquisitionCB::OnExit() {
    // Nettoyer les ressources à la sortie du thread si nécessaire
    // ...
    // on envoie le message de fin
	wxString chaine  = "";
    wxCommandEvent MyEvent( wxEVT_COMMAND_BUTTON_CLICKED,ID_THREAD_ACQUISITIONCB);
	chaine<<"FIN";
    MyEvent.SetString(chaine);
    wxPostEvent(m_frame, MyEvent);
    //std::cout << "Thread d'acquisition terminé." << std::endl;
}

void* ThreadAcquisitionCB::Entry() {
    wxString chaine = "";
    wxCommandEvent MyEvent(wxEVT_COMMAND_BUTTON_CLICKED, ID_THREAD_ACQUISITIONCB);
    srand(time(0));
    while (!m_fin_demandee) {
        
        PorteurCodeBarres pcb;
		long randomCode = rand()% 900000+ 100000;
        pcb.SetCode(randomCode);
		
		m_commThread->MetDansFile(pcb);
		
        wxPostEvent(m_frame, MyEvent);
        // Pause pour simuler l'acquisition continue
        wxMilliSleep(500);
    }

    return nullptr;
}
