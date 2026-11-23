/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001D79A0(s64, s64);
s64 func_001D7A20(s64, s64, s64);
void func_002DB5E0(s64);
void func_008B9BC0(s64, s64, s64, s64);
s64 func_008C5740(s64);

void func_008D1F40(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { 0 };
    s64 frame[14];
    s64 sp = (s32) (u32) frame;

    s1 = a1;
    (*(volatile u8 *) (u32) (a0 + 3)) = (u8) s1;
    s2 = (*(volatile u8 *) (u32) (a0 + 4));
    s3 = (*(volatile u8 *) (u32) (a0 + 3));
    at = s3 < s2;
    { s32 c_ = at == 0; s0 = a0; if (c_) goto L_008D1FE8; }
    a0 = (s32) ((u32) s0 + 0x214U); v0 = func_008C5740(a0);
    s2 = v0;
    if (s2 == 0) { ; goto L_008D205C; }
    a0 = s2;
    a1 = (s32) ((u32) sp + 0x60U);
    a2 = 100; v0 = func_001D7A20(a0, a1, a2);
    s1 = (s64) ((u64) s1 << 56);
    a0 = (*(volatile s32 *) (u32) (s0 + 468));
    s1 = s1 >> 56;
    a2 = s3;
    a1 = s1;
    a3 = (s32) ((u32) sp + 0x60U); func_008B9BC0(a0, a1, a2, a3);
    a0 = s2;
    a1 = 100; f0.f = func_001D79A0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 468));
    f12.i = f0.i; func_002DB5E0(a0);
    at = s1 < 12;
    if (at == 0) { v1 = 1; goto L_008D1FE0; }
    (*(volatile u8 *) (u32) (s0 + 5)) = (u8) 0; goto L_008D2058;
L_008D1FE0:;
    (*(volatile u8 *) (u32) (s0 + 5)) = (u8) v1; goto L_008D2058;
L_008D1FE8:;
    a0 = (s32) ((u32) s0 + 0x214U); v0 = func_008C5740(a0);
    s3 = v0;
    if (s3 == 0) goto L_008D2058;
    a0 = s3;
    a1 = (s32) ((u32) sp + 0x50U);
    a2 = 100; v0 = func_001D7A20(a0, a1, a2);
    s1 = (s64) ((u64) s1 << 56);
    a0 = (*(volatile s32 *) (u32) (s0 + 468));
    s1 = s1 >> 56;
    a2 = s2;
    a1 = s1;
    a3 = (s32) ((u32) sp + 0x50U); func_008B9BC0(a0, a1, a2, a3);
    a0 = s3;
    a1 = 100; f0.f = func_001D79A0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 468));
    f12.i = f0.i; func_002DB5E0(a0);
    at = s1 < 12;
    if (at == 0) { v1 = 1; goto L_008D2054; }
    (*(volatile u8 *) (u32) (s0 + 5)) = (u8) 0; goto L_008D2058;
L_008D2054:;
    (*(volatile u8 *) (u32) (s0 + 5)) = (u8) v1;
L_008D2058:;
L_008D205C:;
    return;
}
