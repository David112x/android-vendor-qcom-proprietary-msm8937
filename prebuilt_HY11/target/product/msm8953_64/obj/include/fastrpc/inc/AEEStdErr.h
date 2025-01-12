/*
 * Copyright (c) 2004-2015 Qualcomm Technologies, Inc.
 * All Rights Reserved.
 * Confidential and Proprietary - Qualcomm Technologies, Inc
 */
#ifndef AEESTDERR_H
#define AEESTDERR_H

//
// Basic Error Codes
//
//
#define AEE_SUCCESS              0  			///< No error
#define AEE_EUNKNOWN		 -1   			/// Unknown error (should not use this)
#define AEE_EOFFSET		 0x00000000
#define AEE_EFAILED              (AEE_EOFFSET + 0x001)  ///< General failure
#define AEE_ENOMEMORY            (AEE_EOFFSET + 0x002)  ///< Insufficient RAM
#define AEE_ECLASSNOTSUPPORT     (AEE_EOFFSET + 0x003)  ///< Specified class unsupported
#define AEE_EVERSIONNOTSUPPORT   (AEE_EOFFSET + 0x004)  ///< Version not supported
#define AEE_EALREADYLOADED       (AEE_EOFFSET + 0x005)  ///< Object already loaded
#define AEE_EUNABLETOLOAD        (AEE_EOFFSET + 0x006)  ///< Unable to load object/applet
#define AEE_EUNABLETOUNLOAD      (AEE_EOFFSET + 0x007)  ///< Unable to unload
							///< object/applet
#define AEE_EALARMPENDING        (AEE_EOFFSET + 0x008)  ///< Alarm is pending
#define AEE_EINVALIDTIME         (AEE_EOFFSET + 0x009)  ///< Invalid time
#define AEE_EBADCLASS            (AEE_EOFFSET + 0x00A)  ///< NULL class object
#define AEE_EBADMETRIC           (AEE_EOFFSET + 0x00B)  ///< Invalid metric specified
#define AEE_EEXPIRED             (AEE_EOFFSET + 0x00C)  ///< App/Component Expired
#define AEE_EBADSTATE            (AEE_EOFFSET + 0x00D)  ///< Invalid state
#define AEE_EBADPARM             (AEE_EOFFSET + 0x00E)  ///< Invalid parameter
#define AEE_ESCHEMENOTSUPPORTED  (AEE_EOFFSET + 0x00F)  ///< Invalid URL scheme
#define AEE_EBADITEM             (AEE_EOFFSET + 0x010)  ///< Invalid item
#define AEE_EINVALIDFORMAT       (AEE_EOFFSET + 0x011)  ///< Invalid format
#define AEE_EINCOMPLETEITEM      (AEE_EOFFSET + 0x012)  ///< Incomplete item
#define AEE_ENOPERSISTMEMORY     (AEE_EOFFSET + 0x013)  ///< Insufficient flash
#define AEE_EUNSUPPORTED         (AEE_EOFFSET + 0x014)  ///< API is not supported
#define AEE_EPRIVLEVEL           (AEE_EOFFSET + 0x015)  ///< Privileges are insufficient
						        ///< for this operation
#define AEE_ERESOURCENOTFOUND    (AEE_EOFFSET + 0x016)  ///< Unable to find specified
							///< resource
#define AEE_EREENTERED           (AEE_EOFFSET + 0x017)  ///< Non re-entrant API
							///< re-entered
#define AEE_EBADTASK             (AEE_EOFFSET + 0x018)  ///< API called in wrong task
							///< context
#define AEE_EALLOCATED           (AEE_EOFFSET + 0x019)  ///< App/Module left memory
							///< allocated when released.
#define AEE_EALREADY             (AEE_EOFFSET + 0x01A)  ///< Operation is already in
							///< progress
#define AEE_EADSAUTHBAD          (AEE_EOFFSET + 0x01B)  ///< ADS mutual authorization
							///< failed
