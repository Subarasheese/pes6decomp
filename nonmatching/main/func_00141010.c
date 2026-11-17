/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00103E38(s64, s64);
s64 func_00103E48(s64, s64);

s64 func_00141010(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    u64 qh_v0 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    s64 frame[16];
    s64 sp = (s32) (u32) frame;

    v0 = 0;
    a2 = (s32) ((u32) v0 + 0x60U);
    v0 = (s32) 0xfffe0000U;
    v1 = v0 | 0x3;
    s1 = a0;
    s0 = a1;
    (*(volatile u32 *) (u32) a1) = (u32) v1;
    v0 = (s32) ((u32) s0 + (u32) a2);
    (*(volatile u32 *) (u32) (a1 + 4)) = (u32) v0;
    a0 = (*(volatile s32 *) (u32) (a0 + 64));
    at = (u64) 0 < (u64) a0;
    { s32 c_ = at == 0; a3 = 0; if (c_) goto L_00141088; }
    v1 = 1;
L_00141068:;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    v0 = (s32) ((u32) v0 + (u32) a3);
    (*(volatile u8 *) (u32) v0) = (u8) v1;
    a3 = (s32) ((u32) a3 + 0x1U);
    a0 = (*(volatile s32 *) (u32) (s1 + 64));
    v0 = (u64) a3 < (u64) a0;
    if (v0 != 0) goto L_00141068;
L_00141088:;
    v1 = (s32) ((u32) a2 + (u32) a0);
    v0 = (s32) ((u32) s0 + (u32) v1);
    (*(volatile u32 *) (u32) (s0 + 8)) = (u32) v0;
    a1 = (*(volatile s32 *) (u32) (s1 + 64));
    at = (u64) 0 < (u64) a1;
    { s32 c_ = at == 0; a0 = 0; if (c_) goto L_001410C8; }
L_001410A4:;
    v0 = (*(volatile s32 *) (u32) (s0 + 8));
    v0 = (s32) ((u32) v0 + (u32) a0);
    (*(volatile u8 *) (u32) v0) = (u8) 0;
    a0 = (s32) ((u32) a0 + 0x1U);
    a1 = (*(volatile s32 *) (u32) (s1 + 64));
    v0 = (u64) a0 < (u64) a1;
    if (v0 != 0) goto L_001410A4;
L_001410C8:;
    v1 = (s32) ((u32) v1 + (u32) a1);
    v0 = (s32) ((u32) s0 + (u32) v1);
    (*(volatile u32 *) (u32) (s0 + 12)) = (u32) v0;
    a1 = (*(volatile s32 *) (u32) (s1 + 56));
    at = (u64) 0 < (u64) a1;
    { s32 c_ = at == 0; a0 = 0; if (c_) goto L_00141108; }
L_001410E4:;
    v0 = (*(volatile s32 *) (u32) (s0 + 12));
    v0 = (s32) ((u32) v0 + (u32) a0);
    (*(volatile u8 *) (u32) v0) = (u8) 0;
    a0 = (s32) ((u32) a0 + 0x1U);
    a1 = (*(volatile s32 *) (u32) (s1 + 56));
    v0 = (u64) a0 < (u64) a1;
    if (v0 != 0) goto L_001410E4;
L_00141108:;
    v0 = (s32) ((u32) v1 + (u32) a1);
    v1 = (s32) ((u32) v0 + 0x3U);
    a1 = 0;
    v0 = -4;
    v1 = v1 & v0;
    v0 = (s32) ((u32) s0 + (u32) v1);
    (*(volatile u32 *) (u32) (s0 + 16)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (s1 + 56));
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + (u32) v0);
    v0 = (s32) ((u32) s0 + (u32) v1);
    (*(volatile u32 *) (u32) (s0 + 20)) = (u32) v0;
    a0 = (*(volatile s32 *) (u32) (s1 + 56));
    v0 = (s32) ((u32) a0 << 2);
    at = (u64) 0 < (u64) a0;
    { s32 c_ = at == 0; v1 = (s32) ((u32) v1 + (u32) v0); if (c_) goto L_00141180; }
    a0 = 0;
L_00141150:;
    v0 = (*(volatile s32 *) (u32) (s0 + 16));
    a1 = (s32) ((u32) a1 + 0x1U);
    v0 = (s32) ((u32) v0 + (u32) a0);
    (*(volatile u32 *) (u32) v0) = (u32) 0;
    v0 = (*(volatile s32 *) (u32) (s0 + 20));
    v0 = (s32) ((u32) v0 + (u32) a0);
    (*(volatile u32 *) (u32) v0) = (u32) 0;
    v0 = (*(volatile s32 *) (u32) (s1 + 56));
    v0 = (u64) a1 < (u64) v0;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x4U); if (c_) goto L_00141150; }
