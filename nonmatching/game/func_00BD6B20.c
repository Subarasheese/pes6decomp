/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00B356D0(s32, s32, s32);
s32 func_00BBB8C0(s32);
s32 func_00BD6E60(s32, s32);

s32 func_00BD6B20(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s32 gp = 0x3ef370;

    s4 = a0;
    s3 = a1;
    s1 = 0;
    s0 = 0; v0 = func_00BD6E60(a0, a1);
    s2 = v0 & 0xffff;
    if (s2 != 0) { v0 = s2; goto L_00BD6CAC; }
    v0 = (*(volatile s32 *) (u32) (s4 + 4));
    a0 = 2;
    a1 = (*(volatile u8 *) (u32) (v0 + 12));
    if (a1 == a0) goto L_00BD6C30;
    v1 = 3;
    if (a1 == v1) goto L_00BD6BEC;
    v0 = 4;
    if (a1 == v0) goto L_00BD6BEC;
    v0 = 5;
    if (a1 == v0) goto L_00BD6BEC;
    v0 = 6;
    if (a1 == v0) goto L_00BD6BA8;
    goto L_00BD6C6C;
L_00BD6BA8:;
    if (s3 == a0) goto L_00BD6BDC;
    v0 = 1;
    if (s3 == v0) goto L_00BD6BCC;
    if (s3 == 0) goto L_00BD6BCC;
    goto L_00BD6C6C;
L_00BD6BCC:;
    s0 = (s32) 0xca0000U;
    s1 = 3;
    s0 = (s32) ((u32) s0 + 0xffffe968U); goto L_00BD6C6C;
L_00BD6BDC:;
    s0 = (s32) 0xca0000U;
    s1 = v1;
    s0 = (s32) ((u32) s0 + 0xffffe970U); goto L_00BD6C6C;
L_00BD6BEC:;
    v0 = 2;
    if (s3 == v0) goto L_00BD6C20;
    v0 = 1;
    if (s3 == v0) goto L_00BD6C14;
    if (s3 == 0) goto L_00BD6C14;
    goto L_00BD6C6C;
L_00BD6C14:;
    s1 = 2;
    s0 = (s32) ((u32) gp + 0xffff8730U); goto L_00BD6C6C;
L_00BD6C20:;
    s0 = (s32) 0xca0000U;
    s1 = 4;
    s0 = (s32) ((u32) s0 + 0xffffe978U); goto L_00BD6C6C;
L_00BD6C30:;
    if (s3 == a0) goto L_00BD6C60;
    v0 = 1;
    if (s3 == v0) goto L_00BD6C54;
    if (s3 == 0) goto L_00BD6C54;
    goto L_00BD6C6C;
L_00BD6C54:;
    s1 = 1;
    s0 = (s32) ((u32) gp + 0xffff8734U); goto L_00BD6C6C;
L_00BD6C60:;
    s0 = (s32) 0xca0000U;
    s1 = 5;
    s0 = (s32) ((u32) s0 + 0xffffe980U);
L_00BD6C6C:;
    if (s0 == 0) goto L_00BD6CA8;
    if (s1 == 0) goto L_00BD6CA8;
L_00BD6C7C:;
    a0 = s1; v0 = func_00BBB8C0(a0);
    v0 = (s32) ((u32) v0 << 1);
    a2 = (s32) ((u32) s1 + 0xffffffffU);
    v0 = (s32) ((u32) s0 + (u32) v0);
    a0 = s4;
    s2 = (*(volatile u16 *) (u32) v0);
    a1 = s2; v0 = func_00B356D0(a0, a1, a2);
    if (v0 != 0) goto L_00BD6C7C;
L_00BD6CA8:;
    v0 = s2;
L_00BD6CAC:;
    return v0;
}
