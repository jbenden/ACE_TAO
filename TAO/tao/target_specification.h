//-*- C++ -*-
// $Id$

// ============================================================================
//
// = LIBRARY
//    TAO
//
// = FILENAME
//    target_identifier.h
//
// = DESCRIPTION
//    A class that encapsulates the target identification details.
//    
//    
// = AUTHOR
//     Balachandran  Natarajan <bala@cs.wustl.edu>
// ============================================================================

#ifndef TAO_TARGET_SPECIFICATION_H
#include "ace/pre.h"
#define TAO_TARGET_SPECIFICATION_H

#include "tao/Object_KeyC.h"
#include "tao/IOPC.h"


class TAO_Target_Specification
{
  // = TITLE
  //   A class to encapsulate all the ways of specifying targets.
  //
  // = DESCRIPTION
  //   @@ Bala: do we have examples of how other protocols map object
  //      keys?  
  //   @@ Carlos: The way HTTP-NG does is not quite intuitive. But
  //      they too have a sequnce of Octet which more or less fits this
  //      model. You are also allowed to specify is a Cache Index (14
  //      bits). I think that can also be worked out and shouldn't be
  //      a big deal.  
  //   @@ Bala:What if they pass something around that does not fit
  //      this model?
  //   @@ Carlos:As long as we dont know it is ok. But then if we get
  //      to some point where we have something floating around,
  //      obviously we would have well defined data structure in
  //      TAO. BTW, in IMHO it is not possible for me to think the
  //      myriad data structures that a designer can come up with. So,
  //      I can look ahead possibily a couple of days but not a life
  //      time  :-) But you have a good question though. Please sont
  //      remove these discussions. It could be useful for someone
  //      someday. 
  //   The motivation behind this is GIOP 1.2 althought I foresee
  //   other messaging protocols doing something similar.
  //   The Invocation classes (client side) were
  //   passing the object key that they had extracted from the
  //   profiles with every invocation. This extraction would be done
  //   based on the policies that are specified for the client side
  //   ORB. Further the client side  ORB need not just send the object
  //   key. They can send send the IOP::TaggedProfile or IOP::IOR
  //   profile. So I am putting these possibilites in this class and
  //   pass it to the messaging layer. It would extract what is
  //   required. 
public:
  
  TAO_Target_Specification (void);
  // Ctor
  enum TAO_Target_Address
  {
    // Note that this could be extended for other protocols
    Key_Addr = 0,
    Profile_Addr,
    Reference_Addr
  };

  // Note: Please do not pass in a identifiers that is allocated on
  // stack. These methods does not make a copy but holds the pointer
  // passed in. 
  void target_specifier (const TAO_ObjectKey &key);
  // Set the target specification by giving the object key.


  void target_specifier (IOP::TaggedProfile *profile);
  // Set the target specification by passing in an IOP::TaggedProfile.

  void target_specifier (IOP::IOR *ior, 
                         CORBA::ULong prof_index);
  // Specify the target by passing in the IOP::IOR with a profile
  // index. Please see the header file IOPC.h on why a profile index
  // is required.


  const TAO_ObjectKey* object_key (void);
  // Returns the object key after a check of the stored specifier. If
  // the stored specifier is not of the right type then this would
  // return a NULL
  
  const IOP::TaggedProfile *profile (void);
  // Returns the IOP::TaggedProfile after a check of the stored specifier. If
  // the stored specifier is not of the right type then this would
  // return a NULL
  
  CORBA::ULong iop_ior (IOP::IOR *&ior);
  // Returns a  pointer to IOP::IOR through the parameters and the
  // index of the selected profile as a return parameter after a check
  // of the stored specifier. If the stored specifier is not of the
  // right type then this would return a NULL. 
  
  TAO_Target_Address specifier (void);
  // Access the TArget_Address specifier
  
private:
  union
  {
    TAO_ObjectKey *object_key_;
    IOP::TaggedProfile *profile_;
    IOP::IOR *ior_;
  } u_;
  // The union of all the possibilities
  
  TAO_Target_Address specifier_;
  // The enum identifier

  CORBA::ULong profile_index_;
  // The profile index
};

#if defined (__ACE_INLINE__)
#include "target_specification.i"
#endif /* defined INLINE */

#include "ace/post.h"
#endif /*TAO_TARGET_SPECIFICATION_H*/
