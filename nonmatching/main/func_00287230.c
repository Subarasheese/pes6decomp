/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_00129820(f32, f32);
s32 func_00270570(void);

s32 func_00287230(s32 a0, s32 a1, s32 a2, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };
    s32 fcc = 0;
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    v1 = (s32) ((u32) a1 << 4);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v0 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) v1 << 4);
    a2 = (*(volatile s32 *) (u32) (a0 + 4));
    s0 = a0;
    v0 = (s32) ((u32) v0 + 0xffffb9d0U);
    a1 = (*(volatile s32 *) (u32) a2);
    a0 = (s32) ((u32) sp + 0x30U);
    a1 = (*(volatile s32 *) (u32) (a1 + 16));
    a1 = (*(volatile s32 *) (u32) (a1 + 40));
    a1 = (*(volatile s32 *) (u32) a1);
    v1 = (s32) ((u32) a1 + (u32) v1);
    __asm__ volatile("lqc2 $vf8, 0(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("lqc2 $vf5, 16(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("lqc2 $vf6, 32(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("lqc2 $vf7, 48(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("vmulax.xyzw ACC, $vf4, $vf8x");
    __asm__ volatile("vmadday.xyzw ACC, $vf5, $vf8y");
    __asm__ volatile("vmaddaz.xyzw ACC, $vf6, $vf8z");
    __asm__ volatile("vmaddw.xyzw $vf8, $vf7, $vf8w");
    __asm__ volatile("sqc2 $vf8, 0(%0)" : : "r"((u32) a0) : "memory");
    f1.i = (s32) 0;
    f2.f = (*(volatile f32 *) (u32) (sp + 56));
    fcc = f1.f == f2.f;
    if (!fcc) goto L_002872C8;
    f0.f = (*(volatile f32 *) (u32) (sp + 48));
    fcc = f1.f == f0.f;
    if (!fcc) goto L_002872C8;
    v0 = (*(volatile u16 *) (u32) (s0 + 38)); goto L_0028735C;
L_002872C8:;
    f0.f = (*(volatile f32 *) (u32) (sp + 48));
    f12.i = f2.i ^ (s32) 0x80000000U;
    f13.i = f0.i ^ (s32) 0x80000000U; f0.f = func_00129820(f12.f, f13.f);
    v0 = (s32) 0x40490000U;
    v1 = (s32) 0x47000000U;
    a0 = v0 | 0xfdb;
    f2.i = (s32) a0;
    v0 = (s32) 0x4f000000U;
    f1.i = (s32) v1;
    f0.f = f0.f / f2.f;
    f1.f = f1.f * f0.f;
    f0.i = (s32) v0;
    fcc = f0.f <= f1.f;
    if (fcc) { f0.f = f1.f - f0.f; goto L_00287320; }
    f0.i = (s32) f1.f;
    v1 = f0.i;
    v1 = v1 & 0xffff; goto L_00287338;
L_00287320:;
    v0 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    v1 = f0.i;
    v1 = v1 | v0;
    v1 = v1 & 0xffff;
L_00287338:;
    s1 = v1 & 0xffff; v0 = func_00270570();
    v0 = v0 & 0xff;
    if (v0 != 0) goto L_00287358;
    v0 = (*(volatile u16 *) (u32) (s0 + 38));
    v0 = (s32) ((u32) s1 + (u32) v0);
    s1 = v0 & 0xffff;
L_00287358:;
    v0 = s1;
L_0028735C:;
    return v0;
}
