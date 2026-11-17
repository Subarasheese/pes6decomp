/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00277220(s64, s64);
s64 func_009A0270(void);
void func_00C2F020(s64);
s64 func_00C2FC70(s64, s64, s64, s64, s64);
s64 func_00C32010(s64, s64);
s64 func_00C32210(s64);

s64 func_00C2FE10(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    s64 hi = 0, lo = 0;
    s64 frame[26];
    s64 sp = (s32) (u32) frame;

    s5 = a0;
    s3 = 0;
    s0 = (*(volatile u8 *) (u32) a0);
    (*(volatile u32 *) (u32) (sp + 204)) = (u32) a1; v0 = func_00C32210(a0);
    if (v0 != 0) goto L_00C2FE60;
    v0 = 0; goto L_00C30184;
L_00C2FE60:;
    v0 = func_009A0270();
    v0 = v0 & 0xff;
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 7692));
    if (v0 == 0) goto L_00C2FEA0;
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = v0 & 0xff;
    v0 = (*(volatile s32 *) (u32) (s5 + 4));
    v0 = (s32) ((u32) v1 - (u32) v0);
    if (v0 == 0) { v0 = 0; goto L_00C30184; }
    (*(volatile u32 *) (u32) (s5 + 4)) = (u32) v1; goto L_00C2FED8;
L_00C2FEA0:;
    v0 = (s32) 0x590000U;
    a1 = (*(volatile s16 *) (u32) (v0 + 7696));
    if (a1 <= 0) goto L_00C2FFA4;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile s32 *) (u32) (s5 + 8));
    v1 = (*(volatile u8 *) (u32) (v0 + 7140));
    a0 = (s32) ((u32) a0 - (u32) a1);
    v0 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (u64) a0 < (u64) v0;
    if (v0 != 0) goto L_00C2FFA4;
    (*(volatile u32 *) (u32) (s5 + 8)) = (u32) a1;
L_00C2FED8:;
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1ef6U);
    v0 = (s32) ((u32) v0 + (u32) s0);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 > 0) goto L_00C2FFAC;
    v0 = (*(volatile s32 *) (u32) (s5 + 12));
    if (v0 != 0) goto L_00C2FFAC;
    v1 = 5;
L_00C2FF00:;
    a0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (s5 + 16)) = (u32) v1;
    a0 = (s32) ((u32) a0 + 0x2980U);
    a2 = (*(volatile u8 *) (u32) s5);
    v0 = 0;
    v1 = 0;
    a1 = (s32) ((u32) a2 << 4);
    (*(volatile u8 *) (u32) (s5 + 21)) = (u8) 0;
    a2 = (s32) ((u32) a1 - (u32) a2);
    a1 = (s32) ((u32) a2 << 3);
    a1 = (s32) ((u32) a1 - (u32) a2);
    a1 = (s32) ((u32) a1 << 8);
    a2 = (s32) ((u32) a0 + (u32) a1);
L_00C2FF34:;
    a0 = (s32) ((u32) s5 + (u32) v1);
    a1 = (*(volatile u8 *) (u32) (a0 + 140));
    a0 = (s32) ((u32) a1 << 4);
    a1 = (s32) ((u32) a0 - (u32) a1);
    a0 = (s32) ((u32) a1 << 3);
    a0 = (s32) ((u32) a0 - (u32) a1);
    a0 = (s32) ((u32) a0 << 3);
    a1 = (s32) ((u32) a2 + (u32) a0);
    a0 = (*(volatile u8 *) (u32) (a1 + 212));
    if (a0 != 0) { a1 = (*(volatile u8 *) (u32) (a1 + 137)); goto L_00C30158; }
L_00C2FF60:;
    v1 = (s32) ((u32) v1 + 0x1U);
    a0 = v1 < 11;
    if (a0 != 0) goto L_00C2FF34;
    if (v0 <= 0) goto L_00C2FF88;
    v1 = (*(volatile u8 *) (u32) (s5 + 21));
    if ((u32) v0 != 0) { s64 q_ = (s32) ((u32) v1 / (u32) v0); hi = (s32) ((u32) v1 % (u32) v0); lo = q_; }
    v0 = lo;
    (*(volatile u8 *) (u32) (s5 + 21)) = (u8) v0;
L_00C2FF88:;
    a1 = (*(volatile s32 *) (u32) (sp + 204));
    a0 = s5; v0 = func_00C2FC70(a0, a1, a2, a3, a4);
    if (v0 != 0) goto L_00C30170;
    v0 = 0; goto L_00C30184;
L_00C2FFA4:;
    v0 = 0; goto L_00C30184;
