/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001D6D30(s64, s64);
void func_001D7D60(s64, s64);
void func_001D7D80(s64, s64, s64, s64);
void func_001DF4F0(s64, s64);
s64 func_00635AE0(s64, s64, s64);
void func_0063ABF0(s64, s64, s64);
void func_0063AC20(s64);
void func_0063ACE0(s64, s64, s64, s64);
void func_0063AD20(s64, s64, s64, s64);
s64 func_0063AD90(s64, s64, s64, s64);
s64 func_0063C0A0(s64);
s64 func_0063C150(s64, s64, s64);
void sprintf(s64, s64, s64, s64, s64, s64, s64, s64);

void func_006357C0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    u64 qh_a0 = 0;
    s64 gp = 0x3ef370;
    s64 frame[24];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0x660000U;
    fp = a1;
    s6 = a2;
    s5 = a0;
    v0 = (*(volatile s32 *) (u32) (v0 + -10088));
    a1 = (*(volatile u8 *) (u32) (a1 + 18));
    a2 = (*(volatile u8 *) (u32) (fp + 19));
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    { u64 x_[2], y_[2], z_[2]; s32 n_; x_[0] = (u64) v0; x_[1] = qh_v0; y_[0] = (u64) 0; y_[1] = (u64) 0; z_[0] = z_[1] = 0; for (n_ = 0; n_ < 16; n_++) { u32 b_ = (u32) ((x_[n_ >> 3] >> (8 * (n_ & 7))) & 0xFF) + (u32) ((y_[n_ >> 3] >> (8 * (n_ & 7))) & 0xFF); if (b_ > 0xFF) b_ = 0xFF; z_[n_ >> 3] |= (u64) b_ << (8 * (n_ & 7)); } a0 = (s64) z_[0]; qh_a0 = z_[1]; } v0 = func_0063C150(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) (s5 + 4));
    s4 = (*(volatile s32 *) (u32) (v1 + 80));
    { s32 c_ = s4 == 0; (*(volatile u32 *) (u32) (sp + 188)) = (u32) v0; if (c_) goto L_00635AB0; }
    s1 = (s32) 0x650000U;
    s7 = 0;
    s3 = 0;
    s2 = s5;
    s1 = (s32) ((u32) s1 + 0x7c90U);
    s0 = (s32) ((u32) s5 + 0x264U);
L_0063583C:;
    v0 = (*(volatile s32 *) (u32) (s2 + 612));
    if (v0 != 0) goto L_00635860;
    a2 = (*(volatile s32 *) (u32) s1);
    a0 = s4;
    a1 = s0;
    a3 = (s32) ((u32) gp + 0xffff83acU); v0 = func_0063AD90(a0, a1, a2, a3);
    s7 = 1;
L_00635860:;
    a1 = (*(volatile s32 *) (u32) s1);
    a2 = (*(volatile s32 *) (u32) (s2 + 612));
    a0 = s4; func_0063ABF0(a0, a1, a2);
    s3 = (s32) ((u32) s3 + 0x1U);
    s2 = (s32) ((u32) s2 + 0x4U);
    v0 = s3 < 6;
    s1 = (s32) ((u32) s1 + 0x4U);
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_0063583C; }
    a0 = s4;
    a1 = 1; func_001D7D60(a0, a1);
    if (s7 == 0) goto L_006358E4;
    s1 = (s32) 0x650000U;
    s2 = 0;
    s1 = (s32) ((u32) s1 + 0x7c90U);
    s0 = s5;
L_006358AC:;
    a1 = (*(volatile s32 *) (u32) s1);
    a0 = s4; v0 = func_001D6D30(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 612));
    a1 = v0; func_0063ACE0(a0, a1, a2, a3);
    s2 = (s32) ((u32) s2 + 0x1U);
    s1 = (s32) ((u32) s1 + 0x4U);
    v0 = s2 < 6;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_006358AC; }
    a0 = s4;
    a1 = 1; func_001D7D60(a0, a1);
L_006358E4:;
    if (s7 == 0) { a0 = s6; goto L_006358FC; }
    v0 = -3;
    (*(volatile u32 *) (u32) (gp + -31800)) = (u32) v0;
    (*(volatile u32 *) (u32) (gp + -31796)) = (u32) v0;
    a0 = s6;
L_006358FC:;
    v0 = func_0063C0A0(a0);
    s6 = v0;
    v0 = (*(volatile s32 *) (u32) (gp + -31800));
    if (v0 == s6) { v1 = (*(volatile s32 *) (u32) (gp + -31796)); goto L_00635958; }
    v0 = -1;
    { s32 c_ = s6 != v0; (*(volatile u32 *) (u32) (gp + -31800)) = (u32) s6; if (c_) goto L_0063592C; }
    a1 = (s32) 0x650000U;
    a1 = (s32) ((u32) a1 + 0x7ff0U); goto L_0063594C;
