#ifndef THREADIMPRESSION_H
#define THREADIMPRESSION_H

#include <wx/wx.h>
#include "CommunicationThread.h"
#include <fstream>
//using namespace std;
using std::ofstream;
using std::endl;
using std::ios;
using std::cerr;
using std::ostringstream;


class ThreadImpression : public wxThread
{
public:
    ThreadImpression(CommunicationThread *ct);
    ~ThreadImpression();
    
    virtual void *Entry();
    virtual void OnExit();
    
private:
    CommunicationThread *m_ct_traitementPCB_impression_Ptr;
    ofstream m_imprimante;
};

#endif // THREADIMPRESSION_H
