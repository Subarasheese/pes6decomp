/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002F7970(s32, s32, s32, s32);

s32 func_00901580(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0;

    s0 = a0; v0 = func_002F7970(a0, a1, a2, a3);
    if (v0 == 0) goto L_009015AC;
    v0 = (s32) 0x8b0000U;
    v0 = (*(volatile s8 *) (u32) (v0 + 5198));
    v0 = v0 & 0x1; goto L_00901620;
L_009015AC:;
    v1 = (s32) 0x590000U;
    a0 = 0;
    v1 = (s32) ((u32) v1 + 0x2800U);
L_009015B8:;
    v0 = (*(volatile u8 *) (u32) v1);
    if (s0 != v0) { a0 = (s32) ((u32) a0 + 0x1U); goto L_009015E4; }
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0x2801U);
    v1 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0); goto L_00901620;
L_009015E4:;
    v0 = a0 < 8;
    { s32 c_ = v0 != 0; v1 = (s32) ((u32) v1 + 0x28U); if (c_) goto L_009015B8; }
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 10587));
    if (s0 != v0) goto L_00901608;
    v0 = 0; goto L_00901620;
L_00901608:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 10588));
    if (s0 != v0) { v0 = -1; goto L_00901620; }
    v0 = 1; goto L_00901620;
L_00901620:;
    return v0;
}
