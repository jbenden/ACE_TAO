/* -*- C++ -*- $Id$ */

// ******  Code generated by the The ACE ORB (TAO) IDL Compiler *******
// TAO and the TAO IDL Compiler have been developed by the Center for
// Distributed Object Computing at Washington University, St. Louis.
//
// Information about TAO is available at:
//                 http://www.cs.wustl.edu/~schmidt/TAO.html

#ifndef _TAO_IDL_MARSHALC_H_
#define _TAO_IDL_MARSHALC_H_

#include "tao/corba.h"

#if defined (ACE_HAS_MINIMUM_IOSTREAMH_INCLUSION)
#include "ace/streams.h"
#endif /* ACE_HAS_MINIMUM_IOSTREAMH_INCLUSION */

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO 

#if defined (TAO_EXPORT_NESTED_CLASSES)
#  if defined (TAO_EXPORT_NESTED_MACRO)
#    undef TAO_EXPORT_NESTED_MACRO
#  endif /* defined (TAO_EXPORT_NESTED_MACRO) */
#  define TAO_EXPORT_NESTED_MACRO 
#endif /* TAO_EXPORT_NESTED_CLASSES */

#if defined(_MSC_VER)
#if (_MSC_VER >= 1200)
#pragma warning(push)
#endif /* _MSC_VER >= 1200 */
#pragma warning(disable:4250)
#endif /* _MSC_VER */


#if !defined (_MARSHAL___PTR_CH_)
#define _MARSHAL___PTR_CH_

class Marshal;
typedef Marshal *Marshal_ptr;

#endif /* end #if !defined */


#if !defined (_MARSHAL___VAR_CH_)
#define _MARSHAL___VAR_CH_

class  Marshal_var
{
public:
  Marshal_var (void); // default constructor
  Marshal_var (Marshal_ptr);
  Marshal_var (const Marshal_var &); // copy constructor
  ~Marshal_var (void); // destructor
  
  Marshal_var &operator= (Marshal_ptr);
  Marshal_var &operator= (const Marshal_var &);
  Marshal_ptr operator-> (void) const;
  
  operator const Marshal_ptr &() const;
  operator Marshal_ptr &();
  // in, inout, out, _retn 
  Marshal_ptr in (void) const;
  Marshal_ptr &inout (void);
  Marshal_ptr &out (void);
  Marshal_ptr _retn (void);
  Marshal_ptr ptr (void) const;

private:
  Marshal_ptr ptr_;
};


#endif /* end #if !defined */


#if !defined (_MARSHAL___OUT_CH_)
#define _MARSHAL___OUT_CH_

class  Marshal_out
{
public:
  Marshal_out (Marshal_ptr &);
  Marshal_out (Marshal_var &);
  Marshal_out (const Marshal_out &);
  Marshal_out &operator= (const Marshal_out &);
  Marshal_out &operator= (const Marshal_var &);
  Marshal_out &operator= (Marshal_ptr);
  operator Marshal_ptr &();
  Marshal_ptr &ptr (void);
  Marshal_ptr operator-> (void);
  
private:
  Marshal_ptr &ptr_;
};


#endif /* end #if !defined */


#if !defined (_MARSHAL_CH_)
#define _MARSHAL_CH_

class  Marshal : public virtual ACE_CORBA_1 (Object)
{
public:
#if !defined(__GNUC__) || !defined (ACE_HAS_GNUG_PRE_2_8)
  typedef Marshal_ptr _ptr_type;
  typedef Marshal_var _var_type;
#endif /* ! __GNUC__ || g++ >= 2.8 */

  // the static operations
  static Marshal_ptr _duplicate (Marshal_ptr obj);
  static Marshal_ptr _narrow (
      CORBA::Object_ptr obj,
      CORBA::Environment &env = 
        TAO_default_environment ()
    );
  static Marshal_ptr _unchecked_narrow (
      CORBA::Object_ptr obj,
      CORBA::Environment &env = 
        TAO_default_environment ()
    );
  static Marshal_ptr _nil (void)
    {
      return (Marshal_ptr)0;
    }

  static void _tao_any_destructor (void*);

  struct Marshal_Struct;
  class Marshal_Struct_var;
  
