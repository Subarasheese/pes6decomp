/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00949160(s64, s64, s64, s64, f32, f32);
s64 func_00958D00(s64, f32, f32);
s64 func_00967760(s64);
s64 func_00967AA0(s64);
s64 func_0098F6C0(s64);
s64 func_0098F750(s64);
s64 func_0098F7E0(s64);
s64 func_009909D0(s64, s64);
s64 func_009B32D0(s64, s64, s64);

s64 func_00959320(s64 a0, s64 a1, f32 fa12, f32 fa13) {
    s64 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };
    s32 fcc = 0;

    v0 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 + 0x53bdU);
    s3 = a0;
    v1 = (*(u8 *) (u32) (a0 + 19));
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(u8 *) (u32) v0);
    { s32 c_ = v0 == 0; s2 = a1; if (c_) goto L_00959360; }
    v0 = 255; goto L_00959580;
L_00959360:;
    v0 = func_00958D00(a0, f12.f, f13.f);
    v1 = v0 & 0xff;
    v0 = 2;
    if (v1 == v0) { v0 = 255; goto L_00959580; }
    v0 = (s32) 0xcb0000U;
    v0 = (*(u8 *) (u32) (v0 + 21399));
    if (v0 == 0) goto L_009593A0;
    a0 = s3; v0 = func_0098F750(a0);
    if (v0 != 0) goto L_009593A0;
    v0 = 255; goto L_00959580;
L_009593A0:;
    a0 = s3; v0 = func_00967760(a0);
    s1 = v0 & 0xffff;
    a0 = s3; v0 = func_0098F7E0(a0);
    if (v0 != 0) { a0 = s3; goto L_009593EC; }
L_009593BC:;
    s0 = (*(u16 *) (u32) (s3 + 42));
L_009593C0:;
    a0 = s3;
    a1 = s0;
    a2 = 80;
    a3 = 14336; v0 = func_00949160(a0, a1, a2, a3, f12.f, f13.f);
    v0 = v0 & 0xff;
    v1 = 255;
    if (v0 == v1) { a0 = s3; goto L_00959464; }
    goto L_00959584;
L_009593EC:;
    a1 = (s32) 0x400000U; v0 = func_009909D0(a0, a1);
    if (v0 == 0) goto L_009593BC;
    if (s2 == 0) { a0 = (*(u16 *) (u32) (s3 + 42)); goto L_0095941C; }
    a0 = (*(u16 *) (u32) (s3 + 42));
    a1 = s1;
    a2 = 8192; v0 = func_009B32D0(a0, a1, a2);
    s0 = v0 & 0xffff; goto L_0095942C;
L_0095941C:;
    a1 = s1;
    a2 = 16384; v0 = func_009B32D0(a0, a1, a2);
    s0 = v0 & 0xffff;
L_0095942C:;
    v1 = (*(u8 *) (u32) (s3 + 19));
    v0 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 + 0x5372U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(u8 *) (u32) v0);
    if (v0 != 0) goto L_0095944C;
    s0 = s1 & 0xffff;
L_0095944C:;
    a0 = s3; v0 = func_00967AA0(a0);
    if (v0 == 0) goto L_009593C0;
    s0 = s1 & 0xffff; goto L_009593C0;
L_00959464:;
    v0 = func_0098F6C0(a0);
    if (v0 == 0) { a1 = s0; goto L_009594E8; }
L_00959474:;
    if (s2 != 0) { a1 = s1; goto L_00959510; }
L_0095947C:;
    if (s2 != 0) { s1 = 0; goto L_00959538; }
L_00959484:;
    if (s2 == 0) goto L_0095957C;
    f0.f = (*(f32 *) (u32) (s3 + 232));
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x45e00000U;
    v0 = v0 | 0xc800;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_0095957C;
    v0 = (*(u16 *) (u32) (s3 + 42));
    a0 = s3;
    a2 = 80;
    a3 = 8192;
    v0 = (s32) ((u32) v0 + 0x7fffU);
    v0 = (s32) ((u32) v0 + 0x1U);
    a1 = v0 & 0xffff; v0 = func_00949160(a0, a1, a2, a3, f12.f, f13.f);
    v0 = v0 & 0xff;
    v1 = 255;
    if (v0 == v1) goto L_0095957C;
    goto L_00959580;
L_009594E8:;
    a0 = s3;
    a2 = 50;
    a3 = 8192; v0 = func_00949160(a0, a1, a2, a3, f12.f, f13.f);
    v0 = v0 & 0xff;
    v1 = 255;
    if (v0 == v1) goto L_00959474;
    goto L_00959580;
L_00959510:;
    a0 = s3;
    a2 = 80;
    a3 = 16384; v0 = func_00949160(a0, a1, a2, a3, f12.f, f13.f);
    v0 = v0 & 0xff;
    v1 = 255;
    if (v0 == v1) goto L_0095947C;
    goto L_00959580;
L_00959538:;
    s0 = 10240;
L_0095953C:;
    a1 = (*(u16 *) (u32) (s3 + 42));
    a3 = s0 & 0xffff;
    a0 = s3;
    a2 = 80; v0 = func_00949160(a0, a1, a2, a3, f12.f, f13.f);
    v0 = v0 & 0xff;
    v1 = 255;
    if (v0 == v1) { s1 = (s32) ((u32) s1 + 0x1U); goto L_00959568; }
    goto L_00959580;
L_00959568:;
    v0 = s1 < 3;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x1800U); if (c_) goto L_0095953C; }
    goto L_00959484;
L_0095957C:;
    v0 = 255;
L_00959580:;
L_00959584:;
    return v0;
}
