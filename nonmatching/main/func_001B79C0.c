/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Heap_Alloc(s32, s32, s32, s32);
void memcpy(s32, s32, s32);

void func_001B79C0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0;

    a0 = 1;
    a1 = 3084;
    v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    s0 = v0;
    a1 = (s32) 0x520000U;
    a1 = (s32) ((u32) a1 + 0x29f0U);
    a0 = s0;
    a2 = 3072; memcpy(a0, a1, a2);
    v1 = (s32) 0x520000U;
    a0 = (s32) 0x520000U;
    a1 = (*(volatile s32 *) (u32) (v1 + 10636));
    (*(volatile u32 *) (u32) (s0 + 3072)) = (u32) a1;
    v1 = (s32) 0x520000U;
    a0 = (*(volatile s32 *) (u32) (a0 + 10632));
    (*(volatile u32 *) (u32) (s0 + 3076)) = (u32) a0;
    a0 = (*(volatile s32 *) (u32) (v1 + 18324));
    if (a0 == 0) goto L_001B7A28;
    v1 = (s32) 0x520000U;
    (*(volatile u32 *) (u32) (v1 + 18324)) = (u32) s0;
    (*(volatile u32 *) (u32) (s0 + 3080)) = (u32) a0; goto L_001B7A30;
L_001B7A28:;
    v1 = (s32) 0x520000U;
    (*(volatile u32 *) (u32) (v1 + 18324)) = (u32) s0;
L_001B7A30:;
    a0 = (s32) 0x520000U;
    v1 = (s32) 0x520000U;
    a0 = (*(volatile s8 *) (u32) (a0 + 18320));
    a0 = (s32) ((u32) a0 + 0x1U);
    (*(volatile u8 *) (u32) (v1 + 18320)) = (u8) a0;
    return;
}
