/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_008B2F10(s32, s32, s32, s32);

void func_008B8830(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;

    v1 = (s32) 0x8e0000U;
    a1 = (s32) 0x540000U;
    a0 = (*(volatile s8 *) (u32) (gp + -22668));
    v1 = (s32) ((u32) v1 + 0xffffefe0U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a0 = (*(volatile s8 *) (u32) v1);
    { s32 c_ = a0 != 0; a1 = (s32) ((u32) a1 + 0xffffc300U); if (c_) goto L_008B8874; }
    v1 = (*(volatile s32 *) (u32) (a1 + 20));
    v0 = (s32) 0x50000U;
    a0 = (*(volatile s32 *) (u32) (v1 + 140));
    a1 = v0 | 0xe; func_008B2F10(a0, a1, a2, a3);
    goto L_008B88BC;
L_008B8874:;
    v1 = 1;
    if (a0 != v1) { v1 = 2; goto L_008B889C; }
    v1 = (*(volatile s32 *) (u32) (a1 + 20));
    v0 = (s32) 0x50000U;
    a0 = (*(volatile s32 *) (u32) (v1 + 140));
    a1 = v0 | 0xf; func_008B2F10(a0, a1, a2, a3);
    goto L_008B88B8;
L_008B889C:;
    if (a0 != v1) goto L_008B88B8;
    v1 = (*(volatile s32 *) (u32) (a1 + 20));
    v0 = (s32) 0x50000U;
    a0 = (*(volatile s32 *) (u32) (v1 + 140));
    a1 = v0 | 0x30; func_008B2F10(a0, a1, a2, a3);
L_008B88B8:;
L_008B88BC:;
    return;
}
