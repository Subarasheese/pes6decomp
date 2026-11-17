/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void memcpy(s64, s64, s64);

void func_00C91170(s64 a0, s64 a1, s64 a2) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    v0 = (s32) 0xcd0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -10068));
    v0 = (s64) ((u64) v0 << 60);
    v0 = (s64) ((u64) v0 >> 63);
    { s32 c_ = v0 != 0; s0 = a1; if (c_) goto L_00C911D0; }
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7628));
    if (v0 != 0) goto L_00C911BC;
    a1 = (s32) 0xcd0000U;
    s1 = (s32) 0xcd0000U;
    a1 = (s32) ((u32) a1 + 0xffffd8b4U);
    s1 = (s32) ((u32) s1 + 0xffffd8b8U); goto L_00C9123C;
L_00C911BC:;
    a1 = (s32) 0xcd0000U;
    s1 = (s32) 0xcd0000U;
    a1 = (s32) ((u32) a1 + 0xffffd8b8U);
    s1 = (s32) ((u32) s1 + 0xffffd8b4U); goto L_00C9123C;
L_00C911D0:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7628));
    if (v0 != 0) goto L_00C91210;
    v1 = (s32) 0xcd0000U;
    v0 = (s32) 0xcd0000U;
    a1 = (*(volatile s32 *) (u32) (v1 + -10040));
    { s32 c_ = a1 != 0; s1 = (*(volatile s32 *) (u32) (v0 + -10036)); if (c_) goto L_00C911FC; }
    a1 = (s32) 0xcd0000U;
    a1 = (s32) ((u32) a1 + 0xffffd8b4U);
L_00C911FC:;
    if (s1 != 0) { a2 = 4; goto L_00C91240; }
    s1 = (s32) 0xcd0000U;
    s1 = (s32) ((u32) s1 + 0xffffd8b8U); goto L_00C9123C;
L_00C91210:;
    v1 = (s32) 0xcd0000U;
    v0 = (s32) 0xcd0000U;
    a1 = (*(volatile s32 *) (u32) (v1 + -10036));
    { s32 c_ = a1 != 0; s1 = (*(volatile s32 *) (u32) (v0 + -10040)); if (c_) goto L_00C9122C; }
    a1 = (s32) 0xcd0000U;
    a1 = (s32) ((u32) a1 + 0xffffd8b8U);
L_00C9122C:;
    if (s1 != 0) goto L_00C9123C;
    s1 = (s32) 0xcd0000U;
    s1 = (s32) ((u32) s1 + 0xffffd8b4U);
L_00C9123C:;
    a2 = 4;
L_00C91240:;
    memcpy(a0, a1, a2);
    a0 = s0;
    a1 = s1;
    a2 = 4; memcpy(a0, a1, a2);
    return;
}
