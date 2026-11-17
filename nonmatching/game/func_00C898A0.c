/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001EDD00(s32, s32, s32, s32);
void func_001EEE60(s32, s32);
void func_001EF370(s32, s32);
void func_001EF860(s32, s32);
void func_001EF900(s32, s32);

void func_00C898A0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    volatile union { f32 f; s32 i; } f22 = { 0 };
    volatile union { f32 f; s32 i; } f23 = { 0 };
    s64 frame[20];
    s32 sp = (s32) (u32) frame;

    at = (u64) a0 < (u64) (s64) 127;
    s3 = a1;
    s2 = a2;
    s1 = a3;
    s0 = a4;
    f23.i = f12.i;
    f22.i = f13.i;
    f21.i = f14.i;
    { s32 c_ = at == 0; f20.i = f15.i; if (c_) goto L_00C89978; }
    v0 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + 0xffffce4cU);
    s4 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) 0xcd0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -12744)); v0 = func_001EDD00(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) s4) = (u32) v0;
    a0 = v0;
    s4 = v0;
    a1 = 1; func_001EF900(a0, a1);
    a0 = s4;
    a1 = (s32) ((u32) sp + 0x80U);
    (*(volatile f32 *) (u32) (sp + 128)) = f23.f;
    (*(volatile u32 *) (u32) (sp + 136)) = (u32) 0;
    (*(volatile f32 *) (u32) (sp + 132)) = f22.f;
    (*(volatile u32 *) (u32) (sp + 140)) = (u32) 0; func_001EF860(a0, a1);
    a0 = s4;
    a1 = (s32) ((u32) sp + 0x70U);
    (*(volatile f32 *) (u32) (sp + 120)) = f21.f;
    (*(volatile u32 *) (u32) (sp + 112)) = (u32) 0;
    (*(volatile f32 *) (u32) (sp + 124)) = f20.f;
    (*(volatile u32 *) (u32) (sp + 116)) = (u32) 0; func_001EF370(a0, a1);
    a0 = s4;
    a1 = (s32) ((u32) sp + 0x9cU);
    (*(volatile u8 *) (u32) (sp + 156)) = (u8) s3;
    (*(volatile u8 *) (u32) (sp + 157)) = (u8) s2;
    (*(volatile u8 *) (u32) (sp + 158)) = (u8) s1;
    (*(volatile u8 *) (u32) (sp + 159)) = (u8) s0; func_001EEE60(a0, a1);
L_00C89978:;
    return;
}