#define AEE_ENEEDSERVICEPROG     (AEE_EOFFSET + 0x01C)  ///< Need service programming
#define AEE_EMEMPTR              (AEE_EOFFSET + 0x01D)  ///< bad memory pointer
#define AEE_EHEAP                (AEE_EOFFSET + 0x01E)  ///< heap corruption
#define AEE_EIDLE                (AEE_EOFFSET + 0x01F)  ///< Context (system, interface,
							///< etc.) is idle
#define AEE_EITEMBUSY            (AEE_EOFFSET + 0x020)  ///< Context (system, interface,
							///< etc.) is busy
#define AEE_EBADSID              (AEE_EOFFSET + 0x021)  ///< Invalid subscriber ID
#define AEE_ENOTYPE              (AEE_EOFFSET + 0x022)  ///< No type detected/found
#define AEE_ENEEDMORE            (AEE_EOFFSET + 0x023)  ///< Need more data/info
#define AEE_EADSCAPS             (AEE_EOFFSET + 0x024)  ///< ADS Capabilities do not
							///< match those required for
							///< phone
#define AEE_EBADSHUTDOWN         (AEE_EOFFSET + 0x025)  ///< App failed to close properly
#define AEE_EBUFFERTOOSMALL      (AEE_EOFFSET + 0x026)  ///< Destination buffer given is
							///< too small
#define AEE_ENOSUCH              (AEE_EOFFSET + 0x027)  ///< No such name, port, socket
							///< or service exists or is
							///< valid
#define AEE_EACKPENDING          (AEE_EOFFSET + 0x028)  ///< ACK pending on application
#define AEE_ENOTOWNER            (AEE_EOFFSET + 0x029)  ///< Not an owner authorized to
							///< perform the operation
#define AEE_EINVALIDITEM         (AEE_EOFFSET + 0x02A)  ///< Current item is invalid
#define AEE_ENOTALLOWED          (AEE_EOFFSET + 0x02B)  ///< Not allowed to perform the
							///< operation
#define AEE_EBADHANDLE           (AEE_EOFFSET + 0x02C)  ///< Invalid handle
#define AEE_EOUTOFHANDLES        (AEE_EOFFSET + 0x02D)  ///< Out of handles
#define AEE_EINTERRUPTED         (AEE_EOFFSET + 0x02E)  ///< Waitable call is interrupted
#define AEE_ENOMORE              (AEE_EOFFSET + 0x02F)  ///< No more items available --
							///< reached end
#define AEE_ECPUEXCEPTION        (AEE_EOFFSET + 0x030)  ///< A CPU exception occurred
#define AEE_EREADONLY            (AEE_EOFFSET + 0x031)  ///< Cannot change read-only
							///< object or parameter

#define AEE_ECONNRESET           104 			///< Connection reset by peer
#define AEE_EWOULDBLOCK          516 			///< Operation would block if not
							///< non-blocking; wait and try
							///< again

//Error code for sigverify
#define AEE_EUNSIGNEDMOD	     4096 				   /// 0x1000 test-sig not found, Unsigned shared object
#define AEE_EINVALIDHASH	     8192 				   /// 0x2000 test-sig not found, Invalid hash object

