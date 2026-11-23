/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001CD910(s32, s32);

void func_0018F580(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };

    v0 = 1;
    v1 = 7;
    s1 = a0;
    (*(volatile u8 *) (u32) a0) = (u8) v0;
    s0 = (s32) ((u32) s1 + 0x10U);
    (*(volatile u8 *) (u32) (a0 + 1)) = (u8) 0;
    v0 = (s32) 0x3c230000U;
    (*(volatile u8 *) (u32) (a0 + 2)) = (u8) v1;
    v0 = v0 | 0xd70a;
    (*(volatile u8 *) (u32) (a0 + 3)) = (u8) 0;
    f2.i = (s32) v0;
    f0.f = (*(volatile f32 *) (u32) a1);
    v0 = (s32) 0xbf800000U;
    f1.i = (s32) v0;
    f0.f = f2.f * f0.f;
    (*(volatile f32 *) (u32) (a0 + 4)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (a1 + 4));
    f0.i = f0.i ^ (s32) 0x80000000U;
    f0.f = f2.f * f0.f;
    (*(volatile f32 *) (u32) (a0 + 8)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (a1 + 8));
    f0.f = f2.f * f0.f;
    a1 = s0;
    (*(volatile f32 *) (u32) (a0 + 12)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (a0 + 4));
    f0.f = f1.f * f0.f;
    (*(volatile f32 *) (u32) (a0 + 16)) = f0.f;
    (*(volatile u32 *) (u32) (a0 + 20)) = (u32) 0;
    f0.f = (*(volatile f32 *) (u32) (a0 + 12));
    f0.f = f1.f * f0.f;
    (*(volatile f32 *) (u32) (a0 + 24)) = f0.f;
    a0 = s0; func_001CD910(a0, a1);
    f1.f = (*(volatile f32 *) (u32) s0);
    a0 = (s32) 0x3ff30000U;
    a1 = a0 | 0x3333;
    v1 = (s32) 0x3fa60000U;
    f2.i = (s32) a1;
    a0 = v1 | 0x6666;
    f0.i = (s32) a0;
    v1 = (s32) 0x3f8c0000U;
    a2 = v1 | 0xcccd;
    a1 = (s32) 0x3f800000U;
    a0 = (s32) 0x520000U;
    v1 = (s32) 0x520000U;
    f1.f = f1.f * f2.f;
    (*(volatile f32 *) (u32) s0) = f1.f;
    f1.f = (*(volatile f32 *) (u32) (s0 + 4));
    f1.f = f1.f * f2.f;
    (*(volatile f32 *) (u32) (s0 + 4)) = f1.f;
    f1.f = (*(volatile f32 *) (u32) (s0 + 8));
    f1.f = f1.f * f2.f;
    (*(volatile f32 *) (u32) (s0 + 8)) = f1.f;
    f1.f = (*(volatile f32 *) (u32) (s0 + 4));
    f0.f = f1.f + f0.f;
    (*(volatile f32 *) (u32) (s0 + 4)) = f0.f;
    (*(volatile u32 *) (u32) (s1 + 28)) = (u32) a2;
    (*(volatile u32 *) (u32) (s1 + 44)) = (u32) a1;
    a0 = (*(volatile s32 *) (u32) (a0 + 544));
    f0.f = (*(volatile f32 *) (u32) (a0 + 20));
    (*(volatile f32 *) (u32) (s1 + 36)) = f0.f;
    v1 = (*(volatile s32 *) (u32) (v1 + 544));
    f0.f = (*(volatile f32 *) (u32) (v1 + 12));
    (*(volatile f32 *) (u32) (s1 + 40)) = f0.f;
    return;
}
