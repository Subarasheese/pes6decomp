/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001040A0(s32, s32, s32, f32);
s32 func_00129C20(s32, s32, s32, s32);
void func_00141DA0(void);
void func_00141E10(void);
void func_00141E90(s32);
void func_00141EE0(void);
void func_00141F50(s32);
void func_00141FA0(void);
void func_00141FE0(s32);
void func_00142EC0(s32, s32, s32);

void func_0093C620(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 v0 = 0, v1 = 0, a4 = 0, s0 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s32 fcc = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    a0 = (s32) 0x50000U;
    func_00141E90(a0);
    a0 = 13; func_00141FE0(a0);
    a0 = 0; func_00141F50(a0);
    f1.f = (*(volatile f32 *) (u32) (gp + -18424));
    v0 = (s32) 0x43340000U;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) { v0 = (s32) 0x43b40000U; goto L_0093C668; }
    v0 = (s32) 0x3c8e0000U; goto L_0093C678;
L_0093C668:;
    f0.i = (s32) v0;
    f1.f = f1.f - f0.f;
    v0 = (s32) 0x3c8e0000U;
L_0093C678:;
    a1 = (s32) 0x370000U;
    v0 = v0 | 0xfa35;
    a0 = (s32) ((u32) sp + 0x20U);
    f0.i = (s32) v0;
    a1 = (s32) ((u32) a1 + 0x5b30U);
    f12.f = f0.f * f1.f; func_001040A0(a0, a1, a2, f12.f);
    a1 = (*(volatile s32 *) (u32) (gp + -18444));
    v1 = (s32) 0x960000U;
    v1 = (s32) ((u32) v1 + 0xffffddf0U);
    v0 = (s32) ((u32) sp + 0x20U);
    a0 = (s32) ((u32) a1 << 4);
    v1 = (s32) ((u32) v1 + (u32) a0);
    __asm__ volatile("lqc2 $vf8, 0(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("lqc2 $vf5, 16(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("lqc2 $vf6, 32(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("lqc2 $vf7, 48(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("vmulx.xyzw $vf4, $vf4, $vf8x");
    __asm__ volatile("vmuly.xyzw $vf5, $vf5, $vf8y");
    __asm__ volatile("vmulz.xyzw $vf6, $vf6, $vf8z");
    __asm__ volatile("vmulw.xyzw $vf7, $vf7, $vf8w");
    __asm__ volatile("sqc2 $vf4, 0(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("sqc2 $vf5, 16(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("sqc2 $vf6, 32(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("sqc2 $vf7, 48(%0)" : : "r"((u32) v0) : "memory");
    v1 = (s32) 0x960000U;
    a0 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) v1 + 0x7b30U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    f0.f = (*(volatile f32 *) (u32) v1);
    v0 = (s32) 0x960000U;
    v0 = (s32) ((u32) v0 + 0x66b0U);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (*(volatile s32 *) (u32) v0);
    (*(volatile f32 *) (u32) (sp + 84)) = f0.f;
    s0 = (s32) ((u32) v0 << 3); v0 = func_00129C20(a0, a1, a2, a3);
    a3 = v0;
    a2 = (s32) ((u32) sp + 0x20U);
    v0 = (s32) 0x960000U;
    v0 = (s32) ((u32) v0 + 0x7ca0U);
    v1 = (s32) ((u32) v0 + (u32) s0);
    v0 = (s32) 0x960000U;
    a0 = (*(volatile s32 *) (u32) v1);
    v0 = (s32) ((u32) v0 + 0x7ca4U);
    v0 = (s32) ((u32) v0 + (u32) s0);
    a1 = (*(volatile s32 *) (u32) v0);
    a4 = 0; func_00142EC0(a0, a1, a2);
    func_00141EE0();
    func_00141FA0();
    func_00141E10();
    func_00141DA0();
    return;
}
