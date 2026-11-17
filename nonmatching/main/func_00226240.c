/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6SaveData_IsUnavailable(void);
s64 func_00225720(void);

s64 func_00226240(s64 a0, s64 a1) {
    s64 v0 = 0, v1 = 0;

    v0 = Pes6SaveData_IsUnavailable();
    v1 = 1;
    if (v0 != v1) goto L_00226264;
    v0 = 5; goto L_002262D4;
L_00226264:;
    v0 = func_00225720();
    a1 = v0 & 0xffff;
    v1 = (s32) 0x3e0000U;
    v1 = (s32) ((u32) v1 + 0xfffff3aeU);
    a0 = (s32) ((u32) a1 << 4);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = 3;
    v1 = (*(volatile u16 *) (u32) v1);
    v1 = (s32) v1 >> 12;
    a0 = v1 & 0xf;
    if (a0 == v0) { v0 = v0 & 0xff; goto L_002262D4; }
    v1 = 5;
    if (a0 == v1) { v0 = (s64) ((u64) 0 + (u64) (s64) 2); goto L_002262D4; }
    v0 = 1;
    if (a0 == v0) { v0 = v0 & 0xff; goto L_002262D4; }
    v0 = 2;
    if (a0 == v0) { v0 = 53; goto L_002262C4; }
    v0 = v1 & 0xff; goto L_002262D4;
L_002262C4:;
    if (a1 != v0) { v0 = 0; goto L_002262D4; }
    v0 = (s64) ((u64) 0 + (u64) (s64) 4); goto L_002262D4;
L_002262D4:;
    return v0;
}