  struct  Marshal_Struct
  {

#if !defined(__GNUC__) || !defined (ACE_HAS_GNUG_PRE_2_8)
    typedef Marshal_Struct_var _var_type;
#endif /* ! __GNUC__ || g++ >= 2.8 */

    static void _tao_any_destructor (void*);

    CORBA::Short s;
    CORBA::Long l;
    CORBA::Char c;
    CORBA::Octet o;
    CORBA::Double d;
  };

  class  Marshal_Struct_var
  {
  public:
    Marshal_Struct_var (void); // default constructor
    Marshal_Struct_var (Marshal_Struct *);
    Marshal_Struct_var (const Marshal_Struct_var &); // copy constructor
    Marshal_Struct_var (const Marshal_Struct &); // fixed-size types only
    ~Marshal_Struct_var (void); // destructor
    
    Marshal_Struct_var &operator= (Marshal_Struct *);
    Marshal_Struct_var &operator= (const Marshal_Struct_var &);
    Marshal_Struct_var &operator= (const Marshal_Struct &); // fixed-size types only
    Marshal_Struct *operator-> (void);
    const Marshal_Struct *operator-> (void) const;
    
    operator const Marshal_Struct &() const;
    operator Marshal_Struct &();
    operator Marshal_Struct &() const;
    
    // in, inout, out, _retn 
    const Marshal_Struct &in (void) const;
    Marshal_Struct &inout (void);
    Marshal_Struct &out (void);
    Marshal_Struct _retn (void);
    Marshal_Struct *ptr (void) const;

  private:
    Marshal_Struct *ptr_;
  };

  typedef Marshal_Struct &Marshal_Struct_out;

  static CORBA::TypeCode_ptr _tc_Marshal_Struct;

  enum discrim
  {
        e_0th,
        e_1st,
        e_2nd,
        e_3rd,
        e_4th,
        e_5th,
        e_6th,
        discrim_TAO_ENUM_32BIT_ENFORCER = 0x7FFFFFFF
  };
  typedef discrim &discrim_out;
  static CORBA::TypeCode_ptr _tc_discrim;


#if !defined (_MARSHAL_MARSHAL_UNION_CH_)
#define _MARSHAL_MARSHAL_UNION_CH_

  class Marshal_Union;
  class Marshal_Union_var;
  
  class  Marshal_Union: public TAO_Base_Union 
  {
  public:
    Marshal_Union (void);
    Marshal_Union (const Marshal_Union &);
    ~Marshal_Union (void);
    static void _tao_any_destructor (void*);

    Marshal_Union &operator= (const Marshal_Union &);

    void _d (ACE_NESTED_CLASS (Marshal, discrim));
    ACE_NESTED_CLASS (Marshal, discrim) _d (void) const;

#if !defined(__GNUC__) || !defined (ACE_HAS_GNUG_PRE_2_8)
    typedef Marshal_Union_var _var_type;
#endif /* ! __GNUC__ || g++ >= 2.8 */
    void s (CORBA::Short);// set
    CORBA::Short s (void) const; // get method

    void l (CORBA::Long);// set
    CORBA::Long l (void) const; // get method

    void c (CORBA::Char);// set
    CORBA::Char c (void) const; // get method

    void o (CORBA::Octet);// set
    CORBA::Octet o (void) const; // get method

    void d (CORBA::Double);// set
    CORBA::Double d (void) const; // get method

    void ms (const ACE_NESTED_CLASS (Marshal, Marshal_Struct) &);// set
    const ACE_NESTED_CLASS (Marshal, Marshal_Struct) &ms (void) const; // get method (read only)
    ACE_NESTED_CLASS (Marshal, Marshal_Struct) &ms (void); // get method (read/write only)

  private:
    ACE_NESTED_CLASS (Marshal, discrim) disc_;
    ACE_NESTED_CLASS (Marshal, discrim) holder_;
    union
    {
      CORBA::Short s_;
      CORBA::Long l_;
      CORBA::Char c_;
      CORBA::Octet o_;
      CORBA::Double d_;
      ACE_NESTED_CLASS (Marshal, Marshal_Struct) ms_;
    } u_; // end of union
    // TAO extensions
    void _reset (ACE_NESTED_CLASS (Marshal, discrim), CORBA::Boolean);
    // Frees any allocated storage
    
    virtual void *_discriminant (void);
    // returns pointer to the discriminant
    
    virtual void _reset (void);
    // calls the above reset with finalize=1
    
