/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001EDC80(s32, s32);
void func_001EF900(s32, s32);
s32 func_002F9320(s32, s32);
s32 func_002F9370(s32);
s32 func_002F96F0(s32, s32);
void func_002F9DF0(s32, s32, s32, s32, s32, s32);

void func_00C79D10(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    s32 gp = 0x3ef370;

    v1 = (s32) 0xcd0000U;
    v0 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) v1 + 0xffffbeb0U);
    v0 = (s32) ((u32) v0 + 0xffffbe90U);
    s6 = a3;
    s4 = a1;
    a1 = (*(volatile s32 *) (u32) (gp + -19252));
    a0 = (s32) ((u32) a1 << 4);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + (u32) a0);
    s0 = (*(volatile s32 *) (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
    s5 = a2; v0 = func_002F9370(a0);
    s7 = v0;
    { s32 c_ = s0 <= 0; s3 = 0; if (c_) goto L_00C79E28; }
    s1 = 0;
L_00C79D88:;
    a0 = (*(volatile s32 *) (u32) (gp + -19252));
    v0 = (s32) 0xcd0000U;
    v0 = (s32) ((u32) v0 + 0xffffbe90U);
    v1 = (s32) ((u32) a0 << 4);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 0; v0 = func_002F9320(a0, a1);
    a0 = v0;
    a1 = 0; v0 = func_002F96F0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = (s32) ((u32) s4 + (u32) s3); v0 = func_001EDC80(a0, a1);
    a1 = (*(volatile s32 *) (u32) (gp + -19252));
    s2 = v0;
    v0 = (s32) 0xcd0000U;
    a4 = (s32) ((u32) s5 + (u32) s3);
    v0 = (s32) ((u32) v0 + 0xffffbe90U);
    a0 = s2;
    v1 = (s32) ((u32) a1 << 4);
    a2 = 1;
    v1 = (s32) ((u32) v1 + (u32) a1);
    a3 = s7;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) s1 + (u32) v0);
    a1 = (*(volatile s32 *) (u32) (v0 + 56));
    a5 = s6; func_002F9DF0(a0, a1, a2, a3, a4, a5);
    a0 = s2;
    a1 = 1; func_001EF900(a0, a1);
    s3 = (s32) ((u32) s3 + 0x1U);
    v1 = s3 < s0;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00C79D88; }
L_00C79E28:;
    return;
}
