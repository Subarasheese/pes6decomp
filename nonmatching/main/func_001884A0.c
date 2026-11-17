/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00187BB0(s32);

s32 func_001884A0(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    v0 = 2;
    s2 = a1;
    if (a0 == v0) goto L_001884F4;
    v0 = 1;
    if (a0 == v0) goto L_001884E8;
    if (a0 == 0) goto L_001884DC;
    v0 = (*(volatile s32 *) (u32) s2); goto L_00188500;
L_001884DC:;
    v0 = (s32) 0x520000U;
    (*(volatile u32 *) (u32) (v0 + 8)) = (u32) s2; goto L_001884FC;
L_001884E8:;
    v0 = (s32) 0x520000U;
    (*(volatile u32 *) (u32) (v0 + 16)) = (u32) s2; goto L_001884FC;
L_001884F4:;
    v0 = (s32) 0x520000U;
    (*(volatile u32 *) (u32) (v0 + 24)) = (u32) s2;
L_001884FC:;
    v0 = (*(volatile s32 *) (u32) s2);
L_00188500:;
    s0 = s2;
    s1 = 0;
    v0 = (s32) ((u32) s2 + (u32) v0);
    (*(volatile u32 *) (u32) s2) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (s2 + 4));
    v0 = (s32) ((u32) s2 + (u32) v0);
    (*(volatile u32 *) (u32) (s2 + 4)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (s2 + 8));
    v0 = (s32) ((u32) s2 + (u32) v0);
    (*(volatile u32 *) (u32) (s2 + 8)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (s2 + 12));
    v0 = (s32) ((u32) s2 + (u32) v0);
    (*(volatile u32 *) (u32) (s2 + 12)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (s2 + 16));
    v0 = (s32) ((u32) s2 + (u32) v0);
    (*(volatile u32 *) (u32) (s2 + 16)) = (u32) v0;
L_00188540:;
    v1 = (*(volatile s32 *) (u32) s0);
    v0 = (*(volatile s32 *) (u32) v1);
    v0 = (s32) ((u32) s2 + (u32) v0);
    (*(volatile u32 *) (u32) v1) = (u32) v0;
    a0 = (*(volatile s32 *) (u32) v1); v0 = func_00187BB0(a0);
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < 4;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00188540; }
    return v0;
}
