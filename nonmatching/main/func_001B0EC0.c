/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001454C0(s32);
s32 func_00147ED0(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_00147F00(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_001B0EC0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    v1 = (s32) 0x3b0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 4416));
    { s32 c_ = v1 == 0; s2 = 0; if (c_) goto L_001B0FB0; }
    s1 = (s32) ((u32) sp + 0x60U);
    s4 = 0;
    s3 = s1;
L_001B0EF8:;
    s0 = (s32) ((u32) s4 + 0xfb9U);
    a0 = s0; v0 = func_001454C0(a0);
    if (v0 == 0) goto L_001B0F18;
    (*(volatile u32 *) (u32) s3) = (u32) s0;
    s2 = (s32) ((u32) s2 + 0x1U);
    s3 = (s32) ((u32) s3 + 0x4U);
L_001B0F18:;
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = s4 < 4;
    if (v0 != 0) goto L_001B0EF8;
    v0 = (s32) ((u32) s2 << 2);
    s0 = 0;
    v0 = (s32) ((u32) v0 + (u32) sp);
    s4 = (s32) ((u32) v0 + 0x60U);
L_001B0F38:;
    s3 = (s32) ((u32) s0 + 0xfbeU);
    a0 = s3; v0 = func_001454C0(a0);
    if (v0 == 0) goto L_001B0F58;
    (*(volatile u32 *) (u32) s4) = (u32) s3;
    s2 = (s32) ((u32) s2 + 0x1U);
    s4 = (s32) ((u32) s4 + 0x4U);
L_001B0F58:;
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 2;
    if (v0 != 0) goto L_001B0F38;
    at = 0 < s2;
    { s32 c_ = at == 0; s0 = 0; if (c_) goto L_001B0F90; }
L_001B0F74:;
    a0 = (*(volatile s32 *) (u32) s1); v0 = func_00147ED0(a0, a1, a2, a3, a4, a5, a6, a7);
    s0 = (s32) ((u32) s0 + 0x1U);
    s1 = (s32) ((u32) s1 + 0x4U);
    v0 = s0 < s2;
    if (v0 != 0) goto L_001B0F74;
L_001B0F90:;
    a3 = (s32) 0x1b0000U;
    a1 = s2;
    a0 = 1;
    a2 = (s32) ((u32) sp + 0x60U);
    a3 = (s32) ((u32) a3 + 0xffffc380U);
    a4 = 0;
    a5 = 0; v0 = func_00147F00(a0, a1, a2, a3, a4, a5, a6, a7);
L_001B0FB0:;
    return v0;
}
