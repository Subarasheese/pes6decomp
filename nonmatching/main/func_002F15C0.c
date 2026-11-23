/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EE790(s32, s32);
void func_001EEAC0(s32, s32);
void func_001EF370(s32, s32);
s32 func_0020A060(s32, s32, s32, s32, s32);
void func_0020A4B0(s32, s32, s32, s32);

s32 func_002F15C0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    v0 = 2;
    s2 = a0;
    s1 = a1;
    v1 = (*(volatile u8 *) (u32) a0);
    { s32 c_ = v1 == v0; s0 = a2; if (c_) goto L_002F15F4; }
    v0 = 0; goto L_002F1670;
L_002F15F4:;
    a0 = s1;
    a1 = 1;
    a3 = (s32) ((u32) sp + 0x4cU);
    a4 = (s32) ((u32) s2 + 0x10U); v0 = func_0020A060(a0, a1, a2, a3, a4);
    if (v0 != 0) { a0 = (*(volatile s32 *) (u32) (s2 + 32)); goto L_002F164C; }
    a0 = s1;
    a1 = 1;
    a2 = s0; func_0020A4B0(a0, a1, a2, a3);
    a0 = s1;
    a2 = s0;
    a1 = 1;
    a3 = (s32) ((u32) sp + 0x4cU);
    a4 = (s32) ((u32) s2 + 0x10U); v0 = func_0020A060(a0, a1, a2, a3, a4);
    if (v0 != 0) goto L_002F1648;
    v0 = 0; goto L_002F1670;
L_002F1648:;
    a0 = (*(volatile s32 *) (u32) (s2 + 32));
L_002F164C:;
    a1 = v0; func_001EEAC0(a0, a1);
    a1 = (*(volatile s32 *) (u32) (sp + 76));
    a0 = (*(volatile s32 *) (u32) (s2 + 32)); func_001EE790(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s2 + 32));
    a1 = (s32) ((u32) s2 + 0x10U); func_001EF370(a0, a1);
    v0 = 1;
L_002F1670:;
    return v0;
}
