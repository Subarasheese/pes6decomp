/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s64 func_001AF920(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, t8 = 0, t9 = 0;
    s64 hi = 0, lo = 0;
    s64 frame[18];
    s64 sp = (s32) (u32) frame;

    s3 = 0;
    v0 = (*(volatile s8 *) (u32) a1);
    { s32 c_ = v0 == 0; s2 = 0; if (c_) goto L_001AFAA8; }
    v0 = (s32) 0x390000U;
    t8 = (s64) ((u64) a0 << 56);
    a4 = (*(volatile s8 *) (u32) (v0 + 32752));
    a6 = (s32) 0x3a0000U;
    a3 = (s32) 0x390000U;
    t8 = t8 >> 56;
    t7 = (s32) ((u32) sp + 0x8aU);
    t6 = (s32) ((u32) sp + 0x8cU);
    t5 = (s32) ((u32) sp + 0x8eU);
    a7 = 46;
    s5 = 27;
    s4 = 28;
    s7 = 26;
    a6 = (s32) ((u32) a6 + 0xffff8050U);
    a5 = 1;
    a3 = (s32) ((u32) a3 + 0x7ff0U);
    t4 = 95;
L_001AF998:;
    v1 = (s32) ((u32) a1 + (u32) s3);
    s0 = (*(volatile s8 *) (u32) v1);
    if (s0 == t4) goto L_001AFB28;
    if (s0 == a7) goto L_001AFB30;
    v0 = s0 < 65;
    if (v0 != 0) goto L_001AF9D0;
    at = s0 < 91;
    if (at == 0) goto L_001AF9D0;
    v0 = (s32) ((u32) s0 + 0xffffffbfU); goto L_001AF9F0;
L_001AF9D0:;
    v0 = s0 < 48;
    if (v0 != 0) goto L_001AFB38;
    at = s0 < 58;
    if (at == 0) goto L_001AFB38;
    v0 = (s32) ((u32) s0 + 0xffffffedU);
L_001AF9F0:;
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) a6 + (u32) v0);
    s6 = (*(volatile s16 *) (u32) v0);
    s1 = (*(volatile s16 *) (u32) (v0 + 2));
    s0 = (*(volatile s16 *) (u32) (v0 + 4));
    (*(volatile u16 *) (u32) (sp + 136)) = (u16) s6;
    (*(volatile u16 *) (u32) (sp + 138)) = (u16) s1;
    v0 = (*(volatile s16 *) (u32) (v0 + 6));
    (*(volatile u16 *) (u32) (sp + 140)) = (u16) s0;
    { s32 c_ = t8 == a5; (*(volatile u16 *) (u32) (sp + 142)) = (u16) v0; if (c_) goto L_001AFB40; }
L_001AFA20:;
    v0 = (*(volatile s8 *) (u32) (v1 + 1));
    s6 = (*(volatile s8 *) (u32) v1);
    s0 = 0;
    v1 = (*(volatile s16 *) (u32) t6);
    { s32 c_ = a4 == 0; s1 = (s32) v1 >> (a0 & 31); if (c_) goto L_001AFA90; }
    v1 = (s64) ((u64) s6 << 56);
    v0 = (s64) ((u64) v0 << 56);
    v1 = v1 >> 56;
    v0 = v0 >> 56;
    t9 = a3;
L_001AFA50:;
    s6 = (*(volatile s8 *) (u32) t9);
    if (v1 != s6) goto L_001AFA80;
    s6 = (*(volatile s8 *) (u32) (t9 + 1));
    if (v0 != s6) goto L_001AFA80;
    v0 = (s32) ((u32) s0 << 1);
    v0 = (s32) ((u32) v0 + (u32) s0);
    v0 = (s32) ((u32) a3 + (u32) v0);
    v0 = (*(volatile s8 *) (u32) (v0 + 2));
    s1 = (s32) v0 >> (a0 & 31); goto L_001AFA90;
L_001AFA80:;
    t9 = (s32) ((u32) t9 + 0x3U);
    s6 = (*(volatile s8 *) (u32) t9);
    { s32 c_ = s6 != 0; s0 = (s32) ((u32) s0 + 0x1U); if (c_) goto L_001AFA50; }
