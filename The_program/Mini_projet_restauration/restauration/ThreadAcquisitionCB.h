#ifndef THREADACQUISITIONCB_H
#define THREADACQUISITIONCB_H

#include <wx/wx.h>
#include "EvtFramePrincipal.h"
#include "CommunicationThread.h"



class ThreadAcquisitionCB : public wxThread
{
public:
    ThreadAcquisitionCB(EvtFramePrincipal *frame, CommunicationThread *commThread);
    ~ThreadAcquisitionCB();
    
    virtual void* Entry();
    virtual void OnExit();
private:
    EvtFramePrincipal* m_frame;
    CommunicationThread* m_commThread;
    bool m_fin_demandee;
};

#endif // THREADACQUISITIONCB_H