    virtual void *_access (CORBA::Boolean flag);
    // accesses the right data member. Also will allocate on TRUE flag
    
  }; // Marshal::Marshal_Union

  static CORBA::TypeCode_ptr _tc_Marshal_Union;


#endif /* end #if !defined */


#if !defined (_MARSHAL_MARSHAL_UNION___VAR_CH_)
#define _MARSHAL_MARSHAL_UNION___VAR_CH_

  class  Marshal_Union_var
  {
  public:
    Marshal_Union_var (void); // default constructor
    Marshal_Union_var (Marshal_Union *);
    Marshal_Union_var (const Marshal_Union_var &); // copy constructor
    Marshal_Union_var (const Marshal_Union &); // fixed-size types only
    ~Marshal_Union_var (void); // destructor
    
    Marshal_Union_var &operator= (Marshal_Union *);
    Marshal_Union_var &operator= (const Marshal_Union_var &);
    Marshal_Union_var &operator= (const Marshal_Union &); // fixed-size types only
    Marshal_Union *operator-> (void);
    const Marshal_Union *operator-> (void) const;
    
    operator const Marshal_Union &() const;
    operator Marshal_Union &();
    operator Marshal_Union &() const;
    
    // in, inout, out, _retn 
    const Marshal_Union &in (void) const;
    Marshal_Union &inout (void);
    Marshal_Union &out (void);
    Marshal_Union _retn (void);
    Marshal_Union *ptr(void) const;

  private:
    Marshal_Union *ptr_;
  };


#endif /* end #if !defined */


#if !defined (_MARSHAL_MARSHAL_UNION___OUT_CH_)
#define _MARSHAL_MARSHAL_UNION___OUT_CH_

  typedef Marshal_Union &Marshal_Union_out;


#endif /* end #if !defined */


#if !defined (TAO_USE_SEQUENCE_TEMPLATES)
    
#if !defined (__TAO_UNBOUNDED_SEQUENCE_MARSHAL_ANYSEQ_CH_)
#define __TAO_UNBOUNDED_SEQUENCE_MARSHAL_ANYSEQ_CH_

    class TAO_EXPORT_NESTED_MACRO _TAO_Unbounded_Sequence_Marshal_AnySeq : public TAO_Unbounded_Base_Sequence
    {
    public:
      // = Initialization and termination methods.
      
      _TAO_Unbounded_Sequence_Marshal_AnySeq (void); // Default constructor.
      _TAO_Unbounded_Sequence_Marshal_AnySeq (CORBA::ULong maximum); 
      _TAO_Unbounded_Sequence_Marshal_AnySeq (CORBA::ULong maximum,
        CORBA::ULong length,
        CORBA::Any *data,
        CORBA::Boolean release = 0);
      _TAO_Unbounded_Sequence_Marshal_AnySeq (const _TAO_Unbounded_Sequence_Marshal_AnySeq &rhs);
      _TAO_Unbounded_Sequence_Marshal_AnySeq &operator= (const _TAO_Unbounded_Sequence_Marshal_AnySeq &rhs);
      virtual ~_TAO_Unbounded_Sequence_Marshal_AnySeq (void); // Dtor.
      // = Accessors.
      CORBA::Any &operator[] (CORBA::ULong i);
      const CORBA::Any &operator[] (CORBA::ULong i) const;
      // = Static operations.
      static CORBA::Any *allocbuf (CORBA::ULong size);
      static void freebuf (CORBA::Any *buffer);
      virtual void _allocate_buffer (CORBA::ULong length);
      virtual void _deallocate_buffer (void);
      // Implement the TAO_Base_Sequence methods (see Sequence.h)
      
      CORBA::Any *get_buffer (CORBA::Boolean orphan = 0);
      const CORBA::Any *get_buffer (void) const;
      void replace (CORBA::ULong max,
        CORBA::ULong length,
        CORBA::Any *data,
        CORBA::Boolean release);
    };

#endif /* end #if !defined */


#endif /* !TAO_USE_SEQUENCE_TEMPLATES */ 
  
#if !defined (_MARSHAL_ANYSEQ_CH_)
#define _MARSHAL_ANYSEQ_CH_

  class AnySeq;
  class AnySeq_var;
  
  // *************************************************************
  // AnySeq
  // *************************************************************
  
