/* -*- C++ -*- */
// $Id$

// INET_Addr.i

// Default dtor.
ACE_INLINE
ACE_INET_Addr::~ACE_INET_Addr (void)
{
}

// Return the port number, converting it into host byte order...

ACE_INLINE u_short
ACE_INET_Addr::get_port_number (void) const
{
  ACE_TRACE ("ACE_INET_Addr::get_port_number");
  return ntohs (this->inet_addr_.sin_port);
}

// Return the address.

ACE_INLINE void *
ACE_INET_Addr::get_addr (void) const
{
  ACE_TRACE ("ACE_INET_Addr::get_addr");
  return (void *) &this->inet_addr_;
}

// Return the dotted Internet address.

ACE_INLINE const ACE_TCHAR *
ACE_INET_Addr::get_host_addr (void) const
{
  ACE_TRACE ("ACE_INET_Addr::get_host_addr");
  return ACE_OS::inet_ntoa (this->inet_addr_.sin_addr);  
}

// Return the 4-byte IP address, converting it into host byte order.

ACE_INLINE ACE_UINT32
ACE_INET_Addr::get_ip_address (void) const
{
  ACE_TRACE ("ACE_INET_Addr::get_ip_address");
  return ntohl (ACE_UINT32 (this->inet_addr_.sin_addr.s_addr));
}

ACE_INLINE u_long 
ACE_INET_Addr::hash (void) const
{
  return this->get_ip_address () + this->get_port_number ();
}

ACE_INLINE int
ACE_INET_Addr::operator < (const ACE_INET_Addr &rhs)
{
  return this->get_ip_address () < rhs.get_ip_address ()
    || (this->get_ip_address () == rhs.get_ip_address ()
        && this->get_port_number () < rhs.get_port_number ());
}