L_00C2FFAC:;
    v0 = (s32) ((u32) s0 << 4);
    v1 = (s32) 0x590000U;
    a1 = (s32) ((u32) v0 - (u32) s0);
    v1 = (s32) ((u32) v1 + 0x2980U);
    a0 = (s32) ((u32) a1 << 3);
    v0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 - (u32) a1);
    v0 = (s32) ((u32) v0 + 0x1e00U);
    a0 = (s32) ((u32) a0 << 8);
    v0 = (s32) ((u32) v0 + (u32) s0);
    s6 = (s32) ((u32) v1 + (u32) a0);
    s7 = (s32) ((u32) v0 + 0xf8U);
    v1 = 139;
    v0 = (s32) ((u32) v0 + 0xf6U);
    { s64 m_ = (s64) (s32) s0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s32) 0x590000U;
    s4 = 0;
    v0 = (s32) ((u32) v0 + 0x1a90U);
    fp = (s32) ((u32) v0 + (u32) v1);
L_00C2FFFC:;
    s2 = (s32) ((u32) s5 + (u32) s4);
    a0 = s5;
    s0 = (*(volatile u8 *) (u32) (s2 + 140));
    a1 = s0; v0 = func_00C32010(a0, a1);
    if (v0 == 0) { v0 = 0; goto L_00C30068; }
    v0 = (s32) ((u32) s0 << 4);
    v1 = (s32) ((u32) v0 - (u32) s0);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) v0 << 3);
    s1 = (s32) ((u32) s6 + (u32) v0);
    v0 = (*(volatile u8 *) (u32) (s1 + 248));
    if (v0 != 0) goto L_00C30128;
    v0 = (*(volatile u8 *) (u32) (s1 + 249));
    if (v0 != 0) goto L_00C30128;
    s0 = (*(volatile u8 *) (u32) (s1 + 258)); v0 = func_009A0270();
    v0 = v0 & 0xff;
    v0 = (s32) ((u32) v0 + 0xfffffffbU);
    at = v0 < s0;
    if (at == 0) goto L_00C30130;
    v0 = 0;
L_00C30068:;
    v1 = 2;
    if (v0 == v1) goto L_00C30080;
    goto L_00C300D0;
L_00C30080:;
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a2 = (*(volatile u8 *) (u32) s7);
    v0 = (*(volatile u8 *) (u32) v0);
    a0 = (s32) ((u32) v0 + (u32) a2);
    at = a2 < a0;
    { s32 c_ = at == 0; s3 = 1; if (c_) goto L_00C300D0; }
    v1 = (*(volatile u8 *) (u32) (s2 + 140));
    v0 = (s32) ((u32) a2 << 3);
    a1 = (s32) ((u32) fp + (u32) v0);
L_00C300A8:;
    v0 = (*(volatile u8 *) (u32) (a1 + 83));
    if (v1 != v0) goto L_00C300C0;
    s3 = 0; goto L_00C300D0;
L_00C300C0:;
    a2 = (s32) ((u32) a2 + 0x1U);
    v0 = a2 < a0;
    { s32 c_ = v0 != 0; a1 = (s32) ((u32) a1 + 0x8U); if (c_) goto L_00C300A8; }
L_00C300D0:;
    if (s3 != 0) goto L_00C300E8;
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = s4 < 11;
    if (v0 != 0) goto L_00C2FFFC;
L_00C300E8:;
    if (s3 != 0) goto L_00C30148;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7955));
    if (v0 != 0) goto L_00C30148;
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = (*(volatile s32 *) (u32) (s5 + 12));
    a0 = v0 & 0xff;
    v0 = (*(volatile s32 *) (u32) (s5 + 16));
    v0 = (s32) ((u32) v1 + (u32) v0);
    at = (u64) a0 < (u64) v0;
    if (at == 0) goto L_00C30148;
    v0 = 0; goto L_00C30184;
L_00C30128:;
    v0 = 0; goto L_00C30068;
L_00C30130:;
    a0 = (s32) ((u32) s1 + 0xf0U);
    a1 = 1; v0 = func_00277220(a0, a1);
    goto L_00C30068;
L_00C30148:;
    a0 = s5; func_00C2F020(a0);
    v1 = 5; goto L_00C2FF00;
L_00C30158:;
    v0 = (s32) ((u32) v0 + 0x1U);
    a0 = (*(volatile u8 *) (u32) (s5 + 21));
    a1 = a1 & 0x7;
    a0 = (s32) ((u32) a0 + (u32) a1);
    (*(volatile u8 *) (u32) (s5 + 21)) = (u8) a0; goto L_00C2FF60;
L_00C30170:;
    v0 = func_009A0270();
    v0 = v0 & 0xff;
    (*(volatile u32 *) (u32) (s5 + 12)) = (u32) v0;
    v0 = 1;
L_00C30184:;
    return v0;
}