  class  AnySeq : public 
#if !defined (TAO_USE_SEQUENCE_TEMPLATES)
    _TAO_Unbounded_Sequence_Marshal_AnySeq
#else /* TAO_USE_SEQUENCE_TEMPLATES */
    TAO_Unbounded_Sequence<CORBA::Any>
#endif /* !TAO_USE_SEQUENCE_TEMPLATES */ 
  {
  public:
    AnySeq (void); // default ctor
    AnySeq (CORBA::ULong max); // uses max size
    AnySeq (
      CORBA::ULong max, 
      CORBA::ULong length, 
      CORBA::Any *buffer, 
      CORBA::Boolean release=0
    );
    AnySeq (const AnySeq &); // copy ctor
    ~AnySeq (void);
    static void _tao_any_destructor (void*);

#if !defined(__GNUC__) || !defined (ACE_HAS_GNUG_PRE_2_8)
    typedef AnySeq_var _var_type;
#endif /* ! __GNUC__ || g++ >= 2.8 */

  };

#endif /* end #if !defined */


#if !defined (_MARSHAL_ANYSEQ___VAR_CH_)
#define _MARSHAL_ANYSEQ___VAR_CH_

// *************************************************************
// class Marshal::AnySeq_var
// *************************************************************

class  AnySeq_var
{
public:
  AnySeq_var (void); // default constructor
  AnySeq_var (AnySeq *);
  AnySeq_var (const AnySeq_var &); // copy constructor
  ~AnySeq_var (void); // destructor
  
  AnySeq_var &operator= (AnySeq *);
  AnySeq_var &operator= (const AnySeq_var &);
  AnySeq *operator-> (void);
  const AnySeq *operator-> (void) const;
  
  operator const AnySeq &() const;
  operator AnySeq &();
  operator AnySeq &() const;
  operator AnySeq *&(); // variable-size base types only
  
  CORBA::Any &operator[] (CORBA::ULong index);
  // in, inout, out, _retn 
  const AnySeq &in (void) const;
  AnySeq &inout (void);
  AnySeq *&out (void);
  AnySeq *_retn (void);
  AnySeq *ptr (void) const;

private:
  AnySeq *ptr_;
};


#endif /* end #if !defined */


#if !defined (_MARSHAL_ANYSEQ___OUT_CH_)
#define _MARSHAL_ANYSEQ___OUT_CH_

class  AnySeq_out
{
public:
  AnySeq_out (AnySeq *&);
  AnySeq_out (AnySeq_var &);
  AnySeq_out (const AnySeq_out &);
  AnySeq_out &operator= (const AnySeq_out &);
  AnySeq_out &operator= (AnySeq *);
  operator AnySeq *&();
  AnySeq *&ptr (void);
  AnySeq *operator-> (void);
  CORBA::Any &operator[] (CORBA::ULong index);
  
private:
  AnySeq *&ptr_;
  // assignment from T_var not allowed
  void operator= (const AnySeq_var &);
};


#endif /* end #if !defined */

static CORBA::TypeCode_ptr _tc_AnySeq;

struct Marshal_Recursive;
class Marshal_Recursive_var;

struct  Marshal_Recursive
{

#if !defined(__GNUC__) || !defined (ACE_HAS_GNUG_PRE_2_8)
  typedef Marshal_Recursive_var _var_type;
#endif /* ! __GNUC__ || g++ >= 2.8 */

  static void _tao_any_destructor (void*);

  CORBA::Any value;

#if !defined (TAO_USE_SEQUENCE_TEMPLATES)
    
#if !defined (__TAO_UNBOUNDED_SEQUENCE_MARSHAL_MARSHAL_RECURSIVE__TAO_SEQ_MARSHAL_RECURSIVE_CH_)
#define __TAO_UNBOUNDED_SEQUENCE_MARSHAL_MARSHAL_RECURSIVE__TAO_SEQ_MARSHAL_RECURSIVE_CH_

    class TAO_EXPORT_NESTED_MACRO _TAO_Unbounded_Sequence_Marshal_Marshal_Recursive__tao_seq_Marshal_Recursive : public TAO_Unbounded_Base_Sequence
    {
    public:
      // = Initialization and termination methods.
      