L_0063592C:;
    a0 = (s32) 0x650000U;
    a1 = (s32) 0x660000U;
    a0 = (s32) ((u32) a0 + 0x7ff8U);
    a1 = (s32) ((u32) a1 + 0xffffb078U);
    a2 = s6; sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    a1 = (s32) 0x650000U;
    a1 = (s32) ((u32) a1 + 0x7ff8U);
L_0063594C:;
    a0 = (*(volatile s32 *) (u32) (s5 + 616)); func_0063AD20(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (gp + -31796));
L_00635958:;
    v0 = (*(volatile s32 *) (u32) (sp + 188));
    if (v1 == v0) { a0 = (*(volatile s32 *) (u32) (s5 + 628)); goto L_006359A8; }
    v1 = -1;
    { s32 c_ = v0 != v1; (*(volatile u32 *) (u32) (gp + -31796)) = (u32) v0; if (c_) goto L_0063597C; }
    a1 = (s32) 0x650000U;
    a1 = (s32) ((u32) a1 + 0x7ff0U); goto L_0063599C;
L_0063597C:;
    a0 = (s32) 0x660000U;
    a1 = (s32) 0x660000U;
    a2 = v0;
    a0 = (s32) ((u32) a0 + 0xffff8000U);
    a1 = (s32) ((u32) a1 + 0xffffb078U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    a1 = (s32) 0x660000U;
    a1 = (s32) ((u32) a1 + 0xffff8000U);
L_0063599C:;
    a0 = (*(volatile s32 *) (u32) (s5 + 624)); func_0063AD20(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s5 + 628));
L_006359A8:;
    func_0063AC20(a0);
    a1 = (*(volatile u8 *) (u32) (fp + 18));
    a2 = (*(volatile u8 *) (u32) (fp + 19));
    a0 = s6; v0 = func_00635AE0(a0, a1, a2);
    v1 = 36;
    if (v0 != v1) goto L_006359D4;
    a1 = (s32) ((u32) gp + 0xffff83acU); goto L_006359EC;
L_006359D4:;
    a1 = (s32) 0x660000U;
    a2 = v0;
    a0 = (s32) ((u32) gp + 0xffff83c4U);
    a1 = (s32) ((u32) a1 + 0xffffafe8U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    a1 = (s32) ((u32) gp + 0xffff83c4U);
L_006359EC:;
    a0 = (*(volatile s32 *) (u32) (s5 + 632)); func_0063AD20(a0, a1, a2, a3);
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = (s32) 0x20000000U;
    v0 = v0 & v1;
    if (v0 != 0) goto L_00635A28;
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = (s32) 0x40000000U;
    if (v0 != v1) { s0 = 0; goto L_00635A58; }
    v1 = (*(volatile u8 *) (u32) (fp + 19));
    v0 = 255;
    if (v1 == v0) goto L_00635A54;
L_00635A28:;
    v0 = (s32) 0x660000U;
    s0 = (s64) ((u64) 0 + (u64) (s64) 1);
    v1 = (*(volatile s32 *) (u32) (v0 + -4240));
    v1 = (*(volatile u8 *) (u32) (v1 + 12));
    v0 = (s32) 0x650000U;
    v0 = (s32) ((u32) v0 + 0x7fe0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    s1 = (s64) ((u64) v0 << 48);
    s1 = s1 >> 48; goto L_00635A5C;
L_00635A54:;
    s0 = 0;
L_00635A58:;
    s1 = 14;
L_00635A5C:;
    v0 = (*(volatile u8 *) (u32) (fp + 39));
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) (s5 + 628)); goto L_00635A74; }
    s0 = 0;
    s1 = 14;
    v0 = (*(volatile s32 *) (u32) (s5 + 628));
L_00635A74:;
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = s0; func_001DF4F0(a0, a1);
    v0 = (*(volatile s32 *) (u32) (s5 + 632));
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = s0; func_001DF4F0(a0, a1);
    v0 = (*(volatile s32 *) (u32) (s5 + 4));
    a0 = (*(volatile s32 *) (u32) (v0 + 80));
    a1 = s1; func_001D7D80(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s5 + 4));
    a0 = (*(volatile s32 *) (u32) (v0 + 80));
    a1 = 1; func_001D7D60(a0, a1);
L_00635AB0:;
    return;
}
