/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001FC7A0(s32);
s32 func_001FC7D0(s32);
s32 func_00230490(s32, s32, s32, s32);
s32 func_002631B0(void);
s32 func_002631D0(void);
s32 func_002F7970(s32, s32, s32, s32);
s32 func_009E1C90(s32, s32, s32, s32);

s32 func_0026B250(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;

    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v0 + 7177));
    { s32 c_ = v1 == 0; s0 = 0; if (c_) goto L_0026B3E4; }
    v0 = 7;
    if (v1 == v0) { s0 = 3; goto L_0026B448; }
    v0 = 2;
    if (v1 == v0) { s0 = v0; goto L_0026B394; }
    v0 = 14;
    if (v1 == v0) { s0 = 1; goto L_0026B32C; }
    v0 = 4;
    if (v1 == v0) goto L_0026B328;
    v0 = 1;
    if (v1 == v0) goto L_0026B328;
    v0 = 5;
    if (v1 == v0) goto L_0026B2BC;
    a0 = 6; goto L_0026B3E8;
L_0026B2BC:;
    v0 = func_002631D0();
    at = (u64) v0 < (u64) (s64) 9;
    if (at == 0) { v0 = s0; goto L_0026B44C; }
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff9a90U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x26b2ecU) goto L_0026B2EC; if (t_ == 0x26b308U) goto L_0026B308; if (t_ == 0x26b310U) goto L_0026B310; if (t_ == 0x26b318U) goto L_0026B318; if (t_ == 0x26b320U) goto L_0026B320; if (t_ == 0x26b448U) goto L_0026B448; }
L_0026B2EC:;
    v0 = func_002631B0();
    v1 = 1;
    if (v0 == v1) { s0 = 8; goto L_0026B448; }
    s0 = 5; goto L_0026B448;
L_0026B308:;
    s0 = 6; goto L_0026B448;
L_0026B310:;
    s0 = 10; goto L_0026B448;
L_0026B318:;
    s0 = 7; goto L_0026B448;
L_0026B320:;
    s0 = 9; goto L_0026B448;
L_0026B328:;
    s0 = 1;
L_0026B32C:;
    v0 = func_00230490(a0, a1, a2, a3);
    if (v0 != 0) { a0 = 6; goto L_0026B344; }
    s0 = 2;
    a0 = 6;
L_0026B344:;
    v0 = func_001FC7D0(a0);
    v1 = 17;
    if (v0 != v1) { v1 = -1; goto L_0026B380; }
    a0 = 6; v0 = func_001FC7A0(a0);
    if (v0 != 0) { a0 = 1; goto L_0026B374; }
    v1 = -1;
    goto L_0026B380;
L_0026B374:;
    v0 = func_009E1C90(a0, a1, a2, a3);
    v1 = v0 & 0xff;
L_0026B380:;
    v0 = 5;
    if (v1 != v0) goto L_0026B448;
    s0 = 4; goto L_0026B448;
L_0026B394:;
    a0 = 6; v0 = func_001FC7D0(a0);
    v1 = 17;
    if (v0 != v1) { v1 = -1; goto L_0026B3D0; }
    a0 = 6; v0 = func_001FC7A0(a0);
    if (v0 != 0) { a0 = 1; goto L_0026B3C4; }
    v1 = -1;
    goto L_0026B3D0;
L_0026B3C4:;
    v0 = func_009E1C90(a0, a1, a2, a3);
    v1 = v0 & 0xff;
L_0026B3D0:;
    v0 = 5;
    if (v1 != v0) goto L_0026B448;
    s0 = 4; goto L_0026B448;
L_0026B3E4:;
    a0 = 6;
L_0026B3E8:;
    s0 = 0; v0 = func_001FC7D0(a0);
    v1 = 17;
    if (v0 != v1) { v1 = -1; goto L_0026B424; }
    a0 = 6; v0 = func_001FC7A0(a0);
    if (v0 != 0) { a0 = 1; goto L_0026B418; }
    v1 = -1;
    goto L_0026B424;
L_0026B418:;
    v0 = func_009E1C90(a0, a1, a2, a3);
    v1 = v0 & 0xff;
L_0026B424:;
    v0 = 5;
    if (v1 != v0) goto L_0026B434;
    s0 = 3;
L_0026B434:;
    v0 = func_002F7970(a0, a1, a2, a3);
    if (v0 == 0) goto L_0026B448;
    s0 = 11;
L_0026B448:;
    v0 = s0;
L_0026B44C:;
    return v0;
}