      _TAO_Unbounded_Sequence_Marshal_Marshal_Recursive__tao_seq_Marshal_Recursive (void); // Default constructor.
      _TAO_Unbounded_Sequence_Marshal_Marshal_Recursive__tao_seq_Marshal_Recursive (CORBA::ULong maximum); 
      _TAO_Unbounded_Sequence_Marshal_Marshal_Recursive__tao_seq_Marshal_Recursive (CORBA::ULong maximum,
        CORBA::ULong length,
        ACE_NESTED_CLASS (Marshal, Marshal_Recursive) *data,
        CORBA::Boolean release = 0);
      _TAO_Unbounded_Sequence_Marshal_Marshal_Recursive__tao_seq_Marshal_Recursive (const _TAO_Unbounded_Sequence_Marshal_Marshal_Recursive__tao_seq_Marshal_Recursive &rhs);
      _TAO_Unbounded_Sequence_Marshal_Marshal_Recursive__tao_seq_Marshal_Recursive &operator= (const _TAO_Unbounded_Sequence_Marshal_Marshal_Recursive__tao_seq_Marshal_Recursive &rhs);
      virtual ~_TAO_Unbounded_Sequence_Marshal_Marshal_Recursive__tao_seq_Marshal_Recursive (void); // Dtor.
      // = Accessors.
      ACE_NESTED_CLASS (Marshal, Marshal_Recursive) &operator[] (CORBA::ULong i);
      const ACE_NESTED_CLASS (Marshal, Marshal_Recursive) &operator[] (CORBA::ULong i) const;
      // = Static operations.
      static ACE_NESTED_CLASS (Marshal, Marshal_Recursive) *allocbuf (CORBA::ULong size);
      static void freebuf (ACE_NESTED_CLASS (Marshal, Marshal_Recursive) *buffer);
      virtual void _allocate_buffer (CORBA::ULong length);
      virtual void _deallocate_buffer (void);
      // Implement the TAO_Base_Sequence methods (see Sequence.h)
      
      ACE_NESTED_CLASS (Marshal, Marshal_Recursive) *get_buffer (CORBA::Boolean orphan = 0);
      const ACE_NESTED_CLASS (Marshal, Marshal_Recursive) *get_buffer (void) const;
      void replace (CORBA::ULong max,
        CORBA::ULong length,
        ACE_NESTED_CLASS (Marshal, Marshal_Recursive) *data,
        CORBA::Boolean release);
    };

#endif /* end #if !defined */


#endif /* !TAO_USE_SEQUENCE_TEMPLATES */ 
  
#if !defined (_MARSHAL_MARSHAL_RECURSIVE__TAO_SEQ_MARSHAL_RECURSIVE_CH_)
#define _MARSHAL_MARSHAL_RECURSIVE__TAO_SEQ_MARSHAL_RECURSIVE_CH_

  class _tao_seq_Marshal_Recursive;
  class _tao_seq_Marshal_Recursive_var;
  
  // *************************************************************
  // _tao_seq_Marshal_Recursive
  // *************************************************************
  
  class  _tao_seq_Marshal_Recursive : public 
#if !defined (TAO_USE_SEQUENCE_TEMPLATES)
    _TAO_Unbounded_Sequence_Marshal_Marshal_Recursive__tao_seq_Marshal_Recursive
#else /* TAO_USE_SEQUENCE_TEMPLATES */
    TAO_Unbounded_Sequence<ACE_NESTED_CLASS (Marshal, Marshal_Recursive)>
#endif /* !TAO_USE_SEQUENCE_TEMPLATES */ 
  {
  public:
    _tao_seq_Marshal_Recursive (void); // default ctor
    _tao_seq_Marshal_Recursive (CORBA::ULong max); // uses max size
    _tao_seq_Marshal_Recursive (
      CORBA::ULong max, 
      CORBA::ULong length, 
      ACE_NESTED_CLASS (Marshal, Marshal_Recursive) *buffer, 
      CORBA::Boolean release=0
    );
    _tao_seq_Marshal_Recursive (const _tao_seq_Marshal_Recursive &); // copy ctor
    ~_tao_seq_Marshal_Recursive (void);
    static void _tao_any_destructor (void*);

#if !defined(__GNUC__) || !defined (ACE_HAS_GNUG_PRE_2_8)
    typedef _tao_seq_Marshal_Recursive_var _var_type;
#endif /* ! __GNUC__ || g++ >= 2.8 */

  };

#endif /* end #if !defined */


#if !defined (_MARSHAL_MARSHAL_RECURSIVE__TAO_SEQ_MARSHAL_RECURSIVE___VAR_CH_)
#define _MARSHAL_MARSHAL_RECURSIVE__TAO_SEQ_MARSHAL_RECURSIVE___VAR_CH_

// *************************************************************
// class Marshal::Marshal_Recursive::_tao_seq_Marshal_Recursive_var
// *************************************************************

class  _tao_seq_Marshal_Recursive_var
{
public:
  _tao_seq_Marshal_Recursive_var (void); // default constructor
  _tao_seq_Marshal_Recursive_var (_tao_seq_Marshal_Recursive *);
  _tao_seq_Marshal_Recursive_var (const _tao_seq_Marshal_Recursive_var &); // copy constructor
  ~_tao_seq_Marshal_Recursive_var (void); // destructor
  
