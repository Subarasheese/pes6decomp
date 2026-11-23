/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_001D7580(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    s32 fcc = 0;
    s64 frame[2];
    s32 sp = (s32) (u32) frame;

    a2 = (s32) 0x3a0000U;
    f3.f = (*(volatile f32 *) (u32) (a2 + -27872));
    v1 = (s32) 0x3a0000U;
    f2.f = (*(volatile f32 *) (u32) (v1 + -27868));
    a3 = (s32) ((u32) sp + 0x0U);
    a2 = (s32) 0x3a0000U;
    v1 = (s32) 0x3a0000U;
    f1.f = (*(volatile f32 *) (u32) (a2 + -27864));
    f0.f = (*(volatile f32 *) (u32) (v1 + -27860));
    (*(volatile f32 *) (u32) sp) = f3.f;
    (*(volatile f32 *) (u32) (sp + 4)) = f2.f;
    (*(volatile f32 *) (u32) (sp + 8)) = f1.f;
    { s32 c_ = a0 == 0; (*(volatile f32 *) (u32) (sp + 12)) = f0.f; if (c_) goto L_001D762C; }
    if (a1 == 0) goto L_001D7624;
L_001D75C4:;
    v1 = (s32) 0x7f7f0000U;
    a2 = 0;
    v1 = v1 | 0xffff;
    f0.i = (s32) 0;
    f1.i = (s32) v1;
L_001D75D8:;
    f2.f = (*(volatile f32 *) (u32) a1);
    fcc = f2.f <= f1.f;
    if (fcc) goto L_001D75F0;
    f2.i = f1.i; goto L_001D7604;
L_001D75F0:;
    fcc = f2.f < f0.f;
    if (!fcc) goto L_001D7604;
    f2.i = f0.i; goto L_001D7604;
L_001D7604:;
    a2 = (s32) ((u32) a2 + 0x1U);
    a1 = (s32) ((u32) a1 + 0x4U);
    (*(volatile f32 *) (u32) (a0 + 92)) = f2.f;
    v1 = a2 < 4;
    { s32 c_ = v1 != 0; a0 = (s32) ((u32) a0 + 0x4U); if (c_) goto L_001D75D8; }
    goto L_001D7630;
L_001D7624:;
    a1 = a3; goto L_001D75C4;
L_001D762C:;
L_001D7630:;
    return v0;
}
