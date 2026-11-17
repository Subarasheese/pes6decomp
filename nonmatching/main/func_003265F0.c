/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_003265F0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s64 frame[4];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x3b0000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 29216));
    v1 = (s32) 0x3b0000U;
    f1.f = (*(volatile f32 *) (u32) (v1 + 29220));
    a2 = (s32) ((u32) sp + 0x0U);
    v0 = (s32) 0x3b0000U;
    f2.f = (*(volatile f32 *) (u32) (v0 + 29224));
    v1 = (s32) 0x3b0000U;
    (*(volatile f32 *) (u32) sp) = f0.f;
    (*(volatile f32 *) (u32) (sp + 4)) = f1.f;
    v0 = (s32) 0x3b0000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + 29228));
    f1.f = (*(volatile f32 *) (u32) (v0 + 29232));
    (*(volatile f32 *) (u32) (sp + 8)) = f2.f;
    (*(volatile f32 *) (u32) (sp + 12)) = f0.f;
    v1 = (*(volatile u8 *) (u32) (a0 + 12));
    v0 = (s32) 0x3b0000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 29236));
    (*(volatile f32 *) (u32) (sp + 16)) = f1.f;
    v0 = (s32) 0x3b0000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + 29240));
    (*(volatile f32 *) (u32) (sp + 20)) = f0.f;
    v0 = (s32) 0x3b0000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 29244));
    (*(volatile f32 *) (u32) (sp + 24)) = f1.f;
    v0 = 1;
    { s32 c_ = v1 != v0; (*(volatile f32 *) (u32) (sp + 28)) = f0.f; if (c_) goto L_003266A8; }
    if (a1 == 0) goto L_003266AC;
    a1 = (*(volatile u16 *) (u32) (a0 + 58));
    a3 = 0;
L_00326674:;
    v0 = (*(volatile s32 *) (u32) a2);
    if (a1 != v0) { a3 = (s32) ((u32) a3 + 0x1U); goto L_0032669C; }
    v1 = (*(volatile u16 *) (u32) (a0 + 60));
    v0 = (*(volatile s32 *) (u32) (a2 + 4));
    if (v1 != v0) goto L_00326698;
    v0 = 1; goto L_003266AC;
L_00326698:;
    a3 = (s32) ((u32) a3 + 0x1U);
L_0032669C:;
    v0 = a3 < 4;
    { s32 c_ = v0 != 0; a2 = (s32) ((u32) a2 + 0x8U); if (c_) goto L_00326674; }
L_003266A8:;
    v0 = 0;
L_003266AC:;
    return v0;
}
