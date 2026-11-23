/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001DCCF0(s32);
s32 func_001E4360(s32, s32);
void func_001E43B0(s32, s32);
void func_001E44A0(s32, s32);

s32 func_001E4920(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    s2 = a1;
    if (s2 == 0) goto L_001E49DC;
    a1 = a0;
    a0 = (s32) ((u32) sp + 0x40U); func_001E44A0(a0, a1);
    a0 = s2; func_001DCCF0(a0);
    v0 = (s32) 0x530000U;
    s1 = (*(volatile s32 *) (u32) (v0 + -21000));
    a0 = s2; func_001DCCF0(a0);
    v0 = (s32) 0x530000U;
    v1 = (u64) s1 < (u64) (s64) 65;
    v1 = v1 ^ 0x1;
    { s32 c_ = v1 == 0; s0 = (*(volatile u8 *) (u32) (v0 + -20996)); if (c_) goto L_001E4978; }
    v1 = (u64) s1 < (u64) (s64) 91;
L_001E4978:;
    v0 = (u64) s1 < (u64) (s64) 97;
    v0 = v0 ^ 0x1;
    if (v0 == 0) goto L_001E498C;
    v0 = (u64) s1 < (u64) (s64) 123;
L_001E498C:;
    v0 = v1 | v0;
    if (v0 != 0) { v0 = 1; goto L_001E49C8; }
    a0 = (s32) 0x3d0000U;
    v0 = -1;
    a0 = (s32) ((u32) a0 + 0x2a20U);
L_001E49A4:;
    v1 = (*(volatile s32 *) (u32) a0);
    if (s1 != v1) { a0 = (s32) ((u32) a0 + 0x4U); goto L_001E49B8; }
    v0 = 1; goto L_001E49C8;
L_001E49B8:;
    v1 = (*(volatile s32 *) (u32) a0);
    if (v1 != v0) goto L_001E49A4;
    v0 = 0;
L_001E49C8:;
    if (v0 != 0) { a1 = s1; goto L_001E49E8; }
    f0.i = (s32) 0;
    goto L_001E4A28;
L_001E49DC:;
    f0.i = (s32) 0;
    goto L_001E4A24;
L_001E49E8:;
    a0 = (s32) ((u32) sp + 0x40U); func_001E43B0(a0, a1);
    v1 = (*(volatile u8 *) (u32) (sp + 80));
    v0 = 2;
    if (v1 == v0) { v0 = s0 & 0xff; goto L_001E4A0C; }
    f0.i = (s32) 0;
    goto L_001E4A24;
L_001E4A0C:;
    a0 = (s32) ((u32) s2 + (u32) v0); func_001DCCF0(a0);
    v0 = (s32) 0x530000U;
    a1 = (*(volatile s32 *) (u32) (v0 + -21000));
    a0 = (s32) ((u32) sp + 0x40U); v0 = func_001E4360(a0, a1);
L_001E4A24:;
L_001E4A28:;
    return v0;
}
