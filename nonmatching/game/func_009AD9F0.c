/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Math_Atan2Fixed(s32, s32, s32, s32);
f32 func_001CD9E0(void);
void func_002871C0(s32);

void func_009AD9F0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { 0 };
    s32 fcc = 0;
    f32 acc = 0;
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) v0 + (u32) a1);
    v0 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 + 0xffffa41cU);
    v1 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    s0 = (s32) ((u32) sp + 0x38U);
    f1.f = (*(volatile f32 *) (u32) v0);
    f0.f = (*(volatile f32 *) (u32) (a0 + 48));
    f0.f = f0.f * f1.f;
    (*(volatile f32 *) (u32) (a0 + 48)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (a0 + 52));
    f0.f = f0.f * f1.f;
    (*(volatile f32 *) (u32) (a0 + 52)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (a0 + 56));
    f0.f = f0.f * f1.f;
    (*(volatile f32 *) (u32) (a0 + 56)) = f0.f;
    f1.f = (*(volatile f32 *) (u32) (a0 + 36));
    f0.f = (*(volatile f32 *) (u32) (a0 + 48));
    f0.f = f1.f + f0.f;
    (*(volatile f32 *) (u32) (a0 + 36)) = f0.f;
    f1.f = (*(volatile f32 *) (u32) (a0 + 40));
    f0.f = (*(volatile f32 *) (u32) (a0 + 52));
    f0.f = f1.f + f0.f;
    (*(volatile f32 *) (u32) (a0 + 40)) = f0.f;
    f1.f = (*(volatile f32 *) (u32) (a0 + 44));
    f0.f = (*(volatile f32 *) (u32) (a0 + 56));
    f0.f = f1.f + f0.f;
    (*(volatile f32 *) (u32) (a0 + 44)) = f0.f;
    (*(volatile f32 *) (u32) s0) = f0.f;
    f1.f = (*(volatile f32 *) (u32) (a0 + 40));
    f0.f = (*(volatile f32 *) (u32) (a0 + 36));
    (*(volatile f32 *) (u32) (sp + 52)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 48)) = f0.f;
    a0 = (s32) ((u32) sp + 0x20U); func_002871C0(a0);
    f1.f = (*(volatile f32 *) (u32) (sp + 32));
    f0.i = (s32) 0;
    fcc = f1.f < f0.f;
    if (fcc) { f1.f = (*(volatile f32 *) (u32) (sp + 48)); goto L_009ADB20; }
L_009ADAA4:;
    s0 = (s32) ((u32) sp + 0x38U);
    v0 = (s32) 0x590000U;
    f1.f = (*(volatile f32 *) (u32) s0);
    f0.f = (*(volatile f32 *) (u32) (sp + 48));
    f2.f = (*(volatile f32 *) (u32) (v0 + 7148));
    f3.f = (*(volatile f32 *) (u32) (sp + 52));
    f1.i = f1.i ^ (s32) 0x80000000U;
    f1.i = (s32) f1.f;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.i = (s32) f0.f;
    f2.f = f3.f * f2.f;
    a0 = f1.i;
    a1 = f0.i;
    (*(volatile f32 *) (u32) (v0 + 48)) = f2.f; v0 = Pes6Math_Atan2Fixed(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -32252));
    v1 = (s32) 0x590000U;
    f0.f = (*(volatile f32 *) (u32) s0);
    f1.f = (*(volatile f32 *) (u32) (sp + 48));
    (*(volatile u16 *) (u32) (a0 + 88)) = (u16) v0;
    f2.f = (*(volatile f32 *) (u32) (v1 + 7148));
    f0.f = f0.f * f2.f;
    f1.f = f1.f * f2.f;
    acc = f0.f * f0.f;
    f12.f = acc + f1.f * f1.f; f0.f = func_001CD9E0();
    f0.i = (s32) f0.f;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    a0 = f0.i;
    (*(volatile u32 *) (u32) (v1 + 80)) = (u32) a0; goto L_009ADB44;
L_009ADB20:;
    v0 = (s32) 0xbf800000U;
    f0.f = (*(volatile f32 *) (u32) s0);
    f2.i = (s32) v0;
    f1.f = f1.f * f2.f;
    f0.f = f0.f * f2.f;
    (*(volatile f32 *) (u32) (sp + 48)) = f1.f;
    (*(volatile f32 *) (u32) s0) = f0.f; goto L_009ADAA4;
L_009ADB44:;
    return;
}
