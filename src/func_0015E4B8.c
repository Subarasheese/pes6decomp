/* compiler: ee-gcc-2.96 */
/* CRI middleware code; source adapted from Persona4 (src/cri/re4/adx_tlk_6228.c). */
/* ADX talk entrypoints for the PS2 RNA output buffer. */
/* CRI Middleware common types (cri_xpt.h) as used by the ADX / Sofdec / GCCI libraries in the DOL
 * (ADX Oct 8 2004, Sofdec Sep 22 2004 builds, compiled with CodeWarrior 2.4.7). */
#ifndef CRI_XPT_H
#define CRI_XPT_H

typedef unsigned char Uint8;
typedef signed char Sint8;
typedef unsigned short Uint16;
typedef signed short Sint16;
typedef unsigned int Uint32;
typedef signed int Sint32;
typedef unsigned long long Uint64;
typedef signed long long Sint64;
typedef float Float32;
typedef double Float64;
typedef char Char8;
typedef Sint32 Bool;

#ifndef NULL
#define NULL 0
#endif
#define TRUE 1
#define FALSE 0
#define OK 1
#define NG 0
#define ON 1
#define OFF 0

#endif

extern void func_00159EB8(void);
extern void func_00159EC0(void);
extern void func_004cd918(void *buffer);
extern void *func_004cd930(void);
void func_0015E4A0(void *buffer);
void *func_0015E4F0(void);// FUN_004D6228
void D_0015E470(void *buffer);
// FUN_004D6258
void func_0015E4A0(void *buffer);


// FUN_004D6270
void *func_0015E4B8(void)
{
	void *buffer;

	func_00159EB8();
	buffer = func_0015E4F0();
	func_00159EC0();
	return buffer;
}
// FUN_004D62A8
void *func_0015E4F0(void);
