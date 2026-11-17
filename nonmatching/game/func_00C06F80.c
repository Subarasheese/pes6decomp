/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_009909D0(s32, s32);

s32 func_00C06F80(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 hi = 0, lo = 0;

    v0 = 3072;
    a1 = (s32) 0x190000U;
    (*(volatile u32 *) (u32) (a0 + 492)) = (u32) v0;
    s0 = a0;
    v0 = (*(volatile s32 *) (u32) (a0 + 492));
    (*(volatile u32 *) (u32) (a0 + 176)) = (u32) v0; v0 = func_009909D0(a0, a1);
    if (v0 != 0) goto L_00C07044;
    a0 = (*(volatile u8 *) (u32) (s0 + 19));
    v1 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 + 0x56bcU);
    v0 = 255;
    a1 = a0 ^ 0x1;
    a0 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (s32) ((u32) a0 << 1);
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 == v0) { a0 = 1; goto L_00C06FF0; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00C06FF0:;
    v0 = (s32) ((u32) a0 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffe6c0U);
    a0 = (s32) ((u32) a0 << 6);
    v0 = (s32) 0x190000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    v0 = (u64) v1 < (u64) v0;
    if (v0 != 0) goto L_00C07044;
    v1 = (*(volatile u8 *) (u32) (s0 + 22));
    v0 = 64;
    if (v1 != v0) goto L_00C0704C;
    v1 = (*(volatile u16 *) (u32) (s0 + 24));
    v0 = 6;
    if (v1 != v0) goto L_00C0704C;
    v0 = 1; goto L_00C07050;
L_00C07044:;
    v0 = 1; goto L_00C07050;
L_00C0704C:;
    v0 = 3;
L_00C07050:;
    return v0;
}
