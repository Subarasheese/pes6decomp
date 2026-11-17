/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00154090(s64);
s64 func_001540C0(void);
s64 func_001540D0(s64);
s64 func_001540F0(s64);

s64 Pes6HeapZone_Close(s64 a0) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    v1 = (s32) 0x5e0000U;
    v1 = (s32) ((u32) v1 + 0x3ba4U);
    s1 = a0;
    s0 = (s64) ((u64) s1 << 56);
    s0 = s0 >> 56;
    a0 = (s32) ((u32) s0 << 3);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    if (v1 == 0) goto L_002CBAD8;
    v0 = func_001540C0();
    if (s0 != v0) goto L_002CBAB0;
    a0 = 1; v0 = func_001540D0(a0);
L_002CBAB0:;
    s1 = (s64) ((u64) s1 << 56);
    s1 = s1 >> 56;
    a0 = s1; v0 = func_00154090(a0);
    a0 = s1; v0 = func_001540F0(a0);
    v1 = (s32) 0x5e0000U;
    v1 = (s32) ((u32) v1 + 0x3c80U);
    v1 = (s32) ((u32) v1 + (u32) s0);
    (*(volatile u8 *) (u32) v1) = (u8) 0;
L_002CBAD8:;
    return v0;
}
