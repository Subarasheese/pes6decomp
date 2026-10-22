/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware code; source adapted from Persona4 (src/cri/re4/pl2enc.c). */
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
extern const Char8 pl2enc_build[];
extern const Sint32 pl2enc_gain_tbl[256];
extern Sint32 D_0038CC18;
extern void (*D_0038CC1C)(void *obj, Char8 *msg);
extern void *D_0038CC20;
extern Sint32 D_0038CC24;


typedef struct {
	Sint32 wksize;
} PL2ENC_PRM;

// Reports an encoder error through the registered callback.
// FUN_004EA798
static void pl2enc_err(Char8 *msg)
{
	if (D_0038CC1C != NULL) {
		D_0038CC1C(D_0038CC20, msg);
	}
}
// Dead: gain 0..255 through the Q12 table.
Sint32 PL2ENC_SetGain(PL2ENC_PRM *prm, Sint32 gain);
// Dead: encoder mode 0..3.
Sint32 PL2ENC_SetMode(PL2ENC_PRM *prm, Sint32 mode);
// Dead: encoder creation (work size check).
Sint32 PL2ENC_Create(PL2ENC_PRM *prm, void *work, Sint32 wksize);
// Dead: attach to an existing work.
Sint32 PL2ENC_Attach(PL2ENC_PRM *prm, void *work, Sint32 wksize);
