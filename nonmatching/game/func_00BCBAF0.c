/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00270530(s32, s32);
void func_002871C0(s32);

s32 func_00BCBAF0(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;
    s64 frame[26];
    s32 sp = (s32) (u32) frame;

    a0 = (s32) ((u32) sp + 0xc0U);
    func_002871C0(a0);
    s5 = 0;
    s4 = 0;
    s3 = (s32) ((u32) sp + 0xa4U);
    s2 = (s32) ((u32) sp + 0xc4U);
    s1 = (s32) ((u32) sp + 0xb4U);
    s0 = (s32) ((u32) sp + 0xa8U);
    s6 = (s32) ((u32) sp + 0xc8U);
    s7 = (s32) ((u32) sp + 0xb8U);
L_00BCBB44:;
    if (s4 == 0) goto L_00BCBBF0;
    v0 = 255;
    if (s4 == v0) { a0 = 1; goto L_00BCBB64; }
    v0 = 23;
    if ((u32) v0 != 0) { s64 q_ = (s32) ((u32) s4 / (u32) v0); hi = (s32) ((u32) s4 % (u32) v0); lo = q_; }
    a0 = hi;
L_00BCBB64:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a1 = (s32) ((u32) sp + 0xa0U);
    a0 = (s32) ((u32) v0 + (u32) v1); func_00270530(a0, a1);
    f5.f = (*(volatile f32 *) (u32) (sp + 192));
    v0 = (s32) ((u32) sp + 0xb0U);
    f4.f = (*(volatile f32 *) (u32) (sp + 160));
    f3.f = (*(volatile f32 *) (u32) s2);
    f2.f = (*(volatile f32 *) (u32) s3);
    f1.f = (*(volatile f32 *) (u32) s6);
    f0.f = (*(volatile f32 *) (u32) s0);
    f4.f = f5.f - f4.f;
    f2.f = f3.f - f2.f;
    f0.f = f1.f - f0.f;
    (*(volatile f32 *) (u32) (sp + 176)) = f4.f;
    (*(volatile f32 *) (u32) s1) = f2.f;
    (*(volatile f32 *) (u32) s7) = f0.f;
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("lqc2 $vf5, 0(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("vmul.xyz $vf5, $vf4, $vf5");
    __asm__ volatile("vaddy.x $vf5, $vf5, $vf5y");
    __asm__ volatile("vaddz.x $vf5, $vf5, $vf5z");
    { s32 t_; __asm__ volatile("qmfc2.ni %0, $vf5" : "=r"(t_)); v0 = t_; }
    f0.i = (s32) v0;
    if (s5 == 0) goto L_00BCBBE8;
    fcc = f0.f < f20.f;
    if (!fcc) goto L_00BCBBF0;
L_00BCBBE8:;
    f20.i = f0.i;
    s5 = s4;
L_00BCBBF0:;
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = (u64) s4 < (u64) (s64) 23;
    if (v0 != 0) goto L_00BCBB44;
    v0 = s5;
    return v0;
}
