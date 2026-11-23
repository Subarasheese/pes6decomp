/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Heap_Free(s64);
s64 func_001454C0(s64);
s64 func_0014AC50(s64, s64, s64, s64);
void func_0014EAE0(s64, s64);
void func_0014F2F0(s64, s64, s64, s64, s64);
s64 func_001515F0(s64, s64, s64, s64, s64, s64);
s64 func_0017FA00(s64, s64, s64, s64);
void func_001CDAD0(s64);

void func_001B3E10(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v1 = 0;
    u64 qh_s2 = 0;
    s64 gp = 0x3ef370;
    s64 hi = 0, lo = 0;
    s64 frame[26];
    s64 sp = (s32) (u32) frame;

    v1 = a0;
    s5 = (s32) 0x3b0000U;
    (*(volatile u32 *) (u32) (sp + 196)) = (u32) a0;
    s4 = 0;
    a0 = (s32) ((u32) v1 << 3);
    v1 = (s32) 0x520000U;
    v1 = (s32) ((u32) v1 + 0x2840U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    s1 = (s32) 0x3a0000U;
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    { u64 x_[2], y_[2], z_[2]; s32 n_; x_[0] = (u64) v1; x_[1] = qh_v1; y_[0] = (u64) 0; y_[1] = (u64) 0; z_[0] = z_[1] = 0; for (n_ = 0; n_ < 16; n_++) { u32 b_ = (u32) ((x_[n_ >> 3] >> (8 * (n_ & 7))) & 0xFF) + (u32) ((y_[n_ >> 3] >> (8 * (n_ & 7))) & 0xFF); if (b_ > 0xFF) b_ = 0xFF; z_[n_ >> 3] |= (u64) b_ << (8 * (n_ & 7)); } s2 = (s64) z_[0]; qh_s2 = z_[1]; }
    v1 = (*(volatile s32 *) (u32) (sp + 196));
    a0 = 3;
    s5 = (s32) ((u32) s5 + 0x43f0U);
    s1 = (s32) ((u32) s1 + 0xffff8310U);
    if ((s32) a0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) a0); hi = (s32) ((s32) v1 % (s32) a0); lo = q_; }
    a1 = hi;
    v1 = (s32) 0x55550000U;
    a0 = v1 | 0x5556;
    v1 = (s32) ((u32) a1 << 4);
    a1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) a1 + (u32) v1);
    s0 = (s32) ((u32) v1 << 1);
    v1 = (*(volatile s32 *) (u32) (sp + 196));
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a0 = (s32) ((u32) v1 >> 31);
    v1 = hi;
    a0 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) a0 + 0x514U);
    fp = (s32) ((u32) a0 + 0x517U);
    (*(volatile u32 *) (u32) (sp + 176)) = (u32) v1;
L_001B3EC0:;
    a1 = (*(volatile u8 *) (u32) s2);
    if (a1 == 0) goto L_001B3FC0;
    { u32 a_ = (u32) (sp + 160) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    a0 = (s32) 0x3b0000U;
    a0 = (*(volatile s32 *) (u32) (a0 + 17396));
    v1 = (*(volatile u8 *) (u32) v1);
    at = a0 < v1;
    if (at == 0) goto L_001B3EF0;
    if (s4 != 0) goto L_001B3FC0;
L_001B3EF0:;
    v0 = (*(volatile s32 *) (u32) (gp + -23164));
    if (v0 == 0) { v0 = (*(volatile s32 *) (u32) (sp + 196)); goto L_001B3FE0; }
    v1 = (*(volatile s32 *) (u32) (v0 + 36));
    a0 = (*(volatile s32 *) (u32) (s5 + 8));
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 17400));
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    v0 = (s32) ((u32) a0 - (u32) v0);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_0014AC50(a0, a1, a2, a3);
    s3 = v0;
    a0 = s3; func_001CDAD0(a0);
    a0 = (*(volatile s32 *) (u32) (sp + 176));
    s7 = (s32) ((u32) s3 + 0x4U); v0 = func_001454C0(a0);
    a0 = v0;
    a2 = (s64) ((u64) s0 << 48);
    v0 = (*(volatile s32 *) (u32) s7);
    a2 = a2 >> 48;
    a4 = (*(volatile s16 *) (u32) s1);
    a1 = (*(volatile s32 *) (u32) v0);
    a3 = 0; func_0014F2F0(a0, a1, a2, a3, a4);
    v0 = (*(volatile s32 *) (u32) s3);
    at = v0 < 2;
    if (at != 0) goto L_001B4018;
    v0 = (*(volatile s32 *) (u32) s7);
    s6 = (*(volatile s32 *) (u32) (v0 + 4));
    if (s6 == 0) goto L_001B4018;
    a0 = fp; v0 = func_001454C0(a0);
    { s32 c_ = s0 >= 0; v1 = (s32) s0 >> 2; if (c_) goto L_001B3F98; }
    v1 = (s32) ((u32) s0 + 0x3U);
    v1 = (s32) v1 >> 2;
L_001B3F98:;
    a4 = (*(volatile s16 *) (u32) s1);
    a2 = (s64) ((u64) v1 << 48);
    a2 = a2 >> 48;
    a0 = v0;
    a1 = s6;
    a3 = 0; func_0014F2F0(a0, a1, a2, a3, a4);
L_001B3FB8:;
    a0 = s3; Pes6Heap_Free(a0);
L_001B3FC0:;
    s4 = (s32) ((u32) s4 + 0x1U);
    v1 = s4 < 8;
    s2 = (s32) ((u32) s2 + 0x1U);
    s5 = (s32) ((u32) s5 + 0x4U);
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x2U); if (c_) goto L_001B3EC0; }
    goto L_001B4090;
L_001B3FE0:;
    a1 = (s32) 0x1b0000U;
    v1 = (*(volatile u8 *) (u32) s2);
    a1 = (s32) ((u32) a1 + 0x40c0U);
    a2 = (s32) ((u32) sp + 0xc8U);
    a3 = 8;
    (*(volatile u32 *) (u32) (sp + 200)) = (u32) v0;
    v0 = (s32) ((u32) sp + 0xccU);
    (*(volatile u32 *) (u32) v0) = (u32) s4;
    v0 = (*(volatile s32 *) (u32) (s5 + 8));
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) ((u32) v0 + 0xffffffffU); v0 = func_0017FA00(a0, a1, a2, a3);
    goto L_001B3FC0;
L_001B4018:;
    a0 = 0;
    a1 = 1;
    a2 = 2;
    a3 = 128;
    a4 = 64;
    a5 = 0; v0 = func_001515F0(a0, a1, a2, a3, a4, a5);
    s6 = v0;
    v0 = (*(volatile s32 *) (u32) s7);
    a1 = (*(volatile s32 *) (u32) v0);
    a0 = s6; func_0014EAE0(a0, a1);
    a0 = fp; v0 = func_001454C0(a0);
    { s32 c_ = s0 >= 0; v1 = (s32) s0 >> 2; if (c_) goto L_001B4060; }
    v1 = (s32) ((u32) s0 + 0x3U);
    v1 = (s32) v1 >> 2;
L_001B4060:;
    a4 = (*(volatile s16 *) (u32) s1);
    a2 = (s64) ((u64) v1 << 48);
    a2 = a2 >> 48;
    a0 = v0;
    a1 = s6;
    a3 = 0; func_0014F2F0(a0, a1, a2, a3, a4);
    a0 = s6; Pes6Heap_Free(a0);
    goto L_001B3FB8;
L_001B4090:;
    return;
}
