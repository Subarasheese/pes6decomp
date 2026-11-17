/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00C00B00(s32, s32, s32, s32);
s32 func_00C00D60(s32, s32, s32, s32);

s32 func_00C15B00(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;

    s4 = a0;
    s3 = a1;
    s2 = 0;
    if (s4 == 0) goto L_00C15B58;
    if (s3 == 0) goto L_00C15B58;
    s1 = 0;
L_00C15B38:;
    v0 = (s32) ((u32) s4 + (u32) s1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 != 0) { a0 = s1; goto L_00C15B60; }
L_00C15B48:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 46;
    if (v0 != 0) goto L_00C15B38;
L_00C15B58:;
    v0 = s2; goto L_00C15C30;
L_00C15B60:;
    s0 = 1; v0 = func_00C00D60(a0, a1, a2, a3);
    at = 0 < s2;
    a0 = v0 & 0xff;
    { s32 c_ = at == 0; a1 = 0; if (c_) goto L_00C15BB0; }
    v1 = a0 & 0xff;
L_00C15B80:;
    s0 = (u64) 0 < (u64) s0;
    if (s0 == 0) goto L_00C15B9C;
    v0 = (s32) ((u32) s3 + (u32) a1);
    v0 = (*(volatile u8 *) (u32) v0);
    s0 = v1 ^ v0;
    s0 = (u64) 0 < (u64) s0;
L_00C15B9C:;
    a1 = (s32) ((u32) a1 + 0x1U);
    v0 = a1 < s2;
    if (v0 != 0) goto L_00C15B80;
L_00C15BB0:;
    if (s0 != 0) goto L_00C15C20;
L_00C15BB8:;
    a0 = s1;
    s0 = 1; v0 = func_00C00B00(a0, a1, a2, a3);
    at = 0 < s2;
    a0 = v0 & 0xff;
    { s32 c_ = at == 0; a1 = 0; if (c_) goto L_00C15C08; }
    v1 = a0 & 0xff;
L_00C15BD8:;
    s0 = (u64) 0 < (u64) s0;
    if (s0 == 0) goto L_00C15BF4;
    v0 = (s32) ((u32) s3 + (u32) a1);
    v0 = (*(volatile u8 *) (u32) v0);
    s0 = v1 ^ v0;
    s0 = (u64) 0 < (u64) s0;
L_00C15BF4:;
    a1 = (s32) ((u32) a1 + 0x1U);
    v0 = a1 < s2;
    if (v0 != 0) goto L_00C15BD8;
L_00C15C08:;
    if (s0 == 0) goto L_00C15B48;
    v0 = (s32) ((u32) s3 + (u32) s2);
    (*(volatile u8 *) (u32) v0) = (u8) a0;
    s2 = (s32) ((u32) s2 + 0x1U); goto L_00C15B48;
L_00C15C20:;
    v0 = (s32) ((u32) s3 + (u32) s2);
    (*(volatile u8 *) (u32) v0) = (u8) a0;
    s2 = (s32) ((u32) s2 + 0x1U); goto L_00C15BB8;
L_00C15C30:;
    return v0;
}
