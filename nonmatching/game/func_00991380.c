/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_002928B0(s64);
s64 func_00292AA0(void);
s64 func_00292B10(void);

s64 func_00991380(s64 a0, s64 a1) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    v0 = (s32) 0xcb0000U;
    s2 = a0;
    a0 = (*(volatile s32 *) (u32) (v0 + 13056));
    v1 = s2 & 0xff;
    v0 = (s32) ((u32) v1 << 6);
    s0 = (s32) ((u32) a0 + 0x8U);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) s0 + (u32) v0);
    s1 = (*(volatile s16 *) (u32) v0); v0 = func_00292B10();
    if (v0 != 0) goto L_009913D8;
L_009913D0:;
    v0 = s1; goto L_00991458;
L_009913D8:;
    v0 = func_00292AA0();
    a1 = 1;
    if (v0 != a1) goto L_009913D0;
    a0 = s2 & 0xff;
    v0 = a0 ^ 0x1;
    v1 = v0 & 0xff;
    v0 = (s32) ((u32) v1 << 6);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) s0 + (u32) v0);
    v0 = (*(volatile s16 *) (u32) v0);
    if (s1 != v0) goto L_009913D0;
    if (a0 != a1) goto L_0099143C;
    v0 = func_002928B0(a0);
    v0 = (s64) ((u64) v0 << 48);
    v0 = v0 >> 48;
    s1 = (s32) ((u32) s1 + (u32) v0); goto L_009913D0;
L_0099143C:;
    v0 = func_002928B0(a0);
    v0 = (s64) ((u64) v0 << 48);
    v0 = v0 >> 48;
    v0 = (s32) ((u32) v0 << 1);
    s1 = (s32) ((u32) s1 + (u32) v0); goto L_009913D0;
L_00991458:;
    return v0;
}
