/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EF900(s32, s32);
s32 func_00209C00(s32, s32);
void func_0020A2A0(s32, s32, s32, s32);
s32 func_002E3CD0(s32, s32, s32, s32);

void func_002E38B0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    s0 = a0;
    if (s0 == 0) { ; goto L_002E396C; }
    v0 = 1;
    (*(volatile u8 *) (u32) (s0 + 16)) = (u8) v0;
    v0 = (*(volatile s32 *) (u32) s0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s2 = (*(volatile s32 *) (u32) (v0 + 8)); v0 = func_00209C00(a0, a1);
    a2 = (*(volatile s32 *) (u32) (s0 + 12));
    s1 = v0;
    if (s1 != a2) { v0 = (*(volatile s32 *) (u32) s0); goto L_002E3934; }
    v1 = (*(volatile u8 *) (u32) (s0 + 16));
    v0 = (*(volatile u8 *) (u32) (s0 + 17));
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    v0 = v1 & v0;
    s1 = v0 & 0xff;
    a1 = s1; func_001EF900(a0, a1);
    v1 = (*(volatile u8 *) (u32) (s0 + 18));
    v0 = s1 & 0xff;
    a0 = (*(volatile s32 *) (u32) (s0 + 8));
    v0 = v0 & v1;
    a1 = v0 & 0xff; func_001EF900(a0, a1);
    goto L_002E3968;
L_002E3934:;
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a1 = (*(volatile s32 *) (u32) (v0 + 8)); func_0020A2A0(a0, a1, a2, a3);
    a2 = s1;
    a0 = s0;
    a1 = s2; v0 = func_002E3CD0(a0, a1, a2, a3);
    if (v0 != 0) goto L_002E3968;
    a0 = s0;
    a1 = s2;
    a2 = 106; v0 = func_002E3CD0(a0, a1, a2, a3);
L_002E3968:;
L_002E396C:;
    return;
}
