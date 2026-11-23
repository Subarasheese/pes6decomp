/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001BC240(s32, s32, s32, s32);
void func_003632F0(s32);

void func_00363870(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;
    s64 frame[34];
    s32 sp = (s32) (u32) frame;

    a0 = (s32) ((u32) sp + 0x10U); func_003632F0(a0);
    v1 = (*(volatile s8 *) (u32) (sp + 54));
    if (v1 == 0) { v1 = (*(volatile s8 *) (u32) (sp + 56)); goto L_003638A0; }
    a0 = 0;
    a1 = 0;
    a2 = 2; func_001BC240(a0, a1, a2, a3);
    v1 = (*(volatile s8 *) (u32) (sp + 56));
L_003638A0:;
    if (v1 == 0) { v1 = (*(volatile s8 *) (u32) (sp + 53)); goto L_003638BC; }
    a0 = 0;
    a1 = 1;
    a2 = 2; func_001BC240(a0, a1, a2, a3);
    v1 = (*(volatile s8 *) (u32) (sp + 53));
L_003638BC:;
    if (v1 == 0) { v1 = (*(volatile s8 *) (u32) (sp + 55)); goto L_003638D8; }
    a0 = 0;
    a1 = 3;
    a2 = 2; func_001BC240(a0, a1, a2, a3);
    v1 = (*(volatile s8 *) (u32) (sp + 55));
L_003638D8:;
    if (v1 == 0) { v1 = (*(volatile s8 *) (u32) (sp + 106)); goto L_003638F4; }
    a1 = 2;
    a0 = 0;
    a2 = a1; func_001BC240(a0, a1, a2, a3);
    v1 = (*(volatile s8 *) (u32) (sp + 106));
L_003638F4:;
    if (v1 == 0) { v1 = (*(volatile s8 *) (u32) (sp + 83)); goto L_00363910; }
    a0 = 0;
    a1 = 9;
    a2 = 2; func_001BC240(a0, a1, a2, a3);
    v1 = (*(volatile s8 *) (u32) (sp + 83));
L_00363910:;
    if (v1 == 0) { v1 = (*(volatile s8 *) (u32) (sp + 97)); goto L_0036392C; }
    a0 = 0;
    a1 = 10;
    a2 = 2; func_001BC240(a0, a1, a2, a3);
    v1 = (*(volatile s8 *) (u32) (sp + 97));
L_0036392C:;
    if (v1 != 0) { a0 = 0; goto L_00363944; }
    v1 = (*(volatile s8 *) (u32) (sp + 49));
    if (v1 == 0) { v1 = (*(volatile s8 *) (u32) (sp + 85)); goto L_00363954; }
    a0 = 0;
L_00363944:;
    a1 = 7;
    a2 = 2; func_001BC240(a0, a1, a2, a3);
    v1 = (*(volatile s8 *) (u32) (sp + 85));
L_00363954:;
    if (v1 != 0) { a0 = 0; goto L_0036396C; }
    v1 = (*(volatile s8 *) (u32) (sp + 50));
    if (v1 == 0) { v1 = (*(volatile s8 *) (u32) (sp + 81)); goto L_0036397C; }
    a0 = 0;
L_0036396C:;
    a1 = 8;
    a2 = 2; func_001BC240(a0, a1, a2, a3);
    v1 = (*(volatile s8 *) (u32) (sp + 81));
L_0036397C:;
    if (v1 == 0) { v1 = (*(volatile s8 *) (u32) (sp + 103)); goto L_00363998; }
    a0 = 0;
    a1 = 11;
    a2 = 2; func_001BC240(a0, a1, a2, a3);
    v1 = (*(volatile s8 *) (u32) (sp + 103));
L_00363998:;
    if (v1 == 0) { v1 = (*(volatile s8 *) (u32) (sp + 29)); goto L_003639B4; }
    a0 = 0;
    a1 = 12;
    a2 = 2; func_001BC240(a0, a1, a2, a3);
    v1 = (*(volatile s8 *) (u32) (sp + 29));
L_003639B4:;
    if (v1 == 0) { v1 = (*(volatile s8 *) (u32) (sp + 43)); goto L_003639D0; }
    a0 = 0;
    a1 = 5;
    a2 = 2; func_001BC240(a0, a1, a2, a3);
    v1 = (*(volatile s8 *) (u32) (sp + 43));
L_003639D0:;
    if (v1 != 0) { a0 = 0; goto L_003639F4; }
    v1 = (*(volatile s8 *) (u32) (sp + 62));
    if (v1 != 0) goto L_003639F0;
    v1 = (*(volatile s8 *) (u32) (sp + 24));
    if (v1 == 0) { ; goto L_00363A04; }
L_003639F0:;
    a0 = 0;
L_003639F4:;
    a1 = 6;
    a2 = 2; func_001BC240(a0, a1, a2, a3);
L_00363A04:;
    return;
}
