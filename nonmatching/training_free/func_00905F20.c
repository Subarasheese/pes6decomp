/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00967760(s32, s32, s32, s32);
s32 func_00990590(s32, s32, s32, s32);
s32 func_009B3070(s32, s32, s32, s32);
s32 func_009B3480(s32, s32, s32, s32);
s32 func_00AFBA70(s32, s32, s32, s32);
s32 func_00AFBAB0(s32, s32, s32, s32);
s32 func_00BDB8B0(s32, s32, s32, s32);
void memset(s32, s32, s32);

void func_00905F20(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, a4 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { 0 };
    volatile union { f32 f; s32 i; } f13 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;

    v0 = (s32) 0x463c0000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    f13.i = (s32) 0;
    s6 = a1;
    s4 = a2;
    s5 = a0;
    v1 = (*(volatile s16 *) (u32) (a0 + 20));
    f1.i = (s32) v1;
    f1.f = (f32) f1.i;
    f12.f = f0.f * f1.f; v0 = func_009B3480(a0, a1, a2, a3);
    a1 = v0;
    a0 = s5;
    v0 = (s32) 0xace0000U;
    a2 = 8192;
    a3 = v0 | 0x8370;
    a4 = 2; v0 = func_00990590(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    if (v0 != 0) { a0 = s4; goto L_00905FAC; }
    v0 = 0; goto L_009061D4;
L_00905FAC:;
    a1 = 0;
    a2 = 10; memset(a0, a1, a2);
    v0 = (*(volatile s16 *) (u32) (s5 + 20));
    s1 = 0;
    a0 = (*(volatile u8 *) (u32) s5);
    f0.i = (s32) v0;
    f20.f = (f32) f0.i; v0 = func_00AFBAB0(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = 255;
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v1 == v0) { a0 = 1; goto L_00905FF4; }
    a0 = (*(volatile u8 *) (u32) s5); v0 = func_00AFBAB0(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    a0 = (s32) ((u32) v0 + 0x1U);
L_00905FF4:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s2 = 0;
    s3 = (s32) ((u32) v0 + (u32) v1);
L_00906010:;
    a0 = s3; v0 = func_00BDB8B0(a0, a1, a2, a3);
    if (v0 == 0) goto L_00906180;
    if (s5 == s3) goto L_00906180;
    f0.f = (*(volatile f32 *) (u32) (s3 + 224));
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x46000000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (fcc) goto L_00906180;
    f2.f = (*(volatile f32 *) (u32) (s3 + 232));
    f1.i = f2.i & 0x7FFFFFFF;
    v0 = (s32) 0x45990000U;
    v0 = v0 | 0x4000;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00906180;
    f0.i = (s32) 0;
    fcc = f2.f < f0.f;
    if (!fcc) { v1 = 1; goto L_00906088; }
    v1 = -1;
L_00906088:;
    f1.f = (*(volatile f32 *) (u32) (s5 + 232));
    f0.i = (s32) 0;
    fcc = f1.f < f0.f;
    if (!fcc) { v0 = 1; goto L_009060A4; }
    v0 = -1;
L_009060A4:;
    if (v0 == v1) goto L_00906198;
    f0.f = f1.f - f2.f;
L_009060B0:;
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x45500000U;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (fcc) goto L_00906180;
    v0 = 1;
    if (s6 != v0) goto L_00906154;
    a0 = (*(volatile u8 *) (u32) s3); v0 = func_00AFBA70(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = 255;
    if (v1 == v0) { s0 = 1; goto L_00906108; }
    a0 = (*(volatile u8 *) (u32) s3); v0 = func_00AFBA70(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    s0 = hi;
L_00906108:;
    a0 = s3; v0 = func_00967760(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 << 3);
    v1 = (s32) 0x590000U;
    a1 = (s32) ((u32) a0 + (u32) s0);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = v0;
    v0 = (s32) ((u32) a1 << 6);
    v0 = (s32) ((u32) v1 + (u32) v0);
    a1 = (*(volatile u16 *) (u32) (v0 + 42)); v0 = func_009B3070(a0, a1, a2, a3);
    v0 = v0 & 0xffff;
    at = v0 < 16384;
    if (at == 0) goto L_00906154;
    v0 = (*(volatile s32 *) (u32) (s3 + 28));
    at = v0 < 5377;
    if (at == 0) goto L_00906180;
L_00906154:;
    f1.f = (*(volatile f32 *) (u32) (s3 + 224));
    f0.i = (s32) 0;
    f1.f = f20.f * f1.f;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_00906180;
    v1 = 1;
    v0 = (s32) ((u32) s4 + (u32) s2);
    (*(volatile u8 *) (u32) v0) = (u8) v1;
    s1 = (s32) ((u32) s1 + 0x1U);
L_00906180:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 10;
    { s32 c_ = v0 != 0; s3 = (s32) ((u32) s3 + 0x240U); if (c_) goto L_00906010; }
    v0 = s1 & 0xff; goto L_009061D4;
L_00906198:;
    f3.i = f2.i & 0x7FFFFFFF;
    v0 = (s32) 0x45320000U;
    v0 = v0 | 0x8000;
    f0.i = (s32) v0;
    fcc = f3.f <= f0.f;
    if (!fcc) goto L_00906180;
    f3.i = f1.i & 0x7FFFFFFF;
    f0.i = f2.i & 0x7FFFFFFF;
    fcc = f3.f < f0.f;
    if (fcc) goto L_00906180;
    f0.f = f1.f - f2.f; goto L_009060B0;
L_009061D4:;
    return;
}
