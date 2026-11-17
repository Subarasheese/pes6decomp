/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_009458A0(s32, s32, s32, s32, s32, s32, f32, f32);
s32 func_00952420(s32, s32, s32, s32, f32, f32);
s32 func_009630A0(s32);
s32 func_00A1B4A0(s32);
s32 func_00AFBAB0(s32);
s32 func_00BDB8B0(s32);

s32 func_0095B900(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s32 fcc = 0;

    v1 = (*(volatile u8 *) (u32) (a0 + 19));
    v0 = (*(volatile s32 *) (u32) (gp + -31080));
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    { s32 c_ = v0 != 0; s3 = a0; if (c_) goto L_0095B964; }
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7756));
    if (v0 == 0) { v0 = 0; goto L_0095BAD8; }
    v0 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 + 0x5372U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 == 0) goto L_0095B96C;
    v0 = 0; goto L_0095BAD8;
L_0095B964:;
    v0 = 0; goto L_0095BAD8;
L_0095B96C:;
    v0 = func_009630A0(a0);
    if (v0 != 0) { v0 = 0; goto L_0095BAD8; }
    f0.f = (*(volatile f32 *) (u32) (s3 + 224));
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x46080000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) { v0 = (*(volatile s16 *) (u32) (s3 + 20)); goto L_0095B9A8; }
    v0 = 0; goto L_0095BAD8;
L_0095B9A8:;
    a0 = s3;
    a1 = (*(volatile u16 *) (u32) (s3 + 42));
    a2 = 4096;
    s0 = (*(volatile u8 *) (u32) (s3 + 488));
    a3 = (s32) 0x2400000U;
    f0.i = (s32) v0;
    f20.f = (f32) f0.i; v0 = func_00952420(a0, a1, a2, a3, f12.f, f13.f);
    if (v0 != 0) { a0 = (*(volatile u8 *) (u32) s3); goto L_0095B9D8; }
    v0 = 0; goto L_0095BAD8;
L_0095B9D8:;
    v0 = func_00AFBAB0(a0);
    v1 = v0 & 0xff;
    v0 = 255;
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v1 == v0) { a0 = 1; goto L_0095BA04; }
    a0 = (*(volatile u8 *) (u32) s3); v0 = func_00AFBAB0(a0);
    v0 = v0 & 0xff;
    a0 = (s32) ((u32) v0 + 0x1U);
L_0095BA04:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s1 = 0;
    s2 = (s32) ((u32) v0 + (u32) v1);
L_0095BA20:;
    a0 = s2; v0 = func_00BDB8B0(a0);
    if (v0 == 0) goto L_0095BAB8;
    if (s3 == s2) goto L_0095BAB8;
    f1.f = (*(volatile f32 *) (u32) (s3 + 224));
    f0.f = (*(volatile f32 *) (u32) (s2 + 224));
    f1.f = f20.f * f1.f;
    f0.f = f20.f * f0.f;
    fcc = f1.f <= f0.f;
    if (!fcc) goto L_0095BAB8;
    a0 = s2; v0 = func_00A1B4A0(a0);
    if (v0 != 0) goto L_0095BAB8;
    v0 = (*(volatile u8 *) (u32) (s2 + 514));
    at = v0 < 2;
    if (at != 0) goto L_0095BAB8;
    v1 = (*(volatile u8 *) (u32) s2);
    at = (s32) 0x1000000U;
    at = at | 0x1;
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) s3 + (u32) v0);
    a2 = (*(volatile s32 *) (u32) (v0 + 344));
    at = (u64) a2 < (u64) at;
    if (at == 0) goto L_0095BAB8;
    (*(volatile u32 *) (u32) (s3 + 488)) = (u32) v1;
    a0 = s3;
    a1 = s2; v0 = func_009458A0(a0, a1, a2, a3, a4, a5, f12.f, f13.f);
    if (v0 == 0) goto L_0095BAB8;
    v0 = 1; goto L_0095BAD8;
L_0095BAB8:;
    v0 = (s32) ((u32) s1 + 0x1U);
    s1 = v0 & 0xff;
    v0 = s1 < 10;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x240U); if (c_) goto L_0095BA20; }
    v1 = s0 & 0xff;
    v0 = 0;
    (*(volatile u32 *) (u32) (s3 + 488)) = (u32) v1;
L_0095BAD8:;
    return v0;
}
