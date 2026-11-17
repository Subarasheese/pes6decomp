/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_002D4BE0(s64, s64, s64, s64);
s64 func_00305E60(s64, s64);

s64 func_00302C00(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0;
    s64 gp = 0x3ef370;

    v0 = (s32) 0xcb0000U;
    v1 = 1;
    s0 = a0;
    v0 = (*(volatile s32 *) (u32) (v0 + 24356));
    a0 = (*(volatile s32 *) (u32) (a0 + 24));
    { s32 c_ = v0 == v1; a1 = 0; if (c_) goto L_00302C2C; }
    a1 = v1 & 0xff;
L_00302C2C:;
    v0 = (s32) 0x590000U;
    v1 = 32767;
    v0 = (*(volatile s32 *) (u32) (v0 + 7992));
    if (v0 != v1) goto L_00302C44;
    a1 = (s64) ((u64) 0 + (u64) (s64) 1);
L_00302C44:;
    if (a1 == 0) { v0 = 0; goto L_00302C78; }
    v1 = (*(volatile s32 *) (u32) (a0 + 36));
    v0 = (s32) ((u32) gp + 0xffff8308U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_002D4BE0(a0, a1, a2, a3);
    a1 = (s32) 0x300000U;
    a0 = s0;
    a1 = (s32) ((u32) a1 + 0x2c90U); v0 = func_00305E60(a0, a1);
    v0 = 1;
L_00302C78:;
    return v0;
}
