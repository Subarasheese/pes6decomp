/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Heap_Free(s32);
void func_001EDBA0(s32, s32, s32, s32);
s32 func_00C8B140(void);

void func_00C90690(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    v1 = (s32) 0xcd0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -10020));
    if (v1 == 0) { ; goto L_00C90734; }
    v0 = func_00C8B140();
    s3 = v0;
    v0 = (s32) 0xcd0000U;
    s0 = (*(volatile s32 *) (u32) (v0 + -10028));
    { s32 c_ = s0 <= 0; s2 = 0; if (c_) goto L_00C90700; }
    s1 = 0;
L_00C906D8:;
    v0 = (s32) 0xcd0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -10020));
    v0 = (s32) ((u32) v0 + (u32) s1);
    a1 = (*(volatile s32 *) (u32) v0);
    a0 = s3; func_001EDBA0(a0, a1, a2, a3);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < s0;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00C906D8; }
L_00C90700:;
    v0 = (s32) 0xcd0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -10020)); Pes6Heap_Free(a0);
    v0 = (s32) 0xcd0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -10024)); Pes6Heap_Free(a0);
    v1 = (s32) 0xcd0000U;
    a0 = (s32) 0xcd0000U;
    (*(volatile u32 *) (u32) (v1 + -10020)) = (u32) 0;
    v1 = (s32) 0xcd0000U;
    (*(volatile u32 *) (u32) (a0 + -10024)) = (u32) 0;
    (*(volatile u32 *) (u32) (v1 + -10028)) = (u32) 0;
L_00C90734:;
    return;
}
