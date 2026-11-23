/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0025F830(s32);

void func_00258060(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s64 frame[6];
    s32 sp = (s32) (u32) frame;

    v1 = (s32) 0x590000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -12512));
    { s32 c_ = v1 != 0; s0 = a0; if (c_) goto L_002580BC; }
    a0 = (s32) ((u32) sp + 0x2cU); func_0025F830(a0);
    a1 = (*(volatile u8 *) (u32) (sp + 45));
    a0 = s0 & 0xff;
    at = a1 < a0;
    if (at != 0) goto L_002580A8;
    v1 = (*(volatile u8 *) (u32) (sp + 44));
    at = a0 < v1;
    if (at == 0) v1 = s0;
    a1 = v1 & 0xff;
L_002580A8:;
    v1 = (s32) 0x590000U;
    a0 = 1;
    (*(volatile u8 *) (u32) (v1 + -12483)) = (u8) a1;
    v1 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v1 + -12512)) = (u32) a0;
L_002580BC:;
    return;
}
