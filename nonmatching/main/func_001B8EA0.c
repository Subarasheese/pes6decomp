/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001B8DC0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_001B9030(s32, s32, s32, s32);
s32 func_001D6E70(s32, s32, s32);
void func_001D7D60(s32, s32);
void func_001DF4F0(s32, s32);
void func_001DF820(s32, s32, s32, s32);

void func_001B8EA0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    s2 = a0;
    func_001B8DC0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (*(volatile s32 *) (u32) s2);
    a2 = (*(volatile u8 *) (u32) (s2 + 12));
    a1 = (*(volatile s32 *) (u32) (s2 + 4)); func_001B9030(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s2 + 4));
    v1 = -1;
    if (a0 != v1) goto L_001B8F58;
    v1 = (s32) 0x3a0000U;
    s0 = (s32) 0x3a0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -31692));
    s1 = (*(volatile s32 *) (u32) (s2 + 8));
    { s32 c_ = v1 == 0; s0 = (s32) ((u32) s0 + 0xffff8400U); if (c_) goto L_001B8F58; }
    if (s1 == 0) goto L_001B8F58;
    v0 = (*(volatile s32 *) (u32) (s0 + 16));
    if (v0 != 0) { a0 = (*(volatile s32 *) (u32) (v0 + 12)); goto L_001B8F44; }
    v0 = (*(volatile s32 *) (u32) (s0 + 20));
    if (v0 == 0) { a0 = (*(volatile s32 *) (u32) (s0 + 4)); goto L_001B8F30; }
    a0 = (*(volatile s32 *) (u32) (s0 + 24));
    a1 = 0;
    a2 = s1; v0 = func_001D6E70(a0, a1, a2);
    (*(volatile u32 *) (u32) (s0 + 16)) = (u32) v0; goto L_001B8F4C;
L_001B8F30:;
    a1 = 0;
    a2 = s1; v0 = func_001D6E70(a0, a1, a2);
    (*(volatile u32 *) (u32) (s0 + 16)) = (u32) v0; goto L_001B8F4C;
L_001B8F44:;
    a1 = s1; func_001DF820(a0, a1, a2, a3);
L_001B8F4C:;
    v1 = -1;
    (*(volatile u32 *) (u32) (s0 + 40)) = (u32) s1;
    (*(volatile u32 *) (u32) (s0 + 36)) = (u32) v1;
L_001B8F58:;
    v1 = (s32) 0x3a0000U;
    s0 = (s32) 0x3a0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -31692));
    s1 = (*(volatile u8 *) (u32) (s2 + 15));
    { s32 c_ = v1 == 0; s0 = (s32) ((u32) s0 + 0xffff8400U); if (c_) goto L_001B9010; }
    if (v1 == 0) goto L_001B8FC4;
    v1 = (*(volatile s32 *) (u32) (s0 + 32));
    v0 = 2;
    if (v1 == v0) { a0 = (*(volatile s32 *) (u32) s0); goto L_001B8FA8; }
    v0 = 1;
    if (v1 == v0) goto L_001B8FA4;
    if (v1 == 0) goto L_001B8FA4;
    a0 = (*(volatile s32 *) (u32) (s0 + 20)); goto L_001B8FB8;
L_001B8FA4:;
    a0 = (*(volatile s32 *) (u32) s0);
L_001B8FA8:;
    a1 = s1; func_001D7D60(a0, a1);
    (*(volatile u8 *) (u32) (s0 + 44)) = (u8) s1; goto L_001B8FC4;
L_001B8FB8:;
    a1 = s1; func_001D7D60(a0, a1);
    (*(volatile u8 *) (u32) (s0 + 44)) = (u8) s1;
L_001B8FC4:;
    s2 = (s32) 0x3a0000U;
    s3 = 0;
    s2 = (s32) ((u32) s2 + 0xffff8450U);
L_001B8FD0:;
    v0 = (*(volatile s32 *) (u32) s2);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) s0 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s1; func_001D7D60(a0, a1);
    s3 = (s32) ((u32) s3 + 0x1U);
    { s32 c_ = s3 == 0; s2 = (s32) ((u32) s2 + 0x4U); if (c_) goto L_001B8FD0; }
    v1 = (*(volatile s32 *) (u32) (s0 + 16));
    if (v1 == 0) { (*(volatile u8 *) (u32) (s0 + 47)) = (u8) s1; goto L_001B9010; }
    a0 = (*(volatile s32 *) (u32) (v1 + 12));
    a1 = s1; func_001DF4F0(a0, a1);
    (*(volatile u8 *) (u32) (s0 + 47)) = (u8) s1;
L_001B9010:;
    return;
}
