/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_002C1DD0(s64, s64, s64, s64, s64);
s64 func_002C1FD0(s64, s64, s64, s64);
s64 func_002C4960(s64, s64, s64, s64);
s64 func_00C132B0(s64);
s64 func_00C13390(s64);
s64 func_00C13400(s64);
s64 func_00C135B0(s64, s64, s64);
s64 func_00C13640(s64, s64, s64);
s64 func_00C137C0(s64);

s64 func_00C5B1F0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    s64 frame[22];
    s64 sp = (s32) (u32) frame;

    v0 = -1;
    s6 = 0;
    s2 = a0;
    s1 = a1;
    { s32 c_ = s2 == v0; s0 = a2; if (c_) goto L_00C5B388; }
    if (s1 == v0) goto L_00C5B388;
    a1 = s0; v0 = func_002C4960(a0, a1, a2, a3);
    if (v0 != 0) goto L_00C5B388;
    v0 = (s32) 0xcb0000U;
    v1 = s0 & 0xff;
    a2 = (*(volatile s32 *) (u32) (v0 + 13416));
    v1 = (s32) v1 >> 5;
    a1 = (s32) 0xcb0000U;
    s3 = v1 & 0x1;
    a0 = s2;
    a1 = (s32) ((u32) a1 + 0x3450U); v0 = func_00C135B0(a0, a1, a2);
    v1 = -1;
    if (v0 == v1) goto L_00C5B2A0;
    s2 = v0;
    a0 = v0; v0 = func_00C13390(a0);
    v1 = -1;
    if (v0 == v1) goto L_00C5B2A0;
    a0 = v0; v0 = func_00C137C0(a0);
    s2 = v0;
L_00C5B2A0:;
    a0 = s2;
    a1 = s1;
    a2 = s0;
    a3 = 40; v0 = func_002C1FD0(a0, a1, a2, a3);
    { s32 c_ = v0 == 0; s5 = v0; if (c_) goto L_00C5B388; }
    v0 = s3 & 0xff;
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s32) 0xcb0000U;
    s7 = (*(volatile s32 *) (u32) (v0 + 13440));
    v0 = (s32) 0xcb0000U;
    fp = (*(volatile s32 *) (u32) (v0 + 13360));
L_00C5B2D4:;
    a0 = s2;
    a1 = s1;
    a2 = s0;
    a3 = 40;
    a4 = s5; v0 = func_002C1DD0(a0, a1, a2, a3, a4);
    s4 = v0;
    v0 = -1;
    if (s4 == v0) goto L_00C5B388;
    a0 = s4; v0 = func_00C13400(a0);
    s3 = v0;
    v0 = -1;
    if (s3 == v0) goto L_00C5B37C;
    a0 = s3; v0 = func_00C132B0(a0);
    v0 = v0 & 0xff;
    v0 = (s32) v0 >> 5;
    v1 = v0 & 0x1;
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    if (v0 != v1) goto L_00C5B37C;
    a1 = (s32) 0xcb0000U;
    a0 = s4;
    a1 = (s32) ((u32) a1 + 0x3470U);
    a2 = s7; v0 = func_00C13640(a0, a1, a2);
    v0 = (u64) v0 < (u64) s3;
    if (v0 != 0) goto L_00C5B37C;
    a1 = (s32) 0xcb0000U;
    a0 = s4;
    a1 = (s32) ((u32) a1 + 0x3420U);
    a2 = fp; v0 = func_00C13640(a0, a1, a2);
    v0 = (u64) v0 < (u64) s3;
    if (v0 != 0) goto L_00C5B37C;
    s6 = 1; goto L_00C5B388;
L_00C5B37C:;
    s5 = (s32) ((u32) s5 + 0xffffffffU);
    if (s5 != 0) goto L_00C5B2D4;
L_00C5B388:;
    v0 = s6;
    return v0;
}
