/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001540C0(void);
s32 func_0017F9A0(s32, s32, s32, s32, s32);

s32 func_001D5F80(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    s0 = a0; v0 = func_001540C0();
    a2 = (s32) ((u32) sp + 0x3cU);
    a0 = (s32) ((u32) sp + 0x20U);
    (*(volatile u32 *) (u32) (sp + 56)) = (u32) v0;
    v1 = 20;
    { s32 c_ = a0 == 0; (*(volatile u32 *) (u32) a2) = (u32) v0; if (c_) goto L_001D5FC8; }
L_001D5FAC:;
    (*(volatile u8 *) (u32) a0) = (u8) 0;
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    a0 = (s32) ((u32) a0 + 0x1U);
    if (v1 != 0) goto L_001D5FAC;
L_001D5FC8:;
    a0 = (*(volatile s32 *) (u32) (gp + -23084));
    if (a0 == 0) { a0 = 0; goto L_001D5FF4; }
L_001D5FD4:;
    v1 = (*(volatile s32 *) (u32) (a0 + 8));
    if (v1 != s0) { a0 = (*(volatile s32 *) (u32) (a0 + 4)); goto L_001D5FE8; }
    goto L_001D5FF4;
L_001D5FE8:;
    if (a0 != 0) goto L_001D5FD4;
    a0 = 0;
L_001D5FF4:;
    if (a0 == 0) { v1 = (*(volatile s32 *) (u32) (sp + 56)); goto L_001D6004; }
L_001D5FFC:;
    goto L_001D6030;
L_001D6004:;
    a1 = (s32) 0x1d0000U;
    v0 = (*(volatile s32 *) (u32) a2);
    a0 = s0;
    a1 = (s32) ((u32) a1 + 0x6150U);
    a3 = 4;
    a4 = (s32) ((u32) sp + 0x20U);
    (*(volatile u32 *) (u32) (sp + 44)) = (u32) v1;
    (*(volatile u32 *) (u32) (sp + 48)) = (u32) v0; v0 = func_0017F9A0(a0, a1, a2, a3, a4);
    goto L_001D5FFC;
L_001D6030:;
    return v0;
}
