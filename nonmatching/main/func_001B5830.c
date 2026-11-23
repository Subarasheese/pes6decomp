/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Sprite_SetPositionZ(s64, f32);
s64 func_001B9B30(s64, s64, s64, s64);
s64 func_001D5A10(s64);
f32 func_001D7700(s64);
void func_001D7C20(s64, s64, s64, s64);
void func_001D7D60(s64, s64);
void func_001D7D80(s64, s64, s64, s64);
void func_001D7E40(s64, s64, s64, s64);
s64 func_001D7F90(s64, s64, s64, s64);

void func_001B5830(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s32 fcc = 0;

    v0 = (s32) 0x10000U;
    s6 = a0;
    a0 = v0 | 0x3d;
    v0 = func_001D5A10(a0);
    s5 = v0;
    s0 = (s32) 0x520000U;
    v0 = (s32) 0x461c0000U;
    s2 = (s32) 0x3d0000U;
    v0 = v0 | 0x4000;
    s0 = (s32) ((u32) s0 + 0x28f0U);
    f20.i = (s32) v0;
    s4 = 0;
    s2 = (s32) ((u32) s2 + 0x13a8U);
    s1 = s6;
L_001B5890:;
    a0 = s5; v0 = func_001D7F90(a0, a1, a2, a3);
    a1 = (*(volatile s32 *) (u32) s2);
    s3 = v0;
    a0 = s3; func_001D7E40(a0, a1, a2, a3);
    a1 = (*(volatile s16 *) (u32) (s0 + 96));
    a0 = s3; func_001D7D80(a0, a1, a2, a3);
    a0 = s3;
    a1 = 1; func_001D7D60(a0, a1);
    a0 = s3;
    a1 = 1; func_001D7C20(a0, a1, a2, a3);
    a0 = s3;
    (*(volatile u32 *) (u32) s1) = (u32) s3; f0.f = func_001D7700(a0);
    fcc = f0.f < f20.f;
    if (!fcc) goto L_001B58E8;
    f20.i = f0.i;
L_001B58E8:;
    a0 = (*(volatile s32 *) (u32) (gp + -23160));
    v1 = 1;
    if (a0 != v1) goto L_001B5908;
    f20.f = (*(volatile f32 *) (u32) (s0 + 108));
    a0 = s3;
    f12.i = f20.i; Pes6Sprite_SetPositionZ(a0, f12.f);
L_001B5908:;
    s4 = (s32) ((u32) s4 + 0x1U);
    v1 = (u64) s4 < (u64) (s64) 2;
    s2 = (s32) ((u32) s2 + 0x4U);
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_001B5890; }
    (*(volatile f32 *) (u32) (s6 + 8)) = f20.f;
    a0 = -2;
    a3 = (*(volatile u8 *) (u32) (s6 + 24));
    a2 = (s64) ((u64) 0 + (u64) (s64) 1);
    v1 = (s32) 0x43200000U;
    a0 = a3 & a0;
    a0 = a0 | a2;
    (*(volatile u8 *) (u32) (s6 + 24)) = (u8) a0;
    (*(volatile u32 *) (u32) (s6 + 20)) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (s6 + 28));
    { s32 c_ = v1 != 0; a1 = 1; if (c_) goto L_001B5960; }
    a0 = s5;
    a2 = 0;
    a3 = a1; v0 = func_001B9B30(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s6 + 28)) = (u32) v0;
L_001B5960:;
    return;
}
