/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001DC900(s32);
s32 func_001EE890(s32, s32);
s32 func_001EEAC0(s32, s32);
s32 func_001EF370(s32, s32);
s32 func_001EF900(s32, s32);

s32 func_001B4F60(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    union { f32 f; s32 i; } f4 = { 0 };
    union { f32 f; s32 i; } f5 = { 0 };
    union { f32 f; s32 i; } f6 = { 0 };
    s32 fcc = 0;
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    s1 = a0;
    { s32 c_ = s1 == 0; s0 = a2; if (c_) goto L_001B5244; }
    if (s0 == 0) { ; goto L_001B5248; }
    v0 = (*(volatile u16 *) (u32) (s0 + 20));
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_001B4F9C; }
    f0.i = (s32) v0;
    f0.f = (f32) f0.i; goto L_001B4FB4;
L_001B4F9C:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f0.f + f0.f;
L_001B4FB4:;
    v0 = (*(volatile u16 *) (u32) (s0 + 22));
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_001B4FCC; }
    f1.i = (s32) v0;
    f5.f = (f32) f1.i; goto L_001B4FE4;
L_001B4FCC:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f1.i = (s32) v1;
    f5.f = (f32) f1.i;
    f5.f = f5.f + f5.f;
L_001B4FE4:;
    v1 = (s32) ((u32) sp + 0x30U);
    { s32 c_ = v1 == 0; v0 = 16; if (c_) goto L_001B500C; }
L_001B4FF0:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_001B4FF0;
L_001B500C:;
    if (a1 == 0) { f2.f = (*(volatile f32 *) (u32) (sp + 56)); goto L_001B5038; }
    f1.f = (*(volatile f32 *) (u32) a1);
    (*(volatile f32 *) (u32) (sp + 48)) = f1.f;
    f1.f = (*(volatile f32 *) (u32) (a1 + 4));
    (*(volatile f32 *) (u32) (sp + 52)) = f1.f;
    f1.f = (*(volatile f32 *) (u32) (a1 + 8));
    (*(volatile f32 *) (u32) (sp + 56)) = f1.f;
    f1.f = (*(volatile f32 *) (u32) (a1 + 12));
    (*(volatile f32 *) (u32) (sp + 60)) = f1.f;
    f2.f = (*(volatile f32 *) (u32) (sp + 56));
L_001B5038:;
    f1.i = (s32) 0;
    fcc = f1.f == f2.f;
    if (!fcc) goto L_001B5054;
    f4.f = (*(volatile f32 *) (u32) (sp + 60)); goto L_001B506C;
L_001B5054:;
    fcc = f0.f < f2.f;
    if (!fcc) { f0.i = f2.i; goto L_001B5068; }
    goto L_001B5068;
L_001B5068:;
    f4.f = (*(volatile f32 *) (u32) (sp + 60));
L_001B506C:;
    f1.i = (s32) 0;
    fcc = f1.f == f4.f;
    if (!fcc) goto L_001B5088;
    goto L_001B509C;
L_001B5088:;
    fcc = f5.f < f4.f;
    if (!fcc) { f5.i = f4.i; goto L_001B509C; }
    goto L_001B509C;
L_001B509C:;
    f1.i = (s32) 0;
    fcc = f1.f == f2.f;
    if (!fcc) goto L_001B50B4;
    f2.i = f0.i;
L_001B50B4:;
    f1.i = (s32) 0;
    fcc = f1.f == f4.f;
    if (!fcc) goto L_001B50CC;
    f4.i = f5.i;
L_001B50CC:;
    at = (u64) a3 < (u64) (s64) 6;
    if (at == 0) { f6.f = (*(volatile f32 *) (u32) (sp + 48)); goto L_001B5164; }
    v1 = (s32) 0x3d0000U;
    v0 = (s32) ((u32) a3 << 2);
    v1 = (s32) ((u32) v1 + 0x1390U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x1b50f4U) goto L_001B50F4; if (t_ == 0x1b5100U) goto L_001B5100; if (t_ == 0x1b510cU) goto L_001B510C; if (t_ == 0x1b5130U) goto L_001B5130; if (t_ == 0x1b5138U) goto L_001B5138; if (t_ == 0x1b5148U) goto L_001B5148; }
