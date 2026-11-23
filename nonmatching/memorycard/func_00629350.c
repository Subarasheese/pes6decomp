/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001B8EA0(s64, s64, s64, s64);
s64 func_0063A830(void);

void func_00629350(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0;
    u64 qh_v0 = 0;
    s64 frame[6];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0x660000U;
    { u32 a_ = (u32) (v0 + -15744) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    s0 = a0;
    { u32 a_ = (u32) (sp + 32) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } v0 = func_0063A830();
    if (v0 != 0) { ; goto L_006293A8; }
    v0 = 1;
    if (s0 != v0) { a0 = (s32) ((u32) sp + 0x20U); goto L_0062939C; }
    v0 = (s32) 0x660000U;
    v1 = 2;
    v0 = (*(volatile s32 *) (u32) (v0 + -24652));
    (*(volatile u32 *) (u32) (sp + 32)) = (u32) v1;
    (*(volatile u32 *) (u32) (sp + 36)) = (u32) v0;
    a0 = (s32) ((u32) sp + 0x20U);
L_0062939C:;
    func_001B8EA0(a0, a1, a2, a3);
L_006293A8:;
    return;
}
