/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00220CB0(s32);

s32 func_0022F3C0(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0;

    v1 = (s32) 0x3e0000U;
    a2 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff80d0U);
    v1 = (s32) ((u32) v1 + (u32) a2);
    v1 = (*(volatile s32 *) (u32) v1);
    at = v1 < 29;
    { s32 c_ = at == 0; v0 = 0; if (c_) goto L_0022F3FC; }
    a0 = v1;
    a1 = 1; v0 = func_00220CB0(a0);
    v0 = v0 & 0xff; goto L_0022F45C;
L_0022F3FC:;
    v1 = 28;
    if (a0 == v1) goto L_0022F43C;
    v1 = 30;
    if (a0 == v1) goto L_0022F43C;
    v1 = 31;
    if (a0 == v1) goto L_0022F43C;
    v1 = 32;
    if (a0 == v1) goto L_0022F43C;
    v1 = (s32) ((u32) a0 + 0xffffffdeU);
    at = (u64) v1 < (u64) (s64) 2;
    if (at == 0) { ; goto L_0022F460; }
L_0022F43C:;
    v0 = (s32) 0x3e0000U;
    v1 = a1 & 0xff;
    v0 = (s32) ((u32) v0 + 0xffff81c0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile u8 *) (u32) v0);
    a1 = 1; v0 = func_00220CB0(a0);
    v0 = v0 & 0xff;
L_0022F45C:;
L_0022F460:;
    return v0;
}
