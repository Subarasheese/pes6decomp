/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s64 func_0090F410(s64 a0) {
    s64 v0 = 0, v1 = 0;

    v0 = (s32) 0x510000U;
    v1 = (*(volatile s32 *) (u32) (v0 + 4048));
    v0 = 9;
    if (v1 == v0) goto L_0090F438;
    v0 = 12;
    if (v1 == v0) goto L_0090F438;
    v0 = -1; goto L_0090F490;
L_0090F438:;
    v0 = (s32) 0x590000U;
    v1 = 2;
    v0 = (*(volatile u8 *) (u32) (v0 + 7981));
    if (v0 == v1) goto L_0090F454;
    v0 = -1; goto L_0090F490;
L_0090F454:;
    v0 = (s32) 0x930000U;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) ((u32) v0 + 0xfffff0b4U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s8 *) (u32) v0);
    if (v1 >= 0) goto L_0090F478;
    v0 = 1; goto L_0090F488;
L_0090F478:;
    v0 = (s32) 0x930000U;
    v0 = (s32) ((u32) v0 + 0xfffff1b0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
L_0090F488:;
    v0 = (s64) ((u64) v0 << 56);
    v0 = v0 >> 56;
L_0090F490:;
    return v0;
}
