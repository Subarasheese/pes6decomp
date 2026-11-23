/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001F8070(s32);
void func_001F84D0(s32, s32);

s32 func_001F86A0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s64 frame[132];
    s32 sp = (s32) (u32) frame;

    s0 = a1;
    a1 = (s32) ((u32) sp + 0x20U); func_001F84D0(a0, a1);
    a3 = s0;
    a2 = 0;
    a1 = (s32) ((u32) sp + 0x20U); goto L_001F8700;
L_001F86C8:;
    a0 = (*(volatile u16 *) (u32) a1); v0 = func_001F8070(a0);
    v1 = v0 & 0xffff;
    v0 = v1 & 0xff00;
    if (v0 == 0) goto L_001F86F0;
    v0 = (s32) v1 >> 8;
    (*(volatile u8 *) (u32) a3) = (u8) v0;
    a3 = (s32) ((u32) a3 + 0x1U);
L_001F86F0:;
    (*(volatile u8 *) (u32) a3) = (u8) v1;
    a3 = (s32) ((u32) a3 + 0x1U);
    a1 = (s32) ((u32) a1 + 0x2U);
    a2 = (s32) ((u32) a2 + 0x1U);
L_001F8700:;
    v0 = (s32) ((u32) sp + 0x20U);
    a0 = (s32) ((u32) v0 + 0x2U);
    v0 = (*(volatile u16 *) (u32) (sp + 32));
    { s32 c_ = v0 == 0; v1 = 0; if (c_) goto L_001F8738; }
L_001F8718:;
    v0 = (*(volatile u16 *) (u32) a0);
    v1 = (s32) ((u32) v1 + 0x1U);
    a0 = (s32) ((u32) a0 + 0x2U);
    if (v0 != 0) goto L_001F8718;
L_001F8738:;
    v0 = a2 < v1;
    if (v0 != 0) goto L_001F86C8;
    (*(volatile u8 *) (u32) a3) = (u8) 0;
    v0 = s0;
    return v0;
}
