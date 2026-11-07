/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware code; source adapted from Persona4 (src/cri/re4/ps2_rna_d0b8.c). */
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

extern Sint32 D_0038DBD8;
extern Sint32 D_0038DBD0;

// FUN_004ED0B8
Sint32 func_00176060(Uint8 *arg0)
{
    if (D_0038DBD8 != 1 || D_0038DBD0 > 0) {
        return *(Sint32 *)(arg0 + 0x30);
    }
    return 0;
}
// FUN_004ED0E8
Sint32 func_004ed0e8(Uint8 *arg0);
