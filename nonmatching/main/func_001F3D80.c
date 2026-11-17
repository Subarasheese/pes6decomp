/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_001F3D80(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    union { f32 f; s32 i; } f4 = { 0 };
    union { f32 f; s32 i; } f5 = { 0 };
    s32 fcc = 0;
    s64 frame[6];
    s32 sp = (s32) (u32) frame;

    v1 = (s32) ((u32) sp + 0x28U);
    { s32 c_ = v1 == 0; v0 = 8; if (c_) goto L_001F3DAC; }
L_001F3D90:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_001F3D90;
L_001F3DAC:;
    if (a0 == 0) goto L_001F3ED8;
    if (a1 == 0) goto L_001F3ED8;
    f3.f = (*(volatile f32 *) (u32) a1);
    f2.f = (*(volatile f32 *) (u32) (a1 + 4));
    f1.f = (*(volatile f32 *) (u32) (a1 + 8));
    f0.f = (*(volatile f32 *) (u32) (a1 + 12));
    (*(volatile f32 *) (u32) sp) = f3.f;
    (*(volatile f32 *) (u32) (sp + 4)) = f2.f;
    (*(volatile f32 *) (u32) (sp + 8)) = f1.f;
    { s32 c_ = a2 == 0; (*(volatile f32 *) (u32) (sp + 12)) = f0.f; if (c_) goto L_001F3DF0; }
    f1.f = (*(volatile f32 *) (u32) a2);
    f0.f = (*(volatile f32 *) (u32) (a2 + 4));
    (*(volatile f32 *) (u32) (sp + 40)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 44)) = f0.f;
L_001F3DF0:;
    a1 = (s32) ((u32) sp + 0x8U);
    v0 = (s32) 0x7f7f0000U;
    f0.f = (*(volatile f32 *) (u32) a1);
    v0 = v0 | 0xffff;
    f1.i = (s32) v0;
    fcc = f0.f <= f1.f;
    if (!fcc) goto L_001F3E30;
    f1.f = (*(volatile f32 *) (u32) (sp + 40));
    fcc = f0.f < f1.f;
    if (!fcc) goto L_001F3E2C;
    goto L_001F3E30;
L_001F3E2C:;
    f1.i = f0.i;
L_001F3E30:;
    v1 = (s32) ((u32) sp + 0xcU);
    v0 = (s32) 0x7f7f0000U;
    f0.f = (*(volatile f32 *) (u32) v1);
    v0 = v0 | 0xffff;
    f5.i = (s32) v0;
    fcc = f0.f <= f5.f;
    { s32 c_ = !fcc; (*(volatile f32 *) (u32) a1) = f1.f; if (c_) goto L_001F3E70; }
    f5.f = (*(volatile f32 *) (u32) (sp + 44));
    fcc = f0.f < f5.f;
    if (!fcc) goto L_001F3E6C;
    goto L_001F3E70;
L_001F3E6C:;
    f5.i = f0.i;
L_001F3E70:;
    f4.f = (*(volatile f32 *) (u32) (a0 + 8));
    f0.f = (*(volatile f32 *) (u32) sp);
    f3.f = (*(volatile f32 *) (u32) (a0 + 12));
    f2.f = (*(volatile f32 *) (u32) (a0 + 16));
    f1.f = (*(volatile f32 *) (u32) (a0 + 20));
    (*(volatile f32 *) (u32) v1) = f5.f;
    v1 = (s32) ((u32) a0 + 0x8U);
    fcc = f4.f == f0.f;
    (*(volatile f32 *) (u32) (sp + 16)) = f4.f;
    (*(volatile f32 *) (u32) (sp + 20)) = f3.f;
    (*(volatile f32 *) (u32) (sp + 24)) = f2.f;
    { s32 c_ = fcc; (*(volatile f32 *) (u32) (sp + 28)) = f1.f; if (c_) goto L_001F3EE0; }
L_001F3EA4:;
    f3.f = (*(volatile f32 *) (u32) sp);
    v0 = 1;
    f2.f = (*(volatile f32 *) (u32) (sp + 4));
    f1.f = (*(volatile f32 *) (u32) (sp + 8));
    f0.f = (*(volatile f32 *) (u32) (sp + 12));
    (*(volatile f32 *) (u32) v1) = f3.f;
    (*(volatile f32 *) (u32) (v1 + 4)) = f2.f;
    (*(volatile f32 *) (u32) (v1 + 8)) = f1.f;
    (*(volatile f32 *) (u32) (v1 + 12)) = f0.f;
    v1 = (*(volatile u8 *) (u32) (a0 + 1));
    v1 = v1 | 0x1;
    (*(volatile u8 *) (u32) (a0 + 1)) = (u8) v1; goto L_001F3F10;
L_001F3ED8:;
    v0 = 0; goto L_001F3F10;
L_001F3EE0:;
    f0.f = (*(volatile f32 *) (u32) (sp + 4));
    fcc = f3.f == f0.f;
    if (!fcc) goto L_001F3EA4;
    f0.f = (*(volatile f32 *) (u32) a1);
    fcc = f2.f == f0.f;
    if (!fcc) goto L_001F3EA4;
    fcc = f1.f == f5.f;
    if (!fcc) goto L_001F3EA4;
    v0 = 0;
L_001F3F10:;
    return v0;
}
