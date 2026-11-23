/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EEDF0(s32, s32, s32);

void func_0035F400(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    s3 = a0;
    s2 = a2;
    if (a1 == 0) goto L_0035F430;
    s0 = (s32) 0x3e0000U;
    s0 = (s32) ((u32) s0 + 0x6d00U); goto L_0035F438;
L_0035F430:;
    s0 = (s32) 0x3e0000U;
    s0 = (s32) ((u32) s0 + 0x6cf0U);
L_0035F438:;
    s1 = 0;
L_0035F43C:;
    v0 = (*(volatile s32 *) (u32) s0);
    a0 = s3;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) s2 + (u32) v0);
    a2 = (*(volatile u8 *) (u32) v0);
    a1 = s1; func_001EEDF0(a0, a1, a2);
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < 4;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_0035F43C; }
    return;
}
