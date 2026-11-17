/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_009B30B0(s32, s32);

s32 func_00A35490(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;
    f32 acc = 0;

    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1e4fU);
    v0 = 255;
    s3 = a0;
    a0 = (*(volatile u8 *) (u32) (a0 + 19));
    a0 = a0 ^ 0x1;
    a0 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    { s32 c_ = v1 == v0; s2 = a1; if (c_) goto L_00A354E8; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi; goto L_00A354EC;
L_00A354E8:;
    a0 = 1;
L_00A354EC:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    a1 = (*(volatile u16 *) (u32) (s3 + 280));
    a0 = (*(volatile u16 *) (u32) (s3 + 268));
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s1 = (s32) ((u32) v0 + (u32) v1); v0 = func_009B30B0(a0, a1);
    s0 = v0 & 0xffff;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    a1 = (*(volatile u16 *) (u32) (v0 + 88));
    a0 = (*(volatile u16 *) (u32) (s3 + 268)); v0 = func_009B30B0(a0, a1);
    v1 = s0 < 96;
    { s32 c_ = v1 != 0; v0 = v0 & 0xffff; if (c_) goto L_00A35570; }
    a0 = (*(volatile s32 *) (u32) (s1 + 28));
    at = a0 < 6400;
    if (at == 0) goto L_00A35570;
    v1 = 8192;
    a0 = (s32) ((u32) v1 - (u32) a0);
    { s32 c_ = a0 >= 0; v1 = (s32) a0 >> 4; if (c_) goto L_00A35558; }
    v1 = (s32) ((u32) a0 + 0xfU);
    v1 = (s32) v1 >> 4;
L_00A35558:;
    v1 = (s32) ((u32) v1 + 0x200U);
    at = s2 < v1;
    if (at == 0) goto L_00A35570;
    v0 = 0; goto L_00A356AC;
L_00A35570:;
    v1 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 7756));
    if (v1 == 0) { v0 = 1; goto L_00A356AC; }
    v1 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 9980));
    { s32 c_ = v1 < 0; f4.f = (*(volatile f32 *) (u32) (s3 + 240)); if (c_) goto L_00A3559C; }
    f0.i = (s32) v1;
    f3.f = (f32) f0.i; goto L_00A355B8;
L_00A3559C:;
    a0 = (s32) ((u32) v1 >> 1);
    v1 = v1 & 0x1;
    a0 = a0 | v1;
    f0.i = (s32) a0;
    f3.f = (f32) f0.i;
    f3.f = f3.f + f3.f;
L_00A355B8:;
    f2.f = (*(volatile f32 *) (u32) (s3 + 224));
    v1 = (s32) 0xc6520000U;
    a0 = (*(volatile s16 *) (u32) (s3 + 20));
    f1.i = (s32) 0;
    v1 = v1 | 0x6400;
    f0.i = (s32) v1;
    acc = f1.f + f2.f;
    f1.i = (s32) a0;
    f2.f = acc + f4.f * f3.f;
    f1.f = (f32) f1.i;
    f1.f = f1.f * f2.f;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00A3563C;
    f0.f = (*(volatile f32 *) (u32) (s3 + 232));
    f0.i = (s32) f0.f;
    v1 = f0.i;
    if (v1 <= 0) { v1 = (s32) ((u32) 0 - (u32) v1); goto L_00A3560C; }
L_00A3560C:;
    f0.i = (s32) v1;
    f1.f = (f32) f0.i;
    v1 = (s32) 0x44950000U;
    v1 = v1 | 0x6000;
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_00A3563C;
    v0 = 0; goto L_00A356AC;
L_00A3563C:;
    v1 = s2 < 512;
    if (v1 != 0) goto L_00A35670;
    at = v0 < 65;
    if (at == 0) goto L_00A35670;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    v1 = (*(volatile s32 *) (u32) (v1 + 80));
    v1 = v1 < 4096;
    if (v1 != 0) goto L_00A35670;
    v0 = 1; goto L_00A356AC;
L_00A35670:;
    at = v0 < 33;
    if (at != 0) { v0 = 1; goto L_00A356AC; }
    v1 = v0 < 80;
    if (v1 != 0) { at = s2 < 769; goto L_00A356A0; }
    v1 = (s32) ((u32) s0 << 2);
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x280U);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = v0 < s2; goto L_00A356AC;
L_00A356A0:;
    if (at != 0) { v0 = s0 < 49; goto L_00A356AC; }
    v0 = 1;
L_00A356AC:;
    return v0;
}
