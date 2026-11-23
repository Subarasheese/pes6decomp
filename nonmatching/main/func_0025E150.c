/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_0025E150(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;

    v1 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a0 = (s32) 0x590000U;
    a3 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0xffffd159U);
    v1 = 3;
    a2 = (s32) ((u32) a0 + (u32) a3);
    { s32 c_ = a1 == v1; (*(volatile u8 *) (u32) a2) = (u8) a1; if (c_) goto L_0025E1FC; }
    v1 = 2;
    if (a1 == v1) goto L_0025E1FC;
    a0 = 1;
    if (a1 == a0) { v1 = (*(volatile u8 *) (u32) a2); goto L_0025E1CC; }
    if (a1 == 0) goto L_0025E19C;
    goto L_0025E210;
L_0025E19C:;
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0xffffd154U);
    v1 = (s32) ((u32) v1 + (u32) a3);
    v1 = (*(volatile s32 *) (u32) v1);
    if (v1 != 0) goto L_0025E210;
    a0 = (*(volatile u8 *) (u32) a2);
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0xffffd158U);
    v1 = (s32) ((u32) v1 + (u32) a3);
    (*(volatile u8 *) (u32) v1) = (u8) a0; goto L_0025E210;
L_0025E1CC:;
    if (v1 != a0) goto L_0025E1FC;
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0xffffd158U);
    v1 = (s32) ((u32) v1 + (u32) a3);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 != 0) goto L_0025E1FC;
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0xffffd154U);
    v1 = (s32) ((u32) v1 + (u32) a3);
    (*(volatile u32 *) (u32) v1) = (u32) 0;
L_0025E1FC:;
    a0 = (*(volatile u8 *) (u32) a2);
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0xffffd158U);
    v1 = (s32) ((u32) v1 + (u32) a3);
    (*(volatile u8 *) (u32) v1) = (u8) a0;
L_0025E210:;
    return;
}
