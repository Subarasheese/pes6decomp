/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00C18D20(s32);

s32 func_00C15660(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    s32 hi = 0, lo = 0;
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    v0 = 16;
    v1 = (s32) ((u32) sp + 0x30U);
    s1 = a0;
    { s32 c_ = v1 == 0; s0 = 0; if (c_) goto L_00C156A0; }
L_00C15684:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_00C15684;
L_00C156A0:;
    if (s1 == 0) goto L_00C1588C;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 9982));
    at = (u64) v0 < (u64) (s64) 6;
    { s32 c_ = at == 0; s0 = 0; if (c_) goto L_00C15784; }
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x3620U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xc156d8U) goto L_00C156D8; if (t_ == 0xc156e0U) goto L_00C156E0; if (t_ == 0xc15778U) goto L_00C15778; if (t_ == 0xc15780U) goto L_00C15780; if (t_ == 0xc15784U) goto L_00C15784; }
L_00C156D8:;
    s0 = 8; goto L_00C15784;
L_00C156E0:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7952));
    if (v0 == 0) goto L_00C156F8;
    s0 = 5; goto L_00C15784;
L_00C156F8:;
    v0 = (s32) 0x590000U;
    v1 = 255;
    a0 = (*(volatile u8 *) (u32) (v0 + 9985));
    if (a0 == v1) { a0 = 1; goto L_00C15718; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v0); hi = (s32) ((s32) a0 % (s32) v0); lo = q_; }
    a0 = hi;
L_00C15718:;
    v0 = (s32) ((u32) a0 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffe5c2U);
    a0 = (s32) ((u32) a0 << 6);
    v0 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffad70U);
    v1 = (*(volatile u8 *) (u32) v1);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (s32) ((u32) v0 + 0x4U);
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    v0 = v0 ^ 0x3;
    v0 = (u64) v0 < (u64) (s64) 1;
    if (v0 == 0) goto L_00C15768;
    v0 = (*(volatile s32 *) (u32) (v1 + 32));
    v0 = v0 ^ 0x8;
    v0 = (u64) v0 < (u64) (s64) 1;
L_00C15768:;
    if (v0 == 0) { s0 = 6; goto L_00C15784; }
    s0 = 7; goto L_00C15784;
L_00C15778:;
    s0 = 4; goto L_00C15784;
L_00C15780:;
    s0 = 1;
L_00C15784:;
    at = (u64) s0 < (u64) (s64) 9;
    if (at == 0) goto L_00C1586C;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) s0 << 2);
    v1 = (s32) ((u32) v1 + 0x35f0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xc157acU) goto L_00C157AC; if (t_ == 0xc157e8U) goto L_00C157E8; if (t_ == 0xc15808U) goto L_00C15808; if (t_ == 0xc15848U) goto L_00C15848; if (t_ == 0xc1586cU) goto L_00C1586C; }
L_00C157AC:;
    v0 = (s32) 0xcc0000U;
    a0 = (*(volatile u8 *) (u32) (v0 + -11671)); v0 = func_00C18D20(a0);
    (*(volatile u8 *) (u32) (sp + 48)) = (u8) v0;
    v0 = (s32) 0xcc0000U;
    a0 = (*(volatile u8 *) (u32) (v0 + -11670)); v0 = func_00C18D20(a0);
    (*(volatile u8 *) (u32) (sp + 49)) = (u8) v0;
    v0 = (s32) 0xcc0000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + -11668));
    v0 = (s32) 0x590000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 7776));
    (*(volatile f32 *) (u32) (sp + 52)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 56)) = f0.f; goto L_00C1586C;
L_00C157E8:;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f2.f = (*(volatile f32 *) (u32) (v0 + 16));
    f1.f = (*(volatile f32 *) (u32) (v0 + 20));
    f0.f = (*(volatile f32 *) (u32) (v0 + 24));
    (*(volatile f32 *) (u32) (sp + 48)) = f2.f;
    (*(volatile f32 *) (u32) (sp + 52)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 56)) = f0.f; goto L_00C1586C;
L_00C15808:;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (v0 + 9985)); v0 = func_00C18D20(a0);
    (*(volatile u8 *) (u32) (sp + 48)) = (u8) v0;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (v0 + 9400)); v0 = func_00C18D20(a0);
    (*(volatile u8 *) (u32) (sp + 49)) = (u8) v0;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f2.f = (*(volatile f32 *) (u32) (v0 + 16));
    f1.f = (*(volatile f32 *) (u32) (v0 + 20));
    f0.f = (*(volatile f32 *) (u32) (v0 + 24));
    (*(volatile f32 *) (u32) (sp + 52)) = f2.f;
    (*(volatile f32 *) (u32) (sp + 56)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 60)) = f0.f; goto L_00C1586C;
L_00C15848:;
    v0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    f2.f = (*(volatile f32 *) (u32) (v0 + 7768));
    f1.f = (*(volatile f32 *) (u32) (v1 + 7772));
    v0 = (s32) 0x590000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 7776));
    (*(volatile f32 *) (u32) (sp + 48)) = f2.f;
    (*(volatile f32 *) (u32) (sp + 52)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 56)) = f0.f;
L_00C1586C:;
    f3.f = (*(volatile f32 *) (u32) (sp + 48));
    f2.f = (*(volatile f32 *) (u32) (sp + 52));
    f1.f = (*(volatile f32 *) (u32) (sp + 56));
    f0.f = (*(volatile f32 *) (u32) (sp + 60));
    (*(volatile f32 *) (u32) s1) = f3.f;
    (*(volatile f32 *) (u32) (s1 + 4)) = f2.f;
    (*(volatile f32 *) (u32) (s1 + 8)) = f1.f;
    (*(volatile f32 *) (u32) (s1 + 12)) = f0.f;
L_00C1588C:;
    v0 = s0;
    return v0;
}
