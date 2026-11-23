/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00905590(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0;

    v1 = (*(volatile u8 *) (u32) a0);
    a1 = 0;
    a0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + 0x2800U);
L_009055A0:;
    v0 = (*(volatile u8 *) (u32) (a0 + 16));
    if (v1 != v0) { a1 = (s32) ((u32) a1 + 0x1U); goto L_009055E0; }
    v1 = (s32) ((u32) a1 << 2);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a1);
    v0 = (s32) ((u32) v0 + 0x2803U);
    v1 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    at = (u64) v0 < (u64) (s64) 2;
    if (at == 0) { v0 = 1; goto L_009055D8; }
    v0 = 2;
L_009055D8:;
    goto L_009055F0;
L_009055E0:;
    v0 = a1 < 8;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x28U); if (c_) goto L_009055A0; }
    v0 = 0;
L_009055F0:;
    return v0;
}
