/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001C6158(s32, s32, s32, s32);
void func_001F22B0(s32, s32, s32, s32);
s32 func_008B9F20(s32, s32, s32, s32);
s32 func_008E3330(s32, s32, s32, s32, s32);

void func_008E34E0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    s32 fcc = 0;
    f32 acc = 0;
    s64 frame[26];
    s32 sp = (s32) (u32) frame;

    s5 = a0;
    s0 = (*(volatile s32 *) (u32) (a0 + 484));
    a0 = (*(volatile s32 *) (u32) (a0 + 1740)); func_001F22B0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s5 + 1740)) = (u32) 0;
    a1 = 0;
    a0 = s5;
L_008E351C:;
    (*(volatile u32 *) (u32) (a0 + 1744)) = (u32) 0;
    a1 = (s32) ((u32) a1 + 0x5U);
    (*(volatile u32 *) (u32) (a0 + 1748)) = (u32) 0;
    v1 = a1 < 6;
    (*(volatile u32 *) (u32) (a0 + 1752)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 1756)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 1760)) = (u32) 0;
    { s32 c_ = v1 != 0; a0 = (s32) ((u32) a0 + 0x14U); if (c_) goto L_008E351C; }
    v1 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) v1 + (u32) s5);
    { s32 c_ = s0 == 0; (*(volatile u32 *) (u32) (v1 + 1744)) = (u32) 0; if (c_) goto L_008E36B4; }
    a0 = (*(volatile u16 *) (u32) s0);
    v1 = 0xffff;
    if (a0 == v1) { ; goto L_008E36B8; }
    a0 = (*(volatile u8 *) (u32) (s5 + 474));
    v1 = (*(volatile u8 *) (u32) (s0 + 35));
    at = a0 < v1;
    if (at == 0) goto L_008E36B4;
    v1 = (s32) ((u32) a0 + (u32) s0);
    v1 = (*(volatile u8 *) (u32) (v1 + 2));
    v1 = (s32) ((u32) v1 + (u32) s0);
    v1 = (*(volatile u8 *) (u32) (v1 + 70));
    if (v1 == 0) goto L_008E36B4;
    a0 = (*(volatile s32 *) (u32) (s5 + 1736));
    a1 = 0;
    a2 = 0; v0 = func_008B9F20(a0, a1, a2, a3);
    s4 = v0;
    a0 = 0;
    v0 = (s32) 0x4f000000U;
    (*(volatile u32 *) (u32) (s5 + 1740)) = (u32) s4;
    a2 = (s32) ((u32) sp + 0x70U);
    a1 = s5;
    v1 = (s32) 0x80000000U;
    f1.i = (s32) v0;
L_008E35BC:;
    (*(volatile u32 *) (u32) (a2 + 4)) = (u32) a0;
    v0 = (*(volatile u8 *) (u32) (s5 + 474));
    f4.f = (*(volatile f32 *) (u32) (a1 + 8));
    f2.f = (*(volatile f32 *) (u32) (a1 + 4));
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) s5 + (u32) v0);
    f3.f = (*(volatile f32 *) (u32) (v0 + 8));
    f0.f = (*(volatile f32 *) (u32) (v0 + 4));
    f3.f = f4.f - f3.f;
    f0.f = f2.f - f0.f;
    acc = f3.f * f3.f;
    f0.f = acc + f0.f * f0.f;
    fcc = f1.f <= f0.f;
    if (fcc) { f0.f = f0.f - f1.f; goto L_008E3608; }
    f0.i = (s32) f0.f;
    v0 = f0.i;
    (*(volatile u32 *) (u32) a2) = (u32) v0; goto L_008E361C;
L_008E3608:;
    f0.i = (s32) f0.f;
    v0 = f0.i;
    v0 = v0 | v1;
    (*(volatile u32 *) (u32) a2) = (u32) v0;
L_008E361C:;
    a0 = (s32) ((u32) a0 + 0x1U);
    v0 = a0 < 11;
    a1 = (s32) ((u32) a1 + 0x8U);
    { s32 c_ = v0 != 0; a2 = (s32) ((u32) a2 + 0x8U); if (c_) goto L_008E35BC; }
    a3 = (s32) 0x8c0000U;
    a0 = (s32) ((u32) sp + 0x70U);
    a1 = 11;
    a2 = 8;
    a3 = (s32) ((u32) a3 + 0x5450U); func_001C6158(a0, a1, a2, a3);
    s1 = 0;
    s3 = (s32) ((u32) sp + 0x70U);
    s2 = s5;
L_008E3654:;
    a0 = (*(volatile s32 *) (u32) (s3 + 4));
    v1 = (s32) ((u32) s0 + (u32) a0);
    a4 = (*(volatile u8 *) (u32) (v1 + 2));
    v1 = (s32) ((u32) s0 + (u32) a4);
    v1 = (*(volatile u8 *) (u32) (v1 + 70));
    if (v1 == 0) goto L_008E36A0;
    a2 = (*(volatile u8 *) (u32) (s5 + 474));
    a3 = a0 & 0xff;
    a0 = s5;
    v0 = (s32) ((u32) s0 + (u32) a2);
    v0 = (*(volatile u8 *) (u32) (v0 + 2));
    v0 = (s32) ((u32) v0 << 5);
    v0 = (s32) ((u32) s0 + (u32) v0);
    v0 = (s32) ((u32) v0 + (u32) a4);
    a4 = (*(volatile u8 *) (u32) (v0 + 204));
    a1 = s4; v0 = func_008E3330(a0, a1, a2, a3, a4);
    (*(volatile u32 *) (u32) (s2 + 1744)) = (u32) v0;
L_008E36A0:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < 11;
    s3 = (s32) ((u32) s3 + 0x8U);
    { s32 c_ = v1 != 0; s2 = (s32) ((u32) s2 + 0x4U); if (c_) goto L_008E3654; }
L_008E36B4:;
L_008E36B8:;
    return;
}
