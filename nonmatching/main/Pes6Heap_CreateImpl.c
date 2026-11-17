/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void memset(s64, s64, s64);

void Pes6Heap_CreateImpl(s64 a0, s64 a1, s64 a2) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    v0 = (s32) 0x400000U;
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + 0xffffb420U);
    s3 = a1;
    s2 = (s32) ((u32) v0 + (u32) v1);
    a1 = 0;
    (*(volatile u32 *) (u32) s2) = (u32) s3;
    s0 = a2;
    s1 = (*(volatile s32 *) (u32) s2);
    a2 = 928;
    a0 = s1; memset(a0, a1, a2);
    v1 = (s64) ((u64) s3 << 32);
    v1 = (s64) ((u64) v1 >> 32);
    v1 = (s64) ((u64) v1 + (u64) (s64) 928);
    v1 = (s64) ((u64) v1 << 32);
    v1 = v1 >> 32;
    (*(volatile u32 *) (u32) s1) = (u32) v1;
    (*(volatile u32 *) (u32) (s1 + 4)) = (u32) s0;
    (*(volatile u32 *) (u32) (s1 + 8)) = (u32) 0;
    (*(volatile u64 *) (u32) (s1 + 16)) = (u64) 0;
    a1 = (*(volatile s32 *) (u32) s2);
    if (a1 == 0) goto L_0012D45C;
    a0 = (*(volatile s32 *) (u32) (a1 + 4));
    v1 = (*(volatile s32 *) (u32) a1);
    v1 = (s32) ((u32) a0 - (u32) v1);
    v1 = (s32) ((u32) v1 + 0xfffffff0U);
    (*(volatile u32 *) (u32) (a1 + 12)) = (u32) v1;
L_0012D45C:;
    return;
}
