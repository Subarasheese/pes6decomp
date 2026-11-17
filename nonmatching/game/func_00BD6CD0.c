/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00B356D0(s32, s32, s32);
s32 func_00BBB8C0(s32);
s32 func_00BD44E0(s32, s32);

s32 func_00BD6CD0(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s32 gp = 0x3ef370;

    s4 = a0;
    s3 = a1;
    a1 = 2;
    s2 = 0; v0 = func_00BD44E0(a0, a1);
    a1 = 1;
    if (v0 != a1) goto L_00BD6E38;
    v0 = (*(volatile s32 *) (u32) (s4 + 4));
    v1 = 2;
    s1 = 0;
    a0 = (*(volatile u8 *) (u32) (v0 + 12));
    { s32 c_ = a0 == v1; s0 = 0; if (c_) goto L_00BD6DCC; }
    v0 = 3;
    if (a0 == v0) goto L_00BD6D98;
    v0 = 4;
    if (a0 == v0) goto L_00BD6D5C;
    v0 = 5;
    if (a0 == v0) goto L_00BD6D5C;
    v0 = 6;
    if (a0 == v0) goto L_00BD6D5C;
    goto L_00BD6DFC;
L_00BD6D5C:;
    v0 = 2;
    if (s3 == v0) { s1 = 1; goto L_00BD6D90; }
    v0 = 1;
    if (s3 == v0) goto L_00BD6D84;
    if (s3 == 0) goto L_00BD6D84;
    goto L_00BD6DFC;
L_00BD6D84:;
    s1 = 1;
    s0 = (s32) ((u32) gp + 0xffff8718U); goto L_00BD6DFC;
L_00BD6D90:;
    s0 = (s32) ((u32) gp + 0xffff871cU); goto L_00BD6DFC;
L_00BD6D98:;
    if (s3 == v1) { s1 = v1; goto L_00BD6DC4; }
    if (s3 == a1) goto L_00BD6DB8;
    if (s3 == 0) goto L_00BD6DB8;
    goto L_00BD6DFC;
L_00BD6DB8:;
    s1 = 2;
    s0 = (s32) ((u32) gp + 0xffff8720U); goto L_00BD6DFC;
L_00BD6DC4:;
    s0 = (s32) ((u32) gp + 0xffff8724U); goto L_00BD6DFC;
L_00BD6DCC:;
    if (s3 == v1) { s1 = a1; goto L_00BD6DF8; }
    if (s3 == a1) goto L_00BD6DEC;
    if (s3 == 0) goto L_00BD6DEC;
    goto L_00BD6DFC;
L_00BD6DEC:;
    s1 = 2;
    s0 = (s32) ((u32) gp + 0xffff8728U); goto L_00BD6DFC;
L_00BD6DF8:;
    s0 = (s32) ((u32) gp + 0xffff872cU);
L_00BD6DFC:;
    if (s0 == 0) goto L_00BD6E38;
    if (s1 == 0) goto L_00BD6E38;
L_00BD6E0C:;
    a0 = s1; v0 = func_00BBB8C0(a0);
    v0 = (s32) ((u32) v0 << 1);
    a2 = (s32) ((u32) s1 + 0xffffffffU);
    v0 = (s32) ((u32) s0 + (u32) v0);
    a0 = s4;
    s2 = (*(volatile u16 *) (u32) v0);
    a1 = s2; v0 = func_00B356D0(a0, a1, a2);
    if (v0 != 0) goto L_00BD6E0C;
L_00BD6E38:;
    v0 = s2;
    return v0;
}
