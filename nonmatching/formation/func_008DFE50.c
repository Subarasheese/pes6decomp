/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001D79A0(s64, s64);
s64 func_001D7A20(s64, s64, s64);
void func_001DF250(s64, s64);
void func_001DF820(s64, s64, s64, s64);
s64 func_001E6E10(s64);
void func_001EF900(s64, s64);
s64 func_001F08B0(s64);
s64 func_008B9D60(s64, s64, s64, s64);
s64 func_008B9F20(s64, s64, s64, s64);
s64 func_008B9F90(s64, s64, s64, s64, f32);
s64 func_008C13D0(s64, s64, s64);
s64 func_008C1490(s64, s64, s64, s64, f32);
s64 func_008C5010(void);
s64 func_008C5020(void);
void func_008C59E0(s64, s64);
void func_008C5D40(s64);
void func_008C5DF0(s64, s64, s64, s64, f32, f32);
void func_008DFA50(s64, s64, s64, s64, f32);

void func_008DFE50(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12, f32 fa13) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s64 frame[20];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0x10c0000U;
    v0 = v0 | 0x13;
    s6 = a3;
    s5 = a0;
    s4 = a1;
    s3 = a2;
    (*(volatile u32 *) (u32) a0) = (u32) v0;
    (*(volatile u32 *) (u32) (a0 + 40)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 36)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 44)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 48)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 52)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 56)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 60)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 64)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 68)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 76)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 72)) = (u32) 0;
    a0 = (s32) ((u32) s5 + 0x4U); func_008C5D40(a0);
    a0 = (s32) ((u32) s5 + 0x4U);
    a1 = 1;
    a2 = s3;
    a3 = s4; func_008C5DF0(a0, a1, a2, a3, f12.f, f13.f);
    v0 = (*(volatile s32 *) (u32) (s5 + 44));
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) (s5 + 44)); goto L_008DFEFC; }
    a0 = 9;
    a1 = s4; v0 = func_008C1490(a0, a1, a2, a3, f12.f);
    (*(volatile u32 *) (u32) (s5 + 44)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (s5 + 44));
L_008DFEFC:;
    if (v0 == 0) { f12.f = (*(volatile f32 *) (u32) (s4 + 8)); goto L_008DFF98; }
    s1 = (s32) 0x8f0000U;
    s2 = 0;
    s1 = (s32) ((u32) s1 + 0xffffc3a0U);
    s0 = s5;
L_008DFF14:;
    a0 = (*(volatile s32 *) (u32) (s5 + 44));
    a1 = (*(volatile s32 *) (u32) s1);
    a2 = 0; v0 = func_008C13D0(a0, a1, a2);
    (*(volatile u32 *) (u32) (s0 + 52)) = (u32) v0;
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 5;
    s1 = (s32) ((u32) s1 + 0x4U);
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_008DFF14; }
    v1 = (s64) ((u64) s6 << 56);
    v0 = 3;
    v1 = v1 >> 56;
    if (v1 == v0) { a0 = (*(volatile s32 *) (u32) (s5 + 44)); goto L_008DFF70; }
    v0 = (s32) 0x3c0000U;
    a0 = v0 | 0x2; v0 = func_001F08B0(a0);
    a1 = v0;
    v0 = (*(volatile s32 *) (u32) (s5 + 52));
    a0 = (*(volatile s32 *) (u32) (v0 + 12)); func_001DF820(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s5 + 44));
L_008DFF70:;
    a1 = 46;
    a2 = 0; v0 = func_008C13D0(a0, a1, a2);
    (*(volatile u32 *) (u32) (s5 + 72)) = (u32) v0; v0 = func_008C5010();
    a1 = v0;
    v0 = (*(volatile s32 *) (u32) (s5 + 72));
    a0 = (*(volatile s32 *) (u32) (v0 + 12)); func_001DF250(a0, a1);
    f12.f = (*(volatile f32 *) (u32) (s4 + 8));
L_008DFF98:;
    a0 = s5; func_008DFA50(a0, a1, a2, a3, f12.f);
    v0 = (*(volatile s32 *) (u32) (s5 + 36));
    if (v0 == 0) { v0 = 1; goto L_008E002C; }
    a0 = (*(volatile s32 *) (u32) (s5 + 44));
    a1 = 81; f0.f = func_001D79A0(a0, a1);
    f20.i = f0.i;
    a0 = 20188; v0 = func_001E6E10(a0);
    a0 = (*(volatile s32 *) (u32) (s5 + 36));
    f12.i = f20.i;
    s1 = v0;
    a1 = 0; v0 = func_008B9F90(a0, a1, a2, a3, f12.f);
    a0 = v0;
    a1 = 1;
    a2 = 0; v0 = func_008B9F20(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s5 + 44));
    s0 = v0;
    a1 = (s32) ((u32) sp + 0x90U);
    a2 = 81; v0 = func_001D7A20(a0, a1, a2);
    v0 = func_008C5020();
    a0 = s0;
    a2 = s1;
    a1 = (s32) ((u32) sp + 0x90U);
    a3 = v0; v0 = func_008B9D60(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s5 + 76)) = (u32) v0;
    a0 = v0;
    a1 = 0; func_001EF900(a0, a1);
    v0 = 1;
L_008E002C:;
    if (s3 != v0) { a0 = (s32) 0x3c0000U; goto L_008E0048; }
    v0 = (s32) 0x3c0000U;
    a0 = v0 | 0x1; v0 = func_001F08B0(a0);
    a0 = (s32) ((u32) s5 + 0x4U); goto L_008E0054;
L_008E0048:;
    v0 = func_001F08B0(a0);
    a0 = (s32) ((u32) s5 + 0x4U);
L_008E0054:;
    a1 = v0; func_008C59E0(a0, a1);
    a0 = (s64) ((u64) s6 << 56);
    v1 = 3;
    a0 = a0 >> 56;
    if (a0 == v1) { ; goto L_008E00D4; }
    v1 = 5;
    if (a0 == v1) { v1 = (s32) 0x10c0000U; goto L_008E00BC; }
    v1 = 4;
    if (a0 == v1) goto L_008E00B8;
    v1 = 2;
    if (a0 == v1) { v1 = (s32) 0x10c0000U; goto L_008E00AC; }
    v1 = 1;
    if (a0 == v1) goto L_008E00A8;
    v1 = (s32) 0x10c0000U; goto L_008E00C8;
L_008E00A8:;
    v1 = (s32) 0x10c0000U;
L_008E00AC:;
    v1 = v1 | 0x15;
    (*(volatile u32 *) (u32) s5) = (u32) v1; goto L_008E00D0;
L_008E00B8:;
    v1 = (s32) 0x10c0000U;
L_008E00BC:;
    v1 = v1 | 0x16;
    (*(volatile u32 *) (u32) s5) = (u32) v1; goto L_008E00D0;
L_008E00C8:;
    v1 = v1 | 0x14;
    (*(volatile u32 *) (u32) s5) = (u32) v1;
L_008E00D0:;
L_008E00D4:;
    return;
}
