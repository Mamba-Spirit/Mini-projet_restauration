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