#define AEE_EINVALIDMSG		     (AEE_EOFFSET + 0x032)   /// Invalid SMD message from APPS
#define AEE_EINVALIDTHREAD	     (AEE_EOFFSET + 0x033)   /// Invalid thread
#define AEE_EINVALIDPROCESS	     (AEE_EOFFSET + 0x034)   /// Invalid Process
#define AEE_EINVALIDFILENAME     (AEE_EOFFSET + 0x035)   /// Invalid filename
#define AEE_EINVALIDDIGESTSIZE   (AEE_EOFFSET + 0x036)   /// Invalid digest size
#define AEE_EINVALIDSEGS	     (AEE_EOFFSET + 0x037)   /// Invalid segments
#define AEE_EINVALIDSIGNATURE    (AEE_EOFFSET + 0x038)   /// Invalid signature
#define AEE_EINVALIDDOMAIN       (AEE_EOFFSET + 0x039)   /// Invalid domain
#define AEE_EINVALIDFD           (AEE_EOFFSET + 0x03A)   /// Invalid file descriptor
#define AEE_EINVALIDDEVICE       (AEE_EOFFSET + 0x03B)   /// Invalid Device
#define AEE_EINVALIDMODE         (AEE_EOFFSET + 0x03C)   /// Invalid Mode
#define AEE_EINVALIDPROCNAME     (AEE_EOFFSET + 0x03D)   /// Invalid Process name
#define AEE_ENOSUCHMOD		     (AEE_EOFFSET + 0x03E)   /// No such module
#define AEE_ENOSUCHINSTANCE	     (AEE_EOFFSET + 0x03F)   /// No instance in the list lookup
#define AEE_ENOSUCHTHREAD	     (AEE_EOFFSET + 0x040)   /// No such thread
#define AEE_ENOSUCHPROCESS	     (AEE_EOFFSET + 0x041)   /// No such process
#define AEE_ENOSUCHSYMBOL	     (AEE_EOFFSET + 0x042)   /// No such symbol
#define AEE_ENOSUCHDEVICE	     (AEE_EOFFSET + 0x043)   /// No such device
#define AEE_ENOSUCHPROP	         (AEE_EOFFSET + 0x044)   /// No such dal property
#define AEE_ENOSUCHFILE		     (AEE_EOFFSET + 0x045)   /// No such file
#define AEE_ENOSUCHHANDLE	     (AEE_EOFFSET + 0x046)   /// No such handle
#define AEE_ENOSUCHSTREAM        (AEE_EOFFSET + 0x047)   /// No such stream
#define AEE_ENOSUCHMAP           (AEE_EOFFSET + 0x048)   /// No such Map
#define AEE_ENOSUCHREGISTER	     (AEE_EOFFSET + 0x049)   /// No such register
#define AEE_ENOSUCHCLIENT	     (AEE_EOFFSET + 0x04A)   /// No such QDI client
#define AEE_EBADDOMAIN           (AEE_EOFFSET + 0x04B)   /// Bad domain (not initialized)
#define AEE_EBADOFFSET		     (AEE_EOFFSET + 0x04C)   /// Bad buffer/page/heap offset
#define AEE_EBADSIZE		     (AEE_EOFFSET + 0x04D)   /// Bad buffer/page/heap size
#define AEE_EBADPERMS		     (AEE_EOFFSET + 0x04E)   /// Bad FILE/MAP/MEM permissions
#define AEE_EBADFD			     (AEE_EOFFSET + 0x04F)   /// Bad file descriptor
#define AEE_EBADPID			     (AEE_EOFFSET + 0x050)   /// Bad PID from HLOS
#define AEE_EBADTID			     (AEE_EOFFSET + 0x051)   /// Bad TID
#define AEE_EBADELF			     (AEE_EOFFSET + 0x052)   /// Bad elf file
#define AEE_EBADASID		     (AEE_EOFFSET + 0x053)   /// Bad asid
#define AEE_EBADCONTEXT		     (AEE_EOFFSET + 0x054)   /// Bad context
#define AEE_EBADMEMALIGN	     (AEE_EOFFSET + 0x055)   /// Bad memory alignment
#define AEE_EIOCTL               (AEE_EOFFSET + 0x056)   /// ioctl error
#define AEE_EFOPEN               (AEE_EOFFSET + 0x057)   /// file open error
#define AEE_EFGETS               (AEE_EOFFSET + 0x058)   /// file get string error
#define AEE_EFFLUSH              (AEE_EOFFSET + 0x059)   /// file flush error
#define AEE_EFCLOSE              (AEE_EOFFSET + 0x05A)   /// file close error
#define AEE_EEOF		 	     (AEE_EOFFSET + 0x05B)   /// File EOF reached
#define AEE_EFREAD               (AEE_EOFFSET + 0x05C)   /// file read failed
#define AEE_EFWRITE              (AEE_EOFFSET + 0x05D)   /// file write failed
#define AEE_EFGETPOS             (AEE_EOFFSET + 0x05E)   /// file get position failed
#define AEE_EFSETPOS             (AEE_EOFFSET + 0x05F)   /// file set position failed
#define AEE_EFTELL               (AEE_EOFFSET + 0x060)   /// file tell position failed
#define AEE_EFSEEK               (AEE_EOFFSET + 0x061)   /// file seek failed
#define AEE_EFLEN                (AEE_EOFFSET + 0x062)   /// file len failed
#define AEE_EGETENV              (AEE_EOFFSET + 0x063)   /// get enviroment failed
#define AEE_ESETENV              (AEE_EOFFSET + 0x064)   /// set enviroment failed
#define AEE_EMMAP                (AEE_EOFFSET + 0x065)   /// mmap failed
#define AEE_EIONMAP              (AEE_EOFFSET + 0x066)   /// ion map failed
#define AEE_EIONALLOC            (AEE_EOFFSET + 0x067)   /// ion alloc failed
#define AEE_ENORPCMEMORY         (AEE_EOFFSET + 0x068)   /// ION memory allocation failed
#define AEE_ENOROOTOFTRUST	 (AEE_EOFFSET + 0x069)   /// No root of trust for sigverify
#define AEE_ENOTLOCKED		 (AEE_EOFFSET + 0x06A)   /// Unlock failed, not locked before
#define AEE_ENOTINITIALIZED	 (AEE_EOFFSET + 0x06B)   /// Not initialized
#define AEE_EUNSUPPORTEDAPI      (AEE_EOFFSET + 0x06C)   /// unsupported API
#define AEE_EUNPACK		 (AEE_EOFFSET + 0x06D)	 /// unpacking command failed
#define AEE_EPOLL		 (AEE_EOFFSET + 0x06E)   /// error while polling for event
#define AEE_EEVENTREAD		 (AEE_EOFFSET + 0x06F)   /// event read failed
#define AEE_EMAXBUFS		 (AEE_EOFFSET + 0x070)   /// Maximum buffers
#define AEE_EINVARGS		 (AEE_EOFFSET + 0x071)   /// Invalid Arguments
#define AEE_ECONNREFUSED         (AEE_EOFFSET + 0x072)   /// Connection refused to DSP

