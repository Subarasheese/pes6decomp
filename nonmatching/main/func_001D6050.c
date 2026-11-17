/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Heap_Free(s32, s32);
s32 func_00153FD0(s32, s32, s32, s32);
s32 func_001E6660(s32, s32);
s32 func_001E6E10(s32);

s32 func_001D6050(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    s2 = a0;
    { s32 c_ = s2 == 0; s1 = a1; if (c_) goto L_001D6110; }
    a0 = (*(volatile s32 *) (u32) (s2 + 20));
    if (a0 == 0) goto L_001D6088;
    v0 = Pes6Heap_Free(a0, a1);
L_001D6088:;
    v1 = (*(volatile s32 *) (u32) (s2 + 12));
    s0 = (*(volatile s32 *) (u32) v1);
    a1 = (*(volatile s32 *) (u32) s0);
    if (a1 != 0) goto L_001D60A8;
    (*(volatile u32 *) (u32) (s2 + 20)) = (u32) 0;
L_001D60A0:;
    goto L_001D6114;
L_001D60A8:;
    a0 = s1;
    a2 = 8; v0 = func_00153FD0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s2 + 20)) = (u32) v0;
    v1 = (*(volatile s32 *) (u32) s0);
    s2 = (*(volatile s32 *) (u32) (s2 + 20));
    at = (u64) 0 < (u64) v1;
    { s32 c_ = at == 0; s3 = 0; if (c_) goto L_001D6110; }
    s1 = 0;
L_001D60D0:;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    v0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_001E6660(a0, a1);
    (*(volatile u32 *) (u32) s2) = (u32) v0;
    a0 = (*(volatile s32 *) (u32) s2); v0 = func_001E6E10(a0);
    (*(volatile u32 *) (u32) (s2 + 4)) = (u32) v0;
    s3 = (s32) ((u32) s3 + 0x1U);
    v1 = (*(volatile s32 *) (u32) s0);
    s1 = (s32) ((u32) s1 + 0x4U);
    v1 = (u64) s3 < (u64) v1;
    { s32 c_ = v1 != 0; s2 = (s32) ((u32) s2 + 0x8U); if (c_) goto L_001D60D0; }
    goto L_001D60A0;
L_001D6110:;
L_001D6114:;
    return v0;
}
