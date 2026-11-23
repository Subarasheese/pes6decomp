/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002211E0(void);

s32 func_002464C0(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    s1 = a0;
    s0 = a1; v0 = func_002211E0();
    { s32 c_ = s1 >= 0; v1 = (s32) s1 >> 5; if (c_) goto L_002464EC; }
    v1 = (s32) ((u32) s1 + 0x1fU);
    v1 = (s32) v1 >> 5;
L_002464EC:;
    a2 = 1;
    if (s0 != a2) { a0 = (s32) ((u32) v1 << 5); goto L_0024651C; }
    a0 = (s32) ((u32) v1 << 5);
    a1 = (s32) ((u32) s1 - (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (s32) ((u32) s0 << (a1 & 31));
    v1 = (*(volatile s32 *) (u32) a0);
    v1 = v1 | a1;
    (*(volatile u32 *) (u32) a0) = (u32) v1; goto L_0024653C;
L_0024651C:;
    a1 = (s32) ((u32) s1 - (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (s32) ((u32) a2 << (a1 & 31));
    v1 = (*(volatile s32 *) (u32) a0);
    a1 = ~(a1 | 0);
    v1 = v1 & a1;
    (*(volatile u32 *) (u32) a0) = (u32) v1;
L_0024653C:;
    return v0;
}
