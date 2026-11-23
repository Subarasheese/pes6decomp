/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6SaveData_GetUnavailableFlag(void);
void func_0023B360(s64, s64);
s64 func_008472D0(s64, s64, s64, s64);
s64 func_00858C20(s64, s64, s64, s64);

void func_008C6930(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0;

    v0 = Pes6SaveData_GetUnavailableFlag();
    if (v0 == 0) { ; goto L_008C6A78; }
    v0 = (s32) 0x8b0000U;
    v1 = (s32) 0x8e0000U;
    a0 = (*(volatile s8 *) (u32) (v0 + 5198));
    v1 = (s32) ((u32) v1 + 0x7868U);
    a0 = a0 & 0x1;
    v0 = 1;
    a0 = (s32) ((u32) a0 << 4);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    if (v1 != v0) goto L_008C69CC;
    v0 = func_008472D0(a0, a1, a2, a3);
    s0 = (*(volatile s16 *) (u32) v0);
    a0 = 0; v0 = func_00858C20(a0, a1, a2, a3);
    v0 = (s64) ((u64) v0 << 48);
    v0 = v0 >> 48;
    if (s0 != v0) { a0 = 2; goto L_008C69B8; }
    a0 = 0;
    a1 = 0; func_0023B360(a0, a1);
    a0 = 1;
    a1 = 0; func_0023B360(a0, a1);
    goto L_008C69CC;
L_008C69B8:;
    a1 = 0; func_0023B360(a0, a1);
    a0 = 3;
    a1 = 0; func_0023B360(a0, a1);
L_008C69CC:;
    v0 = func_008472D0(a0, a1, a2, a3);
    s0 = (*(volatile s16 *) (u32) v0);
    a0 = 0; v0 = func_00858C20(a0, a1, a2, a3);
    v0 = (s64) ((u64) v0 << 48);
    v0 = v0 >> 48;
    if (s0 == v0) goto L_008C6A20;
    a0 = 0;
    a1 = 0; func_0023B360(a0, a1);
    a0 = 1;
    a1 = 0; func_0023B360(a0, a1);
    a0 = 4;
    a1 = 0; func_0023B360(a0, a1);
    a0 = 5;
    a1 = 0; func_0023B360(a0, a1);
L_008C6A20:;
    v0 = func_008472D0(a0, a1, a2, a3);
    s0 = (*(volatile s16 *) (u32) v0);
    a0 = 1; v0 = func_00858C20(a0, a1, a2, a3);
    v1 = (s64) ((u64) v0 << 48);
    v1 = v1 >> 48;
    if (s0 == v1) goto L_008C6A74;
    a0 = 2;
    a1 = 0; func_0023B360(a0, a1);
    a0 = 3;
    a1 = 0; func_0023B360(a0, a1);
    a0 = 6;
    a1 = 0; func_0023B360(a0, a1);
    a0 = 7;
    a1 = 0; func_0023B360(a0, a1);
L_008C6A74:;
L_008C6A78:;
    return;
}
