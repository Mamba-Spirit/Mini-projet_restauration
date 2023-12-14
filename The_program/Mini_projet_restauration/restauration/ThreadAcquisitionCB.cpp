#include "ThreadAcquisitionCB.h"
#include <cstdlib>
#include <ctime>


ThreadAcquisitionCB::ThreadAcquisitionCB(){
    
}

ThreadAcquisitionCB::ThreadAcquisitionCB(EvtFramePrincipal *frame, CommunicationThread* commThread): wxThread(wxTHREAD_DETACHED)
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
    wxCommandEvent MyEvent( wxEVT_COMMAND_BUTTON_CLICKED,ID_THREAD_ACQUISITIONCB);
    MyEvent.SetString("FIN");
    wxPostEvent(m_frame, MyEvent);
    //std::cout << "Thread d'acquisition terminé." << std::endl;
}

void* ThreadAcquisitionCB::Entry() {
    
    wxCommandEvent MyEvent(wxEVT_COMMAND_BUTTON_CLICKED, ID_THREAD_ACQUISITIONCB);
    srand(time(0));
    while (!m_fin_demandee) {
        
        PorteurCodeBarres pcb;
        int randomCode = rand()% 4+ 1;
        
        if(randomCode){
            pcb.SetValide(true);
        }
        else{
            pcb.SetValide(false);
        }
        pcb.SetCode(randomCode);
        m_commThread->MetDansFile(pcb);
        
        // Pause pour simuler l'acquisition continue
        wxMilliSleep(500);
    }

    return nullptr;
}