#define AEE_ESMD_OFFSET		     (AEE_EOFFSET + 0x100)   /// SMD errors offset
#define AEE_ESMDBADPACKET	     (AEE_EOFFSET + 0x101)   /// SMD invalid packet size
#define AEE_ESMDALREADYOPEN	     (AEE_EOFFSET + 0x102)   /// SMD port is already open
#define AEE_ESMDOPENFAILED	     (AEE_EOFFSET + 0x103)   /// SMD port open failed

#define AEE_EDAL_OFFSET		     (AEE_EOFFSET + 0x120)   /// Dal error offset
#define AEE_EDALDEVATTACH	     (AEE_EOFFSET + 0x121)   /// DAL attach error
#define AEE_EDALINTREGISTER	     (AEE_EOFFSET + 0x122)   /// DAL interrupt register error
#define AEE_EDALINTUNREGISTER    (AEE_EOFFSET + 0x123)   /// Dal interrupt unregister error
#define AEE_EDALGETPROP		     (AEE_EOFFSET + 0x124)   /// Dal get property
#define AEE_EDALGETVAL		     (AEE_EOFFSET + 0x125)   /// Dal get property value

#define AEE_EQURT_OFFSET	     (AEE_EOFFSET + 0x140)   /// QURT error offset
#define AEE_EQURTREGIONCREATE    (AEE_EOFFSET + 0x141)   /// QURT region create failed
#define AEE_EQURTCACHECLEAN	     (AEE_EOFFSET + 0x142)   /// QURT cache clean failed
#define AEE_EQURTREGIONGETATTR   (AEE_EOFFSET + 0x143)   /// QURT region get attribute failed
#define AEE_EQURTBADREGIONPERMS  (AEE_EOFFSET + 0x144)   /// QURT bad permissions for region
#define AEE_EQURTMEMPOOLADD	     (AEE_EOFFSET + 0x145)   /// QURT Add to memory pool failed
#define AEE_EQURTREGISTERDEV     (AEE_EOFFSET + 0x146)   /// QURT register device failed
#define AEE_EQURTMEMPOOLCREATE   (AEE_EOFFSET + 0x147)   /// QURT create memory pool failed
#define AEE_EQURTGETVA		     (AEE_EOFFSET + 0x148)   /// QURT get VA failed
#define AEE_EQURTREGIONDELETE    (AEE_EOFFSET + 0x149)   /// QURT region delete failed
#define AEE_EQURTMEMPOOLATTACH   (AEE_EOFFSET + 0x14A)   /// QURT memory pool attach failed
#define AEE_EQURTTHREADCREATE    (AEE_EOFFSET + 0x14B)   /// QURT thread create failed
#define AEE_EQURTCOPYTOUSER	     (AEE_EOFFSET + 0x14C)   /// QURT copy to user memory failed
#define AEE_EQURTMEMMAPCREATE    (AEE_EOFFSET + 0x14D)   /// QURT map create failed
#define AEE_EQURTINVHANDLE	     (AEE_EOFFSET + 0x14E)   /// QURT Invalid client handle
#define AEE_EQURTBADASID	     (AEE_EOFFSET + 0x14F)   /// QURT Bad ASIC from QURT
#define AEE_EQURTOPENFAILED	     (AEE_EOFFSET + 0x150)   /// QURT QDI open failed
#define AEE_EQURTCOPYFROMUSER    (AEE_EOFFSET + 0x151)   /// QURT Copy from user failed
#define AEE_EQURTLINELOCK	     (AEE_EOFFSET + 0x152)   /// QURT Line lock failed
#define AEE_EQURTQDIDEFMETHOD	 (AEE_EOFFSET + 0x153)	 /// QURT QDI default method failed

