/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0023B360(s64, s64, s64, s64);
void func_0023EC10(s64, s64);
s64 func_008B2F50(s64, s64, s64, s64);

void func_009356F0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 gp = 0x3ef370;

    v1 = (s64) ((u64) a0 << 56);
    v1 = v1 >> 56;
    v0 = 1;
    s0 = (s32) 0x540000U;
    { s32 c_ = v1 != v0; s0 = (s32) ((u32) s0 + 0xffffc300U); if (c_) goto L_00935798; }
    s2 = 0;
    s1 = 0;
L_00935724:;
    v0 = (*(volatile s32 *) (u32) (gp + -18652));
    a0 = (*(volatile s32 *) (u32) (v0 + 8));
    a1 = s2; v0 = func_008B2F50(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (s0 + 20));
    s2 = (s32) ((u32) s2 + 0x1U);
    at = s2 < 5;
    v1 = (s32) ((u32) v1 + (u32) s1);
    (*(volatile u32 *) (u32) v1) = (u32) v0;
    { s32 c_ = at != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00935724; }
    s1 = 5;
    s2 = 20;
L_00935758:;
    v0 = (*(volatile s32 *) (u32) (gp + -18652));
    a0 = (*(volatile s32 *) (u32) (v0 + 8));
    a1 = s1; v0 = func_008B2F50(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (s0 + 20));
    s1 = (s32) ((u32) s1 + 0x1U);
    at = s1 < 9;
    v1 = (s32) ((u32) v1 + (u32) s2);
    (*(volatile u32 *) (u32) v1) = (u32) v0;
    { s32 c_ = at != 0; s2 = (s32) ((u32) s2 + 0x4U); if (c_) goto L_00935758; }
    a0 = (s32) ((u32) s0 + 0x10U);
    a1 = 8; func_0023EC10(a0, a1);
    goto L_009357B4;
L_00935798:;
    a0 = 0;
    a1 = 0; func_0023B360(a0, a1, a2, a3);
    a0 = 1;
    a1 = 0; func_0023B360(a0, a1, a2, a3);
L_009357B4:;
    return;
}
