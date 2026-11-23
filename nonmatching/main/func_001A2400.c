/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Heap_Free(s32);
s32 func_0014AAB0(s32, s32);
s32 func_00153FE0(s32, s32);
void func_001CDAD0(s32);

void func_001A2400(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    v0 = (s32) 0x520000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 928));
    s0 = a0;
    s2 = (s32) ((u32) v0 + 0x20U);
    a0 = s2; func_001CDAD0(a0);
    v0 = (*(volatile s32 *) (u32) (s2 + 4));
    s1 = (s32) ((u32) s2 + 0x4U);
    s2 = (*(volatile s32 *) (u32) v0);
    a1 = (*(volatile s32 *) (u32) (s2 + 8));
    a0 = s0; v0 = func_00153FE0(a0, a1);
    s3 = v0;
    a0 = s2;
    a1 = s3; v0 = func_0014AAB0(a0, a1);
    a0 = s3; func_001CDAD0(a0);
    v0 = (s32) 0x520000U;
    (*(volatile u32 *) (u32) (v0 + -88)) = (u32) s3;
    v0 = (*(volatile s32 *) (u32) s1);
    s1 = (*(volatile s32 *) (u32) (v0 + 4));
    a1 = (*(volatile s32 *) (u32) (s1 + 8));
    a0 = s0; v0 = func_00153FE0(a0, a1);
    s0 = v0;
    a0 = s1;
    a1 = s0; v0 = func_0014AAB0(a0, a1);
    a0 = s0; func_001CDAD0(a0);
    v0 = (s32) 0x520000U;
    v1 = (s32) 0x520000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 928));
    (*(volatile u32 *) (u32) (v1 + -84)) = (u32) s0; Pes6Heap_Free(a0);
    v1 = (s32) 0x520000U;
    (*(volatile u32 *) (u32) (v1 + 928)) = (u32) 0;
    return;
}
