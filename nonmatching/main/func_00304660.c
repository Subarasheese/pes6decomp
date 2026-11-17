/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00304660(void) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = (s32) 0x510000U;
    v1 = (*(volatile s32 *) (u32) (v0 + 4048));
    v0 = 12;
    if (v1 == v0) goto L_00304688;
    v0 = 9;
    if (v1 == v0) goto L_00304688;
    v0 = 1; goto L_003046D4;
L_00304688:;
    v0 = (s32) 0x930000U;
    v1 = (s32) 0x930000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -3844));
    v1 = (s32) ((u32) v1 + 0xfffff0ffU);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile u8 *) (u32) v0);
    v0 = (s32) ((u32) v0 + 0xfffffff1U);
    at = (u64) v0 < (u64) (s64) 14;
    if (at == 0) { v0 = 0; goto L_003046E0; }
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffd450U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x3046ccU) goto L_003046CC; if (t_ == 0x3046dcU) goto L_003046DC; }
L_003046CC:;
    v0 = 1; goto L_003046E0;
L_003046D4:;
    goto L_003046E0;
L_003046DC:;
    v0 = 0;
L_003046E0:;
    return v0;
}
