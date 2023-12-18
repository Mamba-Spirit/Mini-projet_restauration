#include "ThreadGestionCB.h"


ThreadGestionCB::ThreadGestionCB(EvtFramePrincipal* frame, CommunicationThread* commThread, CommunicationThread* commThread_impression) : wxThread()
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
    wxString chaine = "";
    wxCommandEvent MyEvent( wxEVT_COMMAND_BUTTON_CLICKED,ID_THREAD_GESTIONCB);
	chaine.Clear();
	chaine<<"FIN";
    MyEvent.SetString(chaine);
    wxPostEvent(m_frame, MyEvent);
    std::cout << "Thread de gestion des codes-barres terminé." << std::endl;
}

void* ThreadGestionCB::Entry() {
    wxString chaine = "";
    wxCommandEvent MyEvent( wxEVT_COMMAND_BUTTON_CLICKED,ID_THREAD_GESTIONCB);
    
    while (!m_fin_demandee || (!m_commThread->FileVide())) {
        
		// Récupérer un code-barres depuis la file de communication
        PorteurCodeBarres pcb = m_commThread->RecupereDansFile();
		
        std::cout << "Code-barres reçu : " << pcb.GetCode() << std::endl;
		
		 if (pcb.GetCode() < 750000) {
			 
            pcb.SetValide(true);

            if ((pcb.GetCode() <= 500000) && (pcb.GetCode() >= 300000)) {
				
                pcb.SetScolaire(true);
                //pcb.SetConnu(true);
				chaine.Clear();
				chaine<<"Code scolaire \n";
            } 
			else if ((pcb.GetCode() > 500000) && (pcb.GetCode() <= 750000)) {
				
                pcb.SetScolaire(false);
                //pcb.SetConnu(true);
				chaine.Clear();
				chaine<<"Code non scolaire \n";
            } 
			else {
                pcb.SetConnu(false);
				chaine.Clear();
				chaine<<"Code valide mais inconnu \n";
            }
        } 
		else {
            pcb.SetValide(false);
			chaine.Clear();
			chaine<<"Code non valide \n";
        }
// envoi d'un évenement au frame pour signaler une consommation
		MyEvent.SetString(chaine);
		wxPostEvent(m_frame, MyEvent);

// Afficher des informations sur le code-barres dans la console
		std::cout << "Code " << (pcb.EstValide() ? "valide" : "invalide") << std::endl;
        std::cout <<(pcb.EstScolaire() ? "Compte Scolaire" : "Compte Non Scolaire") << std::endl;
        std::cout << (pcb.EstConnu() ? "Compte valide mais inconnue" : "") << std::endl;
		
		if((pcb.EstValide()) && (!pcb.EstScolaire()) && (pcb.EstConnu())){
			
			 m_commThread_impression->MetDansFile(pcb);
		}
       
        wxMilliSleep(500);
    }

    return nullptr;
}


