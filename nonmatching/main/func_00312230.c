/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002774D0(s32);

s32 func_00312230(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;

    { s32 c_ = a1 != 0; s0 = a0; if (c_) goto L_00312254; }
    v1 = 1;
    v0 = 0;
    (*(volatile u32 *) (u32) s0) = (u32) v1; goto L_00312368;
L_00312254:;
    a0 = a1; v0 = func_002774D0(a0);
    at = (u64) v0 < (u64) (s64) 31;
    if (at == 0) { v0 = 1; goto L_00312360; }
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x1480U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x312284U) goto L_00312284; if (t_ == 0x312290U) goto L_00312290; if (t_ == 0x31229cU) goto L_0031229C; if (t_ == 0x3122a8U) goto L_003122A8; if (t_ == 0x3122b4U) goto L_003122B4; if (t_ == 0x3122c0U) goto L_003122C0; if (t_ == 0x3122ccU) goto L_003122CC; if (t_ == 0x3122d8U) goto L_003122D8; if (t_ == 0x3122e4U) goto L_003122E4; if (t_ == 0x3122f0U) goto L_003122F0; if (t_ == 0x3122fcU) goto L_003122FC; if (t_ == 0x312308U) goto L_00312308; if (t_ == 0x312314U) goto L_00312314; if (t_ == 0x312320U) goto L_00312320; if (t_ == 0x31232cU) goto L_0031232C; if (t_ == 0x312338U) goto L_00312338; if (t_ == 0x312344U) goto L_00312344; if (t_ == 0x312350U) goto L_00312350; }
L_00312284:;
    v0 = 2;
    (*(volatile u32 *) (u32) s0) = (u32) v0; goto L_00312364;
L_00312290:;
    v0 = 3;
    (*(volatile u32 *) (u32) s0) = (u32) v0; goto L_00312364;
L_0031229C:;
    v0 = 4;
    (*(volatile u32 *) (u32) s0) = (u32) v0; goto L_00312364;
L_003122A8:;
    v0 = 5;
    (*(volatile u32 *) (u32) s0) = (u32) v0; goto L_00312364;
L_003122B4:;
    v0 = 6;
    (*(volatile u32 *) (u32) s0) = (u32) v0; goto L_00312364;
L_003122C0:;
    v0 = 7;
    (*(volatile u32 *) (u32) s0) = (u32) v0; goto L_00312364;
L_003122CC:;
    v0 = 8;
    (*(volatile u32 *) (u32) s0) = (u32) v0; goto L_00312364;
L_003122D8:;
    v0 = 9;
    (*(volatile u32 *) (u32) s0) = (u32) v0; goto L_00312364;
L_003122E4:;
    v0 = 10;
    (*(volatile u32 *) (u32) s0) = (u32) v0; goto L_00312364;
L_003122F0:;
    v0 = 11;
    (*(volatile u32 *) (u32) s0) = (u32) v0; goto L_00312364;
L_003122FC:;
    v0 = 12;
    (*(volatile u32 *) (u32) s0) = (u32) v0; goto L_00312364;
L_00312308:;
    v0 = 13;
    (*(volatile u32 *) (u32) s0) = (u32) v0; goto L_00312364;
L_00312314:;
    v0 = 14;
    (*(volatile u32 *) (u32) s0) = (u32) v0; goto L_00312364;
L_00312320:;
    v0 = 15;
    (*(volatile u32 *) (u32) s0) = (u32) v0; goto L_00312364;
L_0031232C:;
    v0 = 16;
    (*(volatile u32 *) (u32) s0) = (u32) v0; goto L_00312364;
L_00312338:;
    v0 = 17;
    (*(volatile u32 *) (u32) s0) = (u32) v0; goto L_00312364;
L_00312344:;
    v0 = 18;
    (*(volatile u32 *) (u32) s0) = (u32) v0; goto L_00312364;
L_00312350:;
    v0 = 19;
    (*(volatile u32 *) (u32) s0) = (u32) v0; goto L_00312364;
    v0 = 1;
L_00312360:;
    (*(volatile u32 *) (u32) s0) = (u32) v0;
L_00312364:;
    v0 = 1;
L_00312368:;
    return v0;
}
