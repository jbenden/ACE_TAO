// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v1.8.3
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 *       http://www.cs.wustl.edu/~schmidt/doc-center.html
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       http://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     http://www.cs.wustl.edu/~schmidt/TAO.html
 **/

// TAO_IDL - Generated from
// be/be_codegen.cpp:1661

#include "OneProcessA_conn_i.h"

namespace CIAO_OneProcess_Sender_Impl
{
  AMI4CCM_MyFooReplyHandler_i::AMI4CCM_MyFooReplyHandler_i (
      Atomic_Boolean &asynch)
  : asynch_(asynch)
  {
  }

  AMI4CCM_MyFooReplyHandler_i::~AMI4CCM_MyFooReplyHandler_i (void)
  {
  }

  void
  AMI4CCM_MyFooReplyHandler_i::foo (::CORBA::Long ami_return_val,
                                         const char * /* answer */)
  {
    if (ami_return_val == 1)
      {
        ACE_DEBUG ((LM_DEBUG, "OK: GET ASYNCHRONOUS CALLBACK, \n"));
        this->asynch_ = false;
      }
    if (ami_return_val == 2)
      {
        ACE_ERROR ((LM_ERROR, "ERROR: GET ASYNCHRONOUS CALLBACK "
                              "FROM SYNCHRONOUS SENT MESSAGE\n"));
      }
  }

  void
  AMI4CCM_MyFooReplyHandler_i::foo_excep (
      ::CCM_AMI::ExceptionHolder_ptr excep_holder)
  {
    excep_holder->raise_exception ();
  }
}