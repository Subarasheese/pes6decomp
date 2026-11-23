/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6SaveData_IsUnavailable(void);
s64 func_0022BFF0(s64, s64);
s64 func_0022C140(s64);
s64 func_0022C1E0(void);

void func_002398C0(s64 a0, s64 a1, s64 a2) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    u64 qh_v1 = 0;
    s64 frame[54];
    s64 sp = (s32) (u32) frame;

    s5 = a0;
    v0 = Pes6SaveData_IsUnavailable();
    v1 = 1;
    if (v0 == v1) { ; goto L_00239BB4; }
    a0 = s5; v0 = func_0022C140(a0);
    { u64 x_[2], y_[2], z_[2]; s32 n_; x_[0] = (u64) v0; x_[1] = qh_v0; y_[0] = (u64) 0; y_[1] = (u64) 0; z_[0] = z_[1] = 0; for (n_ = 0; n_ < 16; n_++) { u32 b_ = (u32) ((x_[n_ >> 3] >> (8 * (n_ & 7))) & 0xFF) + (u32) ((y_[n_ >> 3] >> (8 * (n_ & 7))) & 0xFF); if (b_ > 0xFF) b_ = 0xFF; z_[n_ >> 3] |= (u64) b_ << (8 * (n_ & 7)); } v1 = (s64) z_[0]; qh_v1 = z_[1]; }
    { s32 c_ = v1 == 0; { u32 a_ = (u32) (sp + 208) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } if (c_) goto L_00239BB0; }
    a1 = (*(volatile u8 *) (u32) (v1 + 9));
    a0 = (s64) ((u64) 0 + (u64) (s64) 2);
    at = a1 < 3;
    { s32 c_ = at != 0; a2 = (s64) ((u64) 0 + (u64) (s64) 1); if (c_) goto L_00239948; }
    a0 = a0 & 0xff;
L_0023992C:;
    v1 = (s32) ((u32) a2 + 0x1U);
    a0 = (s32) ((u32) a0 << 1);
    a2 = v1 & 0xff;
    a0 = a0 & 0xff;
    v1 = a0 < a1;
    if (v1 != 0) { a0 = a0 & 0xff; goto L_0023992C; }
