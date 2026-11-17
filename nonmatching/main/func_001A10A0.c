/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00153FE0(s32, s32);
s32 memset(s32, s32, s32);

s32 func_001A10A0(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    v0 = 1;
    v1 = 0;
    s1 = a0;
    if (s1 == v0) goto L_001A10CC;
    v1 = (s32) ((u32) v1 + 0x34a4U); goto L_001A10D0;
L_001A10CC:;
    v1 = (s32) ((u32) v1 + 0x41cU);
L_001A10D0:;
    v0 = (s32) 0x520000U;
    s2 = (s32) ((u32) v1 + 0x2a0U);
    a0 = (*(volatile s16 *) (u32) (v0 + -78));
    a1 = s2; v0 = func_00153FE0(a0, a1);
    s0 = v0;
    if (s0 == 0) { v0 = 0; goto L_001A116C; }
    a2 = s2;
    a0 = s0;
    a1 = 0; v0 = memset(a0, a1, a2);
    v1 = (s32) ((u32) s0 + 0x30U);
    v0 = 1;
    a1 = (s32) ((u32) s0 + 0x4U);
    a0 = (s32) ((u32) s0 + 0x18U);
    { s32 c_ = s1 == v0; (*(volatile u32 *) (u32) (s0 + 12)) = (u32) v1; if (c_) goto L_001A1140; }
    v0 = (*(volatile s32 *) (u32) (a1 + 8));
    v0 = (s32) ((u32) v0 + 0x2c10U);
    (*(volatile u32 *) (u32) (a1 + 12)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (a1 + 12));
    v0 = (s32) ((u32) v0 + 0x7c0U);
    (*(volatile u32 *) (u32) (a1 + 16)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (a1 + 16));
    v0 = (s32) ((u32) v0 + 0xa4U);
    (*(volatile u32 *) (u32) (a0 + 8)) = (u32) v0; goto L_001A1164;
L_001A1140:;
    v0 = (*(volatile s32 *) (u32) (a1 + 8));
    v0 = (s32) ((u32) v0 + 0x330U);
    (*(volatile u32 *) (u32) (a1 + 12)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (a1 + 12));
    v0 = (s32) ((u32) v0 + 0x98U);
    (*(volatile u32 *) (u32) (a1 + 16)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (a1 + 16));
    v0 = (s32) ((u32) v0 + 0x24U);
    (*(volatile u32 *) (u32) (a0 + 8)) = (u32) v0;
L_001A1164:;
    (*(volatile u32 *) (u32) (a0 + 12)) = (u32) 0;
    v0 = s0;
L_001A116C:;
    return v0;
}
