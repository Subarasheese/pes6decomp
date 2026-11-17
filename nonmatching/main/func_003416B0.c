/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00288670(s32, s32);

s32 func_003416B0(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 hi = 0, lo = 0;

    v1 = a0 & 0xff;
    v0 = 255;
    if (v1 == v0) goto L_003416D8;
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a2 = hi;
    v0 = 255; goto L_003416E0;
L_003416D8:;
    a2 = 1;
    v0 = 255;
L_003416E0:;
    if (v1 == v0) { a0 = 1; goto L_003416F4; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_003416F4:;
    v0 = (s32) ((u32) a0 << 3);
    v1 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffe5c2U);
    a1 = (s32) ((u32) v0 << 6);
    a0 = (s32) 0x590000U;
    v0 = (s32) ((u32) a2 << 3);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v0 = (s32) ((u32) v0 + (u32) a2);
    a0 = (s32) ((u32) a0 + 0x2980U);
    a2 = (*(volatile u8 *) (u32) v1);
    a1 = 50;
    v1 = (s32) ((u32) v0 << 6);
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0xffffe5c1U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile u8 *) (u32) v0);
    v0 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) a2 << 3);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a2 << 8);
    a0 = (s32) ((u32) a0 + (u32) v0);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (*(volatile u8 *) (u32) (v0 + 123));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    at = v0 < 91;
    if (at != 0) { v0 = 0; goto L_00341784; }
    v0 = 1;
L_00341784:;
    return v0;
}
