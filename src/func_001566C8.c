/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware code; source adapted from Persona4 (src/cri/re4/adx_bahx.c). */
/* CRI ADXB AHX hooks (adx_bahx.c): the AHX (MPEG-2 audio layer 2 based voice codec) decoder is a
 * separate module that registers its functions with ADXB_EntryAhxFunc; ADXB forwards the AHX-format
 * calls through these pointers. The AHX module is not linked in this game (adxb->ahx is always NULL). */
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

typedef struct {
	Uint8 pad[0xB4];
	void *ahx;
	Sint32 nsmpl;
	Sint32 nsmpl96;
} ADXB_OBJ;extern void (*ahxsetsjifunc)(void *ahx, void *sji);
extern void (*ahxsetdecsmplfunc)(void *ahx, Sint32 nsmpl);
extern void (*ahxtermsupplyfunc)(void *ahx);
extern void (*D_00376DFC)(ADXB_OBJ *adxb);
/* dead-stripped by the linker (nothing calls it); fixes the .bss order of the four pointers */
void ADXB_EntryAhxFunc(void (*setsji)(void *, void *), void (*setdecsmpl)(void *, Sint32),
		       void (*termsupply)(void *), void (*exec)(ADXB_OBJ *));
// End of input for an AHX decoder attached to the handle.
// FUN_004C1C50
void ADXB_AhxTermSupply(ADXB_OBJ *adxb);


// One decode step of an AHX stream (through the registered hook).
// FUN_004C1CE8
void func_001566C8(ADXB_OBJ *adxb)
{
	D_00376DFC(adxb);
}
// Per-tick decode limit: forwarded to the AHX decoder and kept in samples and 96-sample units.
// FUN_004C1C80
void ADXB_SetAhxDecSmpl(ADXB_OBJ *adxb, Sint32 nsmpl);
// Input stream joint of the AHX decoder.
// FUN_004C1D10
void ADXB_SetAhxInSj(ADXB_OBJ *adxb, void *sji);
