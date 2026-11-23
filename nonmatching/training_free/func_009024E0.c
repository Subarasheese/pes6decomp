/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00277210(s32);
s32 func_00277220(s32, s32);

s32 func_009024E0(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    v0 = (s32) ((u32) a1 << 4);
    a1 = (s32) ((u32) v0 - (u32) a1);
    v0 = (s32) ((u32) a0 << 4);
    v1 = (s32) ((u32) v0 - (u32) a0);
    v0 = (s32) ((u32) a1 << 3);
    a0 = (s32) ((u32) v0 - (u32) a1);
    v0 = (s32) ((u32) v1 << 3);
    s1 = (s32) ((u32) a0 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    a1 = 1;
    s0 = (s32) ((u32) v0 << 8);
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x2995U);
    v1 = (s32) ((u32) v0 + (u32) s0);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) s1 + (u32) v1);
    v0 = (s32) ((u32) v0 + 0x2980U);
    s2 = (*(volatile u8 *) (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) s0);
    v0 = (s32) ((u32) s1 + (u32) v0);
    s3 = (s32) ((u32) v0 + 0xf0U);
    a0 = s3; v0 = func_00277220(a0, a1);
    v1 = 2;
    if (v0 == v1) { s2 = 12; goto L_00902580; }
    v1 = 1;
    if (v0 == v1) { s2 = 11; goto L_00902580; }
    a0 = s3; v0 = func_00277210(a0);
    if (v0 == 0) goto L_00902580;
    s2 = (s32) ((u32) s2 + 0x5U);
L_00902580:;
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x2a78U);
    v0 = (s32) ((u32) v0 + (u32) s0);
    v0 = (s32) ((u32) s1 + (u32) v0);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 != 0) { s2 = 10; goto L_009025BC; }
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x2a79U);
    v0 = (s32) ((u32) v0 + (u32) s0);
    v0 = (s32) ((u32) s1 + (u32) v0);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 == 0) { v0 = s2; goto L_009025C0; }
    s2 = 10;
L_009025BC:;
    v0 = s2;
L_009025C0:;
    return v0;
}
