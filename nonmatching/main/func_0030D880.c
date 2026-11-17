/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_0030D880(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 v0 = 0, v1 = 0;
    s32 hi = 0, lo = 0;

    a2 = a1 & 0xff;
    v0 = 255;
    if (a2 == v0) { a1 = 1; goto L_0030D89C; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a2 / (s32) v0); hi = (s32) ((s32) a2 % (s32) v0); lo = q_; }
    a1 = hi;
L_0030D89C:;
    v0 = (s32) ((u32) a1 << 3);
    v1 = (s32) 0x590000U;
    a1 = (s32) ((u32) v0 + (u32) a1);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a1 = (s32) ((u32) a1 << 6);
    v0 = 255;
    { s32 c_ = a2 == v0; a3 = (s32) ((u32) v1 + (u32) a1); if (c_) goto L_0030D8D0; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a2 / (s32) v0); hi = (s32) ((s32) a2 % (s32) v0); lo = q_; }
    a1 = hi;
    v1 = (s32) ((u32) a1 << 3); goto L_0030D8D8;
L_0030D8D0:;
    a1 = 1;
    v1 = (s32) ((u32) a1 << 3);
L_0030D8D8:;
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a1);
    a4 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (s32) 0x590000U;
    a2 = (*(volatile u8 *) (u32) (a3 + 18));
    a4 = (s32) ((u32) a4 + 0x2a55U);
    v1 = (*(volatile u8 *) (u32) (a3 + 17));
    a1 = (s32) ((u32) a1 + 0x29c0U);
    a5 = (*(volatile u8 *) (u32) (v0 + 18));
    a3 = (*(volatile u8 *) (u32) (v0 + 17));
    v0 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a5 << 4);
    a5 = (s32) ((u32) v0 - (u32) a5);
    v0 = (s32) ((u32) a3 << 4);
    a3 = (s32) ((u32) v0 - (u32) a3);
    v0 = (s32) ((u32) a5 << 3);
    a5 = (s32) ((u32) v0 - (u32) a5);
    v0 = (s32) ((u32) a3 << 3);
    v0 = (s32) ((u32) v0 - (u32) a3);
    a3 = (s32) ((u32) a5 << 8);
    v0 = (s32) ((u32) v0 << 3);
    a3 = (s32) ((u32) a4 + (u32) a3);
    a3 = (s32) ((u32) v0 + (u32) a3);
    v0 = (s32) ((u32) a2 << 3);
    a3 = (*(volatile u8 *) (u32) a3);
    v0 = (s32) ((u32) v0 - (u32) a2);
    a2 = (s32) ((u32) v0 << 8);
    v0 = (s32) ((u32) v1 << 3);
    a1 = (s32) ((u32) a1 + (u32) a2);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v0 = 1;
    v1 = (*(volatile u8 *) (u32) v1);
    v1 = (s32) ((u32) a3 + (u32) v1);
    (*(volatile u32 *) (u32) a0) = (u32) v1; return v0;
}
