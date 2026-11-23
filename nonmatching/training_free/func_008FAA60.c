/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001D7A20(s64, s64, s64);
void func_001D7D80(s64, s64, s64, s64);

void func_008FAA60(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 gp = 0x3ef370;

    s1 = a0;
    v0 = (*(volatile s32 *) (u32) (gp + -19632));
    s0 = (s32) ((u32) a1 << 2);
    a1 = (s64) ((u64) a2 << 48);
    v0 = (s32) ((u32) s0 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 40));
    a1 = a1 >> 48; func_001D7D80(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (gp + -19632));
    v0 = (s32) 0x930000U;
    v0 = (s32) ((u32) v0 + 0xffffdad2U);
    v0 = (s32) ((u32) v0 + (u32) s0);
    v1 = (s32) ((u32) s0 + (u32) v1);
    a2 = (*(volatile u16 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v1 + 40));
    a1 = s1; v0 = func_001D7A20(a0, a1, a2);
    return;
}
