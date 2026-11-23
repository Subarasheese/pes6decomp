/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001D7A20(s64, s64, s64);
s64 func_001E6E10(s64);
void func_001EE5D0(s64, s64);
void func_001EE630(s64, s64);
void func_001EEAC0(s64, s64);
void func_001EF370(s64, s64);
void func_001EF860(s64, s64);
void func_001EF900(s64, s64);
s64 func_002DB830(s64);
void func_008CE6C0(s64, s64, s64, s64, f32);

void func_008D0650(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s64 hi = 0, lo = 0;
    s64 frame[18];
    s64 sp = (s32) (u32) frame;

    s5 = a1;
    v0 = s5 & 0xff;
    v0 = v0 < 5;
    s1 = a2;
    { s32 c_ = v0 != 0; s0 = a0; if (c_) goto L_008D068C; }
    s5 = (s64) ((u64) 0 + (u64) (s64) 4);
L_008D068C:;
    v1 = (*(volatile u8 *) (u32) s0);
    v0 = 1;
    if (v1 != v0) { a0 = s0; goto L_008D06B0; }
    a0 = s0;
    a1 = 2; func_008CE6C0(a0, a1, a2, a3, f12.f);
    a0 = 20188; goto L_008D06BC;
L_008D06B0:;
    a1 = 0; func_008CE6C0(a0, a1, a2, a3, f12.f);
    a0 = 20188;
L_008D06BC:;
    v0 = func_001E6E10(a0);
    a0 = (*(volatile s32 *) (u32) (s0 + 468));
    s3 = (*(volatile s32 *) (u32) (s0 + 448));
    s4 = v0; v0 = func_002DB830(a0);
    v1 = (*(volatile u8 *) (u32) (s0 + 5));
    a0 = s1 & 0xff;
    s2 = (s32) ((u32) a0 - (u32) v0);
    v0 = (s32) ((u32) 0 - (u32) v1);
    v0 = s2 < v0;
    if (v0 != 0) { a0 = s3; goto L_008D07A8; }
    v0 = (*(volatile u8 *) (u32) (s0 + 4));
    v0 = (s32) ((u32) v0 + (u32) v1);
    at = s2 < v0;
    if (at == 0) goto L_008D07A4;
    s1 = s5 & 0xff;
    v0 = (s32) 0x8f0000U;
    v0 = (s32) ((u32) v0 + 0xffffd9e0U);
    v1 = (s32) ((u32) s1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) (s0 + 520));
    a2 = (*(volatile u16 *) (u32) v0);
    a1 = (s32) ((u32) sp + 0x80U); v0 = func_001D7A20(a0, a1, a2);
    a0 = s3;
    a1 = (s32) ((u32) sp + 0x80U); func_001EF370(a0, a1);
    a0 = s3;
    a1 = (s32) ((u32) sp + 0x70U); func_001EE5D0(a0, a1);
    v0 = (*(volatile u8 *) (u32) (s0 + 6));
    a0 = s3;
    a1 = (s32) ((u32) sp + 0x70U);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) s2; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    f0.i = (s32) v0;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (sp + 116)) = f0.f; func_001EF860(a0, a1);
    if (s4 == 0) { ; goto L_008D07B4; }
    a1 = s4;
    a0 = s3; func_001EEAC0(a0, a1);
    v0 = (s32) 0x8f0000U;
    v1 = (s32) ((u32) s1 << 3);
    v0 = (s32) ((u32) v0 + 0xffffc040U);
    a0 = s3;
    a1 = (s32) ((u32) v0 + (u32) v1); func_001EE630(a0, a1);
    a0 = s3;
    a1 = 1; func_001EF900(a0, a1);
    goto L_008D07B0;
L_008D07A4:;
    a0 = s3;
L_008D07A8:;
    a1 = 0; func_001EF900(a0, a1);
L_008D07B0:;
L_008D07B4:;
    return;
}
