/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001CD9E0(void);
s32 func_009B30B0(s32, s32);
s32 func_009B33A0(s32, s32, s32);
s32 func_009B3480(s32, s32, s32, s32, f32, f32);
s32 func_00C6A960(f32, f32, f32);

s32 func_009B6DA0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13, f32 fa14) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    s32 fcc = 0;

    s1 = (s32) ((u32) a1 << 2);
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (s32) ((u32) s1 + (u32) v0);
    f1.f = (*(volatile f32 *) (u32) (v0 + 1148));
    f0.f = (*(volatile f32 *) (u32) (v0 + 2940));
    f1.i = (s32) f1.f;
    f0.i = (s32) f0.f;
    a1 = f1.i;
    a2 = f0.i;
    s4 = a0; v0 = func_009B33A0(a0, a1, a2);
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_009B6DFC; }
    f0.i = (s32) v0;
    f12.f = (f32) f0.i; goto L_009B6E14;
L_009B6DFC:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f12.f = (f32) f0.i;
    f12.f = f12.f + f12.f;
L_009B6E14:;
    f0.f = func_001CD9E0();
    f0.i = (s32) f0.f;
    s0 = f0.i;
    at = s0 < 1537;
    if (at != 0) { v0 = (*(volatile s32 *) (u32) (gp + -32252)); goto L_009B6E3C; }
    v0 = 0; goto L_009B6FB4;
L_009B6E3C:;
    v0 = (s32) ((u32) s1 + (u32) v0);
    f12.f = (*(volatile f32 *) (u32) (v0 + 1148));
    f13.f = (*(volatile f32 *) (u32) (v0 + 2940));
    a0 = s4; v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    v1 = (*(volatile s16 *) (u32) (s4 + 20));
    s3 = v0 & 0xffff;
    v0 = (s32) 0xc6520000U;
    v0 = v0 | 0x6400;
    f1.f = (*(volatile f32 *) (u32) (s4 + 232));
    f0.i = (s32) 0;
    f2.i = (s32) v0;
    f3.i = (s32) v1;
    f3.f = (f32) f3.i;
    fcc = f1.f < f0.f;
    { s32 c_ = !fcc; f12.f = f2.f * f3.f; if (c_) goto L_009B6E8C; }
    v0 = -1; goto L_009B6E90;
L_009B6E8C:;
    v0 = 1;
L_009B6E90:;
    f0.i = (s32) v0;
    a0 = s4;
    f1.f = (f32) f0.i;
    v0 = (s32) 0x446d0000U;
    v0 = v0 | 0xc000;
    f0.i = (s32) v0;
    f13.f = f0.f * f1.f; v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    v1 = (*(volatile s16 *) (u32) (s4 + 20));
    s2 = v0 & 0xffff;
    v0 = (s32) 0xc6520000U;
    v0 = v0 | 0x6400;
    f1.f = (*(volatile f32 *) (u32) (s4 + 232));
    f0.i = (s32) 0;
    f2.i = (s32) v0;
    f3.i = (s32) v1;
    f3.f = (f32) f3.i;
    fcc = f1.f < f0.f;
    f0.f = f2.f * f3.f;
    f0.i = (s32) f0.f;
    a1 = f0.i;
    if (!fcc) { v0 = 1; goto L_009B6EF4; }
    v0 = -1;
L_009B6EF4:;
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
    v0 = (s32) 0x446d0000U;
    v0 = v0 | 0xc000;
    f0.i = (s32) v0;
    f0.f = f0.f * f1.f;
    f0.i = (s32) f0.f;
    a2 = f0.i;
    a0 = s4; v0 = func_009B33A0(a0, a1, a2);
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_009B6F38; }
    f0.i = (s32) v0;
    f12.f = (f32) f0.i; goto L_009B6F50;
L_009B6F38:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f12.f = (f32) f0.i;
    f12.f = f12.f + f12.f;
L_009B6F50:;
    f0.f = func_001CD9E0();
    f0.i = (s32) f0.f;
    a1 = s2;
    s2 = f0.i;
    a0 = s3; v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 8;
    if (at == 0) goto L_009B6F90;
    at = s2 < s0;
    if (at == 0) goto L_009B6F90;
    v0 = 1; goto L_009B6FB4;
L_009B6F90:;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (s32) ((u32) s1 + (u32) v0);
    f13.f = (*(volatile f32 *) (u32) (v0 + 2044));
    f14.f = (*(volatile f32 *) (u32) (v0 + 2940));
    f12.f = (*(volatile f32 *) (u32) (v0 + 1148)); v0 = func_00C6A960(f12.f, f13.f, f14.f);
    if (v0 == 0) { v0 = 0; goto L_009B6FB4; }
    v0 = 1;
L_009B6FB4:;
    return v0;
}
