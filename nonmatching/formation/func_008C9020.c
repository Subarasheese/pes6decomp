/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001E6E10(s32);
void func_008BA0D0(s32, s32);
void func_008C1030(s32, s32, s32, s32);
void func_008C1270(s32, s32, s32, s32, s32);

void func_008C9020(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    s2 = a0;
    a0 = (*(volatile s32 *) (u32) a0);
    { s32 c_ = a0 == 0; s1 = a2; if (c_) goto L_008C9098; }
    a2 = a1;
    v0 = 255;
    (*(volatile u8 *) (u32) (sp + 79)) = (u8) v0;
    a1 = 225;
    a3 = (s32) ((u32) sp + 0x4cU);
    (*(volatile u8 *) (u32) (sp + 76)) = (u8) 0;
    (*(volatile u8 *) (u32) (sp + 77)) = (u8) 0;
    (*(volatile u8 *) (u32) (sp + 78)) = (u8) 0; func_008C1030(a0, a1, a2, a3);
    a0 = 20001; v0 = func_001E6E10(a0);
    s0 = v0;
    a1 = s1;
    a0 = (s32) ((u32) sp + 0x40U); func_008BA0D0(a0, a1);
    a0 = (*(volatile s32 *) (u32) s2);
    a2 = s0;
    a1 = 228;
    a3 = (s32) ((u32) sp + 0x40U);
    a4 = 0; func_008C1270(a0, a1, a2, a3, a4);
L_008C9098:;
    return;
}
