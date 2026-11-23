/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0021EB50(s32, s32, s32, s32);
s32 func_00223960(s32);
s32 func_00223AE0(void);

s32 func_0021EA40(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    s3 = a0;
    s2 = a1;
    s0 = s3 & 0xffff;
    v1 = s0 < 64;
    { s32 c_ = v1 != 0; s1 = a2; if (c_) goto L_0021EA7C; }
    at = s0 < 204;
    if (at != 0) { v1 = s0 < 64; goto L_0021EA90; }
L_0021EA7C:;
    v1 = (s32) ((u32) s0 + 0xfffffedaU);
    at = (u64) v1 < (u64) (s64) 2;
    if (at == 0) { ; goto L_0021EB10; }
    v1 = s0 < 64;
L_0021EA90:;
    if (v1 != 0) { v1 = (s32) ((u32) s0 + 0xfffffedaU); goto L_0021EAD0; }
    at = s0 < 204;
    if (at == 0) goto L_0021EACC;
    v0 = func_00223AE0();
    a0 = (s32) ((u32) s0 + 0xffffffc0U);
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 3);
    s0 = (s32) ((u32) v0 + (u32) v1); goto L_0021EAE8;
L_0021EACC:;
    v1 = (s32) ((u32) s0 + 0xfffffedaU);
L_0021EAD0:;
    at = (u64) v1 < (u64) (s64) 2;
    if (at == 0) { s0 = 0; goto L_0021EAE8; }
    a0 = s3; v0 = func_00223960(a0);
    s0 = (*(volatile s32 *) (u32) v0);
L_0021EAE8:;
    a1 = 1;
    if (s1 != a1) { (*(volatile u8 *) (u32) (s0 + 80)) = (u8) s2; goto L_0021EB08; }
    a0 = s3; v0 = func_0021EB50(a0, a1, a2, a3);
    (*(volatile u8 *) (u32) (s0 + 80)) = (u8) v0;
    (*(volatile u8 *) (u32) (s0 + 82)) = (u8) 0; goto L_0021EB0C;
L_0021EB08:;
    (*(volatile u8 *) (u32) (s0 + 82)) = (u8) a1;
L_0021EB0C:;
L_0021EB10:;
    return v0;
}
