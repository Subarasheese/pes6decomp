/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00B356D0(s32, s32, s32);
s32 func_00BBB8C0(s32);

s32 func_00BD6800(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;

    v0 = 2;
    s3 = a0;
    s2 = 0;
    s1 = 0;
    v1 = (*(volatile s32 *) (u32) (a0 + 4));
    v1 = (*(volatile u8 *) (u32) (v1 + 12));
    { s32 c_ = v1 == v0; s0 = 0; if (c_) goto L_00BD6898; }
    v0 = 3;
    if (v1 == v0) goto L_00BD6864;
    v0 = 4;
    if (v1 == v0) goto L_00BD6864;
    v0 = 5;
    if (v1 == v0) goto L_00BD6864;
    goto L_00BD68CC;
L_00BD6864:;
    v0 = 2;
    if (a1 == v0) { s1 = 1; goto L_00BD6890; }
    if (a1 == 0) goto L_00BD6880;
    goto L_00BD68CC;
L_00BD6880:;
    s0 = (s32) 0xca0000U;
    s1 = 5;
    s0 = (s32) ((u32) s0 + 0xffffe9c8U); goto L_00BD68CC;
L_00BD6890:;
    s0 = (s32) ((u32) gp + 0xffff874cU); goto L_00BD68CC;
L_00BD6898:;
    if (a1 == v0) goto L_00BD68C0;
    if (a1 == 0) goto L_00BD68B0;
    goto L_00BD68CC;
L_00BD68B0:;
    s0 = (s32) 0xca0000U;
    s1 = 5;
    s0 = (s32) ((u32) s0 + 0xffffe9d8U); goto L_00BD68CC;
L_00BD68C0:;
    s0 = (s32) 0xca0000U;
    s1 = 3;
    s0 = (s32) ((u32) s0 + 0xffffe9e8U);
L_00BD68CC:;
    if (s0 == 0) goto L_00BD6908;
    if (s1 == 0) goto L_00BD6908;
L_00BD68DC:;
    a0 = s1; v0 = func_00BBB8C0(a0);
    v0 = (s32) ((u32) v0 << 1);
    a2 = (s32) ((u32) s1 + 0xffffffffU);
    v0 = (s32) ((u32) s0 + (u32) v0);
    a0 = s3;
    s2 = (*(volatile u16 *) (u32) v0);
    a1 = s2; v0 = func_00B356D0(a0, a1, a2);
    if (v0 != 0) goto L_00BD68DC;
L_00BD6908:;
    v0 = s2;
    return v0;
}