L_001AFA90:;
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = (s32) ((u32) a1 + (u32) s3);
    v0 = (*(volatile s8 *) (u32) v0);
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + (u32) s1); if (c_) goto L_001AF998; }
L_001AFAA8:;
    v0 = (*(volatile s8 *) (u32) a1);
    { s32 c_ = v0 == 0; a3 = 0; if (c_) goto L_001AFBA8; }
    v0 = (*(volatile s8 *) (u32) (a1 + 1));
    { s32 c_ = v0 == 0; a0 = 0; if (c_) goto L_001AFAF8; }
L_001AFAC0:;
    v0 = (s32) ((u32) a1 + (u32) a0);
    v1 = (*(volatile s8 *) (u32) v0);
    v0 = v1 < 48;
    if (v0 != 0) goto L_001AFBB0;
    at = v1 < 58;
    if (at == 0) goto L_001AFBB0;
L_001AFAE0:;
    a0 = (s32) ((u32) a0 + 0x1U);
    v0 = (s32) ((u32) a1 + (u32) a0);
    v0 = (*(volatile s8 *) (u32) (v0 + 1));
    if (v0 != 0) goto L_001AFAC0;
L_001AFAF8:;
    a0 = 4;
L_001AFAFC:;
    v1 = (s32) ((u32) a3 << 2);
L_001AFB00:;
    at = a0 < 2;
    if (at != 0) goto L_001AFBB8;
    v0 = (s32) ((u32) s2 + (u32) v1);
    at = a2 < v0;
    if (at == 0) goto L_001AFBB8;
    v1 = (s32) ((u32) v1 - (u32) a3);
    a0 = (s32) ((u32) a0 + 0xffffffffU); goto L_001AFB00;
L_001AFB28:;
    v0 = s5; goto L_001AF9F0;
L_001AFB30:;
    v0 = s4; goto L_001AF9F0;
L_001AFB38:;
    v0 = s7; goto L_001AF9F0;
L_001AFB40:;
    s0 = (*(volatile s16 *) (u32) (sp + 136));
    { s32 c_ = s0 >= 0; v0 = (s32) s0 >> 1; if (c_) goto L_001AFB54; }
    v0 = (s32) ((u32) s0 + 0x1U);
    v0 = (s32) v0 >> 1;
L_001AFB54:;
    s0 = (*(volatile s16 *) (u32) t7);
    (*(volatile u16 *) (u32) (sp + 136)) = (u16) v0;
    { s32 c_ = s0 >= 0; v0 = (s32) s0 >> 1; if (c_) goto L_001AFB6C; }
    v0 = (s32) ((u32) s0 + 0x1U);
    v0 = (s32) v0 >> 1;
L_001AFB6C:;
    s0 = (*(volatile s16 *) (u32) t6);
    (*(volatile u16 *) (u32) t7) = (u16) v0;
    { s32 c_ = s0 >= 0; v0 = (s32) s0 >> 1; if (c_) goto L_001AFB84; }
    v0 = (s32) ((u32) s0 + 0x1U);
    v0 = (s32) v0 >> 1;
L_001AFB84:;
    s0 = (*(volatile s16 *) (u32) t5);
    (*(volatile u16 *) (u32) t6) = (u16) v0;
    { s32 c_ = s0 >= 0; v0 = (s32) s0 >> 1; if (c_) goto L_001AFB9C; }
    v0 = (s32) ((u32) s0 + 0x1U);
    v0 = (s32) v0 >> 1;
L_001AFB9C:;
    (*(volatile u16 *) (u32) t5) = (u16) v0; goto L_001AFA20;
L_001AFBA8:;
    a0 = 4; goto L_001AFAFC;
L_001AFBB0:;
    a3 = (s32) ((u32) a3 + 0x1U); goto L_001AFAE0;
L_001AFBB8:;
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) a3; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    v0 = (s32) ((u32) s2 + (u32) v0);
    return v0;
}
