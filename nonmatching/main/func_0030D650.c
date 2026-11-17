/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s64 func_0030D650(s64 a0, s64 a1, s64 a2) {
    s64 v0 = 0, v1 = 0;
    s64 hi = 0, lo = 0;

    v1 = a0 & 0xff;
    v0 = 255;
    if (v1 == v0) { a2 = 1; goto L_0030D66C; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a2 = hi;
L_0030D66C:;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_0030D684; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_0030D684:;
    v0 = (s32) ((u32) a0 << 3);
    v1 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffe5c2U);
    a1 = (s32) ((u32) v0 << 6);
    a0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a1);
    v0 = (s32) ((u32) a2 << 3);
    a1 = (*(volatile u8 *) (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) a2);
    a0 = (s32) ((u32) a0 + 0x2980U);
    v1 = (s32) ((u32) v0 << 6);
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0xffffe5c1U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile u8 *) (u32) v0);
    v0 = (s32) ((u32) a1 << 4);
    a1 = (s32) ((u32) v0 - (u32) a1);
    v0 = (s32) ((u32) a1 << 3);
    a1 = (s32) ((u32) v0 - (u32) a1);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a1 << 8);
    a0 = (s32) ((u32) a0 + (u32) v0);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (*(volatile u8 *) (u32) (v0 + 137));
    v0 = (s64) ((u64) v0 << 59);
    v0 = (s64) ((u64) v0 >> 62); return v0;
}
