/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Thu Apr 25 07:50:41 2002
 */
/* Compiler settings for C:\Data\Sources\C++\DLS Media\DLS Media.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )
#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

const IID IID_IWaveMixer = {0x1D847139,0x91A6,0x4395,{0x94,0x14,0xAC,0x52,0x4F,0x37,0xA2,0x64}};


const IID LIBID_DLSMEDIALib = {0x1B613114,0x6B19,0x4101,{0x8A,0x89,0xC1,0xD6,0xFD,0x2E,0x76,0x39}};


const IID DIID__IWaveMixerEvents = {0x4B402B69,0xC8E1,0x4872,{0x9B,0xC9,0x2A,0x1F,0xF9,0x35,0xF1,0x9E}};


const CLSID CLSID_WaveMixer = {0x94326DCC,0xA647,0x497C,{0xB2,0xC4,0x69,0x69,0x2A,0x01,0x45,0x13}};


#ifdef __cplusplus
}
#endif

