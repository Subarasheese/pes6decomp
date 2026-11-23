/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Heap_Alloc(s32, s32, s32, s32);

void func_001E69D0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0;

    s0 = a0;
    if (s0 == 0) goto L_001E6A84;
    v1 = (s32) 0x530000U;
    a0 = (*(volatile s32 *) (u32) (v1 + -20184));
    if (a0 == 0) goto L_001E6A2C;
L_001E69F8:;
    v1 = (*(volatile s32 *) (u32) (a0 + 8));
    if (v1 != s0) goto L_001E6A0C;
    goto L_001E6A1C;
L_001E6A0C:;
    a0 = (*(volatile s32 *) (u32) (a0 + 4));
    if (a0 != 0) goto L_001E69F8;
    a0 = 0;
L_001E6A1C:;
    if (a0 == 0) goto L_001E6A34;
    goto L_001E6A88;
L_001E6A2C:;
    a0 = 0; goto L_001E6A1C;
L_001E6A34:;
    a0 = 1;
    a1 = 12; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (v0 + 8)) = (u32) s0;
    v1 = (s32) 0x530000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -20184));
    if (v1 == 0) goto L_001E6A78;
    a0 = (s32) 0x530000U;
    v1 = (s32) 0x530000U;
    a0 = (*(volatile s32 *) (u32) (a0 + -20180));
    (*(volatile u32 *) (u32) (a0 + 4)) = (u32) v0;
    v1 = (*(volatile s32 *) (u32) (v1 + -20180));
    (*(volatile u32 *) (u32) v0) = (u32) v1;
L_001E6A6C:;
    v1 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v1 + -20180)) = (u32) v0; goto L_001E6A84;
L_001E6A78:;
    v1 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v1 + -20184)) = (u32) v0; goto L_001E6A6C;
L_001E6A84:;
L_001E6A88:;
    return;
}
