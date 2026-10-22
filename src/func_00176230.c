/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware code; source adapted from Persona4 (src/cri/re4/ps2_rna_ca78.c). */
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
extern void func_001610B0(const Char8 *msg);
extern Char8 D_003CC0E8[];
extern Char8 D_0075CA58[];

// FUN_004ECA78
void func_00176230(void)
{
    if (D_0038DBD8 != 1 || D_0038DBD0 > 0) {
        func_001610B0(D_003CC0E8);
    }
}
// FUN_004ECAC0
void func_004ecac0(void);
// FUN_004ECB08
void func_004ecb08(Uint8 *arg0, Uint32 *out0, Uint32 *out1);
