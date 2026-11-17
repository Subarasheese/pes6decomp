/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_0022F210(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v0 + 7177));
    v0 = 1;
    if (v1 == v0) { v0 = a0 & 0xff; goto L_0022F264; }
    v0 = 8;
    if (v1 == v0) { v0 = 0; goto L_0022F2C4; }
    v0 = 7;
    if (v1 == v0) goto L_0022F258;
    v0 = 5;
    if (v1 == v0) goto L_0022F258;
    if (v1 == 0) goto L_0022F258;
    v0 = 2; goto L_0022F2C4;
L_0022F258:;
    v0 = 0;
    goto L_0022F2C4;
L_0022F264:;
    v0 = (s32) ((u32) v0 + 0xfffffff1U);
    at = (u64) v0 < (u64) (s64) 13;
    if (at == 0) { v0 = 2; goto L_0022F2C4; }
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff8320U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x22f290U) goto L_0022F290; if (t_ == 0x22f298U) goto L_0022F298; if (t_ == 0x22f2a0U) goto L_0022F2A0; if (t_ == 0x22f2a8U) goto L_0022F2A8; if (t_ == 0x22f2b0U) goto L_0022F2B0; if (t_ == 0x22f2b8U) goto L_0022F2B8; if (t_ == 0x22f2c0U) goto L_0022F2C0; }
L_0022F290:;
    v0 = 4; goto L_0022F2C4;
L_0022F298:;
    v0 = 5; goto L_0022F2C4;
L_0022F2A0:;
    v0 = 5; goto L_0022F2C4;
L_0022F2A8:;
    v0 = 5; goto L_0022F2C4;
L_0022F2B0:;
    v0 = 4; goto L_0022F2C4;
L_0022F2B8:;
    v0 = 3; goto L_0022F2C4;
L_0022F2C0:;
    v0 = 2;
L_0022F2C4:;
    return v0;
}
