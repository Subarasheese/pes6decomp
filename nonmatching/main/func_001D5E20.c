/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001540C0(void);
s32 func_0017F9A0(s32, s32, s32, s32, s32);

s32 func_001D5E20(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    s0 = a0; v0 = func_001540C0();
    a2 = (s32) ((u32) sp + 0x3cU);
    a0 = (s32) ((u32) sp + 0x20U);
    (*(volatile u32 *) (u32) (sp + 56)) = (u32) v0;
    v1 = 20;
    { s32 c_ = a0 == 0; (*(volatile u32 *) (u32) a2) = (u32) v0; if (c_) goto L_001D5E68; }
L_001D5E4C:;
    (*(volatile u8 *) (u32) a0) = (u8) 0;
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    a0 = (s32) ((u32) a0 + 0x1U);
    if (v1 != 0) goto L_001D5E4C;
L_001D5E68:;
    a0 = (*(volatile s32 *) (u32) (gp + -23092));
    if (a0 == 0) { a0 = 0; goto L_001D5E94; }
L_001D5E74:;
    v1 = (*(volatile s32 *) (u32) (a0 + 8));
    if (v1 != s0) { a0 = (*(volatile s32 *) (u32) (a0 + 4)); goto L_001D5E88; }
    goto L_001D5E94;
L_001D5E88:;
    if (a0 != 0) goto L_001D5E74;
    a0 = 0;
L_001D5E94:;
    if (a0 == 0) { v0 = (*(volatile s32 *) (u32) (sp + 56)); goto L_001D5EA4; }
L_001D5E9C:;
    goto L_001D5ECC;
L_001D5EA4:;
    a1 = (s32) 0x1d0000U;
    a0 = s0;
    a1 = (s32) ((u32) a1 + 0x6130U);
    a3 = 4;
    a4 = (s32) ((u32) sp + 0x20U);
    (*(volatile u32 *) (u32) (sp + 44)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 48)) = (u32) v0; v0 = func_0017F9A0(a0, a1, a2, a3, a4);
    goto L_001D5E9C;
L_001D5ECC:;
    return v0;
}
