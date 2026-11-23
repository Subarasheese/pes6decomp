/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Heap_Alloc(s32, s32, s32, s32);
void Pes6Heap_Free(s32);
void strcpy(s32, s32);

void func_00C82F80(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;

    a0 = 8;
    a1 = 46;
    v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    s3 = v0;
    s1 = (s32) 0x540000U;
    s2 = 0;
    s1 = (s32) ((u32) s1 + 0xffffc9d0U);
    s0 = s3;
L_00C82FB8:;
    a0 = s0;
    a1 = s1; strcpy(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    s1 = (s32) ((u32) s1 + 0x2eU);
    v1 = s2 < 8;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x2eU); if (c_) goto L_00C82FB8; }
    a0 = (*(volatile s32 *) (u32) (gp + -19184));
    if (a0 == 0) { (*(volatile u32 *) (u32) (gp + -19184)) = (u32) s3; goto L_00C82FF0; }
    Pes6Heap_Free(a0);
    (*(volatile u32 *) (u32) (gp + -19184)) = (u32) s3;
L_00C82FF0:;
    return;
}
