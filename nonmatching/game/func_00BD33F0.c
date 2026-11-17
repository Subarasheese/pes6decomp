/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00BBB8C0(s32);

s32 func_00BD33F0(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;

    v1 = 4;
    v0 = 0;
    s2 = a0;
    s1 = 0;
    a0 = (*(volatile s32 *) (u32) (a0 + 4));
    a1 = (*(volatile u8 *) (u32) (a0 + 12));
    { s32 c_ = a1 == v1; s0 = 0; if (c_) goto L_00BD3478; }
    v1 = 3;
    if (a1 == v1) goto L_00BD3468;
    a0 = 2;
    if (a1 == a0) goto L_00BD3458;
    v1 = 1;
    if (a1 == v1) { s1 = a0; goto L_00BD3450; }
    goto L_00BD3480;
L_00BD3450:;
    s0 = (s32) ((u32) gp + 0xffff86e0U); goto L_00BD3480;
L_00BD3458:;
    s0 = (s32) 0xca0000U;
    s1 = v1;
    s0 = (s32) ((u32) s0 + 0xffffe900U); goto L_00BD3480;
L_00BD3468:;
    s0 = (s32) 0xca0000U;
    s1 = 11;
    s0 = (s32) ((u32) s0 + 0xffffe910U); goto L_00BD3480;
L_00BD3478:;
    s0 = (s32) ((u32) gp + 0xffff86e4U);
    s1 = 2;
L_00BD3480:;
    if (s0 == 0) goto L_00BD34C0;
    if (s1 == 0) goto L_00BD34C0;
L_00BD3490:;
    a0 = s1; v0 = func_00BBB8C0(a0);
    v0 = (s32) ((u32) v0 << 1);
    at = s1 < 2;
    v0 = (s32) ((u32) s0 + (u32) v0);
    { s32 c_ = at != 0; v0 = (*(volatile u16 *) (u32) v0); if (c_) goto L_00BD34C0; }
    v1 = (*(volatile s32 *) (u32) (s2 + 4));
    a0 = v0 & 0xffff;
    v1 = (*(volatile u16 *) (u32) (v1 + 8));
    if (a0 == v1) goto L_00BD3490;
L_00BD34C0:;
    return v0;
}
