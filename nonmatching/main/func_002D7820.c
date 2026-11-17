/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_002D7820(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0;

    a2 = (s32) 0x3e0000U;
    a3 = 0;
    a2 = (s32) ((u32) a2 + 0xfffff3a0U);
    v1 = (s32) ((u32) a0 + 0xffffff8dU);
    a1 = a0 < 115;
L_002D7834:;
    if (a0 < 0) goto L_002D7878;
    at = a0 < 115;
    if (at == 0) goto L_002D7878;
    v0 = (*(volatile s16 *) (u32) (a2 + 10));
    if (a0 != v0) goto L_002D7878;
    v0 = (s32) 0x3e0000U;
    v1 = (s32) ((u32) a3 << 4);
    v0 = (s32) ((u32) v0 + 0xfffff3aeU);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u16 *) (u32) v0);
    v0 = v0 & 0x1;
    v0 = v0 ^ 0x1;
    v0 = (u64) v0 < (u64) (s64) 1; goto L_002D78D0;
L_002D7878:;
    if (a1 != 0) { a3 = (s32) ((u32) a3 + 0x1U); goto L_002D78C0; }
    at = a0 < 292;
    if (at == 0) goto L_002D78BC;
    v0 = (*(volatile s16 *) (u32) (a2 + 12));
    if (v1 != v0) goto L_002D78BC;
    v0 = (s32) 0x3e0000U;
    v1 = (s32) ((u32) a3 << 4);
    v0 = (s32) ((u32) v0 + 0xfffff3aeU);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u16 *) (u32) v0);
    v0 = v0 & 0x1;
    v0 = v0 ^ 0x1;
    v0 = (u64) v0 < (u64) (s64) 1; goto L_002D78D0;
L_002D78BC:;
    a3 = (s32) ((u32) a3 + 0x1U);
L_002D78C0:;
    v0 = a3 < 296;
    { s32 c_ = v0 != 0; a2 = (s32) ((u32) a2 + 0x10U); if (c_) goto L_002D7834; }
    v0 = 0;
L_002D78D0:;
    return v0;
}