L_001B50F4:;
    f6.f = (*(volatile f32 *) (u32) (sp + 48));
    goto L_001B5164;
L_001B5100:;
    f1.f = (*(volatile f32 *) (u32) (sp + 48));
    f6.f = f1.f - f0.f; goto L_001B5164;
L_001B510C:;
    v0 = (s32) 0x40000000U;
    f1.i = (s32) v0;
    f1.f = f0.f / f1.f;
    f2.f = (*(volatile f32 *) (u32) (sp + 48));
    f6.f = f2.f - f1.f; goto L_001B5164;
L_001B5130:;
    f6.f = (*(volatile f32 *) (u32) (sp + 48)); goto L_001B5164;
L_001B5138:;
    f1.f = (*(volatile f32 *) (u32) (sp + 48));
    f1.f = f1.f + f2.f;
    f6.f = f1.f - f0.f; goto L_001B5164;
L_001B5148:;
    f3.f = f2.f - f0.f;
    v0 = (s32) 0x40000000U;
    f2.i = (s32) v0;
    f2.f = f3.f / f2.f;
    f1.f = (*(volatile f32 *) (u32) (sp + 48));
    f6.f = f1.f + f2.f;
L_001B5164:;
    at = (u64) a4 < (u64) (s64) 6;
    if (at == 0) { f1.f = (*(volatile f32 *) (u32) (sp + 52)); goto L_001B51FC; }
    v1 = (s32) 0x3d0000U;
    v0 = (s32) ((u32) a4 << 2);
    v1 = (s32) ((u32) v1 + 0x1370U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x1b518cU) goto L_001B518C; if (t_ == 0x1b5198U) goto L_001B5198; if (t_ == 0x1b51a4U) goto L_001B51A4; if (t_ == 0x1b51c8U) goto L_001B51C8; if (t_ == 0x1b51d0U) goto L_001B51D0; if (t_ == 0x1b51e0U) goto L_001B51E0; }
L_001B518C:;
    f1.f = (*(volatile f32 *) (u32) (sp + 52));
    goto L_001B51FC;
L_001B5198:;
    f1.f = (*(volatile f32 *) (u32) (sp + 52));
    f1.f = f1.f - f5.f; goto L_001B51FC;
L_001B51A4:;
    v0 = (s32) 0x40000000U;
    f1.i = (s32) v0;
    f1.f = f5.f / f1.f;
    f2.f = (*(volatile f32 *) (u32) (sp + 52));
    f1.f = f2.f - f1.f; goto L_001B51FC;
L_001B51C8:;
    f1.f = (*(volatile f32 *) (u32) (sp + 52)); goto L_001B51FC;
L_001B51D0:;
    f1.f = (*(volatile f32 *) (u32) (sp + 52));
    f1.f = f1.f + f4.f;
    f1.f = f1.f - f5.f; goto L_001B51FC;
L_001B51E0:;
    f3.f = f4.f - f5.f;
    v0 = (s32) 0x40000000U;
    f2.i = (s32) v0;
    f2.f = f3.f / f2.f;
    f1.f = (*(volatile f32 *) (u32) (sp + 52));
    f1.f = f1.f + f2.f;
L_001B51FC:;
    (*(volatile f32 *) (u32) (sp + 48)) = f6.f;
    a0 = s1;
    (*(volatile f32 *) (u32) (sp + 52)) = f1.f;
    a1 = (s32) ((u32) sp + 0x30U);
    (*(volatile f32 *) (u32) (sp + 56)) = f0.f;
    (*(volatile f32 *) (u32) (sp + 60)) = f5.f; v0 = func_001EF370(a0, a1);
    a0 = s0; v0 = func_001DC900(a0);
    a1 = v0;
    a0 = s1; v0 = func_001EEAC0(a0, a1);
    a1 = (s32) ((u32) s0 + 0x1cU);
    a0 = s1; v0 = func_001EE890(a0, a1);
    a0 = s1;
    a1 = 1; v0 = func_001EF900(a0, a1);
L_001B5244:;
L_001B5248:;
    return v0;
}