L_00239948:;
    s7 = a2 & 0xff;
    s3 = 0;
    fp = (s64) ((u64) 0 + (u64) (s64) 1);
    { s32 c_ = s7 <= 0; s2 = 0; if (c_) goto L_00239BA8; }
    v1 = (s32) ((u32) s7 + 0xffffffffU);
    { u32 a_ = (u32) (sp + 192) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
L_00239964:;
    { u32 a_ = (u32) (sp + 208) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    s4 = 0;
    v1 = (*(volatile u8 *) (u32) (v1 + 5));
    { s32 c_ = v1 <= 0; s1 = 0; if (c_) goto L_00239B08; }
    v0 = fp & 0xff;
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
L_00239980:;
    a1 = s4 & 0xff;
    a0 = s5; v0 = func_0022BFF0(a0, a1);
    s0 = v0;
    if (s0 == 0) goto L_00239AF0;
    a0 = (*(volatile u8 *) (u32) s0);
    { u32 a_ = (u32) (sp + 176) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    if (v1 != a0) goto L_00239AF0;
    v1 = (*(volatile u8 *) (u32) (s0 + 22));
    v0 = 1;
    v1 = (s64) ((u64) v1 << 62);
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 != v0) goto L_00239A68;
    if (s7 <= 0) goto L_00239A68;
    { u32 a_ = (u32) (sp + 192) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    if (s3 != v0) goto L_00239A68;
    v0 = func_0022C1E0();
    s6 = v0; v0 = Pes6SaveData_IsUnavailable();
    v1 = 1;
    if (v0 == v1) goto L_00239A30;
    a0 = s5; v0 = func_0022C140(a0);
    if (s6 == 0) goto L_00239A30;
    if (v0 == 0) goto L_00239A30;
    v1 = (*(volatile u8 *) (u32) (v0 + 6));
    v0 = s2 & 0xff;
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = v0 & 0xff;
    at = v0 < 194;
    if (at == 0) goto L_00239A30;
    v0 = (s32) ((u32) s6 + (u32) v0);
    (*(volatile u8 *) (u32) (v0 + 2)) = (u8) s4;
L_00239A30:;
    v1 = (*(volatile u8 *) (u32) (s0 + 22));
    v0 = (s32) ((u32) s2 + 0x1U);
    s2 = v0 & 0xff;
    v1 = (s64) ((u64) v1 << 61);
    v0 = 1;
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 != v0) goto L_00239A68;
    v1 = s1 & 0xff;
    v0 = (s32) ((u32) s1 + 0x1U);
    v1 = (s32) ((u32) v1 + (u32) sp);
    s1 = v0 & 0xff;
    (*(volatile u8 *) (u32) (v1 + 224)) = (u8) s4;
L_00239A68:;
    v0 = func_0022C1E0();
    s6 = v0; v0 = Pes6SaveData_IsUnavailable();
    v1 = 1;
    if (v0 == v1) goto L_00239AC0;
    a0 = s5; v0 = func_0022C140(a0);
    if (s6 == 0) goto L_00239AC0;
    if (v0 == 0) goto L_00239AC0;
    a0 = (*(volatile u8 *) (u32) (v0 + 6));
    v1 = s2 & 0xff;
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = v1 & 0xff;
    at = v1 < 194;
    if (at == 0) goto L_00239AC0;
    v1 = (s32) ((u32) s6 + (u32) v1);
    (*(volatile u8 *) (u32) (v1 + 2)) = (u8) s4;
L_00239AC0:;
    a0 = (*(volatile u8 *) (u32) (s0 + 22));
    a1 = (s32) ((u32) s2 + 0x1U);
    v1 = 1;
    a0 = (s64) ((u64) a0 << 61);
    a0 = (s64) ((u64) a0 >> 63);
    { s32 c_ = a0 != v1; s2 = a1 & 0xff; if (c_) goto L_00239AF0; }
    a0 = s1 & 0xff;
    v1 = (s32) ((u32) s1 + 0x1U);
    a0 = (s32) ((u32) a0 + (u32) sp);
    s1 = v1 & 0xff;
    (*(volatile u8 *) (u32) (a0 + 224)) = (u8) s4;
L_00239AF0:;
    { u32 a_ = (u32) (sp + 208) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    s4 = (s32) ((u32) s4 + 0x1U);
    v1 = (*(volatile u8 *) (u32) (v1 + 5));
    v1 = s4 < v1;
    if (v1 != 0) goto L_00239980;
L_00239B08:;
    s1 = s1 & 0xff;
    { s32 c_ = s1 <= 0; s4 = 0; if (c_) goto L_00239B90; }
    s6 = (s32) ((u32) sp + 0xe0U);
L_00239B18:;
    v0 = (*(volatile u8 *) (u32) s6);
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } v0 = func_0022C1E0();
    s0 = v0; v0 = Pes6SaveData_IsUnavailable();
    v1 = 1;
    if (v0 == v1) goto L_00239B78;
    a0 = s5; v0 = func_0022C140(a0);
    if (s0 == 0) goto L_00239B78;
    if (v0 == 0) goto L_00239B78;
    a0 = (*(volatile u8 *) (u32) (v0 + 6));
    v1 = s2 & 0xff;
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = v1 & 0xff;
    at = v1 < 194;
    if (at == 0) goto L_00239B78;
    a0 = (s32) ((u32) s0 + (u32) v1);
    { u32 a_ = (u32) (sp + 160) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u8 *) (u32) (a0 + 2)) = (u8) v1;
L_00239B78:;
    v1 = (s32) ((u32) s2 + 0x1U);
    s2 = v1 & 0xff;
    s4 = (s32) ((u32) s4 + 0x1U);
    v1 = s4 < s1;
    { s32 c_ = v1 != 0; s6 = (s32) ((u32) s6 + 0x1U); if (c_) goto L_00239B18; }
L_00239B90:;
    s3 = (s32) ((u32) s3 + 0x1U);
    a0 = (s32) ((u32) fp + 0x1U);
    v1 = s3 < s7;
    { s32 c_ = v1 != 0; fp = a0 & 0xff; if (c_) goto L_00239964; }
L_00239BA8:;
    { u32 a_ = (u32) (sp + 208) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u8 *) (u32) (v1 + 7)) = (u8) s2;
L_00239BB0:;
L_00239BB4:;
    return;
}
