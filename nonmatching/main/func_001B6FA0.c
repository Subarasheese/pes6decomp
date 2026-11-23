/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001DF030(s32, s32);
void func_001DF820(s32, s32, s32, s32);
f32 func_001E4E00(s32, s32, s32, s32);
s32 func_001F00C0(s32, s32);
s32 func_001F0160(s32);

void func_001B6FA0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    s3 = a0;
    { s32 c_ = s3 == 0; s0 = a1; if (c_) goto L_001B7080; }
    if (s0 != 0) { a0 = s0; goto L_001B6FD8; }
    goto L_001B7084;
    a0 = s0;
L_001B6FD8:;
    v0 = func_001F0160(a0);
    s2 = v0;
    if (s2 == 0) goto L_001B7080;
    a0 = s2;
    a1 = s0; v0 = func_001F00C0(a0, a1);
    s1 = v0;
    if (s1 == 0) goto L_001B7080;
    a0 = s3;
    a1 = (s32) ((u32) sp + 0x50U); func_001DF030(a0, a1);
    a1 = (*(volatile s32 *) (u32) (s1 + 8));
    a0 = s3; func_001DF820(a0, a1, a2, a3);
    v1 = (s32) 0xffff0000U;
    s0 = s0 & v1; goto L_001B7050;
    v0 = (*(volatile u16 *) (u32) (s1 + 2));
L_001B702C:;
    a0 = s2;
    a1 = s0 | v0; v0 = func_001F00C0(a0, a1);
    s1 = v0;
    if (s1 == 0) goto L_001B7080;
    a1 = (*(volatile s32 *) (u32) (s1 + 8));
    a0 = s3; func_001DF820(a0, a1, a2, a3);
L_001B7050:;
    v1 = (*(volatile u16 *) (u32) (s1 + 2));
    v1 = (u64) 0 < (u64) v1;
    v1 = v1 ^ 0x1;
    if (v1 != 0) goto L_001B7080;
    a0 = s3; f0.f = func_001E4E00(a0, a1, a2, a3);
    f1.f = (*(volatile f32 *) (u32) (sp + 92));
    fcc = f0.f <= f1.f;
    if (!fcc) { v0 = (*(volatile u16 *) (u32) (s1 + 2)); goto L_001B702C; }
L_001B7080:;
L_001B7084:;
    return;
}
