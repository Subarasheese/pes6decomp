/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001B9C60(s32, s32, s32, s32);
void func_001F4B20(s32, s32, s32, s32);
void func_0023B040(s32, s32, s32, s32);
void func_0023E0E0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_0023EA10(s32, s32, s32, s32);
void func_002405A0(s32, s32, s32, s32);
void func_002DF960(s32, s32, s32, s32, s32, s32, s32, s32);
void func_002E4570(s32, s32, s32, s32);
void func_008B3040(s32, s32, s32, s32);
s32 func_008B32E0(s32, s32, s32, s32);
void func_008C1700(s32, s32, s32, s32, s32, s32, s32, s32);
void func_008C1E40(s32, s32, s32, s32, s32, s32, s32, s32);
void func_008C2350(s32, s32, s32, s32, s32, s32, s32, s32);

void func_008C0470(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;

    v0 = (s32) 0x510000U;
    s3 = a0;
    v1 = (*(volatile s32 *) (u32) (v0 + 4048));
    s0 = (s32) 0x540000U;
    v0 = 4;
    { s32 c_ = v1 != v0; s0 = (s32) ((u32) s0 + 0xffffc300U); if (c_) goto L_008C04EC; }
    v0 = (s32) 0x590000U;
    v1 = 2;
    a1 = (*(volatile u8 *) (u32) (v0 + 7177));
    if (a1 == v1) { a1 = 1; goto L_008C04E0; }
    v0 = 1;
    if (a1 == v0) { a1 = 0; goto L_008C04CC; }
    a0 = s3; goto L_008C04F0;
L_008C04CC:;
    a2 = 0;
    a3 = 3; func_008C1E40(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_008C04EC;
L_008C04E0:;
    a2 = 0;
    a3 = 3; func_008C1E40(a0, a1, a2, a3, a4, a5, a6, a7);
L_008C04EC:;
    a0 = s3;
L_008C04F0:;
    a1 = 0;
    a2 = 3; func_008C2350(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = s3;
    a1 = 0;
    a2 = 3; func_008C1700(a0, a1, a2, a3, a4, a5, a6, a7);
    s2 = 0;
    s1 = 0;
L_008C0514:;
    v0 = (*(volatile s32 *) (u32) (s3 + 11464));
    v0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_008B32E0(a0, a1, a2, a3);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 17;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_008C0514; }
    a0 = (s32) ((u32) s3 + 0x2cc8U); func_002405A0(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 + 0x14U); func_002405A0(a0, a1, a2, a3);
    a0 = 0; func_0023EA10(a0, a1, a2, a3);
    func_008B3040(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -20236)); func_001B9C60(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -20228)); func_002DF960(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (*(volatile s32 *) (u32) (gp + -20232)); func_002E4570(a0, a1, a2, a3);
    func_0023B040(a0, a1, a2, a3);
    a0 = 30; func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (s32) 0xee0000U;
    a0 = -1;
    a1 = v0 | 0x81be;
    a2 = v0 | 0x81bf;
    a3 = 0; func_001F4B20(a0, a1, a2, a3);
    return;
}
