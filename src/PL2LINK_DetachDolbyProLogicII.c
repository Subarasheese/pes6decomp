/* compiler: ee-gcc-2.96 */
/* CRI middleware code; source adapted from Persona4 (src/cri/re4/ps2_rna_b228.c). */
/* PS2 RNA voice handles and shutdown forwarding. */
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

extern void func_00165968();
extern void func_00160690();
extern void func_001606A8();
extern void func_00173970();
extern void func_001737E0();
extern void func_004eaa18();
extern void PL2ENC_Encode();
// FUN_004EB228
void PL2LINK_DetachDolbyProLogicII(Uint8 *arg0)
{
    Uint8 *p = *(Uint8 **)(arg0 + 4);
    Uint8 *q = *(Uint8 **)(p + 4);
    Uint32 v = *(Uint32 *)(q + 0xe8);

    if (v == 0) {
        return;
    }
    func_00165968();
    func_00160690();
    func_00173970(v);
    *(Uint32 *)(q + 0xe8) = 0;
    func_001737E0(0);
    func_001606A8();
}
// FUN_004EB298
void func_004eb298(Uint8 *arg0);
// FUN_004EB2B0
void PL2LINK_Encode(Uint8 *arg0, Sint16 arg1);
