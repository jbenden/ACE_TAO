// $Id$
//
// ****              Code generated by the                 ****
// ****  Component Integrated ACE ORB (CIAO) CIDL Compiler ****
// CIAO has been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// CIDL Compiler has been developed by:
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about CIAO is available at:
//    http://www.dre.vanderbilt.edu/CIAO

#ifndef CIAO_GLUE_SESSION_BMCLOSEDED_SVNT_H
#define CIAO_GLUE_SESSION_BMCLOSEDED_SVNT_H

#include /**/ "ace/pre.h"

#include "BMClosedEDEC.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "ciao/Container_Base.h"
#include "ciao/Servant_Impl_T.h"
#include "ciao/Context_Impl_T.h"
#include "ciao/Home_Servant_Impl_T.h"
#include "ace/Active_Map_Manager_T.h"

#include "../BasicSPS.h"
#include "BMClosedEDS.h"

namespace BMClosedED_Impl
{
  namespace CIAO_GLUE_BasicSP
  {
    template <typename T>
    class ReadData_Servant_T
    : public virtual POA_BasicSP::ReadData,
    public virtual PortableServer::RefCountServantBase
    {
      public:
      ReadData_Servant_T (
      ::BasicSP::CCM_ReadData_ptr executor,
      ::Components::CCMContext_ptr ctx);

      virtual ~ReadData_Servant_T (void);

      virtual char *
      get_data (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((CORBA::SystemException));

      // Get component implementation.
      virtual CORBA::Object_ptr
      _get_component (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((CORBA::SystemException));


      protected:
      // Facet executor.
      ::BasicSP::CCM_ReadData_var executor_;

      // Context object.
      ::Components::CCMContext_var ctx_;
    };

    typedef BMCLOSEDED_SVNT_Export ReadData_Servant_T<int> ReadData_Servant;
  }

  namespace CIAO_GLUE_BasicSP
  {
    class BMClosedED_Servant;

    class BMCLOSEDED_SVNT_Export BMClosedED_Context
      : public virtual CIAO::Context_Impl<
          ::BasicSP::CCM_BMClosedED_Context,
          BMClosedED_Servant,
          ::BasicSP::BMClosedED,
          ::BasicSP::BMClosedED_var
        >
    {
      public:
      // We will allow the servant glue code we generate to access our state.
      friend class BMClosedED_Servant;

      /// Hack for VC6.
      typedef CIAO::Context_Impl<
          ::BasicSP::CCM_BMClosedED_Context,
          BMClosedED_Servant,
          ::BasicSP::BMClosedED,
          ::BasicSP::BMClosedED_var
        > ctx_svnt_base;

      BMClosedED_Context (
      ::Components::CCMHome_ptr home,
      ::CIAO::Session_Container *c,
      BMClosedED_Servant *sv);

      virtual ~BMClosedED_Context (void);

      // Operations for BMClosedED receptacles and event sources,
      // defined in ::BasicSP::CCM_BMClosedED_Context.

      virtual ::BasicSP::ReadData_ptr
      get_connection_datain (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((CORBA::SystemException));

      virtual void
      push_out_avail (
      ::BasicSP::DataAvailable *ev
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((CORBA::SystemException));

      // CIAO-specific.

      static BMClosedED_Context *
      _narrow (
      ::Components::SessionContext_ptr p
      ACE_ENV_ARG_DECL_WITH_DEFAULTS);

      protected:
      // Methods that manage this component's connections and consumers.

      virtual void
      connect_datain (
      ::BasicSP::ReadData_ptr
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((
      ::CORBA::SystemException,
      ::Components::AlreadyConnected,
      ::Components::InvalidConnection));

      virtual ::BasicSP::ReadData_ptr
      disconnect_datain (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((
      ::CORBA::SystemException,
      ::Components::NoConnection));

      virtual ::Components::Cookie *
      subscribe_out_avail (
      ::BasicSP::DataAvailableConsumer_ptr c
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((
      ::CORBA::SystemException,
      ::Components::ExceededConnectionLimit));

      virtual ::BasicSP::DataAvailableConsumer_ptr
      unsubscribe_out_avail (
      ::Components::Cookie *ck
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((
      ::CORBA::SystemException,
      ::Components::InvalidConnection));

      protected:
      // Simplex datain connection.
      ::BasicSP::ReadData_var
      ciao_uses_datain_;

      ACE_Active_Map_Manager<
      ::BasicSP::DataAvailableConsumer_var>
      ciao_publishes_out_avail_map_;
    };
  }

  namespace CIAO_GLUE_BasicSP
  {
    class BMCLOSEDED_SVNT_Export BMClosedED_Servant
      : public virtual CIAO::Servant_Impl<
          POA_BasicSP::BMClosedED,
          ::BasicSP::CCM_BMClosedED,
          ::BasicSP::CCM_BMClosedED_var,
          BMClosedED_Context
        >
    {
      public:
      /// Hack for VC6.
      typedef CIAO::Servant_Impl<
          POA_BasicSP::BMClosedED,
          ::BasicSP::CCM_BMClosedED,
          ::BasicSP::CCM_BMClosedED_var,
          BMClosedED_Context
        > comp_svnt_base;

      BMClosedED_Servant (
      ::BasicSP::CCM_BMClosedED_ptr executor,
      ::Components::CCMHome_ptr home,
      ::CIAO::Session_Container *c);

      virtual ~BMClosedED_Servant (void);

      virtual void
      set_attributes (
      const ::Components::ConfigValues &descr
      ACE_ENV_ARG_DECL);

      // Supported operations.
      virtual void
      component_UUID (
      const char * new_component_UUID
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((CORBA::SystemException));

      virtual CIAO::CONNECTION_ID
      component_UUID (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((CORBA::SystemException));

      // Public port operations.

      virtual ::BasicSP::ReadData_ptr
      provide_dataout (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((CORBA::SystemException));

      virtual void
      connect_datain (
      ::BasicSP::ReadData_ptr c
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((
      ::CORBA::SystemException,
      ::Components::AlreadyConnected,
      ::Components::InvalidConnection));

      virtual ::BasicSP::ReadData_ptr
      disconnect_datain (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((
      ::CORBA::SystemException,
      ::Components::NoConnection));

      virtual ::BasicSP::ReadData_ptr
      get_connection_datain (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((CORBA::SystemException));

      virtual ::Components::Cookie *
      subscribe_out_avail (
      ::BasicSP::DataAvailableConsumer_ptr c
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((
      ::CORBA::SystemException,
      ::Components::ExceededConnectionLimit));

      virtual ::BasicSP::DataAvailableConsumer_ptr
      unsubscribe_out_avail (
      ::Components::Cookie *ck
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((
      ::CORBA::SystemException,
      ::Components::InvalidConnection));

      // Servant class for the in_avail consumer.
      class BMCLOSEDED_SVNT_Export DataAvailableConsumer_in_avail_Servant
      : public virtual POA_BasicSP::DataAvailableConsumer,
      public virtual PortableServer::RefCountServantBase
      {
        public:
        DataAvailableConsumer_in_avail_Servant (
        ::BasicSP::CCM_BMClosedED_ptr executor,
        ::BasicSP::CCM_BMClosedED_Context_ptr c);

        virtual ~DataAvailableConsumer_in_avail_Servant (void);

        virtual void
        push_DataAvailable (
        ::BasicSP::DataAvailable *evt
        ACE_ENV_ARG_DECL_WITH_DEFAULTS)
        ACE_THROW_SPEC ((CORBA::SystemException));

        // Inherited from ::Components::EventConsumerBase.
        virtual void
        push_event (::Components::EventBase *ev
        ACE_ENV_ARG_DECL_WITH_DEFAULTS)
        ACE_THROW_SPEC ((
        ::CORBA::SystemException,
        ::Components::BadEventType));

        // Get component implementation.
        virtual CORBA::Object_ptr
        _get_component (
        ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)
        ACE_THROW_SPEC ((CORBA::SystemException));

        protected:
        ::BasicSP::CCM_BMClosedED_var
        executor_;

        ::BasicSP::CCM_BMClosedED_Context_var
        ctx_;
      };

      virtual ::BasicSP::DataAvailableConsumer_ptr
      get_consumer_in_avail (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((CORBA::SystemException));

      // Component attribute operations.

      // Operations for Receptacles interface.

      virtual ::Components::Cookie *
      connect (
      const char *name,
      CORBA::Object_ptr connection
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((
      ::CORBA::SystemException,
      ::Components::InvalidName,
      ::Components::InvalidConnection,
      ::Components::AlreadyConnected,
      ::Components::ExceededConnectionLimit));

      virtual CORBA::Object_ptr
      disconnect (
      const char *name,
      ::Components::Cookie *ck
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((
      ::CORBA::SystemException,
      ::Components::InvalidName,
      ::Components::InvalidConnection,
      ::Components::CookieRequired,
      ::Components::NoConnection));

      // Operations for Events interface.

      virtual ::Components::Cookie *
      subscribe (
      const char *publisher_name,
      ::Components::EventConsumerBase_ptr subscriber
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((
      ::CORBA::SystemException,
      ::Components::InvalidName,
      ::Components::InvalidConnection,
      ::Components::ExceededConnectionLimit));

      virtual ::Components::EventConsumerBase_ptr
      unsubscribe (
      const char *publisher_name,
      ::Components::Cookie *ck
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((
      ::CORBA::SystemException,
      ::Components::InvalidName,
      ::Components::InvalidConnection));

      virtual void
      connect_consumer (
      const char *emitter_name,
      ::Components::EventConsumerBase_ptr consumer
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((
      ::CORBA::SystemException,
      ::Components::InvalidName,
      ::Components::AlreadyConnected,
      ::Components::InvalidConnection));

      // CIAO specific operations on the servant 
      CORBA::Object_ptr
      get_facet_executor (const char *name
      ACE_ENV_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((
      ::CORBA::SystemException));

      private:

      ::BasicSP::ReadData_var
      provide_dataout_;

      ::BasicSP::DataAvailableConsumer_var
      consumes_in_avail_;

      ACE_CString component_UUID_;

      private:

      void
      populate_port_tables (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((CORBA::SystemException));

      ::CORBA::Object_ptr
      provide_dataout_i (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((CORBA::SystemException));

      ::Components::EventConsumerBase_ptr
      get_consumer_in_avail_i (
      ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((CORBA::SystemException));
    };
  }

  namespace CIAO_GLUE_BasicSP
  {
    class BMCLOSEDED_SVNT_Export BMClosedEDHome_Servant
      : public virtual CIAO::Home_Servant_Impl<
          POA_BasicSP::BMClosedEDHome,
          ::BasicSP::CCM_BMClosedEDHome,
          ::BasicSP::CCM_BMClosedEDHome_var,
          ::BasicSP::BMClosedED,
          ::BasicSP::BMClosedED_var,
          ::BasicSP::CCM_BMClosedED,
          ::BasicSP::CCM_BMClosedED_var,
          BMClosedED_Servant
        >
    {
      public:
      /// Hack for VC6.
      typedef CIAO::Home_Servant_Impl<
          POA_BasicSP::BMClosedEDHome,
          ::BasicSP::CCM_BMClosedEDHome,
          ::BasicSP::CCM_BMClosedEDHome_var,
          ::BasicSP::BMClosedED,
          ::BasicSP::BMClosedED_var,
          ::BasicSP::CCM_BMClosedED,
          ::BasicSP::CCM_BMClosedED_var,
          BMClosedED_Servant
        > home_svnt_base;

      BMClosedEDHome_Servant (
      ::BasicSP::CCM_BMClosedEDHome_ptr exe,
      ::CIAO::Session_Container *c);

      virtual ~BMClosedEDHome_Servant (void);

      // Home operations.

      // Home factory and finder operations.

      // Attribute operations.
    };

    extern "C" BMCLOSEDED_SVNT_Export ::PortableServer::Servant
    createBMClosedEDHome_Servant (
    ::Components::HomeExecutorBase_ptr p,
    CIAO::Session_Container *c
    ACE_ENV_ARG_DECL_WITH_DEFAULTS);
  }
}

#include /**/ "ace/post.h"

#endif /* CIAO_GLUE_SESSION_BMCLOSEDED_SVNT_H */

