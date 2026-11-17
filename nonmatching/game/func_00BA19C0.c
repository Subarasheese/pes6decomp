/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0017FA00(s32, s32, s32, s32, s32);
void func_001A58F0(s32, s32);
void func_001A6630(s32);
void func_001A7250(s32, s32, s32, s32, s32, s32, s32, s32);
void func_001A9970(s32);
void func_001AB960(s32, s32);
void func_001ABA60(s32);
s32 func_00295290(void);
s32 func_00BA93D0(s32);
s32 func_00BA9430(s32);

void func_00BA19C0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;

    s4 = a0;
    v0 = (*(volatile s32 *) (u32) (a0 + 4));
    s3 = (*(volatile s32 *) (u32) v0);
    a0 = 0; v0 = func_00BA93D0(a0);
    s0 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile s32 *) (u32) (s4 + 4));
    s2 = (*(volatile s32 *) (u32) v0);
    a0 = 0; v0 = func_00BA9430(a0);
    s1 = v0;
    a0 = s2;
    a1 = 2; func_001A58F0(a0, a1);
    v0 = (*(volatile u8 *) (u32) (s2 + 1));
    if (v0 == 0) { v0 = 1; goto L_00BA1AD0; }
L_00BA1A20:;
    v0 = (*(volatile s32 *) (u32) (s4 + 4));
    v1 = 1;
    a0 = s2;
    a1 = s1;
    (*(volatile u8 *) (u32) (v0 + 44)) = (u8) v1; func_001AB960(a0, a1);
    a0 = s2; func_001ABA60(a0);
    v0 = (*(volatile u8 *) (u32) (s1 + 14));
    (*(volatile u8 *) (u32) (s2 + 505)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (s1 + 15));
    (*(volatile u8 *) (u32) (s2 + 506)) = (u8) v0; v0 = func_00295290();
    if (v0 == 0) { (*(volatile u8 *) (u32) (s2 + 511)) = (u8) 0; goto L_00BA1A64; }
    v0 = 1;
    (*(volatile u8 *) (u32) (s2 + 511)) = (u8) v0;
L_00BA1A64:;
    a0 = s3; func_001A7250(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = s3; func_001A9970(a0);
    a0 = s3; func_001A6630(a0);
    v0 = (s32) 0x3b0000U;
    a1 = (s32) 0x180000U;
    s0 = (s32) ((u32) s0 << 2);
    v0 = (s32) ((u32) v0 + 0x11f0U);
    v0 = (s32) ((u32) v0 + (u32) s0);
    a1 = (s32) ((u32) a1 + 0xffffe1d0U);
    a0 = (*(volatile s32 *) (u32) v0);
    a2 = 0;
    a3 = 0; v0 = func_0017FA00(a0, a1, a2, a3, a4);
    v0 = (s32) 0x3b0000U;
    a1 = (s32) 0x180000U;
    v0 = (s32) ((u32) v0 + 0x1210U);
    a1 = (s32) ((u32) a1 + 0xffffe1d0U);
    v0 = (s32) ((u32) v0 + (u32) s0);
    a2 = 0;
    a0 = (*(volatile s32 *) (u32) v0);
    a3 = 0; v0 = func_0017FA00(a0, a1, a2, a3, a4);
    goto L_00BA1AD8;
L_00BA1AD0:;
    (*(volatile u8 *) (u32) (s2 + 1)) = (u8) v0; goto L_00BA1A20;
L_00BA1AD8:;
    return;
}
