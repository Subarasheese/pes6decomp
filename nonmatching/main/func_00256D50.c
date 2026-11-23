/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00256D50(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0;

    { s32 c_ = a1 >= 0; v1 = a1 & 0x1f; if (c_) goto L_00256D64; }
    if (v1 == 0) { a0 = a0 & 0x1; goto L_00256D68; }
    v1 = (s32) ((u32) v1 + 0xffffffe0U);
L_00256D64:;
    a0 = a0 & 0x1;
L_00256D68:;
    v1 = (s32) ((u32) v1 << 1);
    a1 = (s32) ((u32) a0 << 6);
    a0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + 0xffffce10U);
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u16 *) (u32) v1) = (u16) a2; return v0;
}