  _tao_seq_Marshal_Recursive_var &operator= (_tao_seq_Marshal_Recursive *);
  _tao_seq_Marshal_Recursive_var &operator= (const _tao_seq_Marshal_Recursive_var &);
  _tao_seq_Marshal_Recursive *operator-> (void);
  const _tao_seq_Marshal_Recursive *operator-> (void) const;
  
  operator const _tao_seq_Marshal_Recursive &() const;
  operator _tao_seq_Marshal_Recursive &();
  operator _tao_seq_Marshal_Recursive &() const;
  operator _tao_seq_Marshal_Recursive *&(); // variable-size base types only
  
  ACE_NESTED_CLASS (Marshal, Marshal_Recursive) &operator[] (CORBA::ULong index);
  // in, inout, out, _retn 
  const _tao_seq_Marshal_Recursive &in (void) const;
  _tao_seq_Marshal_Recursive &inout (void);
  _tao_seq_Marshal_Recursive *&out (void);
  _tao_seq_Marshal_Recursive *_retn (void);
  _tao_seq_Marshal_Recursive *ptr (void) const;

private:
  _tao_seq_Marshal_Recursive *ptr_;
};


#endif /* end #if !defined */


#if !defined (_MARSHAL_MARSHAL_RECURSIVE__TAO_SEQ_MARSHAL_RECURSIVE___OUT_CH_)
#define _MARSHAL_MARSHAL_RECURSIVE__TAO_SEQ_MARSHAL_RECURSIVE___OUT_CH_

class  _tao_seq_Marshal_Recursive_out
{
public:
  _tao_seq_Marshal_Recursive_out (_tao_seq_Marshal_Recursive *&);
  _tao_seq_Marshal_Recursive_out (_tao_seq_Marshal_Recursive_var &);
  _tao_seq_Marshal_Recursive_out (const _tao_seq_Marshal_Recursive_out &);
  _tao_seq_Marshal_Recursive_out &operator= (const _tao_seq_Marshal_Recursive_out &);
  _tao_seq_Marshal_Recursive_out &operator= (_tao_seq_Marshal_Recursive *);
  operator _tao_seq_Marshal_Recursive *&();
  _tao_seq_Marshal_Recursive *&ptr (void);
  _tao_seq_Marshal_Recursive *operator-> (void);
  ACE_NESTED_CLASS (Marshal, Marshal_Recursive) &operator[] (CORBA::ULong index);
  
private:
  _tao_seq_Marshal_Recursive *&ptr_;
  // assignment from T_var not allowed
  void operator= (const _tao_seq_Marshal_Recursive_var &);
};


#endif /* end #if !defined */

#if !defined (__GNUC__) || !defined (ACE_HAS_GNUG_PRE_2_8)
  typedef _tao_seq_Marshal_Recursive _next_seq;
#endif /* ! __GNUC__ || ACE_HAS_GNUG_PRE_2_8 */

    _tao_seq_Marshal_Recursive next;
};

class  Marshal_Recursive_var
{
public:
  Marshal_Recursive_var (void); // default constructor
  Marshal_Recursive_var (Marshal_Recursive *);
  Marshal_Recursive_var (const Marshal_Recursive_var &); // copy constructor
  ~Marshal_Recursive_var (void); // destructor
  
