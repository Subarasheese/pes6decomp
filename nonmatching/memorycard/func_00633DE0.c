/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001D79A0(s64, s64);
s64 func_001D7A20(s64, s64, s64);
void func_001D7D60(s64, s64);
void func_001ED840(s64, s64);
void func_001ED880(s64, f32);
void func_001EDA30(s64, s64);
void func_001EDAE0(s64, s64);
s64 func_001EDD00(s64, s64, s64, s64);
s64 func_001EE0D0(s64, s64, s64, s64);
void func_001EEE60(s64, s64);
void func_001EF860(s64, s64);
void func_001EF900(s64, s64);
void func_00634BD0(s64);
s64 func_0063A1B0(s64, s64, s64, s64);
void func_0063A1C0(s64, s64, s64, s64);
void func_0063A240(s64, s64, s64);
s64 func_0063A3B0(s64, s64, s64, s64);
void func_0063A4A0(s64, s64, s64, s64);
void func_0063A580(s64, s64, s64, s64, s64, s64, s64, s64);
void func_0063ABF0(s64, s64, s64);
void func_0063AD20(s64, s64, s64, s64);
s64 func_0063AD90(s64, s64, s64, s64);

void func_00633DE0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7, f32 fa12) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    u64 qh_s1 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    volatile union { f32 f; s32 i; } f22 = { 0 };
    s64 hi = 0, lo = 0;
    f32 acc = 0;
    s64 frame[34];
    s64 sp = (s32) (u32) frame;

    fp = a1;
    s7 = a2;
    s6 = (s32) ((u32) fp + 0x200U);
    s4 = a0;
    s3 = (s32) ((u32) fp + 0x204U);
    s2 = 0;
    s0 = (s32) 0x650000U;
    s0 = (s32) ((u32) s0 + 0x7d90U);
    v0 = (*(volatile s32 *) (u32) (a1 + 4));
    { u32 a_ = (u32) (sp + 192) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s32) ((u32) fp + 0x300U);
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    { u64 x_[2], y_[2], z_[2]; s32 n_; x_[0] = (u64) v0; x_[1] = qh_v0; y_[0] = (u64) 0; y_[1] = (u64) 0; z_[0] = z_[1] = 0; for (n_ = 0; n_ < 16; n_++) { u32 b_ = (u32) ((x_[n_ >> 3] >> (8 * (n_ & 7))) & 0xFF) + (u32) ((y_[n_ >> 3] >> (8 * (n_ & 7))) & 0xFF); if (b_ > 0xFF) b_ = 0xFF; z_[n_ >> 3] |= (u64) b_ << (8 * (n_ & 7)); } s1 = (s64) z_[0]; qh_s1 = z_[1]; }
    { u32 a_ = (u32) (sp + 192) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    s5 = (*(volatile s32 *) (u32) (v0 + 104));
L_00633E54:;
    v0 = (*(volatile s32 *) (u32) s1);
    if (v0 != 0) goto L_00633E78;
    a2 = (*(volatile s32 *) (u32) s0);
    a0 = s5;
    a1 = s1;
    a3 = (s32) ((u32) gp + 0xffff83acU); v0 = func_0063AD90(a0, a1, a2, a3);
L_00633E78:;
    a1 = (*(volatile s32 *) (u32) s0);
    a2 = (*(volatile s32 *) (u32) s1);
    a0 = s5; func_0063ABF0(a0, a1, a2);
    s2 = (s32) ((u32) s2 + 0x1U);
    s1 = (s32) ((u32) s1 + 0x4U);
    v0 = s2 < 11;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00633E54; }
    a0 = s5;
    a1 = 1; func_001D7D60(a0, a1);
    a0 = fp; func_00634BD0(a0);
    v0 = (*(volatile s8 *) (u32) (s4 + 76));
    if (v0 == 0) { { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); } goto L_00633ED4; }
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = (s32) ((u32) s4 + 0x4cU); func_0063AD20(a0, a1, a2, a3);
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); } goto L_00633EE4;
L_00633ED4:;
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = (s32) ((u32) gp + 0xffff83acU); func_0063AD20(a0, a1, a2, a3);
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
L_00633EE4:;
    s1 = (s32) 0x660000U;
    s2 = 1;
    s1 = (s32) ((u32) s1 + 0xffff8154U);
    s0 = (s32) ((u32) v0 + 0x4U);
