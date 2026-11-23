/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0012BBD0(s32, s32);
void func_0012BF70(s32, s32, s32);
void func_0012BFE0(s32, s32, s32);
void func_00131D40(s32, s32, s32, s32, f32, f32);
void func_00131F10(s32, s32, s32, s32, f32, f32);

void func_00132110(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    s1 = a1;
    s0 = a0; func_00131D40(a0, a1, a2, a3, f12.f, f13.f);
    a0 = s0; func_00131F10(a0, a1, a2, a3, f12.f, f13.f);
    v1 = (*(volatile s8 *) (u32) (s0 + 29));
    v0 = -64;
    a0 = (s32) ((u32) sp + 0x50U);
    a1 = s1;
    v0 = v1 & v0;
    v0 = v0 | 0x1;
    (*(volatile u8 *) (u32) (s0 + 29)) = (u8) v0; func_0012BBD0(a0, a1);
    f3.f = (*(volatile f32 *) (u32) (s1 + 48));
    s0 = (*(volatile s32 *) (u32) s0);
    f2.f = (*(volatile f32 *) (u32) (s1 + 52));
    f1.f = (*(volatile f32 *) (u32) (s1 + 56));
    f0.f = (*(volatile f32 *) (u32) (s1 + 60));
    (*(volatile f32 *) (u32) (sp + 64)) = f3.f;
    (*(volatile f32 *) (u32) (sp + 68)) = f2.f;
    (*(volatile f32 *) (u32) (sp + 72)) = f1.f;
    { s32 c_ = s0 == 0; (*(volatile f32 *) (u32) (sp + 76)) = f0.f; if (c_) goto L_001321D8; }
L_0013217C:;
    v1 = (*(volatile s8 *) (u32) (s0 + 259));
    v1 = v1 & 0x80;
    if (v1 == 0) goto L_001321C8;
    a0 = (s32) ((u32) s0 + 0x50U);
    a1 = (s32) ((u32) sp + 0x50U);
    a2 = a0; func_0012BFE0(a0, a1, a2);
    a0 = (s32) ((u32) sp + 0x30U);
    a1 = (s32) ((u32) sp + 0x50U);
    a2 = (s32) ((u32) s0 + 0x40U); func_0012BF70(a0, a1, a2);
    a0 = (s32) ((u32) sp + 0x40U);
    v1 = (s32) ((u32) sp + 0x30U);
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("lqc2 $vf5, 0(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("vadd.xyzw $vf6, $vf4, $vf5");
    __asm__ volatile("sqc2 $vf6, 64(%0)" : : "r"((u32) s0) : "memory");
L_001321C8:;
    s0 = (*(volatile s32 *) (u32) (s0 + 260));
    if (s0 != 0) goto L_0013217C;
L_001321D8:;
    return;
}
