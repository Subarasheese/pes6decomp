/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001454C0(s32);
s32 func_001509A0(s32, s32, s32, s32, s32);

s32 func_0019E250(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, a4 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    s32 hi = 0, lo = 0;
    s64 frame[20];
    s32 sp = (s32) (u32) frame;

    s3 = a2;
    s2 = a0;
    s1 = a1;
    s0 = a3;
    a0 = (s32) ((u32) s2 + 0x2928U); v0 = func_001454C0(a0);
    s4 = v0;
    a0 = 10535; v0 = func_001454C0(a0);
    a2 = v0;
    a0 = s4;
    a1 = 192;
    a3 = 0;
    a4 = 64; v0 = func_001509A0(a0, a1, a2, a3, a4);
    a0 = 10534; v0 = func_001454C0(a0);
    s5 = v0;
    a1 = 160;
    a0 = s4;
    a2 = s5;
    a3 = a1;
    a4 = 32; v0 = func_001509A0(a0, a1, a2, a3, a4);
    a0 = 10533; v0 = func_001454C0(a0);
    s6 = v0;
    v0 = (s32) 0x390000U;
    v0 = (s32) ((u32) v0 + 0x78a8U);
    v0 = (s32) ((u32) v0 + (u32) s2);
    v0 = (*(s8 *) (u32) v0);
    s0 = (s32) ((u32) s0 + (u32) v0);
    if (s0 < 0) { s0 = 0; goto L_0019E310; }
    at = s0 < 7;
    if (at != 0) goto L_0019E310;
    s0 = 6;
L_0019E310:;
    v1 = (s32) ((u32) s1 << 4);
    v0 = (s32) ((u32) s1 + (u32) s3);
    (*(u32 *) (u32) (sp + 144)) = (u32) v1;
    s7 = (s32) ((u32) sp + 0x98U);
    v1 = (s32) ((u32) s3 << 4);
    (*(u32 *) (u32) (sp + 148)) = (u32) v1;
    v1 = (s32) ((u32) s0 + (u32) v0);
    v0 = 10;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
    v0 = (s32) 0x390000U;
    v1 = (s32) ((u32) s0 << 1);
    v0 = (s32) ((u32) v0 + 0x7860U);
    s3 = 0;
    s2 = 0;
    s1 = (s32) ((u32) v0 + (u32) v1);
    (*(u32 *) (u32) s7) = (u32) a0;
L_0019E354:;
    v1 = (*(u8 *) (u32) s1);
    v0 = 2;
    { s32 c_ = v1 == v0; s0 = (*(u8 *) (u32) (s1 + 1)); if (c_) goto L_0019E3C4; }
    v0 = (s32) ((u32) v1 << 2);
    a0 = s4;
    v0 = (s32) ((u32) v0 + (u32) sp);
    a1 = s2;
    a3 = (*(s32 *) (u32) (v0 + 144));
    a2 = s6;
    a4 = 16; v0 = func_001509A0(a0, a1, a2, a3, a4);
    v0 = (s32) ((u32) s0 << 2);
    a1 = (s32) ((u32) s2 + 0x10U);
    v0 = (s32) ((u32) v0 + (u32) sp);
    a0 = s4;
    a3 = (*(s32 *) (u32) (v0 + 144));
    a2 = s6;
    a4 = 16; v0 = func_001509A0(a0, a1, a2, a3, a4);
L_0019E3A8:;
    s3 = (s32) ((u32) s3 + 0x1U);
    v1 = s3 < 5;
    s2 = (s32) ((u32) s2 + 0x20U);
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0xeU); if (c_) goto L_0019E354; }
    goto L_0019E418;
L_0019E3C4:;
    v0 = (*(s32 *) (u32) s7);
    a0 = s4;
    a1 = s2;
    a2 = s5;
    a4 = 16;
    s0 = (s32) ((u32) v0 << 4);
    a3 = s0; v0 = func_001509A0(a0, a1, a2, a3, a4);
    a3 = s0;
    a1 = (s32) ((u32) s2 + 0x10U);
    a0 = s4;
    a2 = s5;
    a4 = 16; v0 = func_001509A0(a0, a1, a2, a3, a4);
    a0 = (*(s32 *) (u32) s7);
    v1 = 10;
    a0 = (s32) ((u32) a0 + 0x1U);
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v1); hi = (s32) ((s32) a0 % (s32) v1); lo = q_; }
    v1 = hi;
    (*(u32 *) (u32) s7) = (u32) v1; goto L_0019E3A8;
L_0019E418:;
    return v0;
}