L_00633EF4:;
    a1 = (*(volatile s32 *) (u32) (s1 + -4));
    a0 = (*(volatile s32 *) (u32) s0); func_0063AD20(a0, a1, a2, a3);
    s2 = (s32) ((u32) s2 + 0x1U);
    s1 = (s32) ((u32) s1 + 0x4U);
    v0 = s2 < 11;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00633EF4; }
    { u32 a_ = (u32) (sp + 192) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a1 = (s32) ((u32) sp + 0xe0U);
    a0 = (*(volatile s32 *) (u32) (v0 + 104));
    a2 = 47; v0 = func_001D7A20(a0, a1, a2);
    { u32 a_ = (u32) (sp + 192) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = (*(volatile s32 *) (u32) (v0 + 104));
    a1 = 47; f0.f = func_001D79A0(a0, a1);
    v0 = (*(volatile s32 *) (u32) s6);
    f21.f = (*(volatile f32 *) (u32) (sp + 224));
    f22.f = (*(volatile f32 *) (u32) (sp + 228));
    { s32 c_ = v0 != 0; f20.i = f0.i; if (c_) goto L_00633F7C; }
    v0 = func_001EE0D0(a0, a1, a2, a3);
    f12.i = f20.i;
    (*(volatile u32 *) (u32) s6) = (u32) v0;
    a0 = v0; func_001ED880(a0, f12.f);
    a0 = (*(volatile s32 *) (u32) s6);
    a1 = 1; func_001EDA30(a0, a1);
    a0 = (*(volatile s32 *) (u32) s6);
    a1 = (*(volatile u8 *) (u32) (fp + 980)); func_001ED840(a0, a1);
L_00633F7C:;
    a0 = (*(volatile s32 *) (u32) s6);
    a1 = 1; func_001EDAE0(a0, a1);
    { s32 c_ = s7 <= 0; s0 = 0; if (c_) goto L_00634050; }
    s1 = s3;
L_00633F94:;
    v0 = (*(volatile s32 *) (u32) s1);
    if (v0 != 0) goto L_00634030;
    a0 = (*(volatile s32 *) (u32) s6); v0 = func_001EDD00(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) s1) = (u32) v0;
    f3.i = (s32) 0;
    v0 = 5;
    v1 = (s32) ((u32) s0 >> 31);
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) s0 / (s32) v0); hi = (s32) ((s32) s0 % (s32) v0); lo = q_; }
    (*(volatile u32 *) (u32) (sp + 216)) = (u32) 0;
    f1.f = (*(volatile f32 *) (u32) (sp + 232));
    (*(volatile u32 *) (u32) (sp + 220)) = (u32) 0;
    acc = f3.f + f21.f;
    (*(volatile f32 *) (u32) (sp + 208)) = f21.f;
    f0.f = (*(volatile f32 *) (u32) (sp + 236));
    (*(volatile f32 *) (u32) (sp + 212)) = f22.f;
    v0 = (s32) 0x66660000U;
    a0 = hi;
    v0 = v0 | 0x6667;
    f2.i = (s32) a0;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) s0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    f2.f = (f32) f2.i;
    v0 = hi;
    v0 = (s32) v0 >> 1;
    f1.f = acc + f1.f * f2.f;
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile f32 *) (u32) (sp + 208)) = f1.f;
    f1.i = (s32) v0;
    f1.f = (f32) f1.i;
    acc = f3.f + f22.f;
    f0.f = acc + f0.f * f1.f;
    (*(volatile f32 *) (u32) (sp + 212)) = f0.f;
    a0 = (*(volatile s32 *) (u32) s1);
    a1 = (s32) ((u32) sp + 0xd0U); func_001EF860(a0, a1);
L_00634030:;
    a0 = (*(volatile s32 *) (u32) s1);
    a1 = 1; func_001EF900(a0, a1);
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < s7;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00633F94; }
L_00634050:;
    s0 = 0;
L_00634054:;
    a0 = (*(volatile u16 *) (u32) (s4 + 44)); v0 = func_0063A1B0(a0, a1, a2, a3);
    s1 = v0;
    v0 = 458;
    if (s1 != v0) goto L_00634070;
    s1 = 106;
L_00634070:;
    a0 = (s32) ((u32) s0 + 0x734bU); func_0063A580(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (s32) ((u32) s1 + 0xffffff96U);
    at = (u64) v0 < (u64) (s64) 2;
    if (at == 0) goto L_006340A8;
    a2 = 1;
    a0 = (s32) ((u32) s0 + 0x734bU);
    a1 = s1;
    a3 = a2; func_0063A4A0(a0, a1, a2, a3);
    goto L_006340C0;
L_006340A8:;
    a1 = (*(volatile u16 *) (u32) (s4 + 44));
    a2 = 1;
    a0 = (s32) ((u32) s0 + 0x734bU);
    a3 = a2; v0 = func_0063A3B0(a0, a1, a2, a3);
L_006340C0:;
    a0 = (s32) ((u32) sp + 0x10cU);
    a1 = (s32) ((u32) sp + 0xf0U);
    a2 = 1; func_0063A240(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) s3);
    a1 = (s32) ((u32) s0 + 0x734bU);
    a2 = (*(volatile s32 *) (u32) (sp + 268));
    a3 = (s32) ((u32) sp + 0xf0U); func_0063A1C0(a0, a1, a2, a3);
    v0 = 106;
    if (s1 != v0) { a1 = (s32) ((u32) gp + 0xffff83e4U); goto L_006340F4; }
    a1 = (s32) ((u32) gp + 0xffffadc0U);
L_006340F4:;
    a0 = (*(volatile s32 *) (u32) s3); func_001EEE60(a0, a1);
    s0 = (s32) ((u32) s0 + 0x1U);
    s4 = (s32) ((u32) s4 + 0x2U);
    v0 = s0 < 10;
    { s32 c_ = v0 != 0; s3 = (s32) ((u32) s3 + 0x4U); if (c_) goto L_00634054; }
    { u32 a_ = (u32) (sp + 192) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = (*(volatile s32 *) (u32) (v0 + 104));
    a1 = 1; func_001D7D60(a0, a1);
    return;
}
