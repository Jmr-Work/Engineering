//..............................................................................
// Automatically generated header file.
// Generated: 10:27:38 AM  14/12/2005
// This file should not be edited.
//..............................................................................

#ifndef __HARDWARE_H__
#define __HARDWARE_H__

//..............................................................................
#define Base_KeyPad                 0xFF100000
#define Size_KeyPad                 0x00000002
//..............................................................................

//..............................................................................
#define Base_Video                  0xFF000000
#define Size_Video                  0x00001000
#define Intr_Video_A                2
#define Intr_Video_B                3
#define Intr_Video_C                4
//..............................................................................

//..............................................................................
#define INTERRUPT_CONTROL_CFG     0x0000001C
#define INTERRUPT_KINDS_CFG       0x00000000
#define INTERRUPT_EDGE_KIND_CFG   0x00000000
#define INTERRUPT_LVL_KIND_CFG    0x0000001C
//..............................................................................

#endif // __HARDWARE_H__
