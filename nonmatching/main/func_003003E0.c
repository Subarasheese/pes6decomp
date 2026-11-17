/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_002D4BE0(s64, s64, s64, s64);
s64 func_00305E60(s64, s64);
s64 func_0098F4A0(s64, s64, s64, s64);
s64 func_009E1C90(s64, s64, s64, s64);

s64 func_003003E0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 gp = 0x3ef370;
    s64 hi = 0, lo = 0;

    v0 = (s32) 0xcb0000U;
    v1 = 255;
    s2 = a0;
    s0 = (*(volatile s32 *) (u32) (a0 + 24));
    a0 = (*(volatile u8 *) (u32) (v0 + 24360));
    { s32 c_ = a0 == v1; s1 = 0; if (c_) goto L_00300424; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v0); hi = (s32) ((s32) a0 % (s32) v0); lo = q_; }
    a0 = hi;
    v0 = (s32) ((u32) a0 << 3); goto L_0030042C;
L_00300424:;
    a0 = 1;
    v0 = (s32) ((u32) a0 << 3);
L_0030042C:;
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = (s32) ((u32) a0 << 6);
    v0 = (*(volatile s32 *) (u32) (gp + -31080));
    a0 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) (a0 + 19));
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 == 0) { s1 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_0030046C; }
    v0 = func_0098F4A0(a0, a1, a2, a3);
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) (s0 + 28)); goto L_00300470; }
    s1 = (s64) ((u64) 0 + (u64) (s64) 1);
L_0030046C:;
    v0 = (*(volatile s32 *) (u32) (s0 + 28));
L_00300470:;
    if (v0 == 0) { a0 = 1; goto L_00300488; }
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    s1 = 0;
    (*(volatile u32 *) (u32) (s0 + 28)) = (u32) v0;
    a0 = 1;
L_00300488:;
    v0 = func_009E1C90(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = 1;
    if (v1 == v0) goto L_003004A4;
    s1 = v0 & 0xff;
L_003004A4:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7956));
    if (v0 == 0) goto L_003004B8;
    s1 = (s64) ((u64) 0 + (u64) (s64) 1);
L_003004B8:;
    if (s1 == 0) { v0 = 0; goto L_00300508; }
    v1 = (*(volatile s32 *) (u32) (s0 + 36));
    v0 = (s32) 0x3b0000U;
    v0 = (s32) ((u32) v0 + 0x4f70U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_002D4BE0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s0 + 36));
    if (v0 != 0) goto L_003004F4;
    v0 = (s32) 0x3b0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 20340)); v0 = func_002D4BE0(a0, a1, a2, a3);
L_003004F4:;
    a1 = (s32) 0x300000U;
    a0 = s2;
    a1 = (s32) ((u32) a1 + 0x520U); v0 = func_00305E60(a0, a1);
    v0 = 1;
L_00300508:;
    return v0;
}
