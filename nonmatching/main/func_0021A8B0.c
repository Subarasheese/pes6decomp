/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 strcmp(s64, s64);

s64 func_0021A8B0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    s64 hi = 0, lo = 0;
    s64 frame[34];
    s64 sp = (s32) (u32) frame;

    s5 = a1;
    v0 = (*(volatile s32 *) (u32) (a2 + 24));
    v1 = (*(volatile s16 *) (u32) (a3 + 4));
    (*(volatile u32 *) (u32) (sp + 208)) = (u32) a0;
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = 2;
    { s32 c_ = v1 == v0; (*(volatile u32 *) (u32) (sp + 204)) = (u32) a2; if (c_) goto L_0021A904; }
    s4 = 8192; goto L_0021A908;
L_0021A904:;
    s4 = 1024;
L_0021A908:;
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    s6 = 0;
    at = 0 < v0;
    { s32 c_ = at == 0; s7 = 0; if (c_) goto L_0021A9E0; }
    v0 = (s32) s4 >> 10;
    s0 = 0;
    { s32 c_ = s4 >= 0; { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } if (c_) goto L_0021A938; }
    v0 = (s32) ((u32) s4 + 0x3ffU);
    v0 = (s32) v0 >> 10;
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
L_0021A938:;
    v0 = (*(volatile s32 *) (u32) (sp + 204));
    v0 = (*(volatile s32 *) (u32) (v0 + 28));
    s3 = (s32) ((u32) v0 + (u32) s0);
    v0 = (*(volatile s32 *) (u32) (s3 + 24));
    { s32 c_ = v0 == 0; v1 = 0; if (c_) goto L_0021A954; }
    v1 = 1;
L_0021A954:;
    if (v1 == 0) goto L_0021A9CC;
    s2 = (*(volatile s32 *) (u32) (sp + 208));
    v0 = 0 < s5;
    fp = 0;
    { s32 c_ = v0 != 0; s1 = 0; if (c_) goto L_0021A9E8; }
L_0021A970:;
    if (fp == 0) { a0 = 0; goto L_0021A998; }
    v1 = (*(volatile s32 *) (u32) (fp + 16));
    v0 = (s32) ((u32) s4 + 0xffffffffU);
    v0 = (s32) ((u32) v1 + (u32) v0);
    if ((s32) s4 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) s4); hi = (s32) ((s32) v0 % (s32) s4); lo = q_; }
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = lo;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
L_0021A998:;
    v0 = (*(volatile s32 *) (u32) (sp + 204));
    v1 = (s32) ((u32) s4 + 0xffffffffU);
    v0 = (*(volatile s32 *) (u32) (v0 + 28));
    v0 = (s32) ((u32) v0 + (u32) s0);
    v0 = (*(volatile s32 *) (u32) (v0 + 28));
    v0 = (s32) ((u32) v0 + (u32) v1);
    if ((s32) s4 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) s4); hi = (s32) ((s32) v0 % (s32) s4); lo = q_; }
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = lo;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    v0 = (s32) ((u32) v0 - (u32) a0);
    s6 = (s32) ((u32) s6 + (u32) v0);
L_0021A9CC:;
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    s7 = (s32) ((u32) s7 + 0x1U);
    v0 = s7 < v0;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x20U); if (c_) goto L_0021A938; }
L_0021A9E0:;
    v0 = s6; goto L_0021AA18;
L_0021A9E8:;
    a0 = s3;
    a1 = (s32) ((u32) s2 + 0x20U); v0 = strcmp(a0, a1);
    if (v0 != 0) { s1 = (s32) ((u32) s1 + 0x1U); goto L_0021AA04; }
    fp = s2; goto L_0021A970;
L_0021AA04:;
    v0 = s1 < s5;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x40U); if (c_) goto L_0021A9E8; }
    goto L_0021A970;
L_0021AA18:;
    return v0;
}