  Marshal_Recursive_var &operator= (Marshal_Recursive *);
  Marshal_Recursive_var &operator= (const Marshal_Recursive_var &);
  Marshal_Recursive *operator-> (void);
  const Marshal_Recursive *operator-> (void) const;
  
  operator const Marshal_Recursive &() const;
  operator Marshal_Recursive &();
  operator Marshal_Recursive &() const;
  operator Marshal_Recursive *&(); // variable-size types only
  
  // in, inout, out, _retn 
  const Marshal_Recursive &in (void) const;
  Marshal_Recursive &inout (void);
  Marshal_Recursive *&out (void);
  Marshal_Recursive *_retn (void);
  Marshal_Recursive *ptr (void) const;

private:
  Marshal_Recursive *ptr_;
};

class  Marshal_Recursive_out
{
public:
  Marshal_Recursive_out (Marshal_Recursive *&);
  Marshal_Recursive_out (Marshal_Recursive_var &);
  Marshal_Recursive_out (const Marshal_Recursive_out &);
  Marshal_Recursive_out &operator= (const Marshal_Recursive_out &);
  Marshal_Recursive_out &operator= (Marshal_Recursive *);
  operator Marshal_Recursive *&();
  Marshal_Recursive *&ptr (void);
  Marshal_Recursive *operator-> (void);
  
private:
  Marshal_Recursive *&ptr_;
  // assignment from T_var not allowed
  void operator= (const Marshal_Recursive_var &);
};

static CORBA::TypeCode_ptr _tc_Marshal_Recursive;

virtual void test_short (
    CORBA::Short s1,
    CORBA::Short_out s2
  )
  ACE_THROW_SPEC ((
    CORBA::SystemException
  ));

virtual void test_long (
    CORBA::Long l1,
    CORBA::Long_out l2
  )
  ACE_THROW_SPEC ((
    CORBA::SystemException
  ));

virtual void test_octet (
    CORBA::Octet o1,
    CORBA::Octet_out o2
  )
  ACE_THROW_SPEC ((
    CORBA::SystemException
  ));

virtual void test_char (
    CORBA::Char c1,
    CORBA::Char_out c2
  )
  ACE_THROW_SPEC ((
    CORBA::SystemException
  ));

virtual void test_double (
    CORBA::Double d1,
    CORBA::Double_out d2
  )
  ACE_THROW_SPEC ((
    CORBA::SystemException
  ));

virtual void test_struct (
    const Marshal::Marshal_Struct & ms1,
    Marshal::Marshal_Struct_out ms2
  )
  ACE_THROW_SPEC ((
    CORBA::SystemException
  ));

virtual void test_union (
    const Marshal::Marshal_Union & u1,
    Marshal::Marshal_Union_out u2
  )
  ACE_THROW_SPEC ((
    CORBA::SystemException
  ));

virtual void test_any (
    const CORBA::Any & a1,
    CORBA::Any_out a2
  )
  ACE_THROW_SPEC ((
    CORBA::SystemException
  ));

virtual void test_sequence (
    const Marshal::AnySeq & as1,
    Marshal::AnySeq_out as2
  )
  ACE_THROW_SPEC ((
    CORBA::SystemException
  ));

virtual void test_recursive (
    const Marshal::Marshal_Recursive & mr1,
    Marshal::Marshal_Recursive_out mr2
  )
  ACE_THROW_SPEC ((
    CORBA::SystemException
  ));

virtual CORBA::Boolean _is_a (
    const CORBA::Char *type_id, 
    CORBA::Environment &env = 
      TAO_default_environment ()
  );
virtual const char* _interface_repository_id (void) const;

protected:
  Marshal (void);
  Marshal (TAO_Stub *objref, 
      TAO_ServantBase *_tao_servant = 0, 
      CORBA::Boolean _tao_collocated = 0
    );
  virtual ~Marshal (void);
private:
  Marshal (const Marshal &);
  void operator= (const Marshal &);
};


#endif /* end #if !defined */

extern  CORBA::TypeCode_ptr  _tc_Marshal;

extern  Marshal_ptr (*_TAO_collocation_Marshal_Stub_Factory_function_pointer) (
    CORBA::Object_ptr obj
  );
