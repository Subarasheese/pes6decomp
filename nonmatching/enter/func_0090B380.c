/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_0090B380(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0;

    v1 = (s32) 0x930000U;
    a0 = (s32) 0x930000U;
    a1 = (*(volatile u8 *) (u32) (v1 + -3844));
    a0 = (s32) ((u32) a0 + 0xfffff0ffU);
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = 3;
    a0 = (*(volatile u8 *) (u32) a0);
    if (a0 != v1) goto L_0090B3B8;
    a0 = (s32) 0x910000U;
    v1 = (s32) 0x930000U;
    a0 = (s32) ((u32) a0 + 0xffffb020U);
    (*(volatile u32 *) (u32) (v1 + -3936)) = (u32) a0; goto L_0090B3C8;
L_0090B3B8:;
    a0 = (s32) 0x910000U;
    v1 = (s32) 0x930000U;
    a0 = (s32) ((u32) a0 + 0xffffae90U);
    (*(volatile u32 *) (u32) (v1 + -3936)) = (u32) a0;
L_0090B3C8:;
    return;
}
