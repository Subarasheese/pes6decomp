/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00992900(s32, s32, s32, s32);

s32 func_003566D0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;

    v0 = 2;
    { s32 c_ = a2 != v0; s0 = a0; if (c_) goto L_003566F4; }
    v0 = (*(volatile s32 *) (u32) (gp + -21476));
    (*(volatile u32 *) (u32) s0) = (u32) v0; goto L_00356774;
L_003566F4:;
    v0 = func_00992900(a0, a1, a2, a3);
    at = (u64) v0 < (u64) (s64) 7;
    if (at == 0) { v0 = 3; goto L_00356770; }
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x6470U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x356724U) goto L_00356724; if (t_ == 0x356730U) goto L_00356730; if (t_ == 0x35673cU) goto L_0035673C; if (t_ == 0x356748U) goto L_00356748; if (t_ == 0x356754U) goto L_00356754; if (t_ == 0x356760U) goto L_00356760; }
L_00356724:;
    v0 = 6;
    (*(volatile u32 *) (u32) s0) = (u32) v0; goto L_00356774;
L_00356730:;
    v0 = 5;
    (*(volatile u32 *) (u32) s0) = (u32) v0; goto L_00356774;
L_0035673C:;
    v0 = 1;
    (*(volatile u32 *) (u32) s0) = (u32) v0; goto L_00356774;
L_00356748:;
    v0 = 4;
    (*(volatile u32 *) (u32) s0) = (u32) v0; goto L_00356774;
L_00356754:;
    v0 = 2;
    (*(volatile u32 *) (u32) s0) = (u32) v0; goto L_00356774;
L_00356760:;
    v0 = 3;
    (*(volatile u32 *) (u32) s0) = (u32) v0; goto L_00356774;
    v0 = 3;
L_00356770:;
    (*(volatile u32 *) (u32) s0) = (u32) v0;
L_00356774:;
    v0 = 1;
    return v0;
}
