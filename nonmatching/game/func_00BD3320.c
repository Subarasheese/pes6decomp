/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00B356D0(s32, s32, s32);
s32 func_00BBB8C0(s32);

s32 func_00BD3320(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;

    v0 = 3;
    s3 = a0;
    s2 = 0;
    s1 = 0;
    v1 = (*(volatile s32 *) (u32) (a0 + 4));
    a0 = (*(volatile u8 *) (u32) (v1 + 12));
    { s32 c_ = a0 == v0; s0 = 0; if (c_) goto L_00BD3388; }
    v1 = 2;
    if (a0 == v1) { s2 = v1; goto L_00BD3380; }
    v0 = 1;
    if (a0 == v0) { s2 = v1; goto L_00BD3378; }
    goto L_00BD3394;
L_00BD3378:;
    s1 = (s32) ((u32) gp + 0xffff86e8U); goto L_00BD3394;
L_00BD3380:;
    s1 = (s32) ((u32) gp + 0xffff86ecU); goto L_00BD3394;
L_00BD3388:;
    s1 = (s32) 0xca0000U;
    s2 = 6;
    s1 = (s32) ((u32) s1 + 0xffffe928U);
L_00BD3394:;
    if (s1 == 0) goto L_00BD33D0;
    if (s2 == 0) goto L_00BD33D0;
L_00BD33A4:;
    a0 = s2; v0 = func_00BBB8C0(a0);
    v0 = (s32) ((u32) v0 << 1);
    a2 = (s32) ((u32) s2 + 0xffffffffU);
    v0 = (s32) ((u32) s1 + (u32) v0);
    a0 = s3;
    s0 = (*(volatile u16 *) (u32) v0);
    a1 = s0; v0 = func_00B356D0(a0, a1, a2);
    if (v0 != 0) goto L_00BD33A4;
L_00BD33D0:;
    v0 = s0;
    return v0;
}
