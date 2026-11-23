/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001D79A0(s64, s64);
s64 func_001D7A20(s64, s64, s64);
void func_001D7BE0(s64, s64);
void func_001D7CE0(s64, s64);
void func_001D7D60(s64, s64);
void func_002DF640(s64, s64, s64, s64);
void func_002DF6E0(s64, f32);
void func_002DF8E0(s64, s64, s64, s64);

void func_00631C30(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s64 frame[16];
    s64 sp = (s32) (u32) frame;

    v0 = 16;
    v1 = (s32) ((u32) sp + 0x60U);
    s3 = a0;
    s2 = a1;
    s0 = (s32) 0x660000U;
    { s32 c_ = v1 == 0; s0 = (s32) ((u32) s0 + 0xffffc2b0U); if (c_) goto L_00631C84; }
L_00631C68:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_00631C68;
L_00631C84:;
    v0 = (s32) 0x660000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -15689));
    if (v0 != 0) { s1 = 0; goto L_00631CAC; }
    v0 = (*(volatile u8 *) (u32) (s0 + 19));
    if (v0 != 0) goto L_00631CA8;
    s1 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_00631CAC;
L_00631CA8:;
    s1 = 0;
L_00631CAC:;
    a0 = (*(volatile s32 *) (u32) (s3 + 4));
    a1 = 0; f0.f = func_001D79A0(a0, a1);
    v1 = (*(volatile u8 *) (u32) (s0 + 6));
    v0 = (s32) 0x660000U;
    v0 = (s32) ((u32) v0 + 0xffffae80U);
    a0 = (*(volatile s32 *) (u32) (s3 + 8));
    f20.i = f0.i;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a2 = (*(volatile u16 *) (u32) v0);
    a1 = (s32) ((u32) sp + 0x60U); v0 = func_001D7A20(a0, a1, a2);
    f12.f = (*(volatile f32 *) (u32) (sp + 96));
    f13.f = (*(volatile f32 *) (u32) (sp + 100));
    a0 = s2; func_002DF640(a0, a1, a2, a3);
    a1 = s1;
    a0 = s2; func_002DF8E0(a0, a1, a2, a3);
    a0 = s2;
    f12.i = f20.i; func_002DF6E0(a0, f12.f);
    v1 = (*(volatile u8 *) (u32) (s0 + 7));
    v0 = (s32) 0x660000U;
    v0 = (s32) ((u32) v0 + 0xffffae90U);
    a0 = (*(volatile s32 *) (u32) (s3 + 8));
    s0 = (u64) 0 < (u64) v1;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a2 = (*(volatile u16 *) (u32) v0);
    a1 = (s32) ((u32) sp + 0x60U); v0 = func_001D7A20(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s3 + 20));
    a1 = (s32) ((u32) sp + 0x70U); func_001D7BE0(a0, a1);
    f1.f = (*(volatile f32 *) (u32) (sp + 96));
    (*(volatile u32 *) (u32) (sp + 120)) = (u32) 0;
    f0.f = (*(volatile f32 *) (u32) (sp + 100));
    (*(volatile f32 *) (u32) (sp + 112)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 116)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (s3 + 20));
    a1 = (s32) ((u32) sp + 0x70U); func_001D7CE0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s3 + 20));
    a1 = s0; func_001D7D60(a0, a1);
    return;
}
