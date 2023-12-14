#include "CommunicationThread.h"
#include "EvtFramePrincipal.h"


CommunicationThread::CommunicationThread(int nbre_places_libres, int nbre_places_occupees)
{
    m_semOccupeFile=new wxSemaphore (nbre_places_occupees);
    m_semLibreFile=new wxSemaphore (nbre_places_libres);
}

CommunicationThread::~CommunicationThread()
{
    delete m_semLibreFile;
    delete m_semOccupeFile;
}

PorteurCodeBarres CommunicationThread::RecupereDansFile()
{
    PorteurCodeBarres pcb;
    // on attend une valeur
    m_semOccupeFile->Wait();
    m_mutexFile.Lock();
    pcb=m_file.front();//on récupère la valeur de la file
    m_file.pop();//on la supprime
    m_mutexFile.Unlock();
    m_semLibreFile->Post();// on libère une place
    
    return pcb;
}

void CommunicationThread::MetDansFile(PorteurCodeBarres pcb)
{
    // on attend une place libre
    m_semLibreFile->Wait();
    // on met le pcb dans la file
    m_mutexFile.Lock();
    m_file.push (pcb);
    m_mutexFile.Unlock();
    // on indique une place occupée
    m_semOccupeFile->Post();
}

bool CommunicationThread::FileVide()
{
    if (m_file.size()==0)
        return true;
    else
        return false;
}