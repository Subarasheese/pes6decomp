/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0023CFE0(s32, s32, s32, s32);

void func_00324100(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    volatile union { f32 f; s32 i; } f6 = { 0 };
    volatile union { f32 f; s32 i; } f7 = { 0 };
    volatile union { f32 f; s32 i; } f8 = { 0 };
    volatile union { f32 f; s32 i; } f9 = { 0 };
    volatile union { f32 f; s32 i; } f10 = { 0 };
    volatile union { f32 f; s32 i; } f11 = { 0 };
    s32 fcc = 0;
    f32 acc = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x3b0000U;
    v1 = (s32) 0x3b0000U;
    a2 = 0;
    f1.f = (*(volatile f32 *) (u32) (v0 + 29312));
    s0 = a0;
    f0.f = (*(volatile f32 *) (u32) (v1 + 29316));
    a0 = (s32) ((u32) sp + 0x50U);
    v0 = (s32) 0x3b0000U;
    f2.f = (*(volatile f32 *) (u32) (v0 + 29320));
    v1 = (s32) 0x3b0000U;
    (*(volatile f32 *) (u32) (sp + 32)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 36)) = f0.f;
    v0 = (s32) 0x3b0000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 29328));
    f1.f = (*(volatile f32 *) (u32) (v1 + 29324));
    (*(volatile f32 *) (u32) (sp + 40)) = f2.f;
    v0 = (s32) 0x590000U;
    a1 = (*(volatile u16 *) (u32) (v0 + 7088));
    (*(volatile f32 *) (u32) (sp + 44)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 48)) = f0.f; func_0023CFE0(a0, a1, a2, a3);
    v0 = (s32) 0x590000U;
    a0 = (s32) ((u32) sp + 0x40U);
    a1 = (*(volatile u16 *) (u32) (v0 + 7090));
    a2 = 0; func_0023CFE0(a0, a1, a2, a3);
    a1 = (s32) ((u32) sp + 0x40U);
    a0 = (s32) ((u32) sp + 0x55U);
    v1 = 5;
L_00324180:;
    v0 = (*(volatile s8 *) (u32) a1);
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    (*(volatile u8 *) (u32) a0) = (u8) v0;
    a1 = (s32) ((u32) a1 + 0x1U);
    a0 = (s32) ((u32) a0 + 0x1U);
    if (v1 > 0) goto L_00324180;
    v0 = (s32) 0x3e4c0000U;
    a5 = 0;
    v0 = v0 | 0xcccd;
    a4 = (s32) ((u32) sp + 0x48U);
    f11.f = (*(volatile f32 *) (u32) (sp + 36));
    a3 = (s32) ((u32) sp + 0x50U);
    f10.f = (*(volatile f32 *) (u32) (sp + 40));
    f9.f = (*(volatile f32 *) (u32) (sp + 44));
    f8.f = (*(volatile f32 *) (u32) (sp + 48));
    f6.f = (*(volatile f32 *) (u32) (sp + 32));
    f7.i = (s32) 0;
    f1.i = (s32) v0;
L_003241CC:;
    (*(volatile u32 *) (u32) a4) = (u32) 0;
    a5 = (s32) ((u32) a5 + 0x1U);
    f0.f = (*(volatile f32 *) (u32) a4);
    v1 = (*(volatile s8 *) (u32) a3);
    a2 = (*(volatile s8 *) (u32) (a3 + 1));
    v0 = a5 < 2;
    a1 = (*(volatile s8 *) (u32) (a3 + 2));
    acc = f7.f + f0.f;
    a0 = (*(volatile s8 *) (u32) (a3 + 3));
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    v1 = (*(volatile s8 *) (u32) (a3 + 4));
    a3 = (s32) ((u32) a3 + 0x5U);
    f0.f = acc + f6.f * f0.f;
    (*(volatile f32 *) (u32) a4) = f0.f;
    f0.i = (s32) a2;
    f5.f = (f32) f0.i;
    f0.i = (s32) a1;
    f3.f = (f32) f0.i;
    f0.i = (s32) a0;
    f2.f = (f32) f0.i;
    f4.f = (*(volatile f32 *) (u32) a4);
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    acc = f7.f + f4.f;
    f4.f = acc + f11.f * f5.f;
    acc = f7.f + f4.f;
    f3.f = acc + f10.f * f3.f;
    acc = f7.f + f3.f;
    (*(volatile f32 *) (u32) a4) = f4.f;
    f2.f = acc + f9.f * f2.f;
    (*(volatile f32 *) (u32) a4) = f3.f;
    acc = f7.f + f2.f;
    (*(volatile f32 *) (u32) a4) = f2.f;
    f0.f = acc + f8.f * f0.f;
    (*(volatile f32 *) (u32) a4) = f0.f;
    f0.f = f0.f * f1.f;
    (*(volatile f32 *) (u32) a4) = f0.f;
    { s32 c_ = v0 != 0; a4 = (s32) ((u32) a4 + 0x4U); if (c_) goto L_003241CC; }
    v0 = s0 ^ 0x1;
    v1 = (s32) ((u32) s0 << 2);
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + (u32) sp);
    v0 = (s32) ((u32) v0 + (u32) sp);
    f1.f = (*(volatile f32 *) (u32) (v0 + 72));
    f2.f = (*(volatile f32 *) (u32) (v1 + 72));
    v0 = (s32) 0x41100000U;
    f1.f = f2.f - f1.f;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) { v0 = (s32) 0x40900000U; goto L_003242C0; }
    v0 = 1; goto L_00324310;
L_003242C0:;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) { v0 = (s32) 0xc0900000U; goto L_003242DC; }
    v0 = 2; goto L_00324310;
L_003242DC:;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) { v0 = (s32) 0xc1100000U; goto L_003242F8; }
    v0 = 3; goto L_00324310;
L_003242F8:;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) { v0 = 5; goto L_00324310; }
    v0 = 4;
L_00324310:;
    return;
}
