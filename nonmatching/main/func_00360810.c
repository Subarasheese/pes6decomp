/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001EDC80(s32, s32);
s32 func_002F96F0(s32, s32);
void func_002F9F20(s32, s32, s32, s32, s32, s32);
void func_0035F400(s32, s32, s32);

void func_00360810(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) ((u32) gp + 0xffffac5cU);
    a1 = 0;
    s2 = a0;
    s1 = a2;
    v1 = (*(volatile s32 *) (u32) (gp + -21416));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    s0 = a3; v0 = func_002F96F0(a0, a1);
    a0 = s2;
    a3 = v0;
    a4 = s1;
    a5 = s0;
    a1 = 0;
    a2 = 0; func_002F9F20(a0, a1, a2, a3, a4, a5);
    s0 = (s32) 0x3e0000U;
    s2 = 0;
    s0 = (s32) ((u32) s0 + 0x6d20U);
L_00360878:;
    v1 = (s32) ((u32) sp + 0x40U);
    { s32 c_ = v1 == 0; v0 = 16; if (c_) goto L_003608A0; }
L_00360884:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_00360884;
L_003608A0:;
    v1 = 255;
    v0 = (s32) ((u32) gp + 0xffffac5cU);
    (*(volatile u32 *) (u32) (sp + 64)) = (u32) v1;
    a1 = 0;
    (*(volatile u32 *) (u32) (sp + 68)) = (u32) v1;
    (*(volatile u32 *) (u32) (sp + 72)) = (u32) v1;
    (*(volatile u32 *) (u32) (sp + 76)) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (gp + -21416));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s1 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_003608E8;
    s1 = (*(volatile s32 *) (u32) (v0 + 12));
L_003608E8:;
    a1 = (*(volatile s32 *) (u32) s0);
    a0 = s1; v0 = func_001EDC80(a0, a1);
    a0 = v0;
    a1 = s2;
    a2 = (s32) ((u32) sp + 0x40U); func_0035F400(a0, a1, a2);
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = (u64) s2 < (u64) (s64) 2;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00360878; }
    return;
}