L_00141180:;
    v0 = (s32) ((u32) s0 + (u32) v1);
    (*(volatile u32 *) (u32) (s0 + 24)) = (u32) v0;
    a1 = (*(volatile s32 *) (u32) (s1 + 76));
    at = (u64) 0 < (u64) a1;
    { s32 c_ = at == 0; a0 = 0; if (c_) goto L_001411C0; }
    a2 = 0;
L_0014119C:;
    v0 = (*(volatile s32 *) (u32) (s0 + 24));
    a0 = (s32) ((u32) a0 + 0x1U);
    v0 = (s32) ((u32) v0 + (u32) a2);
    (*(volatile u32 *) (u32) v0) = (u32) 0;
    a1 = (*(volatile s32 *) (u32) (s1 + 76));
    v0 = (u64) a0 < (u64) a1;
    { s32 c_ = v0 != 0; a2 = (s32) ((u32) a2 + 0x4U); if (c_) goto L_0014119C; }
L_001411C0:;
    v0 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) v1 + (u32) v0);
    v0 = -64;
    v1 = (s32) ((u32) v1 + 0x3fU);
    s2 = v1 & v0;
    v0 = (s32) ((u32) s0 + (u32) s2);
    (*(volatile u32 *) (u32) (s0 + 28)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (s1 + 8));
    if (v0 == 0) goto L_00141228;
    s5 = (s32) ((u32) s1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) (s1 + 12));
    at = (u64) 0 < (u64) v0;
    { s32 c_ = at == 0; s3 = 0; if (c_) goto L_00141228; }
    s4 = 0;
L_00141200:;
    v0 = (*(volatile s32 *) (u32) (s0 + 28));
    a1 = s5;
    s5 = (s32) ((u32) s5 + 0x40U);
    a0 = (s32) ((u32) v0 + (u32) s4); v0 = func_00103E48(a0, a1);
    v0 = (*(volatile s32 *) (u32) (s1 + 12));
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = (u64) s3 < (u64) v0;
    { s32 c_ = v0 != 0; s4 = (s32) ((u32) s4 + 0x40U); if (c_) goto L_00141200; }
L_00141228:;
    v0 = (*(volatile s32 *) (u32) (s1 + 12));
    v0 = (s32) ((u32) v0 << 6);
    v0 = (s32) ((u32) s2 + (u32) v0);
    v0 = (s32) ((u32) s0 + (u32) v0);
    (*(volatile u32 *) (u32) (s0 + 32)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (s1 + 56));
    at = (u64) 0 < (u64) v0;
    { s32 c_ = at == 0; s3 = 0; if (c_) goto L_00141288; }
    s2 = 0;
L_00141250:;
    v0 = (*(volatile s32 *) (u32) (s0 + 12));
    a1 = (s32) 0x370000U;
    a1 = (s32) ((u32) a1 + 0x67c0U);
    v0 = (s32) ((u32) v0 + (u32) s3);
    (*(volatile u8 *) (u32) v0) = (u8) 0;
    v0 = (*(volatile s32 *) (u32) (s0 + 32));
    a0 = (s32) ((u32) v0 + (u32) s2); v0 = func_00103E48(a0, a1);
    v0 = (*(volatile s32 *) (u32) (s1 + 56));
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = (u64) s3 < (u64) v0;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x40U); if (c_) goto L_00141250; }
L_00141288:;
    v0 = -1;
    { u64 h_ = (u64) v0; v0 = (s64) (u64) v0; qh_v0 = h_; }
    { u32 a_ = (u32) (s0 + 48) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    a1 = (s32) ((u32) sp + 0x70U);
    (*(volatile u32 *) (u32) (s0 + 64)) = (u32) 0;
    v0 = (s32) 0x370000U;
    (*(volatile u32 *) (u32) (s0 + 68)) = (u32) 0;
    a0 = (s32) ((u32) s0 + 0x50U);
    f3.f = (*(volatile f32 *) (u32) (v0 + 25712));
    v0 = (s32) 0x370000U;
    f2.f = (*(volatile f32 *) (u32) (v0 + 25716));
    (*(volatile f32 *) (u32) (sp + 112)) = f3.f;
    v0 = (s32) 0x370000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + 25720));
    (*(volatile f32 *) (u32) (sp + 116)) = f2.f;
    v0 = (s32) 0x370000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 25724));
    (*(volatile f32 *) (u32) (sp + 120)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 124)) = f0.f; v0 = func_00103E38(a0, a1);
    return v0;
}
