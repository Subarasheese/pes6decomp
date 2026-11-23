/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Texture_GetPixels(s64);
s64 Pes6Texture_GetPsm(s64);
s64 func_001454A0(s64);
s64 func_001454B0(s64);
void memcpy(s64, s64, s64);

void func_0014DF70(s64 a0, s64 a1, s64 a2) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    s64 hi = 0, lo = 0;
    s64 frame[22];
    s64 sp = (s32) (u32) frame;

    s4 = a0;
    s1 = a1;
    { s32 c_ = s4 == 0; s0 = a2; if (c_) goto L_0014E1E8; }
    if (s1 == 0) goto L_0014E1E8;
    if (s0 == 0) goto L_0014E1F0;
    v0 = func_001454B0(a0);
    s3 = v0;
    a0 = s4; v0 = func_001454A0(a0);
    s2 = v0;
    a0 = s4; v0 = Pes6Texture_GetPsm(a0);
    v1 = 20;
    if (v0 == v1) { a0 = s4; goto L_0014E0E8; }
    v1 = 19;
    if (v0 == v1) { a0 = s4; goto L_0014E078; }
    a0 = s4;
    v0 = Pes6Texture_GetPixels(a0);
    at = 0 < s2;
    s4 = v0;
    { s32 c_ = at == 0; s6 = 0; if (c_) goto L_0014E1E0; }
    s5 = 0;
L_0014E014:;
    v0 = (*(volatile s16 *) (u32) (s0 + 2));
    v0 = s6 < v0;
    if (v0 != 0) goto L_0014E060;
    v0 = (*(volatile s16 *) (u32) (s0 + 6));
    at = s6 < v0;
    if (at == 0) goto L_0014E1E0;
    v0 = (*(volatile s16 *) (u32) (s0 + 4));
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) s6; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    a2 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) s5 << 2);
    v1 = (s32) ((u32) s4 + (u32) v1);
    v0 = (*(volatile s16 *) (u32) s0);
    a0 = (s32) ((u32) a0 << 2);
    a0 = (s32) ((u32) s1 + (u32) a0);
    v0 = (s32) ((u32) v0 << 2);
    a1 = (s32) ((u32) v1 + (u32) v0); memcpy(a0, a1, a2);
L_0014E060:;
    s6 = (s32) ((u32) s6 + 0x1U);
    v0 = s6 < s2;
    { s32 c_ = v0 != 0; s5 = (s32) ((u32) s5 + (u32) s3); if (c_) goto L_0014E014; }
    goto L_0014E1E0;
L_0014E078:;
    v0 = Pes6Texture_GetPixels(a0);
    at = 0 < s2;
    s4 = v0;
    { s32 c_ = at == 0; s5 = 0; if (c_) goto L_0014E1E0; }
    s6 = 0;
L_0014E094:;
    v0 = (*(volatile s16 *) (u32) (s0 + 2));
    v0 = s5 < v0;
    if (v0 != 0) goto L_0014E0D0;
    v0 = (*(volatile s16 *) (u32) (s0 + 6));
    at = s5 < v0;
    if (at == 0) goto L_0014E1E0;
    a2 = (*(volatile s16 *) (u32) (s0 + 4));
    { s64 m_ = (s64) (s32) a2 * (s64) (s32) s5; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    v0 = (*(volatile s16 *) (u32) s0);
    v1 = (s32) ((u32) s4 + (u32) s6);
    a0 = (s32) ((u32) s1 + (u32) a0);
    a1 = (s32) ((u32) v1 + (u32) v0); memcpy(a0, a1, a2);
L_0014E0D0:;
    s5 = (s32) ((u32) s5 + 0x1U);
    v0 = s5 < s2;
    { s32 c_ = v0 != 0; s6 = (s32) ((u32) s6 + (u32) s3); if (c_) goto L_0014E094; }
    goto L_0014E1E0;
L_0014E0E8:;
    v0 = Pes6Texture_GetPixels(a0);
    s7 = v0;
    v0 = (*(volatile s16 *) (u32) s0);
    v0 = v0 & 0xfffe;
    (*(volatile u16 *) (u32) s0) = (u16) v0;
    v1 = (*(volatile s16 *) (u32) (s0 + 4));
    v0 = v1 & 0x1;
    v0 = (s32) ((u32) v1 + (u32) v0);
    (*(volatile u16 *) (u32) (s0 + 4)) = (u16) v0;
    v1 = (*(volatile s16 *) (u32) s0);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 1; if (c_) goto L_0014E124; }
    v0 = (s32) ((u32) v1 + 0x1U);
    v0 = (s32) v0 >> 1;
