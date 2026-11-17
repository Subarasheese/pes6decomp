/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00141010(s32, s32);
s32 func_00141300(s32);
s32 func_00154070(s32);

s32 func_0017BF80(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0;

    v1 = (s32) ((u32) a1 << 2);
    a1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (*(volatile s32 *) (u32) (a0 + 32));
    a0 = (s32) ((u32) a1 << 2);
    s0 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) (s0 + 8)) = (u32) a2;
    a0 = (*(volatile s32 *) (u32) (s0 + 8));
    if (a0 == 0) goto L_0017BFD0;
    v0 = func_00141300(a0);
    a0 = v0; v0 = func_00154070(a0);
    (*(volatile u32 *) (u32) s0) = (u32) v0;
    a1 = (*(volatile s32 *) (u32) s0);
    a0 = (*(volatile s32 *) (u32) (s0 + 8)); v0 = func_00141010(a0, a1);
L_0017BFD0:;
    (*(volatile u32 *) (u32) (s0 + 12)) = (u32) 0;
    return v0;
}
