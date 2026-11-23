/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001F84D0(s32, s32);
s32 func_00225160(s32);
s32 func_00225280(s32);
s32 func_00225520(s32);
s32 func_002260F0(s32);
void memcpy(s32, s32, s32);

void func_0094BA40(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 frame[138];
    s32 sp = (s32) (u32) frame;

    { s32 c_ = a0 == 0; s1 = a1; if (c_) goto L_0094BAD4; }
    v1 = (s32) ((u32) a0 + 0xffffffffU);
    v0 = (s32) 0x960000U;
    v0 = (s32) ((u32) v0 + 0x7f20U);
    v1 = (s32) ((u32) v1 << 7);
    a0 = s1 & 0xff;
    s0 = (s32) ((u32) v0 + (u32) v1); v0 = func_00225160(a0);
    a1 = v0;
    a0 = (s32) ((u32) s0 + 0x24cU);
    a2 = 24; memcpy(a0, a1, a2);
    a0 = s1 & 0xff; v0 = func_00225280(a0);
    a1 = v0;
    a0 = (s32) ((u32) s0 + 0x264U);
    a2 = 54; memcpy(a0, a1, a2);
    a0 = s1 & 0xff; v0 = func_002260F0(a0);
    v1 = (*(volatile s8 *) (u32) (v0 + 3));
    if (v1 == 0) { ; goto L_0094BAD8; }
    a0 = s1 & 0xff; v0 = func_00225520(a0);
    a0 = v0;
    a1 = (s32) ((u32) sp + 0x30U); func_001F84D0(a0, a1);
    a0 = (s32) ((u32) s0 + 0x2a8U);
    a1 = (s32) ((u32) sp + 0x30U);
    a2 = 32; memcpy(a0, a1, a2);
L_0094BAD4:;
L_0094BAD8:;
    return;
}
