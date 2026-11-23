/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0017BD70(s32, s32, s32);
s32 func_001B42D0(s32, s32);

void func_0034A990(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    s2 = 0;
    s1 = a0;
    s0 = (*(volatile s32 *) (u32) (a0 + 16));
    a0 = s0;
L_0034A9B4:;
    a1 = s2;
    a2 = (s32) 0x20000000U; func_0017BD70(a0, a1, a2);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 16;
    if (v0 != 0) { a0 = s0; goto L_0034A9B4; }
    v0 = (s32) 0x20000000U;
    a0 = s0;
    a1 = 0;
    a2 = v0 | 0x1; func_0017BD70(a0, a1, a2);
    a0 = (*(volatile u8 *) (u32) (s1 + 62));
    a1 = 0; v0 = func_001B42D0(a0, a1);
    v1 = (s32) 0x3b0000U;
    a0 = s0;
    v1 = (s32) ((u32) v1 + 0x7780U);
    v1 = (s32) ((u32) v1 + (u32) v0);
    a1 = (*(volatile u8 *) (u32) v1);
    v0 = (s32) 0x20000000U;
    a2 = v0 | 0x1; func_0017BD70(a0, a1, a2);
    a0 = (*(volatile u8 *) (u32) (s1 + 62));
    a1 = 0; v0 = func_001B42D0(a0, a1);
    at = v0 < 3;
    if (at == 0) { a0 = (*(volatile u8 *) (u32) (s1 + 62)); goto L_0034AA64; }
    a0 = (*(volatile u8 *) (u32) (s1 + 62));
    a1 = 7; v0 = func_001B42D0(a0, a1);
    if (v0 == 0) { v1 = (*(volatile u8 *) (u32) (s1 + 522)); goto L_0034AAB4; }
    a0 = (*(volatile u8 *) (u32) (s1 + 62));
    a1 = 7; v0 = func_001B42D0(a0, a1);
    a1 = (s32) ((u32) v0 + (u32) 0);
    a0 = s0;
    v0 = (s32) 0x20000000U;
    a2 = v0 | 0x1; func_0017BD70(a0, a1, a2);
    goto L_0034AAB0;
L_0034AA64:;
    a1 = 0; v0 = func_001B42D0(a0, a1);
    v1 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) v1 + 0x7795U);
    v1 = (s32) ((u32) v1 + (u32) v0);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 == 0) goto L_0034AAB0;
    a0 = (*(volatile u8 *) (u32) (s1 + 62));
    a1 = 0; v0 = func_001B42D0(a0, a1);
    v1 = (s32) 0x3b0000U;
    a0 = s0;
    v1 = (s32) ((u32) v1 + 0x7795U);
    v1 = (s32) ((u32) v1 + (u32) v0);
    a1 = (*(volatile u8 *) (u32) v1);
    v0 = (s32) 0x20000000U;
    a2 = v0 | 0x1; func_0017BD70(a0, a1, a2);
L_0034AAB0:;
    v1 = (*(volatile u8 *) (u32) (s1 + 522));
L_0034AAB4:;
    v1 = v1 & 0x1;
    if (v1 == 0) { ; goto L_0034AAD8; }
    v0 = (s32) 0x20000000U;
    a0 = s0;
    a1 = 9;
    a2 = v0 | 0x1; func_0017BD70(a0, a1, a2);
L_0034AAD8:;
    return;
}
