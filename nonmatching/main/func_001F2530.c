/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_001F2530(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    union { f32 f; s32 i; } f4 = { 0 };
    union { f32 f; s32 i; } f5 = { 0 };
    s32 fcc = 0;
    s64 frame[4];
    s32 sp = (s32) (u32) frame;

    v1 = (s32) 0x3a0000U;
    f1.f = (*(volatile f32 *) (u32) (v1 + -27584));
    v1 = (s32) 0x3a0000U;
    f5.f = (*(volatile f32 *) (u32) (v1 + -27580));
    (*(volatile f32 *) (u32) sp) = f1.f;
    v1 = (s32) 0x3a0000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + -27576));
    (*(volatile f32 *) (u32) (sp + 4)) = f5.f;
    v1 = (s32) 0x3a0000U;
    f4.f = (*(volatile f32 *) (u32) (v1 + -27572));
    (*(volatile f32 *) (u32) (sp + 8)) = f0.f;
    v1 = (s32) 0x3a0000U;
    f3.f = (*(volatile f32 *) (u32) (v1 + -27568));
    (*(volatile f32 *) (u32) (sp + 12)) = f4.f;
    v1 = (s32) 0x3a0000U;
    f2.f = (*(volatile f32 *) (u32) (v1 + -27564));
    (*(volatile f32 *) (u32) (sp + 16)) = f3.f;
    v1 = (s32) 0x3a0000U;
    f1.f = (*(volatile f32 *) (u32) (v1 + -27560));
    (*(volatile f32 *) (u32) (sp + 20)) = f2.f;
    v1 = (s32) 0x3a0000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + -27556));
    (*(volatile f32 *) (u32) (sp + 24)) = f1.f;
    { s32 c_ = a0 == 0; (*(volatile f32 *) (u32) (sp + 28)) = f0.f; if (c_) goto L_001F268C; }
    if (a2 == 0) goto L_001F268C;
    a3 = a1 & 0xff;
    at = a3 < 2;
    if (at == 0) goto L_001F268C;
    f0.f = (*(volatile f32 *) (u32) a2);
    v1 = (s32) 0x7f7f0000U;
    v1 = v1 | 0xffff;
    f1.i = (s32) v1;
    fcc = f0.f <= f1.f;
    { s32 c_ = !fcc; a4 = (*(volatile u8 *) (u32) (a0 + 72)); if (c_) goto L_001F2600; }
    a3 = (s32) ((u32) a3 << 4);
    v1 = a4 & 0xff;
    a3 = (s32) ((u32) a3 + (u32) sp);
    v1 = (s32) ((u32) v1 << 3);
    v1 = (s32) ((u32) v1 + (u32) a3);
    f1.f = (*(volatile f32 *) (u32) v1);
    fcc = f0.f < f1.f;
    if (!fcc) goto L_001F25FC;
    goto L_001F2600;
L_001F25FC:;
    f1.i = f0.i;
L_001F2600:;
    (*(volatile f32 *) (u32) a2) = f1.f;
    v1 = (s32) 0x7f7f0000U;
    f0.f = (*(volatile f32 *) (u32) (a2 + 4));
    v1 = v1 | 0xffff;
    f1.i = (s32) v1;
    fcc = f0.f <= f1.f;
    if (!fcc) goto L_001F2658;
    a3 = a1 & 0xff;
    v1 = a4 & 0xff;
    a3 = (s32) ((u32) a3 << 4);
    v1 = (s32) ((u32) v1 << 3);
    a3 = (s32) ((u32) a3 + (u32) sp);
    v1 = (s32) ((u32) v1 + (u32) a3);
    f1.f = (*(volatile f32 *) (u32) (v1 + 4));
    fcc = f0.f < f1.f;
    if (!fcc) goto L_001F2654;
    goto L_001F2658;
L_001F2654:;
    f1.i = f0.i;
L_001F2658:;
    (*(volatile f32 *) (u32) (a2 + 4)) = f1.f;
    a1 = a1 & 0xff;
    f1.f = (*(volatile f32 *) (u32) a2);
    v1 = (s32) ((u32) a1 << 4);
    f0.f = (*(volatile f32 *) (u32) (a2 + 4));
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile f32 *) (u32) (v1 + 80)) = f1.f;
    (*(volatile f32 *) (u32) (v1 + 84)) = f0.f;
    v1 = (*(volatile u8 *) (u32) (a0 + 1));
    v1 = v1 | 0x1;
    (*(volatile u8 *) (u32) (a0 + 1)) = (u8) v1;
L_001F268C:;
    return v0;
}
