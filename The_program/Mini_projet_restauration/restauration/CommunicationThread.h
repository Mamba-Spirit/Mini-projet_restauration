#ifndef COMMUNICATIONTHREAD_H
#define COMMUNICATIONTHREAD_H

#include <wx/thread.h>
#include <PorteurCodeBarres.h>
#include <queue>
using std::queue;

class CommunicationThread
{
public:
    CommunicationThread(int nbre_places_libres, int nbre_places_occupees);
    ~CommunicationThread();
    PorteurCodeBarres RecupereDansFile();
    void MetDansFile(PorteurCodeBarres pcb);
    bool FileVide();
    
private:
    queue <PorteurCodeBarres> m_file;
    wxSemaphore *m_semOccupeFile;
    wxSemaphore *m_semLibreFile;
    wxMutex m_mutexFile;
};

#endif // COMMUNICATIONTHREAD_H
