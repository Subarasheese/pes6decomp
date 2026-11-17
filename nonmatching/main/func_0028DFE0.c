/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_0028E5E0(s64, s64, s64, s64, s64, s64, s64, s64);
s64 func_0028F230(s64, s64, s64, s64, s64);
s64 func_0028F860(s64, s64, s64, s64);
s64 func_002C62E0(s64, s64, s64, s64);

s64 func_0028DFE0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    u64 qh_v1 = 0;
    u64 qh_a2 = 0;
    s64 hi = 0, lo = 0;
    s64 frame[46];
    s64 sp = (s32) (u32) frame;

    a7 = 0;
    s5 = a0;
    s4 = a1;
    s0 = a2;
    (*(volatile u32 *) (u32) (sp + 364)) = (u32) a3;
    v0 = (s32) ((u32) s0 + 0x40U);
    a3 = (s32) ((u32) s0 + 0x20U);
    { u32 a_ = (u32) (sp + 224) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    { u64 x_[2], y_[2], z_[2]; s32 n_; x_[0] = (u64) v0; x_[1] = qh_v0; y_[0] = (u64) 0; y_[1] = (u64) 0; z_[0] = z_[1] = 0; for (n_ = 0; n_ < 16; n_++) { u32 b_ = (u32) ((x_[n_ >> 3] >> (8 * (n_ & 7))) & 0xFF) + (u32) ((y_[n_ >> 3] >> (8 * (n_ & 7))) & 0xFF); if (b_ > 0xFF) b_ = 0xFF; z_[n_ >> 3] |= (u64) b_ << (8 * (n_ & 7)); } a2 = (s64) z_[0]; qh_a2 = z_[1]; }
    v0 = (*(volatile s32 *) (u32) (sp + 364));
    a5 = s0;
    (*(volatile u64 *) (u32) sp) = (u64) 0;
    a4 = (s32) ((u32) v0 + 0xa4U);
    a6 = v0; v0 = func_0028E5E0(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (*(volatile s32 *) (u32) (sp + 364));
    a0 = s5;
    a1 = s4;
    a2 = (s32) ((u32) s0 + 0x40U);
    a3 = (s32) ((u32) s0 + 0x20U);
    a5 = s0;
    a7 = 1;
    (*(volatile u64 *) (u32) sp) = (u64) 0;
    a4 = (s32) ((u32) v0 + 0xa4U);
    a6 = v0; v0 = func_0028E5E0(a0, a1, a2, a3, a4, a5, a6, a7);
    a5 = 0;
    v1 = 1;
    a0 = 255;
L_0028E080:;
    { u32 a_ = (u32) (sp + 224) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a1 = (s32) ((u32) v0 + (u32) a5);
    v0 = (*(volatile u8 *) (u32) a1);
    if (v0 != a0) goto L_0028E100;
    a4 = 0;
L_0028E098:;
    a2 = 0;
    a3 = 0;
L_0028E0A0:;
    { u32 a_ = (u32) (sp + 224) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = (s32) ((u32) v0 + (u32) a3);
    v0 = (*(volatile u8 *) (u32) v0);
    if (a4 != v0) goto L_0028E0C0;
    a2 = v1; goto L_0028E0D0;
L_0028E0C0:;
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = a3 < 32;
    if (v0 != 0) goto L_0028E0A0;
L_0028E0D0:;
    if (a2 != v1) goto L_0028E0F0;
    a4 = (s32) ((u32) a4 + 0x1U);
    v0 = a4 < 32;
    if (v0 != 0) goto L_0028E098;
    goto L_0028E100;
L_0028E0F0:;
    (*(volatile u8 *) (u32) a1) = (u8) a4;
    v0 = (s32) ((u32) s0 + (u32) a4);
    (*(volatile u8 *) (u32) v0) = (u8) v1;
L_0028E100:;
    a5 = (s32) ((u32) a5 + 0x1U);
    v0 = a5 < 11;
    if (v0 != 0) goto L_0028E080;
    fp = (*(volatile s32 *) (u32) (sp + 364));
    (*(volatile u32 *) (u32) (sp + 272)) = (u32) 0;
L_0028E118:;
    v0 = (*(volatile s32 *) (u32) (sp + 272));
    { u32 a_ = (u32) (sp + 224) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    s0 = (s32) ((u32) s4 + (u32) v0);
    s6 = (s32) ((u32) v1 + (u32) v0);
    a1 = (*(volatile u8 *) (u32) (s0 + 296));
    v0 = (*(volatile u8 *) (u32) s6);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) s4 + (u32) v0);
    s3 = (*(volatile s32 *) (u32) (v0 + 168));
    a0 = s3; v0 = func_002C62E0(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    s7 = (s32) ((u32) s0 + 0x128U);
    (*(volatile u32 *) (u32) (sp + 240)) = (u32) v1;
    s1 = 0;
L_0028E158:;
    v1 = (*(volatile s32 *) (u32) (sp + 272));
    if (v1 != s1) goto L_0028E204;
L_0028E168:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < 11;
    if (v1 != 0) goto L_0028E158;
L_0028E180:;
    v1 = (*(volatile s32 *) (u32) (sp + 272));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (sp + 272)) = (u32) v1;
    v1 = v1 < 11;
    { s32 c_ = v1 != 0; fp = (s32) ((u32) fp + 0xcU); if (c_) goto L_0028E118; }
    { u32 a_ = (u32) (sp + 224) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    s0 = (*(volatile u8 *) (u32) v1);
    v1 = (s32) ((u32) s0 + (u32) s4);
    v1 = (*(volatile u8 *) (u32) (v1 + 37));
    if (v1 != 0) goto L_0028E4A8;
    s3 = 11;
    s2 = 0;
    s1 = 1;
L_0028E1BC:;
    { u32 a_ = (u32) (sp + 224) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    v1 = (s32) ((u32) v1 + (u32) s1);
    a0 = (*(volatile u8 *) (u32) v1);
    v1 = (s32) ((u32) s4 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) (v1 + 37));
    if (v1 != 0) goto L_0028E470;
L_0028E1D8:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < 11;
    if (v1 != 0) goto L_0028E1BC;
    { u32 a_ = (u32) (sp + 224) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    a1 = (s32) ((u32) v1 + (u32) s3);
    a0 = (*(volatile u8 *) (u32) a1);
    (*(volatile u8 *) (u32) v1) = (u8) a0;
    (*(volatile u8 *) (u32) a1) = (u8) s0;
    goto L_0028E4A8;
L_0028E204:;
    { u32 a_ = (u32) (sp + 224) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = (s32) ((u32) s4 + (u32) s1);
    a1 = (*(volatile u8 *) (u32) (v1 + 296));
    s0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile u8 *) (u32) s0);
    v0 = (s32) ((u32) v1 + 0x128U);
    (*(volatile u32 *) (u32) (sp + 304)) = (u32) v0;
    v0 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) s4 + (u32) v0);
    s2 = (*(volatile s32 *) (u32) (v0 + 168));
    a0 = s2; v0 = func_002C62E0(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = (*(volatile s32 *) (u32) (sp + 240));
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u32 *) (u32) (sp + 256)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (sp + 304));
    a1 = (*(volatile u8 *) (u32) v0);
    a0 = s3; v0 = func_002C62E0(a0, a1, a2, a3);
    a1 = (*(volatile u8 *) (u32) s7);
    v0 = v0 & 0xff;
    { u32 a_ = (u32) (sp + 208) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    a0 = s2; v0 = func_002C62E0(a0, a1, a2, a3);
    { u32 a_ = (u32) (sp + 208) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    a0 = v0 & 0xff;
    a0 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) (sp + 256));
    if (v1 != a0) goto L_0028E3F8;
    v0 = (*(volatile u8 *) (u32) (s4 + 1));
    { s32 c_ = v0 == 0; v1 = (*(volatile u8 *) (u32) s6); if (c_) goto L_0028E450; }
    v1 = v1 & 0xff;
    v0 = (s32) 0x55550000U;
    a2 = (s32) ((u32) s4 + (u32) v1);
    v0 = v0 | 0x5556;
    v1 = (*(volatile u8 *) (u32) (a2 + 359));
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a1 = (s32) ((u32) v1 >> 31);
    a0 = hi;
    v0 = (*(volatile u8 *) (u32) (a2 + 327));
    v1 = 100;
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) ((u32) v1 - (u32) a0);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = (s32) 0x51eb0000U;
    v0 = v0 | 0x851f;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v1 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 5;
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u32 *) (u32) (sp + 336)) = (u32) v0;
L_0028E2E8:;
    a2 = (*(volatile u8 *) (u32) s7);
    a4 = (*(volatile s32 *) (u32) (sp + 336));
    a0 = s5;
    a1 = s3;
    a3 = fp; v0 = func_0028F230(a0, a1, a2, a3, a4);
    { u32 a_ = (u32) (sp + 192) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    a0 = s5;
    v0 = (s32) ((u32) s1 << 1);
    a4 = (*(volatile s32 *) (u32) (sp + 336));
    v0 = (s32) ((u32) v0 + (u32) s1);
    a1 = s3;
    v1 = (s32) ((u32) v0 << 2);
    v0 = (*(volatile s32 *) (u32) (sp + 304));
    a2 = (*(volatile u8 *) (u32) v0);
    v0 = (*(volatile s32 *) (u32) (sp + 364));
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u32 *) (u32) (sp + 288)) = (u32) v0;
    a3 = v0; v0 = func_0028F230(a0, a1, a2, a3, a4);
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (*(volatile u8 *) (u32) (s4 + 1));
    { s32 c_ = v0 == 0; v1 = (*(volatile u8 *) (u32) s0); if (c_) goto L_0028E460; }
    v1 = v1 & 0xff;
    v0 = (s32) 0x55550000U;
    a2 = (s32) ((u32) s4 + (u32) v1);
    v0 = v0 | 0x5556;
    v1 = (*(volatile u8 *) (u32) (a2 + 359));
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a1 = (s32) ((u32) v1 >> 31);
    a0 = hi;
    v0 = (*(volatile u8 *) (u32) (a2 + 327));
    v1 = 100;
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) ((u32) v1 - (u32) a0);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = (s32) 0x51eb0000U;
    v0 = v0 | 0x851f;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v1 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 5;
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u32 *) (u32) (sp + 320)) = (u32) v0;
L_0028E3A8:;
    v0 = (*(volatile s32 *) (u32) (sp + 304));
    a3 = (*(volatile s32 *) (u32) (sp + 288));
    a0 = s5;
    a4 = (*(volatile s32 *) (u32) (sp + 320));
    a2 = (*(volatile u8 *) (u32) v0);
    a1 = s2; v0 = func_0028F230(a0, a1, a2, a3, a4);
    v1 = (s32) ((u32) v0 + 0xfU);
    a4 = (*(volatile s32 *) (u32) (sp + 320));
    { u32 a_ = (u32) (sp + 192) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a1 = s2;
    a2 = (*(volatile u8 *) (u32) s7);
    a0 = s5;
    a3 = fp;
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u32 *) (u32) (sp + 256)) = (u32) v0; v0 = func_0028F230(a0, a1, a2, a3, a4);
    { u32 a_ = (u32) (sp + 176) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    a0 = (s32) ((u32) v1 + (u32) v0);
L_0028E3F8:;
    v1 = (*(volatile s32 *) (u32) (sp + 256));
    at = v1 < a0;
    if (at == 0) goto L_0028E168;
    v1 = (*(volatile u8 *) (u32) s6);
    v0 = (*(volatile u8 *) (u32) s0);
    (*(volatile u8 *) (u32) s6) = (u8) v0;
    (*(volatile u8 *) (u32) s0) = (u8) v1;
    v0 = (*(volatile u8 *) (u32) s6);
    a1 = (*(volatile u8 *) (u32) s7);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) s4 + (u32) v0);
    s3 = (*(volatile s32 *) (u32) (v0 + 168));
    a0 = s3; v0 = func_002C62E0(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    at = v1 < 9;
    { s32 c_ = at == 0; (*(volatile u32 *) (u32) (sp + 240)) = (u32) v1; if (c_) goto L_0028E180; }
    s1 = 0; goto L_0028E168;
L_0028E450:;
    v0 = 100;
    (*(volatile u32 *) (u32) (sp + 336)) = (u32) v0; goto L_0028E2E8;
L_0028E460:;
    v0 = 100;
    (*(volatile u32 *) (u32) (sp + 320)) = (u32) v0; goto L_0028E3A8;
L_0028E470:;
    v0 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) s4 + (u32) v0);
    a0 = s5;
    a1 = (*(volatile s32 *) (u32) (v0 + 168));
    a2 = 0;
    a3 = 100; v0 = func_0028F860(a0, a1, a2, a3);
    at = s2 < v0;
    if (at == 0) goto L_0028E1D8;
    s2 = v0;
    s3 = s1; goto L_0028E1D8;
L_0028E4A8:;
    return v0;
}
