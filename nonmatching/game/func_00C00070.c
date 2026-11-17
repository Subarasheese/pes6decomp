/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00BDBB60(f32, f32);

void func_00C00070(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 hi = 0, lo = 0;
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0xca0000U;
    f5.f = (*(volatile f32 *) (u32) (v0 + -4560));
    v0 = (s32) 0xca0000U;
    f4.f = (*(volatile f32 *) (u32) (v0 + -4556));
    (*(volatile f32 *) (u32) (sp + 80)) = f5.f;
    v0 = (s32) 0xca0000U;
    f3.f = (*(volatile f32 *) (u32) (v0 + -4552));
    (*(volatile f32 *) (u32) (sp + 84)) = f4.f;
    v0 = (s32) 0xca0000U;
    f2.f = (*(volatile f32 *) (u32) (v0 + -4548));
    (*(volatile f32 *) (u32) (sp + 88)) = f3.f;
    v0 = (s32) 0xca0000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + -4544));
    (*(volatile f32 *) (u32) (sp + 92)) = f2.f;
    v0 = (s32) 0xca0000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + -4540));
    (*(volatile f32 *) (u32) (sp + 96)) = f1.f;
    v0 = 3;
    { s32 c_ = a0 == v0; (*(volatile f32 *) (u32) (sp + 100)) = f0.f; if (c_) goto L_00C00168; }
    v0 = 4;
    if (a0 == v0) { v0 = 1; goto L_00C000E8; }
    v0 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + (u32) sp);
    v0 = (*(volatile s32 *) (u32) (v0 + 80)); goto L_00C001E0;
L_00C000E8:;
    { s32 c_ = a2 == v0; v1 = 0; if (c_) goto L_00C00100; }
    if (a2 == 0) goto L_00C00100;
    goto L_00C00104;
L_00C00100:;
    v1 = 1;
L_00C00104:;
    if (v1 == 0) goto L_00C00160;
    v1 = a3 & 0xff;
    v0 = 255;
    if (v1 == v0) { s0 = 1; goto L_00C00128; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    s0 = hi;
L_00C00128:;
    v0 = func_00BDBB60(f12.f, f13.f);
    a0 = (s32) ((u32) s0 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + (u32) s0);
    v1 = (s32) ((u32) v1 + 0xffffe5c4U);
    a0 = (s32) ((u32) a0 << 6);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s16 *) (u32) v1);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    if (v0 >= 0) goto L_00C00160;
    v0 = 5; goto L_00C001E0;
L_00C00160:;
    v0 = 4; goto L_00C001E0;
L_00C00168:;
    v0 = (s32) 0xca0000U;
    v1 = (s32) ((u32) a1 << 2);
    f2.f = (*(volatile f32 *) (u32) (v0 + -4528));
    a0 = (s32) ((u32) v1 + (u32) sp);
    v1 = (s32) 0xca0000U;
    f1.f = (*(volatile f32 *) (u32) (v1 + -4524));
    v0 = (s32) 0xca0000U;
    f5.f = (*(volatile f32 *) (u32) (v0 + -4520));
    v1 = (s32) 0xca0000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + -4516));
    (*(volatile f32 *) (u32) (sp + 32)) = f2.f;
    (*(volatile f32 *) (u32) (sp + 36)) = f1.f;
    v0 = (s32) 0xca0000U;
    f4.f = (*(volatile f32 *) (u32) (v0 + -4512));
    v1 = (s32) 0xca0000U;
    f3.f = (*(volatile f32 *) (u32) (v1 + -4508));
    (*(volatile f32 *) (u32) (sp + 44)) = f0.f;
    (*(volatile f32 *) (u32) (sp + 40)) = f5.f;
    v0 = (s32) 0xca0000U;
    f2.f = (*(volatile f32 *) (u32) (v0 + -4504));
    (*(volatile f32 *) (u32) (sp + 48)) = f4.f;
    (*(volatile f32 *) (u32) (sp + 52)) = f3.f;
    v0 = (s32) 0xca0000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + -4500));
    (*(volatile f32 *) (u32) (sp + 56)) = f2.f;
    v0 = (s32) 0xca0000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + -4496));
    (*(volatile f32 *) (u32) (sp + 60)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 64)) = f0.f;
    v0 = (*(volatile s32 *) (u32) (a0 + 32));
L_00C001E0:;
    return;
}