#define AEE_EMMPM_OFFSET	     (AEE_EOFFSET + 0x170)   /// MMPM errors offset
#define AEE_EMMPMREQUEST	     (AEE_EOFFSET + 0x171)   /// MMPM Power request to failed
#define AEE_EMMPMRELEASE	     (AEE_EOFFSET + 0x172)   /// MMPM Release request failed
#define AEE_EMMPMSETPARAM	     (AEE_EOFFSET + 0x173)   /// MMPM set param request failed
#define AEE_EMMPMREGISTER	     (AEE_EOFFSET + 0x174)   /// MMPM Register request failed
#define AEE_EMMPMGETINFO	     (AEE_EOFFSET + 0x175)   /// MMPM Get info failed


/*
============================================================================
   ERRORS DOCUMENTATION
==============================================================================

Error Codes

Description:
This topic lists the categories of error codes that Brew MP returns. The topic for each
category of error code includes the name of each error, the code that is associated with
the error, and a description of the error.

===H2>
List of Error Code Types
===/H2>
===p>
The categories of error codes include: ~
~

AddrBook error codes  ~
AddrInfo error codes ~
AEE_IS_REMOTE_ERR(): ~
AEE_IS_REMOTE_ERR_PRE(): ~
Basic AEE Error Codes   ~
Database error codes  ~
dbc Error Codes ~
DNS Resolver error codes ~
File error codes  ~
FS AEE Error Codes ~
ICamera error codes  ~
ICMP error codes ~
ILicenseSystem Error Codes ~
Indeterminate errors: (transport failure) ~
ISQL Error Codes ~
ISVGDOM Error Codes: ~
ISSL error codes  ~
IX509Chain error codes   ~
ModCollector Errors  ~
ModInstallerCntx Errors ~
ModMover Errors ~
Multimedia error codes  ~
Network AEE error codes ~
Network subsystem error codes ~
pim_IMessageStore Error Codes ~
pim_IRecordStore Error Codes ~
Port AEE Error Codes  ~
PosDet error codes  ~
Post-invocation errors: (remote errors) ~
Pre-invocation errors: (remote errors) ~
QoS error codes ~
Remote error codes: ~
SSL error codes  ~
VOCODER error codes  ~
VolumeDB Errors   ~
Web error codes ~

*

==================================================================
Basic AEE Error Codes

Description:
This section lists the set of basic AEE errors returned, the codes associated
with the errors, and descriptions of the errors.

Definition:

Error                   Code   Description

AEE_SUCCESS             0      operation Successful
AEE_EFAILED             1      general failure
AEE_ENOMEMORY           2      insufficient RAM
AEE_ECLASSNOTSUPPORT    3      specified class unsupported
AEE_EVERSIONNOTSUPPORT  4      version not supported
AEE_EALREADYLOADED      5      object already loaded
AEE_EUNABLETOLOAD       6      unable to load object/applet
AEE_EUNABLETOUNLOAD     7      unable to unload object/applet
AEE_EALARMPENDING       8      alarm is pending
AEE_EINVALIDTIME        9      invalid time
AEE_EBADCLASS           10     NULL class object
AEE_EBADMETRIC          11     invalid metric specified
AEE_EEXPIRED            12     Application/Component Expired
AEE_EBADSTATE           13     invalid state
AEE_EBADPARM            14     invalid parameter
AEE_ESCHEMENOTSUPPORTED 15     invalid URL scheme
AEE_EBADITEM            16     invalid item
AEE_EINVALIDFORMAT      17     invalid format
AEE_EINCOMPLETEITEM     18     incomplete item
AEE_ENOPERSISTMEMORY    19     insufficient flash
AEE_EUNSUPPORTED        20     API is not supported
AEE_EPRIVLEVEL          21     application privileges are insufficient for this operation
AEE_ERESOURCENOTFOUND   22     unable to find specified resource
AEE_EREENTERED          23     non re-entrant API re-entered
AEE_EBADTASK            24     API called in wrong task context
AEE_EALLOCATED          25     Application/Module left memory allocated when released
AEE_EALREADY            26     operation is already in progress
AEE_EADSAUTHBAD         27     ADS mutual authorization failed
AEE_ENEEDSERVICEPROG    28     need service programming
AEE_EMEMPTR             29     bad memory pointer
AEE_EHEAP               30     heap corruption
AEE_EIDLE               31     context (system, interface, etc.) is idle
AEE_EITEMBUSY           32     context (system, interface, etc.) is busy
AEE_EBADSID             33     invalid subscriber ID
AEE_ENOTYPE             34     no type detected/found
AEE_ENEEDMORE           35     need more data/info
AEE_EADSCAPS            36     capabilities do not match those required
AEE_EBADSHUTDOWN        37     application failed to close properly
AEE_EBUFFERTOOSMALL     38     destination buffer given is too small
AEE_ENOSUCH             39     no such name/port/socket/service exists or valid
AEE_EACKPENDING         40     ACK pending on application
AEE_ENOTOWNER           41     not an owner authorized to perform the operation
AEE_EINVALIDITEM        42     current item is invalid
AEE_ENOTALLOWED         43     not allowed to perform the operation
AEE_EBADHANDLE          44     invalid handle
AEE_EOUTOFHANDLES       45     out of handles
AEE_EINTERRUPTED        46     waitable call is interrupted
AEE_ENOMORE             47     no more items available -- reached end
AEE_ECPUEXCEPTION       48     a CPU exception occurred
AEE_EREADONLY           49     cannot change read-only object or parameter
AEE_ECONNRESET          104    connection reset by peer
AEE_EWOULDBLOCK         516    operation would block if not non-blocking; wait and try again

Comments:
These Brew MP error codes have an up-to-date naming convention, and replace older BREW error
codes that use a naming convention that did not include the "AEE_" prefix.

See Also:
  Error Codes

==================================================================
*/
#endif /* #ifndef AEESTDERR_H */

