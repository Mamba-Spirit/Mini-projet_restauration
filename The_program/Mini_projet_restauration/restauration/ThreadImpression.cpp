#include "ThreadImpression.h"

ThreadImpression::ThreadImpression(CommunicationThread *ct): wxThread(wxTHREAD_JOINABLE)
{
    m_imprimante.open ("./sortie imprimante",ios::out); //on utilise un fichier sinon cf.ligne suivante
//	m_imprimante.open ("/dev/lp0",ios::out);
    if (!m_imprimante) 	cerr <<"Erreur ouverture port imprimante"<< endl;

    m_imprimante<< "imprimante initialisée"<<endl;
}

ThreadImpression::~ThreadImpression()
{
}

void ThreadImpression::OnExit()
{
    m_imprimante.close();
    std::cout << "fin du thread d'impression"<<std::endl;
}

void *ThreadImpression::Entry()
{
    bool fin=false;
    while (!fin || !m_ct_traitementPCB_impression_Ptr->FileVide())
    {
        PorteurCodeBarres pcb=m_ct_traitementPCB_impression_Ptr->RecupereDansFile();
        if  (pcb.FinDemandee())
            fin=true;
        else if (!pcb.EstScolaire())
            m_imprimante<<"passage d'un non scolaire"<<endl;
    }
    return NULL;
}
