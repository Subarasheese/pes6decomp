/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0063CA40(s32);

s32 func_00622A20(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    s1 = a0;
    a0 = (*(volatile u8 *) (u32) (a0 + 10));
    v0 = a0 < 13;
    { s32 c_ = v0 != 0; s0 = 0; if (c_) goto L_00622A50; }
    v0 = 0; goto L_00622B34;
L_00622A50:;
    v0 = (s32) 0x650000U;
    v1 = (*(volatile u8 *) (u32) (s1 + 9));
    v0 = (s32) ((u32) v0 + 0x6e30U);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v1 == v0) { s2 = (*(volatile s32 *) (u32) s1); goto L_00622A74; }
    v0 = 0; goto L_00622B34;
L_00622A74:;
    v0 = func_0063CA40(a0);
    v0 = (s32) ((u32) v0 << 10);
    v0 = (s32) ((u32) v0 + 0xfffffff4U);
    at = (u64) v0 < (u64) s2;
    if (at == 0) { a4 = (s32) ((u32) s2 >> 2); goto L_00622A98; }
    s2 = v0;
    a4 = (s32) ((u32) s2 >> 2);
L_00622A98:;
    a5 = (s32) ((u32) s1 + 0xcU);
    { s32 c_ = a4 == 0; a6 = 0; if (c_) goto L_00622B28; }
    at = (u64) a4 < (u64) (s64) 9;
    { s32 c_ = at != 0; a3 = (s32) ((u32) a4 + 0xfffffff8U); if (c_) goto L_00622B00; }
L_00622AB0:;
    a0 = (*(volatile s32 *) (u32) a5);
    a6 = (s32) ((u32) a6 + 0x8U);
    v1 = (*(volatile s32 *) (u32) (a5 + 4));
    v0 = (u64) a6 < (u64) a3;
    a1 = (*(volatile s32 *) (u32) (a5 + 8));
    a2 = (s32) ((u32) s0 + (u32) a0);
    a2 = (s32) ((u32) a2 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) (a5 + 12));
    v1 = (*(volatile s32 *) (u32) (a5 + 16));
    a2 = (s32) ((u32) a2 + (u32) a1);
    a1 = (*(volatile s32 *) (u32) (a5 + 20));
    a2 = (s32) ((u32) a2 + (u32) a0);
    a2 = (s32) ((u32) a2 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) (a5 + 24));
    v1 = (*(volatile s32 *) (u32) (a5 + 28));
    a1 = (s32) ((u32) a2 + (u32) a1);
    a0 = (s32) ((u32) a1 + (u32) a0);
    s0 = (s32) ((u32) a0 + (u32) v1);
    { s32 c_ = v0 != 0; a5 = (s32) ((u32) a5 + 0x20U); if (c_) goto L_00622AB0; }
L_00622B00:;
    at = (u64) a6 < (u64) a4;
    if (at == 0) goto L_00622B28;
L_00622B0C:;
    v1 = (*(volatile s32 *) (u32) a5);
    a6 = (s32) ((u32) a6 + 0x1U);
    v0 = (u64) a6 < (u64) a4;
    s0 = (s32) ((u32) s0 + (u32) v1);
    a5 = (s32) ((u32) a5 + 0x4U);
    if (v0 != 0) goto L_00622B0C;
L_00622B28:;
    v0 = (*(volatile s32 *) (u32) (s1 + 4));
    v0 = s0 ^ v0;
    v0 = (u64) v0 < (u64) (s64) 1;
L_00622B34:;
    return v0;
}
