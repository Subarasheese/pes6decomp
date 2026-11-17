/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001540C0(void);
s32 func_0017F9A0(s32, s32, s32, s32, s32);
s32 func_001E7370(s32, s32);

s32 func_001E7610(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s64 frame[24];
    s32 sp = (s32) (u32) frame;

    s0 = a0; v0 = func_001540C0();
    a0 = (s32) ((u32) sp + 0xb4U);
    a2 = (s32) ((u32) sp + 0xb8U);
    (*(volatile u32 *) (u32) (sp + 176)) = (u32) v0;
    v1 = (s32) ((u32) sp + 0x60U);
    (*(volatile u32 *) (u32) a0) = (u32) v0;
    (*(volatile u32 *) (u32) a2) = (u32) v0;
    { s32 c_ = v1 == 0; v0 = 20; if (c_) goto L_001E7660; }
L_001E7644:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_001E7644;
L_001E7660:;
    v0 = (s32) ((u32) sp + 0xb0U);
    if (v0 == 0) goto L_001E769C;
    v0 = (*(volatile s32 *) (u32) a0);
    a1 = (s32) 0x1e0000U;
    v1 = (*(volatile s32 *) (u32) (sp + 176));
    a1 = (s32) ((u32) a1 + 0x7980U);
    a3 = 4;
    a4 = (s32) ((u32) sp + 0x60U);
    a0 = s0;
    (*(volatile u32 *) (u32) (sp + 112)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 108)) = (u32) v1; v0 = func_0017F9A0(a0, a1, a2, a3, a4);
L_001E7694:;
    goto L_001E77C4;
L_001E769C:;
    v0 = func_001540C0();
    a0 = (s32) ((u32) sp + 0xa4U);
    a2 = (s32) ((u32) sp + 0xa8U);
    (*(volatile u32 *) (u32) (sp + 160)) = (u32) v0;
    v1 = (s32) ((u32) sp + 0x40U);
    (*(volatile u32 *) (u32) a0) = (u32) v0;
    (*(volatile u32 *) (u32) a2) = (u32) v0;
    { s32 c_ = v1 == 0; v0 = 20; if (c_) goto L_001E76E0; }
L_001E76C4:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_001E76C4;
L_001E76E0:;
    v0 = (s32) ((u32) sp + 0xa0U);
    if (v0 == 0) goto L_001E771C;
    v0 = (*(volatile s32 *) (u32) a0);
    a1 = (s32) 0x1e0000U;
    v1 = (*(volatile s32 *) (u32) (sp + 160));
    a1 = (s32) ((u32) a1 + 0x7980U);
    a3 = 4;
    a4 = (s32) ((u32) sp + 0x40U);
    a0 = s0;
    (*(volatile u32 *) (u32) (sp + 80)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 76)) = (u32) v1; v0 = func_0017F9A0(a0, a1, a2, a3, a4);
    goto L_001E7694;
L_001E771C:;
    v0 = func_001540C0();
    a0 = (s32) ((u32) sp + 0x94U);
    a2 = (s32) ((u32) sp + 0x98U);
    (*(volatile u32 *) (u32) (sp + 144)) = (u32) v0;
    v1 = (s32) ((u32) sp + 0x20U);
    (*(volatile u32 *) (u32) a0) = (u32) v0;
    (*(volatile u32 *) (u32) a2) = (u32) v0;
    { s32 c_ = v1 == 0; v0 = 20; if (c_) goto L_001E7760; }
L_001E7744:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_001E7744;
L_001E7760:;
    v0 = (s32) ((u32) sp + 0x90U);
    if (v0 == 0) goto L_001E779C;
    v0 = (*(volatile s32 *) (u32) a0);
    a1 = (s32) 0x1e0000U;
    v1 = (*(volatile s32 *) (u32) (sp + 144));
    a1 = (s32) ((u32) a1 + 0x7980U);
    a3 = 4;
    a4 = (s32) ((u32) sp + 0x20U);
    a0 = s0;
    (*(volatile u32 *) (u32) (sp + 48)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 44)) = (u32) v1; v0 = func_0017F9A0(a0, a1, a2, a3, a4);
    goto L_001E7694;
L_001E779C:;
    v0 = func_001540C0();
    a0 = s0;
    (*(volatile u32 *) (u32) (sp + 128)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 132)) = (u32) v0;
    a1 = (s32) ((u32) sp + 0x80U);
    (*(volatile u32 *) (u32) (sp + 136)) = (u32) v0; v0 = func_001E7370(a0, a1);
    goto L_001E7694;
L_001E77C4:;
    return v0;
}
