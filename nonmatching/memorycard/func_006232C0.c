/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00154F98(s32);
s32 func_0021D5D0(s32);

s32 func_006232C0(s32 a0) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    (*(volatile u32 *) (u32) (sp + 60)) = (u32) a0;
    v0 = func_0021D5D0(a0);
    s1 = v0;
    v0 = (*(volatile s16 *) (u32) (sp + 62));
    if (v0 == 0) { v0 = s1; goto L_00623330; }
    s0 = (*(volatile s16 *) (u32) (sp + 60));
    if (s0 != 0) { v0 = 1; goto L_0062330C; }
    a0 = 2; v0 = func_00154F98(a0);
    v1 = 1;
    if (v0 != v1) { s1 = 0; goto L_0062332C; }
    v0 = 1;
L_0062330C:;
    if (s0 != v0) goto L_0062332C;
    a0 = 3; v0 = func_00154F98(a0);
    v1 = 1;
    if (v0 == v1) goto L_0062332C;
    s1 = 0;
L_0062332C:;
    v0 = s1;
L_00623330:;
    return v0;
}
