/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00103D80(s32, s32, s32, f32);

void func_0020A6F0(s32 a0, s32 a1, s32 a2, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    v1 = (s32) 0x40e00000U;
    f1.i = (s32) v1;
    f12.f = f12.f * f1.f;
    v1 = (s32) 0x4f000000U;
    s1 = a0;
    f0.i = (s32) v1;
    fcc = f0.f <= f12.f;
    { s32 c_ = fcc; s0 = a1; if (c_) goto L_0020A738; }
    f0.i = (s32) f12.f;
    a2 = f0.i;
    a0 = (s32) ((u32) a2 + 0x1U); goto L_0020A754;
L_0020A738:;
    f0.f = f12.f - f0.f;
    v1 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    a2 = f0.i;
    a2 = a2 | v1;
    a0 = (s32) ((u32) a2 + 0x1U);
L_0020A754:;
    v1 = 7;
    if ((u32) v1 != 0) { s64 q_ = (s32) ((u32) a0 / (u32) v1); hi = (s32) ((u32) a0 % (u32) v1); lo = q_; }
    { s32 c_ = a2 < 0; a1 = hi; if (c_) goto L_0020A774; }
    f0.i = (s32) a2;
    f0.f = (f32) f0.i; goto L_0020A790;
L_0020A774:;
    a0 = (s32) ((u32) a2 >> 1);
    v1 = a2 & 0x1;
    a0 = a0 | v1;
    f0.i = (s32) a0;
    f0.f = (f32) f0.i;
    f0.f = f0.f + f0.f;
L_0020A790:;
    v1 = 7;
    f12.f = f12.f - f0.f;
    if ((u32) v1 != 0) { s64 q_ = (s32) ((u32) a2 / (u32) v1); hi = (s32) ((u32) a2 % (u32) v1); lo = q_; }
    a0 = hi;
    v1 = (s32) 0x38d10000U;
    v1 = v1 | 0xb717;
    f0.i = (s32) v1;
    fcc = f12.f < f0.f;
    if (fcc) goto L_0020A8F0;
    v1 = (s32) 0x3f7f0000U;
    v1 = v1 | 0xf972;
    f0.i = (s32) v1;
    fcc = f12.f <= f0.f;
    if (fcc) goto L_0020A904;
    v1 = (s32) 0x3b0000U;
    a0 = (s32) ((u32) a1 << 4);
    v1 = (s32) ((u32) v1 + 0xffff8d40U);
    a1 = (s32) ((u32) v1 + (u32) a0);
L_0020A7E8:;
    f1.f = (*(volatile f32 *) (u32) a1);
    a0 = (s32) 0x437f0000U;
    f2.i = (s32) a0;
    v1 = (s32) 0x4f000000U;
    f0.i = (s32) v1;
    f1.f = f2.f * f1.f;
    fcc = f0.f <= f1.f;
    if (fcc) { f0.f = f1.f - f0.f; goto L_0020A820; }
    f0.i = (s32) f1.f;
    a0 = f0.i;
    a0 = a0 & 0xff; goto L_0020A838;
L_0020A820:;
    v1 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    a0 = f0.i;
    a0 = a0 | v1;
    a0 = a0 & 0xff;
L_0020A838:;
    (*(volatile u8 *) (u32) s0) = (u8) a0;
    v1 = (s32) 0x437f0000U;
    f1.f = (*(volatile f32 *) (u32) (a1 + 4));
    f2.i = (s32) v1;
    v1 = (s32) 0x4f000000U;
    f0.i = (s32) v1;
    f1.f = f2.f * f1.f;
    fcc = f0.f <= f1.f;
    if (fcc) { f0.f = f1.f - f0.f; goto L_0020A874; }
    f0.i = (s32) f1.f;
    a0 = f0.i;
    a0 = a0 & 0xff; goto L_0020A88C;
L_0020A874:;
    v1 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    a0 = f0.i;
    a0 = a0 | v1;
    a0 = a0 & 0xff;
L_0020A88C:;
    (*(volatile u8 *) (u32) (s0 + 1)) = (u8) a0;
    v1 = (s32) 0x437f0000U;
    f1.f = (*(volatile f32 *) (u32) (a1 + 8));
    f2.i = (s32) v1;
    v1 = (s32) 0x4f000000U;
    f0.i = (s32) v1;
    f1.f = f2.f * f1.f;
    fcc = f0.f <= f1.f;
    if (fcc) { f0.f = f1.f - f0.f; goto L_0020A8C8; }
    f0.i = (s32) f1.f;
    a0 = f0.i;
    a0 = a0 & 0xff; goto L_0020A8E0;
L_0020A8C8:;
    v1 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    a0 = f0.i;
    a0 = a0 | v1;
    a0 = a0 & 0xff;
L_0020A8E0:;
    { s32 c_ = s1 != 0; (*(volatile u8 *) (u32) (s0 + 2)) = (u8) a0; if (c_) goto L_0020A92C; }
L_0020A8E8:;
    goto L_0020A938;
L_0020A8F0:;
    v1 = (s32) 0x3b0000U;
    a0 = (s32) ((u32) a0 << 4);
    v1 = (s32) ((u32) v1 + 0xffff8d40U);
    a1 = (s32) ((u32) v1 + (u32) a0); goto L_0020A7E8;
L_0020A904:;
    v1 = (s32) 0x3b0000U;
    v0 = (s32) ((u32) a0 << 4);
    v1 = (s32) ((u32) v1 + 0xffff8d40U);
    a1 = (s32) ((u32) a1 << 4);
    a0 = (s32) ((u32) sp + 0x30U);
    a1 = (s32) ((u32) v1 + (u32) a1);
    a2 = (s32) ((u32) v1 + (u32) v0); func_00103D80(a0, a1, a2, f12.f);
    a1 = (s32) ((u32) sp + 0x30U); goto L_0020A7E8;
L_0020A92C:;
    v1 = 255;
    (*(volatile u8 *) (u32) (s0 + 3)) = (u8) v1; goto L_0020A8E8;
L_0020A938:;
    return;
}
