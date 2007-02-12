// $Id$
#include "Controller_exec.h"
#include "ciao/CIAO_common.h"

namespace CIAO
{
  namespace RACE
  {
    namespace CIDL_Controller_Impl
    {
      Controller_exec_i::Controller_exec_i (void)
      {
      }

      Controller_exec_i::~Controller_exec_i (void)
      {
      }

      // Supported operations.
      void
      Controller_exec_i::start ()
      {}

      void
      Controller_exec_i::stop ()
      {}

      // Attribute operations.

      ::CORBA::Double
      Controller_exec_i::sampling_period ()
      {
        // Your code here.
        return 0.0;
      }

      // Port operations.

      // Operations from Components::SessionComponent

      void
      Controller_exec_i::set_session_context (
        ::Components::SessionContext_ptr ctx)
      {
        this->context_ = Controller_Context::_narrow (ctx);

        if (this->context_ == 0)
        {
          throw CORBA::INTERNAL ();
        }
      }

      void
      Controller_exec_i::ciao_preactivate ()
      {
        // Your code here.
      }

      void
      Controller_exec_i::ciao_postactivate ()
      {
        // Your code here.
      }

      void
      Controller_exec_i::ccm_activate ()
      {
        // Your code here.
      }

      void
      Controller_exec_i::ccm_passivate ()
      {
        // Your code here.
      }

      void
      Controller_exec_i::ccm_remove ()
      {
        // Your code here.
      }

      //==================================================================
      // Home Executor Implementation Class:   Controller_Home_exec_i
      //==================================================================

      Controller_Home_exec_i::Controller_Home_exec_i (void)
      {
      }

      Controller_Home_exec_i::~Controller_Home_exec_i (void)
      {
      }

      // Supported or inherited operations.

      // Home operations.

      // Factory and finder operations.

      // Attribute operations.

      // Implicit operations.

      ::Components::EnterpriseComponent_ptr
      Controller_Home_exec_i::create ()
      {
        ::Components::EnterpriseComponent_ptr retval =
        ::Components::EnterpriseComponent::_nil ();

        ACE_NEW_THROW_EX (
          retval,
          Controller_exec_i,
          CORBA::NO_MEMORY ());

        return retval;
      }

      extern "C" CONTROLLER_EXEC_Export ::Components::HomeExecutorBase_ptr
      create_CIAO_RACE_Controller_Home_Impl (void)
      {
        ::Components::HomeExecutorBase_ptr retval =
        ::Components::HomeExecutorBase::_nil ();

        ACE_NEW_RETURN (
          retval,
          Controller_Home_exec_i,
          ::Components::HomeExecutorBase::_nil ());

        return retval;
      }
    }
  }
}
