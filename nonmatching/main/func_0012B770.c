/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00103D80(s32, s32, s32, f32);
s32 func_00103DF0(s32, s32, f32);
s32 func_00103E38(s32, s32);
s32 func_0012BF20(s32, s32);

s32 func_0012B770(s32 a0, s32 a1, s32 a2, f32 fa12) {
    s32 v0 = 0, s0 = 0, s1 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f20 = { 0 };
    s32 fcc = 0;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    s1 = a0;
    s0 = a1;
    f20.i = f12.i;
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) s0) : "memory");
    __asm__ volatile("lqc2 $vf5, 0(%0)" : : "r"((u32) a2) : "memory");
    __asm__ volatile("vmul.xyzw $vf5, $vf4, $vf5");
    __asm__ volatile("vaddax.w ACC, $vf5, $vf5x");
    __asm__ volatile("vmadday.w ACC, $vf0, $vf5y");
    __asm__ volatile("vmaddz.w $vf5, $vf0, $vf5z");
    __asm__ volatile("vaddw.x $vf6, $vf0, $vf5w");
    { s32 t_; __asm__ volatile("qmfc2.ni %0, $vf6" : "=r"(t_)); v0 = t_; }
    f1.i = (s32) v0;
    f0.i = (s32) 0;
    fcc = f1.f < f0.f;
    if (!fcc) { a1 = a2; goto L_0012B7E4; }
    v0 = (s32) 0xbf800000U;
    a1 = a2;
    f12.i = (s32) v0;
    a0 = (s32) ((u32) sp + 0x40U); v0 = func_00103DF0(a0, a1, f12.f);
    a2 = s0; goto L_0012B7F0;
L_0012B7E4:;
    a0 = (s32) ((u32) sp + 0x40U); v0 = func_00103E38(a0, a1);
    a2 = s0;
L_0012B7F0:;
    a0 = s1;
    f12.i = f20.i;
    a1 = (s32) ((u32) sp + 0x40U); v0 = func_00103D80(a0, a1, a2, f12.f);
    a0 = s1;
    a1 = s1; v0 = func_0012BF20(a0, a1);
    return v0;
}