L_0014E124:;
    v1 = (*(volatile s16 *) (u32) (s0 + 4));
    a0 = (s64) ((u64) v0 << 48);
    a0 = a0 >> 48;
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 1; if (c_) goto L_0014E140; }
    v0 = (s32) ((u32) v1 + 0x1U);
    v0 = (s32) v0 >> 1;
L_0014E140:;
    v1 = (s64) ((u64) v0 << 48);
    v1 = v1 >> 48;
    { s32 c_ = s3 >= 0; v0 = (s32) s3 >> 1; if (c_) goto L_0014E158; }
    v0 = (s32) ((u32) s3 + 0x1U);
    v0 = (s32) v0 >> 1;
L_0014E158:;
    v0 = (s64) ((u64) v0 << 48);
    at = 0 < s2;
    v0 = v0 >> 48;
    { s32 c_ = at == 0; s3 = 0; if (c_) goto L_0014E1E0; }
    fp = (s64) ((u64) v0 << 48);
    s4 = (s64) ((u64) v1 << 48);
    v0 = (s64) ((u64) a0 << 48);
    fp = fp >> 48;
    v0 = v0 >> 48;
    s4 = s4 >> 48;
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    s6 = 0;
    s5 = 0;
L_0014E190:;
    v0 = (*(volatile s16 *) (u32) (s0 + 2));
    v0 = s3 < v0;
    if (v0 != 0) goto L_0014E1C8;
    v0 = (*(volatile s16 *) (u32) (s0 + 6));
    at = s3 < v0;
    if (at == 0) goto L_0014E1E0;
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = (s32) ((u32) s7 + (u32) s6);
    a0 = (s32) ((u32) s1 + (u32) s5);
    a2 = s4;
    a1 = (s32) ((u32) v1 + (u32) v0); memcpy(a0, a1, a2);
L_0014E1C8:;
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < s2;
    s6 = (s32) ((u32) s6 + (u32) fp);
    { s32 c_ = v0 != 0; s5 = (s32) ((u32) s5 + (u32) s4); if (c_) goto L_0014E190; }
L_0014E1E0:;
    v0 = s1; goto L_0014E2B8;
L_0014E1E8:;
    v0 = 0; goto L_0014E2B8;
L_0014E1F0:;
    if (s4 == 0) goto L_0014E2B0;
    if (s1 == 0) goto L_0014E2B0;
    s0 = 0;
    at = s0 < 5;
    if (at == 0) goto L_0014E248;
    a0 = (*(volatile u8 *) (u32) (s4 + 25));
    v1 = (s32) 0x370000U;
    v1 = (s32) ((u32) v1 + 0x6a80U);
L_0014E21C:;
    v0 = (s32) ((u32) s0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    if (a0 != v0) { s0 = (s32) ((u32) s0 + 0x1U); goto L_0014E238; }
    a0 = s4; goto L_0014E250;
L_0014E238:;
    v0 = s0 < 5;
    if (v0 != 0) goto L_0014E21C;
L_0014E248:;
    s0 = 0;
    a0 = s4;
L_0014E250:;
    v0 = func_001454B0(a0);
    s2 = v0;
    a0 = s4; v0 = func_001454A0(a0);
    { s64 m_ = (s64) (s32) s2 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    v1 = (s32) ((u32) s0 << 2);
    v0 = (s32) 0x370000U;
    v0 = (s32) ((u32) v0 + 0x68f0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    { s32 c_ = v0 >= 0; s0 = (s32) v0 >> 1; if (c_) goto L_0014E290; }
    v0 = (s32) ((u32) v0 + 0x1U);
    s0 = (s32) v0 >> 1;
L_0014E290:;
    a0 = s4; v0 = Pes6Texture_GetPixels(a0);
    a1 = v0;
    a2 = s0;
    a0 = s1; memcpy(a0, a1, a2);
L_0014E2A8:;
    v0 = s1; goto L_0014E2B8;
L_0014E2B0:;
    s1 = 0; goto L_0014E2A8;
L_0014E2B8:;
    return;
}
