/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_009A0270(void);
s64 func_00BBB8C0(s64);

s64 func_00C2E6A0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    s3 = a2;
    s2 = a1;
    v1 = (*(volatile u8 *) (u32) (a0 + 6));
    { s32 c_ = v1 < 0; s1 = a3; if (c_) goto L_00C2E788; }
    v0 = v1 < 5;
    if (v0 != 0) goto L_00C2E6DC;
    v1 = (s64) ((u64) 0 + (u64) (s64) 4);
L_00C2E6DC:;
    s0 = v1 & 0xff;
    a0 = 100; v0 = func_00BBB8C0(a0);
    v1 = (s32) ((u32) s3 + (u32) s0);
    v1 = (*(volatile u8 *) (u32) v1);
    at = v0 < v1;
    if (at == 0) { v0 = -1; goto L_00C2E790; }
    if (s1 == 0) { v0 = 1; goto L_00C2E790; }
    v0 = func_009A0270();
    v1 = v0 & 0xff;
    a1 = 0;
    v0 = (s32) ((u32) s0 << 3);
    v0 = (s32) ((u32) v0 - (u32) s0);
    a0 = (s32) ((u32) s1 + (u32) v0);
L_00C2E720:;
    v0 = (*(volatile u8 *) (u32) a0);
    at = v0 < v1;
    if (at != 0) goto L_00C2E740;
    a1 = (s32) ((u32) a1 + 0x1U);
    v0 = a1 < 7;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x1U); if (c_) goto L_00C2E720; }
L_00C2E740:;
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1ef6U);
    v1 = (s32) ((u32) v0 + (u32) s2);
    a0 = (*(volatile u8 *) (u32) v1);
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1ef8U);
    v0 = (s32) ((u32) v0 + (u32) s2);
    v1 = (*(volatile u8 *) (u32) v0);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 7107));
    v0 = (s32) ((u32) v0 - (u32) v1);
    at = a1 < v0;
    if (at == 0) { v0 = -1; goto L_00C2E790; }
    v0 = (s64) ((u64) a1 << 56);
    v0 = v0 >> 56; goto L_00C2E790;
L_00C2E788:;
    v1 = 0; goto L_00C2E6DC;
L_00C2E790:;
    return v0;
}
