/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_0099DBA0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0;
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    a4 = (s32) 0xca0000U;
    v0 = 0;
    a4 = (s32) ((u32) a4 + 0xffffa3e0U);
    a3 = (s32) ((u32) sp + 0x0U);
    a2 = 14;
L_0099DBB8:;
    a1 = (*(volatile s32 *) (u32) a4);
    a2 = (s32) ((u32) a2 + 0xffffffffU);
    v1 = (*(volatile s32 *) (u32) (a4 + 4));
    (*(volatile u32 *) (u32) a3) = (u32) a1;
    (*(volatile u32 *) (u32) (a3 + 4)) = (u32) v1;
    a4 = (s32) ((u32) a4 + 0x8U);
    { s32 c_ = a2 > 0; a3 = (s32) ((u32) a3 + 0x8U); if (c_) goto L_0099DBB8; }
    a2 = 0;
    at = a2 < 28;
    if (at == 0) goto L_0099DC28;
    a1 = (*(volatile s32 *) (u32) a0);
    a0 = 1;
L_0099DBF0:;
    v1 = (s32) ((u32) a2 << 2);
    v1 = (s32) ((u32) v1 + (u32) sp);
    v1 = (*(volatile s32 *) (u32) v1);
    v1 = (s32) ((u32) a0 << (v1 & 31));
    v1 = a1 & v1;
    if (v1 == 0) goto L_0099DC18;
    v1 = (s32) ((u32) a0 << (a2 & 31));
    v0 = v0 | v1;
L_0099DC18:;
    a2 = (s32) ((u32) a2 + 0x1U);
    v1 = a2 < 28;
    if (v1 != 0) goto L_0099DBF0;
L_0099DC28:;
    return v0;
}
