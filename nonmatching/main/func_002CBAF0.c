/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Heap_Create(s64, s64, s64);
s64 func_00154090(s64);

s64 func_002CBAF0(s64 a0, s64 a1, s64 a2) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0;

    v1 = -1;
    s0 = (s64) ((u64) a0 << 56);
    s0 = s0 >> 56;
    if (s0 == v1) goto L_002CBB7C;
    at = s0 < 28;
    if (at == 0) goto L_002CBB7C;
    v1 = (s32) 0x5e0000U;
    a1 = (s32) ((u32) s0 << 3);
    v1 = (s32) ((u32) v1 + 0x3ba4U);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (*(volatile s32 *) (u32) v1);
    if (v1 != 0) goto L_002CBB40;
    goto L_002CBB80;
L_002CBB40:;
    v0 = (s32) 0x5e0000U;
    a0 = s0;
    v0 = (s32) ((u32) v0 + 0x3ba0U);
    v0 = (s32) ((u32) v0 + (u32) a1);
    a1 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    a2 = (s32) ((u32) a1 + (u32) v0); v0 = Pes6Heap_Create(a0, a1, a2);
    v0 = (s32) 0x5e0000U;
    v1 = 1;
    v0 = (s32) ((u32) v0 + 0x3c80U);
    a0 = s0;
    v0 = (s32) ((u32) v0 + (u32) s0);
    (*(volatile u8 *) (u32) v0) = (u8) v1; v0 = func_00154090(a0);
L_002CBB7C:;
L_002CBB80:;
    return v0;
}
