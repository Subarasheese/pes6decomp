/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001DF460(s32, s32);
void func_002DF0A0(s32, s32);
void func_008C1360(s32, s32, s32);
s32 func_008C5050(s32);

void func_008E8F10(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    s3 = a0;
    s2 = a1;
    v1 = s2 & 0xff;
    at = v1 < 12;
    if (at == 0) goto L_008E905C;
    s1 = 0;
    s0 = s3;
L_008E8F44:;
    v1 = (*(volatile s32 *) (u32) (s0 + 60));
    if (v1 == 0) goto L_008E8FC8;
    v0 = (*(volatile u8 *) (u32) s3);
    if (v0 != s1) goto L_008E8F80;
    a0 = 4; v0 = func_008C5050(a0);
    v1 = (*(volatile s32 *) (u32) (s0 + 60));
    a0 = (*(volatile s32 *) (u32) (v1 + 12));
    a1 = v0; func_001DF460(a0, a1);
    goto L_008E8FC8;
L_008E8F80:;
    v0 = (s32) ((u32) s3 + (u32) s1);
    v0 = (*(volatile u8 *) (u32) (v0 + 1));
    if (v0 == 0) goto L_008E8FB0;
    a0 = 3; v0 = func_008C5050(a0);
    v1 = (*(volatile s32 *) (u32) (s0 + 60));
    a0 = (*(volatile s32 *) (u32) (v1 + 12));
    a1 = v0; func_001DF460(a0, a1);
    goto L_008E8FC8;
L_008E8FB0:;
    a0 = 1; v0 = func_008C5050(a0);
    v1 = (*(volatile s32 *) (u32) (s0 + 60));
    a0 = (*(volatile s32 *) (u32) (v1 + 12));
    a1 = v0; func_001DF460(a0, a1);
L_008E8FC8:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < 12;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_008E8F44; }
    v1 = (*(volatile s32 *) (u32) (s3 + 48));
    if (v1 == 0) { ; goto L_008E9060; }
    v1 = (*(volatile s32 *) (u32) (s3 + 52));
    if (v1 != 0) { a0 = (*(volatile s32 *) (u32) (s3 + 56)); goto L_008E8FFC; }
    goto L_008E905C;
    a0 = (*(volatile s32 *) (u32) (s3 + 56));
L_008E8FFC:;
    if (a0 == 0) goto L_008E905C;
    v1 = s2 & 0xff;
    v0 = (s32) 0x8f0000U;
    v0 = (s32) ((u32) v0 + 0xffffc670U);
    s0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) s0);
    a1 = (*(volatile s32 *) (u32) v0);
    a2 = (s32) ((u32) sp + 0x50U); func_008C1360(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s3 + 52));
    a1 = (s32) ((u32) sp + 0x50U); func_002DF0A0(a0, a1);
    v1 = (s32) ((u32) s0 + (u32) s3);
    s0 = (s32) ((u32) v1 + 0x3cU);
    v1 = (*(volatile s32 *) (u32) (v1 + 60));
    if (v1 == 0) goto L_008E905C;
    a0 = 0; v0 = func_008C5050(a0);
    v1 = (*(volatile s32 *) (u32) s0);
    a0 = (*(volatile s32 *) (u32) (v1 + 12));
    a1 = v0; func_001DF460(a0, a1);
L_008E905C:;
L_008E9060:;
    return;
}
