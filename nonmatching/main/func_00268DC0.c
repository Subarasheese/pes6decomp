/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001CDA50(s32);

s32 func_00268DC0(s32 a0) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    v0 = (s32) 0x3b0000U;
    v0 = (s32) ((u32) v0 + 0xffffb1c0U);
    s1 = a0;
    v1 = (s32) ((u32) s1 << 3);
    s0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    if (v0 != 0) { v0 = s0; goto L_00268E8C; }
    a0 = 1; v0 = func_001CDA50(a0);
    v1 = 19;
    if (s1 == v1) { v1 = (s32) ((u32) v0 << 3); goto L_00268E7C; }
    v1 = 18;
    if (s1 == v1) { v1 = (s32) ((u32) v0 << 3); goto L_00268E6C; }
    v1 = 17;
    if (s1 == v1) { v1 = (s32) ((u32) v0 << 3); goto L_00268E5C; }
    v1 = 11;
    if (s1 == v1) { v1 = (s32) ((u32) v0 << 3); goto L_00268E4C; }
    v1 = 10;
    if (s1 == v1) { v1 = (s32) ((u32) v0 << 3); goto L_00268E3C; }
    goto L_00268E88;
L_00268E3C:;
    v0 = (s32) 0x3b0000U;
    v0 = (s32) ((u32) v0 + 0xffffb280U);
    s0 = (s32) ((u32) v0 + (u32) v1); goto L_00268E88;
L_00268E4C:;
    v0 = (s32) 0x3b0000U;
    v0 = (s32) ((u32) v0 + 0xffffb2d0U);
    s0 = (s32) ((u32) v0 + (u32) v1); goto L_00268E88;
L_00268E5C:;
    v0 = (s32) 0x3b0000U;
    v0 = (s32) ((u32) v0 + 0xffffb320U);
    s0 = (s32) ((u32) v0 + (u32) v1); goto L_00268E88;
L_00268E6C:;
    v0 = (s32) 0x3b0000U;
    v0 = (s32) ((u32) v0 + 0xffffb370U);
    s0 = (s32) ((u32) v0 + (u32) v1); goto L_00268E88;
L_00268E7C:;
    v0 = (s32) 0x3b0000U;
    v0 = (s32) ((u32) v0 + 0xffffb3c0U);
    s0 = (s32) ((u32) v0 + (u32) v1);
L_00268E88:;
    v0 = s0;
L_00268E8C:;
    return v0;
}
