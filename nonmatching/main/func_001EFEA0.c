/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001E7D10(s64, s64);
s64 func_001EBBB0(s64, s64, s64, s64, s64, s64, f32);

s64 func_001EFEA0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7, f32 fa12) {
    s64 v0 = 0, v1 = 0, s0 = 0;
    u64 qh_v0 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    union { f32 f; s32 i; } f4 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    s64 frame[16];
    s64 sp = (s32) (u32) frame;

    v0 = 8;
    v1 = (s32) ((u32) sp + 0x78U);
    { s32 c_ = v1 == 0; s0 = a1; if (c_) goto L_001EFED8; }
L_001EFEBC:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_001EFEBC;
L_001EFED8:;
    v0 = (*(volatile u8 *) (u32) (s0 + 287));
    a3 = 0;
    { s32 c_ = v0 == 0; a4 = 0; if (c_) goto L_001EFEEC; }
    a3 = (s32) ((u32) s0 + 0x100U);
L_001EFEEC:;
    v0 = (*(volatile u8 *) (u32) (s0 + 288));
    if (v0 == 0) goto L_001EFEFC;
    a4 = (s32) ((u32) s0 + 0x110U);
L_001EFEFC:;
    v1 = (*(volatile s32 *) (u32) (s0 + 248));
    v0 = 1;
    if (v1 == v0) goto L_001F000C;
L_001EFF0C:;
    f1.f = (*(volatile f32 *) (u32) (a0 + 32));
    v0 = (s32) 0x3f800000U;
    f0.f = (*(volatile f32 *) (u32) (s0 + 16));
    a7 = (s32) ((u32) sp + 0x30U);
    f3.f = (*(volatile f32 *) (u32) (sp + 120));
    a6 = (s32) ((u32) sp + 0x40U);
    f2.f = (*(volatile f32 *) (u32) (sp + 124));
    v1 = (s32) ((u32) sp + 0x50U);
    a1 = (s32) ((u32) sp + 0x20U);
    a2 = (s32) ((u32) sp + 0x60U);
    a5 = 4;
    f0.f = f1.f + f0.f;
    f0.f = f3.f + f0.f;
    (*(volatile f32 *) (u32) (sp + 96)) = f0.f;
    f1.f = (*(volatile f32 *) (u32) (a0 + 36));
    f0.f = (*(volatile f32 *) (u32) (s0 + 20));
    f0.f = f1.f + f0.f;
    f0.f = f2.f + f0.f;
    (*(volatile f32 *) (u32) (sp + 100)) = f0.f;
    f1.f = (*(volatile f32 *) (u32) (a0 + 40));
    f0.f = (*(volatile f32 *) (u32) (s0 + 24));
    a0 = (s32) ((u32) s0 + 0x60U);
    f0.f = f1.f + f0.f;
    (*(volatile u32 *) (u32) (sp + 108)) = (u32) v0;
    (*(volatile f32 *) (u32) (sp + 104)) = f0.f;
    { u32 a_ = (u32) (s0 + 32) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (sp + 32) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    f1.f = (*(volatile f32 *) (u32) (sp + 32));
    f0.f = (*(volatile f32 *) (u32) (sp + 36));
    f1.f = f1.f - f3.f;
    f0.f = f0.f - f2.f;
    (*(volatile f32 *) (u32) (sp + 32)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 36)) = f0.f;
    { u32 a_ = (u32) (s0 + 48) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (a7 + 0) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    f1.f = (*(volatile f32 *) (u32) a7);
    f0.f = (*(volatile f32 *) (u32) (sp + 52));
    f1.f = f1.f - f3.f;
    f0.f = f0.f - f2.f;
    (*(volatile f32 *) (u32) a7) = f1.f;
    (*(volatile f32 *) (u32) (sp + 52)) = f0.f;
    { u32 a_ = (u32) (s0 + 64) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (a6 + 0) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    f1.f = (*(volatile f32 *) (u32) a6);
    f0.f = (*(volatile f32 *) (u32) (sp + 68));
    f1.f = f1.f - f3.f;
    f0.f = f0.f - f2.f;
    (*(volatile f32 *) (u32) a6) = f1.f;
    (*(volatile f32 *) (u32) (sp + 68)) = f0.f;
    { u32 a_ = (u32) (s0 + 80) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (v1 + 0) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    f1.f = (*(volatile f32 *) (u32) v1);
    f0.f = (*(volatile f32 *) (u32) (sp + 84));
    f1.f = f1.f - f3.f;
    f0.f = f0.f - f2.f;
    (*(volatile f32 *) (u32) v1) = f1.f;
    (*(volatile f32 *) (u32) (sp + 84)) = f0.f; v0 = func_001EBBB0(a0, a1, a2, a3, a4, a5, f12.f);
    v1 = (*(volatile u8 *) (u32) (s0 + 285));
    v1 = v1 & 0x1;
    if (v1 != 0) goto L_001F0048;
L_001F0004:;
    goto L_001F0074;
L_001F000C:;
    f4.f = (*(volatile f32 *) (u32) (s0 + 80));
    v0 = (s32) 0x40000000U;
    f3.f = (*(volatile f32 *) (u32) (s0 + 32));
    f1.f = (*(volatile f32 *) (u32) (s0 + 84));
    f0.f = (*(volatile f32 *) (u32) (s0 + 36));
    f2.i = (s32) v0;
    f3.f = f4.f - f3.f;
    f0.f = f1.f - f0.f;
    f1.f = f3.f / f2.f;
    f0.f = f0.f / f2.f;
    (*(volatile f32 *) (u32) (sp + 120)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 124)) = f0.f; goto L_001EFF0C;
L_001F0048:;
    a0 = (s32) ((u32) s0 + 0x60U);
    a1 = 0; v0 = func_001E7D10(a0, a1);
    v1 = 1;
    if (v0 != v1) goto L_001F0070;
    v1 = (*(volatile u8 *) (u32) (s0 + 285));
    v1 = v1 | 0x2;
    (*(volatile u8 *) (u32) (s0 + 285)) = (u8) v1; goto L_001F0004;
L_001F0070:;
L_001F0074:;
    return v0;
}
