/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001D79A0(s32, s32);
s32 func_001D7A20(s32, s32, s32);
void func_001EF900(s32, s32);
s32 func_008B9E60(s32, s32, s32, s32);
s32 func_008B9F20(s32, s32, s32, s32);
s32 func_008B9F90(s32, s32, s32, s32, f32);
s32 func_008BA000(s32, s32, s32, s32, f32);
s32 func_008BB4D0(s32, s32, s32, s32);
void func_008D66E0(s32, s32, s32);

void func_008D69B0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s64 frame[24];
    s32 sp = (s32) (u32) frame;

    v1 = 8;
    s5 = a0;
    a0 = (s32) ((u32) sp + 0xb8U);
    if (a0 == 0) goto L_008D6A04;
L_008D69E8:;
    (*(volatile u8 *) (u32) a0) = (u8) 0;
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    a0 = (s32) ((u32) a0 + 0x1U);
    if (v1 != 0) goto L_008D69E8;
L_008D6A04:;
    v1 = (*(volatile s32 *) (u32) (s5 + 68));
    if (v1 != 0) { ; goto L_008D6BF0; }
    a0 = (*(volatile s32 *) (u32) (s5 + 276));
    if (a0 != 0) { a1 = (s32) ((u32) sp + 0xa0U); goto L_008D6A28; }
    goto L_008D6BEC;
    a1 = (s32) ((u32) sp + 0xa0U);
L_008D6A28:;
    a2 = 191; v0 = func_001D7A20(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s5 + 276));
    a1 = 191; f0.f = func_001D79A0(a0, a1);
    f20.i = f0.i;
    a0 = (s32) ((u32) sp + 0xa0U);
    f12.i = f20.i; v0 = func_008BA000(a0, a1, a2, a3, f12.f);
    s6 = v0;
    a1 = (s32) ((u32) sp + 0xa0U);
    (*(volatile u32 *) (u32) (s5 + 68)) = (u32) s6;
    f12.i = f20.i;
    a0 = s6;
    (*(volatile u32 *) (u32) (sp + 160)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 164)) = (u32) 0; v0 = func_008B9F90(a0, a1, a2, a3, f12.f);
    a0 = v0;
    a1 = 0;
    a2 = 0; v0 = func_008B9F20(a0, a1, a2, a3);
    s2 = (s32) 0x8f0000U;
    s1 = (s32) 0x8f0000U;
    s3 = v0;
    s4 = 1;
    s2 = (s32) ((u32) s2 + 0xffffdad8U);
    s1 = (s32) ((u32) s1 + 0xffffc1a4U);
    s0 = (s32) ((u32) s5 + 0x4U);
L_008D6A98:;
    a0 = s5;
    a1 = (s32) ((u32) sp + 0x90U);
    a2 = s2; func_008D66E0(a0, a1, a2);
    a0 = s3;
    a1 = (s32) ((u32) sp + 0x90U);
    a2 = s1; v0 = func_008B9E60(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 256)) = (u32) v0;
    a0 = v0;
    a1 = 0; func_001EF900(a0, a1);
    s4 = (s32) ((u32) s4 + 0x1U);
    s2 = (s32) ((u32) s2 + 0x8U);
    v0 = s4 < 4;
    s1 = (s32) ((u32) s1 + 0x4U);
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_008D6A98; }
    a0 = s6;
    a1 = (s32) ((u32) sp + 0xa0U);
    f12.i = f20.i; v0 = func_008B9F90(a0, a1, a2, a3, f12.f);
    (*(volatile u32 *) (u32) (s5 + 72)) = (u32) v0;
    a0 = s6;
    f12.i = f20.i;
    a1 = (s32) ((u32) sp + 0xa0U); v0 = func_008B9F90(a0, a1, a2, a3, f12.f);
    s2 = v0;
    a1 = 1;
    a0 = s2;
    a2 = 0; v0 = func_008B9F20(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s5 + 108)) = (u32) v0;
    a0 = s2;
    a1 = 1;
    a2 = 0; v0 = func_008B9F20(a0, a1, a2, a3);
    s1 = v0;
    s0 = 0;
    (*(volatile u32 *) (u32) (s5 + 88)) = (u32) s1;
    s3 = s5;
L_008D6B3C:;
    a0 = s1;
    a1 = (s32) ((u32) sp + 0xb8U);
    a2 = 2; v0 = func_008BB4D0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s3 + 112)) = (u32) v0;
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 11;
    { s32 c_ = v0 != 0; s3 = (s32) ((u32) s3 + 0x4U); if (c_) goto L_008D6B3C; }
    a0 = s6;
    a1 = (s32) ((u32) sp + 0xa0U);
    f12.i = f20.i; v0 = func_008B9F90(a0, a1, a2, a3, f12.f);
    (*(volatile u32 *) (u32) (s5 + 76)) = (u32) v0;
    a0 = s6;
    f12.i = f20.i;
    a1 = (s32) ((u32) sp + 0xa0U); v0 = func_008B9F90(a0, a1, a2, a3, f12.f);
    (*(volatile u32 *) (u32) (s5 + 80)) = (u32) v0;
    a0 = s2;
    a1 = 0;
    a2 = 0; v0 = func_008B9F20(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s5 + 96)) = (u32) v0;
    a0 = s2;
    a1 = 1;
    a2 = 0; v0 = func_008B9F20(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s5 + 92)) = (u32) v0;
    a0 = s2;
    a1 = 1;
    a2 = 0; v0 = func_008B9F20(a0, a1, a2, a3);
    a0 = s2;
    (*(volatile u32 *) (u32) (s5 + 100)) = (u32) v0;
    a1 = 1;
    a2 = 0; v0 = func_008B9F20(a0, a1, a2, a3);
    a0 = s6;
    (*(volatile u32 *) (u32) (s5 + 104)) = (u32) v0;
    f12.i = f20.i;
    a1 = (s32) ((u32) sp + 0xa0U); v0 = func_008B9F90(a0, a1, a2, a3, f12.f);
    (*(volatile u32 *) (u32) (s5 + 84)) = (u32) v0;
L_008D6BEC:;
L_008D6BF0:;
    return;
}
