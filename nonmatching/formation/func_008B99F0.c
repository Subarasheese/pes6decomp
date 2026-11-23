/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0020A120(s32, s32, s32, s32, s32);
void func_0020A4B0(s32, s32, s32, s32);
void func_008C11A0(s32, s32, s32, s32);

void func_008B99F0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    s3 = a0;
    s2 = a1;
    { s32 c_ = s3 == 0; s1 = a2; if (c_) goto L_008B9A30; }
    if (s1 == 0) { v0 = 0; goto L_008B9A74; }
    s0 = a3 & 0xffff;
    v0 = 0xffff;
    if (s0 != v0) { a0 = s1; goto L_008B9A3C; }
L_008B9A30:;
    v0 = 0;
    goto L_008B9A74;
L_008B9A3C:;
    a1 = 1;
    a2 = s0; func_0020A4B0(a0, a1, a2, a3);
    a0 = s1;
    a2 = s0;
    a1 = 1;
    a3 = (s32) ((u32) sp + 0x6cU);
    a4 = (s32) ((u32) sp + 0x50U); v0 = func_0020A120(a0, a1, a2, a3, a4);
    a3 = (*(volatile s32 *) (u32) (sp + 108));
    a0 = s3;
    a1 = s2;
    a2 = v0; func_008C11A0(a0, a1, a2, a3);
L_008B9A74:;
    return;
}
