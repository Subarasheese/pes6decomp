/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001B9250(s32, s32, s32, s32);
s32 func_00256DC0(s32);
void func_00256DE0(s32, s32);
s32 func_00265AC0(s32, s32, s32, s32, s32, s32, s32, s32);

void func_00265480(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, s0 = 0, s1 = 0, s2 = 0;

    s2 = 0;
    s0 = a0;
    { s32 c_ = s0 == 0; s1 = a1; if (c_) goto L_002654F8; }
    a0 = (*(volatile s32 *) (u32) s0); v0 = func_00256DC0(a0);
    a0 = v0;
    a1 = (s32) 0x260000U;
    v0 = (s32) 0x590000U;
    a1 = (s32) ((u32) a1 + 0x5920U);
    (*(volatile u32 *) (u32) (v0 + -11240)) = (u32) s1;
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v0 + -11236)) = (u32) 0; func_001B9250(a0, a1, a2, a3);
    v0 = (s32) 0x590000U;
    s1 = (*(volatile s32 *) (u32) (v0 + -11236));
    if (s1 == 0) { v0 = s2; goto L_002654FC; }
    a0 = (*(volatile s32 *) (u32) (s1 + 24)); v0 = func_00265AC0(a0, a1, a2, a3, a4, a5, a6, a7);
    { s32 c_ = s1 == 0; s2 = v0; if (c_) goto L_002654F8; }
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = s1; func_00256DE0(a0, a1);
L_002654F8:;
    v0 = s2;
L_002654FC:;
    return;
}
