/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_0011D210(f32);

s64 func_001530D0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, f32 fa12) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    union { f32 f; s32 i; } f4 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    s32 fcc = 0;
    f32 acc = 0;
    s64 frame[8];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0x50800000U;
    (*(volatile f32 *) (u32) (sp + 60)) = f12.f;
    s0 = (*(volatile s32 *) (u32) (sp + 60));
    s1 = (s64) ((u64) s0 << 33);
    s1 = (s64) ((u64) s1 >> 33);
    v0 = s1 < v0;
    if (v0 != 0) { at = (s32) 0x3ee00000U; goto L_00153140; }
    if (s0 <= 0) goto L_00153120;
    v1 = (s32) 0x3c0000U;
    v0 = (s32) 0x3c0000U;
    f1.f = (*(volatile f32 *) (u32) (v1 + 29132));
    f0.f = (*(volatile f32 *) (u32) (v0 + 29148));
    f0.f = f1.f + f0.f; goto L_00153138;
L_00153120:;
    v1 = (s32) 0x3c0000U;
    v0 = (s32) 0x3c0000U;
    f1.f = (*(volatile f32 *) (u32) (v1 + 29132));
    f0.f = (*(volatile f32 *) (u32) (v0 + 29148));
    f1.i = f1.i ^ (s32) 0x80000000U;
    f0.f = f1.f - f0.f;
L_00153138:;
    goto L_00153330;
L_00153140:;
    at = s1 < at;
    if (at == 0) goto L_00153194;
    at = (s32) 0x31000000U;
    at = s1 < at;
    if (at == 0) goto L_0015318C;
    v1 = (s32) 0x71490000U;
    v0 = (s32) 0x3f800000U;
    v1 = v1 | 0xf2ca;
    f1.i = (s32) v1;
    f0.i = (s32) v0;
    f1.f = f1.f + f12.f;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_0015318C;
    f0.i = f12.i; goto L_0015332C;
L_0015318C:;
    v1 = -1; goto L_00153274;
L_00153194:;
    f0.f = func_0011D210(f12.f);
    at = (s32) 0x3f980000U;
    at = s1 < at;
    if (at == 0) { at = (s32) 0x401c0000U; goto L_00153220; }
    at = (s32) 0x3f300000U;
    at = s1 < at;
    if (at == 0) { v0 = (s32) 0x3f800000U; goto L_001531F8; }
    v0 = (s32) 0x40000000U;
    v1 = 0;
    f3.i = (s32) v0;
    f2.f = f3.f * f0.f;
    v0 = (s32) 0x3f800000U;
    f1.i = (s32) v0;
    f0.f = f3.f + f0.f;
    f1.f = f2.f - f1.f;
    f12.f = f1.f / f0.f;
    goto L_00153274;
L_001531F8:;
    v1 = 1;
    f2.i = (s32) v0;
    f1.f = f0.f - f2.f;
    f0.f = f2.f + f0.f;
    f12.f = f1.f / f0.f;
    goto L_00153274;
L_00153220:;
    at = s1 < at;
    if (at == 0) { v0 = (s32) 0xbf800000U; goto L_00153264; }
    v0 = (s32) 0x3fc00000U;
    v1 = 2;
    f4.i = (s32) v0;
    f1.i = (s32) 0;
    v0 = (s32) 0x3f800000U;
    f2.i = (s32) v0;
    f3.f = f0.f - f4.f;
    acc = f1.f + f2.f;
    f0.f = acc + f4.f * f0.f;
    f12.f = f3.f / f0.f;
    goto L_00153274;
L_00153264:;
    v1 = 3;
    f1.i = (s32) v0;
    f12.f = f1.f / f0.f;
L_00153274:;
    v0 = (s32) 0x3c0000U;
    v0 = (s32) ((u32) v0 + 0x7200U);
    a4 = f12.i;
    __asm__ volatile("qmtc2.ni %0, $vf6" : : "r"((s32) a4));
    __asm__ volatile("vmul.x $vf10, $vf6, $vf6");
    __asm__ volatile("lqc2 $vf5, 0(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("lqc2 $vf8, 16(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("lqc2 $vf9, 32(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("vmul.x $vf11, $vf10, $vf10");
    __asm__ volatile("vmulaw.xyzw ACC, $vf5, $vf0w");
    __asm__ volatile("vmaddx.xyzw $vf7, $vf8, $vf10x");
    __asm__ volatile("vmul.x $vf4, $vf10, $vf6");
    __asm__ volatile("vmul.x $vf12, $vf11, $vf11");
    __asm__ volatile("vmulaw.x ACC, $vf9, $vf0w");
    __asm__ volatile("vmadday.x ACC, $vf10, $vf9y");
    __asm__ volatile("vmaddz.x $vf9, $vf11, $vf9z");
    __asm__ volatile("vmr32.xz $vf5, $vf7");
    __asm__ volatile("vmulx.x $vf6, $vf12, $vf4x");
    __asm__ volatile("vmulaw.xz ACC, $vf7, $vf0w");
    __asm__ volatile("vmaddx.xz $vf7, $vf5, $vf11x");
    __asm__ volatile("vmulx.x $vf8, $vf6, $vf12x");
    __asm__ volatile("vmulax.x ACC, $vf7, $vf4x");
    __asm__ volatile("vmaddaz.x ACC, $vf6, $vf7z");
    __asm__ volatile("vmaddx.x $vf4, $vf8, $vf9x");
    { s32 t_; __asm__ volatile("qmfc2.ni %0, $vf4" : "=r"(t_)); a4 = t_; }
    f2.i = (s32) a4;
    if (v1 >= 0) goto L_001532F0;
    f0.f = f12.f - f2.f; goto L_0015332C;
L_001532F0:;
    v0 = (s32) 0x3c0000U;
    a0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + 0x71d0U);
    v1 = (s32) ((u32) v0 + (u32) a0);
    f1.f = (*(volatile f32 *) (u32) v1);
    v0 = (s32) 0x3c0000U;
    v0 = (s32) ((u32) v0 + 0x71c0U);
    v0 = (s32) ((u32) v0 + (u32) a0);
    f0.f = (*(volatile f32 *) (u32) v0);
    f1.f = f2.f - f1.f;
    f1.f = f1.f - f12.f;
    { s32 c_ = s0 >= 0; f0.f = f0.f - f1.f; if (c_) goto L_0015332C; }
    f0.i = f0.i ^ (s32) 0x80000000U; goto L_0015332C;
L_0015332C:;
L_00153330:;
    return v0;
}
