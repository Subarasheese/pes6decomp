/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_0011D628(f32, f32);

f32 func_001BE080(s32 a0, s32 a1, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    volatile union { f32 f; s32 i; } f22 = { 0 };
    s32 fcc = 0;
    f32 acc = 0;

    s3 = a0;
    s2 = a1;
    at = s2 < 2;
    s0 = 0;
    { s32 c_ = at == 0; f22.i = f12.i; if (c_) goto L_001BE0C8; }
    f0.i = (s32) 0;
    a1 = (s32) ((u32) s2 + 0xffffffffU); goto L_001BE0DC;
L_001BE0C8:;
    v0 = (s32) ((u32) s2 << 3);
    v0 = (s32) ((u32) v0 + (u32) s3);
    f13.f = (*(volatile f32 *) (u32) (v0 + -8)); f0.f = func_0011D628(f12.f, f13.f);
    a1 = (s32) ((u32) s2 + 0xffffffffU);
L_001BE0DC:;
    if (a1 < 0) goto L_001BE120;
    v0 = (s32) ((u32) a1 << 3);
    v1 = 1;
    a0 = (s32) ((u32) s3 + (u32) v0);
L_001BE0F0:;
    f1.f = (*(volatile f32 *) (u32) a0);
    fcc = f1.f <= f0.f;
    { s32 c_ = fcc; v0 = v1; if (c_) goto L_001BE104; }
    v0 = 0;
L_001BE104:;
    v0 = v0 ^ 0x1;
    if (v0 != 0) { a1 = (s32) ((u32) a1 + 0xffffffffU); goto L_001BE118; }
    s0 = a1; goto L_001BE120;
L_001BE118:;
    { s32 c_ = a1 >= 0; a0 = (s32) ((u32) a0 + 0xfffffff8U); if (c_) goto L_001BE0F0; }
L_001BE120:;
    v0 = (s32) ((u32) s0 << 3);
    v0 = (s32) ((u32) v0 + (u32) s3);
    at = s2 < 2;
    f21.f = (*(volatile f32 *) (u32) (v0 + 4));
    { s32 c_ = at == 0; s0 = 0; if (c_) goto L_001BE144; }
    f0.i = (s32) 0;
    a1 = 0; goto L_001BE15C;
L_001BE144:;
    v0 = (s32) ((u32) s2 << 3);
    v0 = (s32) ((u32) v0 + (u32) s3);
    f13.f = (*(volatile f32 *) (u32) (v0 + -8));
    f12.i = f22.i; f0.f = func_0011D628(f12.f, f13.f);
    a1 = 0;
L_001BE15C:;
    if (s2 <= 0) goto L_001BE1A0;
    a0 = s3;
    v1 = 1;
L_001BE16C:;
    f1.f = (*(volatile f32 *) (u32) a0);
    fcc = f1.f <= f0.f;
    { s32 c_ = !fcc; v0 = v1; if (c_) goto L_001BE180; }
    v0 = 0;
L_001BE180:;
    v0 = v0 ^ 0x1;
    if (v0 != 0) { a1 = (s32) ((u32) a1 + 0x1U); goto L_001BE194; }
    s0 = a1; goto L_001BE1A0;
L_001BE194:;
    v0 = a1 < s2;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x8U); if (c_) goto L_001BE16C; }
L_001BE1A0:;
    v0 = (s32) ((u32) s0 << 3);
    v1 = (s32) ((u32) v0 + (u32) s3);
    at = s2 < 2;
    v0 = (s32) 0x42c80000U;
    f2.i = (s32) v0;
    { s32 c_ = at != 0; f20.f = (*(volatile f32 *) (u32) (v1 + 4)); if (c_) goto L_001BE2E4; }
    at = s2 < 2;
    { s32 c_ = at == 0; s1 = 0; if (c_) goto L_001BE1D4; }
    f0.i = (s32) 0;
    a1 = (s32) ((u32) s2 + 0xffffffffU); goto L_001BE1EC;
L_001BE1D4:;
    v0 = (s32) ((u32) s2 << 3);
    v0 = (s32) ((u32) v0 + (u32) s3);
    f13.f = (*(volatile f32 *) (u32) (v0 + -8));
    f12.i = f22.i; f0.f = func_0011D628(f12.f, f13.f);
    a1 = (s32) ((u32) s2 + 0xffffffffU);
L_001BE1EC:;
    if (a1 < 0) goto L_001BE230;
    v0 = (s32) ((u32) a1 << 3);
    v1 = 1;
    a0 = (s32) ((u32) s3 + (u32) v0);
L_001BE200:;
    f1.f = (*(volatile f32 *) (u32) a0);
    fcc = f1.f <= f0.f;
    { s32 c_ = fcc; v0 = v1; if (c_) goto L_001BE214; }
    v0 = 0;
L_001BE214:;
    v0 = v0 ^ 0x1;
    if (v0 != 0) { a1 = (s32) ((u32) a1 + 0xffffffffU); goto L_001BE228; }
    s1 = a1; goto L_001BE230;
L_001BE228:;
    { s32 c_ = a1 >= 0; a0 = (s32) ((u32) a0 + 0xfffffff8U); if (c_) goto L_001BE200; }
L_001BE230:;
    at = s2 < 2;
    { s32 c_ = at == 0; s0 = 0; if (c_) goto L_001BE248; }
    f0.i = (s32) 0;
    a1 = 0; goto L_001BE260;
L_001BE248:;
    v0 = (s32) ((u32) s2 << 3);
    v0 = (s32) ((u32) v0 + (u32) s3);
    f13.f = (*(volatile f32 *) (u32) (v0 + -8));
    f12.i = f22.i; f0.f = func_0011D628(f12.f, f13.f);
    a1 = 0;
L_001BE260:;
    if (s2 <= 0) goto L_001BE2A8;
    a0 = s3;
    v1 = 1;
L_001BE270:;
    f1.f = (*(volatile f32 *) (u32) a0);
    fcc = f1.f <= f0.f;
    { s32 c_ = !fcc; v0 = v1; if (c_) goto L_001BE284; }
    v0 = 0;
L_001BE284:;
    v0 = v0 ^ 0x1;
    if (v0 != 0) { a1 = (s32) ((u32) a1 + 0x1U); goto L_001BE298; }
    s0 = a1; goto L_001BE2A8;
L_001BE298:;
    v0 = a1 < s2;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x8U); if (c_) goto L_001BE270; }
L_001BE2A8:;
    v0 = (s32) ((u32) s2 << 3);
    v0 = (s32) ((u32) v0 + (u32) s3);
    f13.f = (*(volatile f32 *) (u32) (v0 + -8));
    f12.i = f22.i; f0.f = func_0011D628(f12.f, f13.f);
    v1 = (s32) ((u32) s1 << 3);
    v0 = (s32) ((u32) s0 << 3);
    v1 = (s32) ((u32) s3 + (u32) v1);
    v0 = (s32) ((u32) s3 + (u32) v0);
    f2.f = (*(volatile f32 *) (u32) v1);
    f1.f = (*(volatile f32 *) (u32) v0);
    f1.f = f1.f - f2.f;
    f1.i = f1.i & 0x7FFFFFFF;
    f0.f = f0.f - f2.f;
    f2.f = f0.f / f1.f;
L_001BE2E4:;
    f1.f = f20.f - f21.f;
    f0.i = (s32) 0;
    acc = f0.f + f21.f;
    f0.f = acc + f2.f * f1.f;
    return f0.f;
}
