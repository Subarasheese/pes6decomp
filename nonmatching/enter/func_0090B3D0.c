/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_0090F520(void);

void func_0090B3D0(s64 a0, s64 a1, s64 a2) {
    s64 v0 = 0, v1 = 0;

    v1 = (s32) 0x930000U;
    a2 = (*(volatile s32 *) (u32) (v1 + -3888));
    v1 = a2 & 0x5000;
    if (v1 == 0) { ; goto L_0090B458; }
    v1 = (s32) 0x930000U;
    a0 = (s32) 0x930000U;
    a1 = (*(volatile u8 *) (u32) (v1 + -3844));
    a0 = (s32) ((u32) a0 + 0xfffff100U);
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = 31;
    a0 = (*(volatile u8 *) (u32) a0);
    if (a0 == v1) { a0 = -4097; goto L_0090B448; }
    v0 = func_0090F520();
    a0 = (s64) ((u64) v0 << 56);
    v1 = 1;
    a0 = a0 >> 56;
    if (a0 != v1) goto L_0090B43C;
    a0 = 2;
    v1 = (s32) 0x930000U;
    (*(volatile u8 *) (u32) (v1 + -3669)) = (u8) a0; goto L_0090B454;
L_0090B43C:;
    v1 = (s32) 0x930000U;
    (*(volatile u8 *) (u32) (v1 + -3669)) = (u8) 0; goto L_0090B454;
L_0090B448:;
    v1 = (s32) 0x930000U;
    a0 = a2 & a0;
    (*(volatile u32 *) (u32) (v1 + -3888)) = (u32) a0;
L_0090B454:;
L_0090B458:;
    return;
}
