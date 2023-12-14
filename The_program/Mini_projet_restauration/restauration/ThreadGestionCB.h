#ifndef THREADGESTIONCB_H
#define THREADGESTIONCB_H

#include "EvtFramePrincipal.h"
#include <queue>
#include <wx/wx.h>
#include "CommunicationThread.h"

class ThreadGestionCB : public wxThread
{
public:
    ThreadGestionCB(EvtFramePrincipal* frame, CommunicationThread* commThread, CommunicationThread* commThread_impression);
    ~ThreadGestionCB();
    virtual void* Entry();
    virtual void OnExit();
private:
    EvtFramePrincipal* m_frame;
    CommunicationThread* m_commThread;
    CommunicationThread* m_commThread_impression;
    bool m_fin_demandee;
};

#endif // THREADGESTIONCB_H
