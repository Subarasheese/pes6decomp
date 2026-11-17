/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00C102D0(s32, s32, s32, s32);
s32 func_00C10BE0(s32, s32, s32, s32);
s32 func_00C12730(s32, s32, s32, s32);
s32 func_00C139C0(s32, s32, s32, s32);
s32 func_00C13EA0(s32, s32, s32, s32);
s32 func_00C150A0(s32, s32, s32, s32);
s32 func_00C16860(s32, s32, s32, s32);
s32 func_00C17310(s32, s32, s32, s32);
s32 func_00C18200(s32, s32, s32, s32);
s32 func_00C185E0(s32, s32, s32, s32);
s32 func_00C18A50(s32, s32, s32, s32);
s32 func_00C18F40(s32, s32, s32, s32);
s32 func_00C224C0(s32, s32, s32, s32);
s32 func_00C32C70(s32, s32, s32, s32);
s32 func_00C549B0(s32, s32, s32, s32);
s32 func_00C5A0B0(s32, s32, s32, s32);
s32 func_00C5A780(s32, s32, s32, s32);

s32 func_002BD960(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;

    v1 = (*(volatile s32 *) (u32) (gp + -22052));
    { s32 c_ = v1 == 0; s0 = (s32) ((u32) gp + 0xffffa9d8U); if (c_) goto L_002BDA08; }
    v0 = func_00C224C0(a0, a1, a2, a3);
    v0 = func_00C10BE0(a0, a1, a2, a3);
    v0 = func_00C12730(a0, a1, a2, a3);
    v0 = func_00C139C0(a0, a1, a2, a3);
    v0 = func_00C549B0(a0, a1, a2, a3);
    v0 = func_00C150A0(a0, a1, a2, a3);
    v0 = func_00C13EA0(a0, a1, a2, a3);
    v0 = func_00C185E0(a0, a1, a2, a3);
    v0 = func_00C16860(a0, a1, a2, a3);
    v0 = func_00C17310(a0, a1, a2, a3);
    v0 = func_00C18200(a0, a1, a2, a3);
    v0 = func_00C18A50(a0, a1, a2, a3);
    v0 = func_00C102D0(a0, a1, a2, a3);
    v0 = func_00C18F40(a0, a1, a2, a3);
    v0 = func_00C32C70(a0, a1, a2, a3);
    v0 = func_00C5A780(a0, a1, a2, a3);
    v0 = func_00C5A0B0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) s0) = (u32) 0;
    (*(volatile u32 *) (u32) (gp + -22052)) = (u32) 0;
L_002BDA08:;
    return v0;
}
