/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002211E0(void);

void func_00627140(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s64 frame[24];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x660000U;
    v1 = 33;
    a1 = (*(volatile s32 *) (u32) (v0 + -4216));
    s0 = a0;
    a0 = (s32) ((u32) sp + 0x20U);
    v0 = (*(volatile s32 *) (u32) (a1 + 296));
    v0 = (s32) ((u32) a1 + (u32) v0);
    a1 = (s32) ((u32) v0 + 0x5a4U);
L_0062716C:;
    v0 = (*(volatile s32 *) (u32) a1);
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    (*(volatile u32 *) (u32) a0) = (u32) v0;
    a1 = (s32) ((u32) a1 + 0x4U);
    a0 = (s32) ((u32) a0 + 0x4U);
    if (v1 > 0) goto L_0062716C;
    v0 = func_002211E0();
    a0 = (s32) ((u32) sp + 0xb0U);
    { s32 c_ = a0 == 0; v1 = 12; if (c_) goto L_006271B8; }
L_0062719C:;
    (*(volatile u8 *) (u32) a0) = (u8) 0;
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    a0 = (s32) ((u32) a0 + 0x1U);
    if (v1 != 0) goto L_0062719C;
L_006271B8:;
    a0 = (s32) ((u32) sp + 0x24U);
    v1 = (s32) ((u32) sp + 0x28U);
    (*(volatile u32 *) (u32) (sp + 176)) = (u32) a0;
    (*(volatile u32 *) (u32) (sp + 180)) = (u32) v1;
    a0 = (s32) ((u32) sp + 0x2cU);
    v1 = 1;
    (*(volatile u32 *) (u32) (sp + 184)) = (u32) a0;
    return;
}
