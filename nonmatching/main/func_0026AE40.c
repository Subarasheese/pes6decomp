/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_0026AE40(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0;

    a5 = (s32) 0x590000U;
    v0 = -1;
    a6 = 0;
    a7 = 7;
    a5 = (s32) ((u32) a5 + 0x2918U);
    v1 = 1;
    a1 = 8;
    a3 = 255;
L_0026AE60:;
    a4 = (*(volatile u8 *) (u32) a5);
    if (a4 == a3) goto L_0026AE88;
    a2 = (*(volatile u8 *) (u32) (a5 + 1));
    if (a0 != a2) goto L_0026AE88;
    if (a4 == a1) goto L_0026AE88;
    v0 = a4;
    a6 = v1;
L_0026AE88:;
    a7 = (s32) ((u32) a7 + 0xffffffffU);
    { s32 c_ = a7 >= 0; a5 = (s32) ((u32) a5 + 0xffffffd8U); if (c_) goto L_0026AE60; }
    if (a6 != 0) goto L_0026AEB8;
    v0 = (s32) 0x590000U;
    v1 = 255;
    v0 = (s32) ((u32) v0 + 0x295bU);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 == v1) { v0 = -1; goto L_0026AEB8; }
L_0026AEB8:;
    return v0;
}
