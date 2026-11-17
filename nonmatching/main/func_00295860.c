/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_0027B880(s64, s64, s64, s64);
s64 func_00297500(s64, s64);

s64 func_00295860(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    u64 qh_v0 = 0;
    u64 qh_v1 = 0;
    s64 frame[50];
    s64 sp = (s32) (u32) frame;

    a3 = (s32) 0x3b0000U;
    a3 = (s32) ((u32) a3 + 0xffffbb80U);
    a2 = (s32) ((u32) sp + 0x30U);
    a1 = 11;
L_00295880:;
    { u32 a_ = (u32) (a3 + 0) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    a1 = (s32) ((u32) a1 + 0xffffffffU);
    { u32 a_ = (u32) (a3 + 16) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (a2 + 0) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    { u32 a_ = (u32) (a2 + 16) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    a3 = (s32) ((u32) a3 + 0x20U);
    { s32 c_ = a1 > 0; a2 = (s32) ((u32) a2 + 0x20U); if (c_) goto L_00295880; }
    s0 = (s32) 0x5a0000U;
    (*(volatile u32 *) (u32) (sp + 52)) = (u32) a0;
    s1 = 0;
    (*(volatile u32 *) (u32) (sp + 84)) = (u32) a0;
    s0 = (s32) ((u32) s0 + 0x24c0U);
    (*(volatile u32 *) (u32) (sp + 116)) = (u32) a0;
    (*(volatile u32 *) (u32) (sp + 148)) = (u32) a0;
    (*(volatile u32 *) (u32) (sp + 180)) = (u32) a0;
    (*(volatile u32 *) (u32) (sp + 212)) = (u32) a0;
    (*(volatile u32 *) (u32) (sp + 244)) = (u32) a0;
    (*(volatile u32 *) (u32) (sp + 276)) = (u32) a0;
    (*(volatile u32 *) (u32) (sp + 308)) = (u32) a0;
    (*(volatile u32 *) (u32) (sp + 340)) = (u32) a0;
L_002958D4:;
    a0 = (*(volatile s32 *) (u32) s0);
    if (a0 == 0) goto L_002958F0;
    v0 = func_0027B880(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) s0) = (u32) 0;
L_002958F0:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 28;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x60U); if (c_) goto L_002958D4; }
    a0 = (s32) 0x5a0000U;
    a1 = (s32) ((u32) sp + 0x30U);
    a0 = (s32) ((u32) a0 + 0x24c0U); v0 = func_00297500(a0, a1);
    return v0;
}
