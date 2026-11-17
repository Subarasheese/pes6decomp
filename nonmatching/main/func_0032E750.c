/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 memset(s32, s32, s32);

s32 func_0032E750(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0;

    v0 = 4;
    { s32 c_ = a1 == v0; s0 = a0; if (c_) goto L_0032E868; }
    v0 = 3;
    if (a1 == v0) goto L_0032E830;
    v0 = 2;
    if (a1 == v0) { a0 = (s32) ((u32) s0 + 0x2cU); goto L_0032E800; }
    v0 = 1;
    if (a1 == v0) { a1 = 0; goto L_0032E794; }
    goto L_0032E86C;
L_0032E794:;
    a2 = 124; v0 = memset(a0, a1, a2);
    v0 = (s32) 0x330000U;
    v1 = (s32) 0x330000U;
    v0 = (s32) ((u32) v0 + 0xffffd1c0U);
    v1 = (s32) ((u32) v1 + 0xffffcbc0U);
    (*(volatile u32 *) (u32) s0) = (u32) v0;
    a0 = 1;
    v0 = (s32) 0x330000U;
    (*(volatile u32 *) (u32) (s0 + 4)) = (u32) v1;
    v0 = (s32) ((u32) v0 + 0xffffcc10U);
    v1 = (s32) 0x330000U;
    (*(volatile u32 *) (u32) (s0 + 16)) = (u32) v0;
    v1 = (s32) ((u32) v1 + 0xffffce70U);
    v0 = (s32) 0x330000U;
    (*(volatile u32 *) (u32) (s0 + 52)) = (u32) a0;
    v0 = (s32) ((u32) v0 + 0xffffd0e0U);
    (*(volatile u32 *) (u32) (s0 + 60)) = (u32) v0;
    (*(volatile u32 *) (u32) (s0 + 76)) = (u32) v1;
    v0 = (s32) 0x330000U;
    (*(volatile u32 *) (u32) (s0 + 80)) = (u32) 0;
    v0 = (s32) ((u32) v0 + 0xffffcca0U);
    (*(volatile u32 *) (u32) (s0 + 84)) = (u32) 0;
    (*(volatile u32 *) (u32) (s0 + 88)) = (u32) v0;
    (*(volatile u32 *) (u32) (s0 + 72)) = (u32) a0;
    (*(volatile u32 *) (u32) (s0 + 40)) = (u32) 0;
    a0 = (s32) ((u32) s0 + 0x2cU);
L_0032E800:;
    a1 = 0;
    a2 = 5; v0 = memset(a0, a1, a2);
    (*(volatile u32 *) (u32) (s0 + 12)) = (u32) 0;
    (*(volatile u32 *) (u32) (s0 + 108)) = (u32) 0;
    (*(volatile u32 *) (u32) (s0 + 116)) = (u32) 0;
    (*(volatile u32 *) (u32) (s0 + 120)) = (u32) 0;
    (*(volatile u32 *) (u32) (s0 + 80)) = (u32) 0;
    (*(volatile u32 *) (u32) (s0 + 112)) = (u32) 0;
    (*(volatile u32 *) (u32) (s0 + 100)) = (u32) 0;
    (*(volatile u32 *) (u32) (s0 + 68)) = (u32) 0; goto L_0032E868;
L_0032E830:;
    v0 = (s32) 0x330000U;
    v1 = (s32) 0x330000U;
    (*(volatile u32 *) (u32) (s0 + 68)) = (u32) 0;
    v0 = (s32) ((u32) v0 + 0xffffcaa0U);
    (*(volatile u32 *) (u32) (s0 + 12)) = (u32) v0;
    v1 = (s32) ((u32) v1 + 0xffffca30U);
    v0 = (s32) 0x330000U;
    (*(volatile u32 *) (u32) (s0 + 108)) = (u32) 0;
    v0 = (s32) ((u32) v0 + 0xffffc8e0U);
    (*(volatile u32 *) (u32) (s0 + 116)) = (u32) v0;
    (*(volatile u32 *) (u32) (s0 + 120)) = (u32) 0;
    v0 = 1;
    (*(volatile u32 *) (u32) (s0 + 112)) = (u32) v1;
    (*(volatile u32 *) (u32) (s0 + 100)) = (u32) v0;
L_0032E868:;
L_0032E86C:;
    v0 = 1;
    return v0;
}
