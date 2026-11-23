/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_0022F330(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0;

    v0 = a0 & 0xff;
    v0 = (u64) v0 < (u64) (s64) 59;
    { s32 c_ = v0 != 0; a2 = 0; if (c_) goto L_0022F344; }
    a0 = 0;
L_0022F344:;
    v1 = a0 & 0xff;
    v0 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 + 0xffff81d0U);
    a0 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v1 != v0) { v0 = a2 & 0xff; goto L_0022F3B0; }
    v1 = (s32) 0x3e0000U;
    v0 = 128;
    v1 = (s32) ((u32) v1 + 0xffff81d1U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a2 = (*(volatile u8 *) (u32) v1);
    if (a2 == v0) { v0 = a1 & 0xff; goto L_0022F388; }
    goto L_0022F3AC;
L_0022F388:;
    v0 = v0 < 4;
    if (v0 != 0) goto L_0022F398;
    a1 = 0;
L_0022F398:;
    v0 = (s32) 0x3e0000U;
    v1 = a1 & 0xff;
    v0 = (s32) ((u32) v0 + 0xffff8248U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a2 = (*(volatile u8 *) (u32) v0);
L_0022F3AC:;
    v0 = a2 & 0xff;
L_0022F3B0:;
    return v0;
}
