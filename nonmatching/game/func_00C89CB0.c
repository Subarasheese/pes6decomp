/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001EDD00(s32, s32, s32, s32);
void func_001EE630(s32, s32);
void func_001EEAC0(s32, s32);
void func_001EF370(s32, s32);
void func_001EF860(s32, s32);
void func_001EF900(s32, s32);

void func_00C89CB0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    volatile union { f32 f; s32 i; } f22 = { 0 };
    volatile union { f32 f; s32 i; } f23 = { 0 };
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    v1 = (u64) a0 < (u64) (s64) 127;
    s1 = a1;
    s0 = a3;
    f23.i = f12.i;
    f22.i = f13.i;
    f21.i = f14.i;
    { s32 c_ = v1 != 0; f20.i = f15.i; if (c_) goto L_00C89CFC; }
    s2 = 0; goto L_00C89D6C;
L_00C89CFC:;
    v0 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + 0xffffce4cU);
    a0 = a2;
    s2 = (s32) ((u32) v0 + (u32) v1); v0 = func_001EDD00(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) s2) = (u32) v0;
    a0 = v0;
    s2 = v0;
    a1 = 1; func_001EF900(a0, a1);
    a0 = s2;
    a1 = (s32) ((u32) sp + 0x60U);
    (*(volatile f32 *) (u32) (sp + 96)) = f23.f;
    (*(volatile u32 *) (u32) (sp + 104)) = (u32) 0;
    (*(volatile f32 *) (u32) (sp + 100)) = f22.f;
    (*(volatile u32 *) (u32) (sp + 108)) = (u32) 0; func_001EF860(a0, a1);
    a0 = s2;
    a1 = (s32) ((u32) sp + 0x50U);
    (*(volatile f32 *) (u32) (sp + 88)) = f21.f;
    (*(volatile u32 *) (u32) (sp + 80)) = (u32) 0;
    (*(volatile f32 *) (u32) (sp + 92)) = f20.f;
    (*(volatile u32 *) (u32) (sp + 84)) = (u32) 0; func_001EF370(a0, a1);
    a1 = s0;
    a0 = s2; func_001EEAC0(a0, a1);
L_00C89D6C:;
    if (s2 == 0) { ; goto L_00C89D84; }
    a0 = s2;
    a1 = s1; func_001EE630(a0, a1);
L_00C89D84:;
    return;
}
