/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00C13280(s64, s64, s64, s64);
s64 func_00C17E10(s64, s64, s64, s64);
s64 func_00C32A60(s64, s64, s64, s64);

s64 func_002C4A80(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    v1 = a1 & 0xff;
    v0 = (s32) v1 >> 5;
    s3 = v0 & 0x1;
    s2 = a0;
    a0 = s3;
    s0 = v1 & 0x1f;
    s1 = (s64) ((u64) 0 + (u64) (s64) 255);
    a1 = s0; v0 = func_00C17E10(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = 255;
    if (v1 != v0) { a0 = s2; goto L_002C4AD4; }
L_002C4ACC:;
    v0 = s1; goto L_002C4B30;
L_002C4AD4:;
    a1 = s3; v0 = func_00C32A60(a0, a1, a2, a3);
    s2 = v0;
    v0 = -1;
    if (s2 == v0) goto L_002C4ACC;
    a0 = s2; v0 = func_00C13280(a0, a1, a2, a3);
    a0 = (s32) ((u32) v0 + 0x4U);
    v1 = s0 & 0xff;
    a1 = 0;
L_002C4B00:;
    v0 = (s32) ((u32) a0 + (u32) a1);
    v0 = (*(volatile u8 *) (u32) v0);
    v0 = v0 & 0x1f;
    if (v1 != v0) { a1 = (s32) ((u32) a1 + 0x1U); goto L_002C4B1C; }
    s1 = a1 & 0xff; goto L_002C4ACC;
L_002C4B1C:;
    v0 = a1 < 11;
    if (v0 != 0) goto L_002C4B00;
    goto L_002C4ACC;
L_002C4B30:;
    return v0;
}