// Any operators for interface Marshal
 void operator<<= (CORBA::Any &, Marshal_ptr);
 CORBA::Boolean operator>>= (const CORBA::Any &, Marshal *&);
 void operator<<= (CORBA::Any &, const Marshal::Marshal_Struct &); // copying version
 void operator<<= (CORBA::Any &, Marshal::Marshal_Struct*); // noncopying version
 CORBA::Boolean operator>>= (const CORBA::Any &, Marshal::Marshal_Struct *&); // deprecated
 CORBA::Boolean operator>>= (const CORBA::Any &, const Marshal::Marshal_Struct *&);
 void operator<<= (CORBA::Any &, Marshal::discrim);
 CORBA::Boolean operator>>= (const CORBA::Any &, Marshal::discrim &);
 void operator<<= (CORBA::Any &, const Marshal::Marshal_Union &); // copying version
 void operator<<= (CORBA::Any &, Marshal::Marshal_Union*); // noncopying version
 CORBA::Boolean operator>>= (const CORBA::Any &, Marshal::Marshal_Union *&); // deprecated
 CORBA::Boolean operator>>= (const CORBA::Any &, const Marshal::Marshal_Union *&);
 void operator<<= (CORBA::Any &, const Marshal::AnySeq &); // copying version
 void operator<<= (CORBA::Any &, Marshal::AnySeq*); // noncopying version
 CORBA::Boolean operator>>= (const CORBA::Any &, Marshal::AnySeq *&); // deprecated
 CORBA::Boolean operator>>= (const CORBA::Any &, const Marshal::AnySeq *&);
 void operator<<= (CORBA::Any &, const Marshal::Marshal_Recursive &); // copying version
 void operator<<= (CORBA::Any &, Marshal::Marshal_Recursive*); // noncopying version
 CORBA::Boolean operator>>= (const CORBA::Any &, Marshal::Marshal_Recursive *&); // deprecated
 CORBA::Boolean operator>>= (const CORBA::Any &, const Marshal::Marshal_Recursive *&);

#ifndef __ACE_INLINE__

 CORBA::Boolean operator<< (TAO_OutputCDR &, const Marshal_ptr );
 CORBA::Boolean operator>> (TAO_InputCDR &, Marshal_ptr &);
 CORBA::Boolean operator<< (TAO_OutputCDR &, const Marshal::Marshal_Struct &);
 CORBA::Boolean operator>> (TAO_InputCDR &, Marshal::Marshal_Struct &);
 CORBA::Boolean operator<< (TAO_OutputCDR &, const Marshal::discrim &); // 
 CORBA::Boolean operator>> (TAO_InputCDR &, Marshal::discrim &);
 CORBA::Boolean operator<< (TAO_OutputCDR &, const Marshal::Marshal_Union &); // 
 CORBA::Boolean operator>> (TAO_InputCDR &, Marshal::Marshal_Union &);

#if !defined _TAO_CDR_OP_Marshal_AnySeq_H_
#define _TAO_CDR_OP_Marshal_AnySeq_H_

 CORBA::Boolean operator<< (
    TAO_OutputCDR &,
    const Marshal::AnySeq &
  );
 CORBA::Boolean operator>> (
    TAO_InputCDR &,
    Marshal::AnySeq &
  );

#endif /* _TAO_CDR_OP_Marshal_AnySeq_H_ */

 CORBA::Boolean operator<< (TAO_OutputCDR &, const Marshal::Marshal_Recursive &);
 CORBA::Boolean operator>> (TAO_InputCDR &, Marshal::Marshal_Recursive &);

#if !defined _TAO_CDR_OP_Marshal_Marshal_Recursive__tao_seq_Marshal_Recursive_H_
#define _TAO_CDR_OP_Marshal_Marshal_Recursive__tao_seq_Marshal_Recursive_H_

 CORBA::Boolean operator<< (
    TAO_OutputCDR &,
    const Marshal::Marshal_Recursive::_tao_seq_Marshal_Recursive &
  );
 CORBA::Boolean operator>> (
    TAO_InputCDR &,
    Marshal::Marshal_Recursive::_tao_seq_Marshal_Recursive &
  );

#endif /* _TAO_CDR_OP_Marshal_Marshal_Recursive__tao_seq_Marshal_Recursive_H_ */


#endif /* __ACE_INLINE__ */


#if defined (__ACE_INLINE__)
#include "marshalC.i"
#endif /* defined INLINE */

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
#pragma warning(pop)
#endif /* _MSC_VER */

#endif /* ifndef */
