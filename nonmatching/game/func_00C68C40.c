/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0090B8B0(s32, s32, s32, s32);
s32 func_00AFBAB0(s32);
s32 func_00BDB8B0(s32);

s32 func_00C68C40(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s32 fcc = 0;

    v0 = (s32) 0xc5d20000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    s0 = (*(volatile s16 *) (u32) (a0 + 20));
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    f2.i = (s32) s0;
    f1.f = (*(volatile f32 *) (u32) (v1 + 16));
    f2.f = (f32) f2.i;
    f1.f = f1.f * f2.f;
    fcc = f1.f <= f0.f;
    { s32 c_ = !fcc; s4 = a0; if (c_) goto L_00C68CA4; }
    v0 = (*(volatile u8 *) (u32) (s4 + 16));
    v0 = v0 < 29;
    if (v0 != 0) { a1 = 1; goto L_00C68CAC; }
    v0 = 0; goto L_00C68DDC;
L_00C68CA4:;
    v0 = 0; goto L_00C68DDC;
L_00C68CAC:;
    v0 = func_0090B8B0(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = 2;
    if (v1 != v0) { a0 = (*(volatile u8 *) (u32) s4); goto L_00C68CCC; }
    v0 = 0; goto L_00C68DDC;
L_00C68CCC:;
    s1 = 1; v0 = func_00AFBAB0(a0);
    v1 = v0 & 0xff;
    v0 = 255;
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v1 == v0) { a0 = s1; goto L_00C68CF8; }
    a0 = (*(volatile u8 *) (u32) s4); v0 = func_00AFBAB0(a0);
    v0 = v0 & 0xff;
    a0 = (s32) ((u32) v0 + 0x1U);
L_00C68CF8:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s2 = 0;
    s3 = (s32) ((u32) v0 + (u32) v1);
L_00C68D14:;
    a0 = s3; v0 = func_00BDB8B0(a0);
    if (v0 == 0) goto L_00C68DC8;
    if (s4 == s3) goto L_00C68DC8;
    v0 = (*(volatile u8 *) (u32) (s3 + 469));
    if (v0 != 0) goto L_00C68DC8;
    v1 = (*(volatile u8 *) (u32) (s3 + 22));
    v0 = 53;
    if (v1 == v0) goto L_00C68DC8;
    v1 = (*(volatile u8 *) (u32) (s3 + 477));
    v0 = 2;
    if (v1 != v0) goto L_00C68DC8;
    f0.i = (s32) s0;
    v0 = (s32) 0xc63c0000U;
    f1.f = (*(volatile f32 *) (u32) (s3 + 224));
    v0 = v0 | 0x6400;
    f2.f = (f32) f0.i;
    f1.f = f1.f * f2.f;
    f0.i = (s32) v0;
    fcc = f0.f < f1.f;
    if (!fcc) goto L_00C68DC8;
    v0 = (s32) 0xc6100000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00C68DC8;
    f0.f = (*(volatile f32 *) (u32) (s3 + 232));
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x446a0000U;
    v0 = v0 | 0xc000;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00C68DC8;
    s1 = 0;
L_00C68DC8:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 10;
    { s32 c_ = v0 != 0; s3 = (s32) ((u32) s3 + 0x240U); if (c_) goto L_00C68D14; }
    v0 = s1 & 0xff;
L_00C68DDC:;
    return v0;
}
