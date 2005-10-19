// $Id$
#ifndef CALLBACK_I_H
#define CALLBACK_I_H

#include "CSD_TP_Foo_B_Export.h"
#include "CallbackS.h"
#include "Foo_B_Statistics.h"


class CSD_TP_Foo_B_Export Callback_i
                              : public virtual POA_Callback,
                                public virtual PortableServer::RefCountServantBase
{
  public:

    Callback_i();

    virtual ~Callback_i();

    virtual void test_method(ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS) 
      ACE_THROW_SPEC((CORBA::SystemException));

    void gather_stats(Foo_B_Statistics& stats);


  private:

     ACE_Atomic_Op <ACE_SYNCH_MUTEX, unsigned> num_callbacks_;
};


#endif
