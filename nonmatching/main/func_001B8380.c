/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D7D60(s32, s32);
void func_001DF4F0(s32, s32);

void func_001B8380(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    v1 = (s32) 0x3a0000U;
    s1 = a0;
    v1 = (*(volatile s32 *) (u32) (v1 + -31692));
    s0 = (s32) 0x3a0000U;
    { s32 c_ = v1 == 0; s0 = (s32) ((u32) s0 + 0xffff8400U); if (c_) goto L_001B8450; }
    if (v1 == 0) goto L_001B8404;
    v1 = (*(volatile s32 *) (u32) (s0 + 32));
    v0 = 2;
    if (v1 == v0) { a0 = (*(volatile s32 *) (u32) s0); goto L_001B83E8; }
    v0 = 1;
    if (v1 == v0) goto L_001B83E4;
    if (v1 == 0) goto L_001B83E4;
    a0 = (*(volatile s32 *) (u32) (s0 + 20)); goto L_001B83F8;
L_001B83E4:;
    a0 = (*(volatile s32 *) (u32) s0);
L_001B83E8:;
    a1 = s1; func_001D7D60(a0, a1);
    (*(volatile u8 *) (u32) (s0 + 44)) = (u8) s1; goto L_001B8404;
L_001B83F8:;
    a1 = s1; func_001D7D60(a0, a1);
    (*(volatile u8 *) (u32) (s0 + 44)) = (u8) s1;
L_001B8404:;
    s2 = (s32) 0x3a0000U;
    s3 = 0;
    s2 = (s32) ((u32) s2 + 0xffff8450U);
L_001B8410:;
    v0 = (*(volatile s32 *) (u32) s2);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) s0 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s1; func_001D7D60(a0, a1);
    s3 = (s32) ((u32) s3 + 0x1U);
    { s32 c_ = s3 == 0; s2 = (s32) ((u32) s2 + 0x4U); if (c_) goto L_001B8410; }
    v1 = (*(volatile s32 *) (u32) (s0 + 16));
    if (v1 == 0) { (*(volatile u8 *) (u32) (s0 + 47)) = (u8) s1; goto L_001B8450; }
    a0 = (*(volatile s32 *) (u32) (v1 + 12));
    a1 = s1; func_001DF4F0(a0, a1);
    (*(volatile u8 *) (u32) (s0 + 47)) = (u8) s1;
L_001B8450:;
    return;
}
