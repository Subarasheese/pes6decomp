/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_001ED530(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0;
    u64 qh_v1 = 0;

    if (a0 == 0) goto L_001ED578;
    if (a2 == 0) goto L_001ED578;
    v1 = (*(volatile s32 *) (u32) (a0 + 8));
    at = a1 < v1;
    if (at != 0) goto L_001ED558;
    goto L_001ED578;
L_001ED558:;
    a3 = (s32) ((u32) a1 << 4);
    { u32 a_ = (u32) (a2 + 0) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    a1 = (*(volatile s32 *) (u32) (a0 + 32));
    a1 = (s32) ((u32) a1 + (u32) a3);
    { u32 a_ = (u32) (a1 + 0) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    v1 = (*(volatile u8 *) (u32) (a0 + 53));
    v1 = v1 | 0x1;
    (*(volatile u8 *) (u32) (a0 + 53)) = (u8) v1;
L_001ED578:;
    return;
}
