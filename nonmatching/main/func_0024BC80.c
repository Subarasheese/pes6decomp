/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00363D90(s64, s64);
void func_00363DF0(s64, s64);
void func_008B31A0(s64, s64, s64, s64);
void func_008B31E0(s64, s64, s64, s64);
s64 func_008B32E0(s64, s64, s64, s64);

void func_0024BC80(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 gp = 0x3ef370;

    a1 = (s32) 0x3b0000U;
    a1 = (s32) ((u32) a1 + 0xffffa202U);
    s3 = (s64) ((u64) a0 << 56);
    s3 = s3 >> 56;
    v0 = (s32) ((u32) s3 << 1);
    v1 = (s32) ((u32) s3 << 2);
    v0 = (s32) ((u32) v0 + (u32) s3);
    a0 = (s32) ((u32) v0 << 2);
    v0 = (s32) 0x540000U;
    v0 = (s32) ((u32) v0 + 0xffffcd50U);
    s1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) a0 + (u32) s3);
    s0 = (s32) ((u32) v0 << 2);
    a0 = (*(volatile s32 *) (u32) s1);
    s2 = (s32) ((u32) a1 + (u32) s0);
    v0 = (*(volatile s8 *) (u32) s2);
    a1 = (s32) ((u32) v0 + 0xfffffffeU); func_00363DF0(a0, a1);
    v0 = (s32) 0x3b0000U;
    v0 = (s32) ((u32) v0 + 0xffffa201U);
    v0 = (s32) ((u32) v0 + (u32) s0);
    v1 = (*(volatile s8 *) (u32) v0);
    if (v1 <= 0) { v1 = (s32) ((u32) 0 - (u32) v1); goto L_0024BCF8; }
L_0024BCF8:;
    v0 = 2;
    if (v1 == v0) { v0 = (*(volatile s32 *) (u32) (gp + -22616)); goto L_0024BD1C; }
    v0 = 1;
    if (v1 == v0) goto L_0024BD18;
    v0 = (*(volatile s32 *) (u32) (gp + -22616)); goto L_0024BDC8;
L_0024BD18:;
    v0 = (*(volatile s32 *) (u32) (gp + -22616));
L_0024BD1C:;
    s0 = (s32) ((u32) s3 << 2);
    v0 = (s32) ((u32) s0 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 220));
    a1 = 1; func_008B31A0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -22616));
    v0 = (s32) ((u32) s0 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 256)); v0 = func_008B32E0(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (gp + -22616));
    v1 = (s32) ((u32) s0 + (u32) v1);
    (*(volatile u32 *) (u32) (v1 + 256)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (gp + -22616));
    v0 = (s32) ((u32) s0 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 256));
    a1 = 0; func_008B31A0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) s1);
    a1 = 1; func_00363D90(a0, a1);
    v0 = (*(volatile s8 *) (u32) s2);
    v0 = v0 < 3;
    if (v0 != 0) { a0 = (*(volatile s32 *) (u32) s1); goto L_0024BDA4; }
    a0 = (*(volatile s32 *) (u32) s1);
    a1 = 1; func_00363D90(a0, a1);
    v0 = (*(volatile s32 *) (u32) (gp + -22616));
    v0 = (s32) ((u32) s0 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 220));
    a1 = 0; func_008B31E0(a0, a1, a2, a3);
    goto L_0024BE00;
L_0024BDA4:;
    a1 = 0; func_00363D90(a0, a1);
    v0 = (*(volatile s32 *) (u32) (gp + -22616));
    v0 = (s32) ((u32) s0 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 220));
    a1 = 1; func_008B31E0(a0, a1, a2, a3);
    goto L_0024BDFC;
L_0024BDC8:;
    s0 = (s32) ((u32) s3 << 2);
    v0 = (s32) ((u32) s0 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 220));
    a1 = 0; func_008B31A0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -22616));
    v0 = (s32) ((u32) s0 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 256));
    a1 = 0; func_008B31A0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) s1);
    a1 = 0; func_00363D90(a0, a1);
L_0024BDFC:;
L_0024BE00:;
    return;
}
