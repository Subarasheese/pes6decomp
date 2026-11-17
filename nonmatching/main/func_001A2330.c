/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0014AAB0(s32, s32, s32, s32);
s32 func_00154070(s32);
s32 func_0019FC80(s32);
s32 func_0019FC90(void);

s32 func_001A2330(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    v0 = (s32) 0x520000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -136));
    s0 = a0;
    v1 = (s32) ((u32) s0 << 2);
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    v0 = (s32) ((u32) v0 + (u32) v1);
    s1 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (s1 + 8)); v0 = func_00154070(a0);
    v1 = (s32) 0x520000U;
    a0 = s1;
    (*(volatile u32 *) (u32) (v1 + -132)) = (u32) v0;
    a1 = v0; v0 = func_0014AAB0(a0, a1, a2, a3);
    v0 = func_0019FC90();
    a0 = 1;
    if (s0 == a0) goto L_001A23AC;
    if (s0 == 0) { a0 = 2; goto L_001A239C; }
    a0 = 0; goto L_001A23BC;
L_001A239C:;
    v0 = func_0019FC80(a0);
    goto L_001A23C8;
L_001A23AC:;
    v0 = func_0019FC80(a0);
    goto L_001A23C4;
L_001A23BC:;
    v0 = func_0019FC80(a0);
L_001A23C4:;
L_001A23C8:;
    return v0;
}
