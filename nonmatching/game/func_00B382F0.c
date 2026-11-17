/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_009B3070(s32, s32);
s32 func_009B3480(s32, s32, s32, s32, f32, f32);
void func_00B35E10(s32, s32, s32);

void func_00B382F0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 fcc = 0;
    s64 frame[6];
    s32 sp = (s32) (u32) frame;

    a1 = (s32) ((u32) sp + 0x2cU);
    a2 = (s32) ((u32) sp + 0x28U);
    s0 = a0; func_00B35E10(a0, a1, a2);
    f12.f = (*(volatile f32 *) (u32) (sp + 44));
    f13.f = (*(volatile f32 *) (u32) (sp + 40));
    a0 = (*(volatile s32 *) (u32) s0); v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    a1 = v0 & 0xffff;
    v0 = (*(volatile s32 *) (u32) s0);
    a0 = (*(volatile u16 *) (u32) (v0 + 40)); v0 = func_009B3070(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    v1 = 1;
    a0 = (*(volatile u8 *) (u32) (a0 + 12));
    if (a0 == v1) { f0.f = (*(volatile f32 *) (u32) (sp + 44)); goto L_00B383A8; }
    a0 = (*(volatile s32 *) (u32) s0);
    f0.f = (*(volatile f32 *) (u32) (a0 + 224));
    f1.i = f0.i & 0x7FFFFFFF;
    v1 = (s32) 0x46420000U;
    v1 = v1 | 0x6400;
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    if (!fcc) goto L_00B383C0;
    f0.f = (*(volatile f32 *) (u32) (a0 + 232));
    f1.i = f0.i & 0x7FFFFFFF;
    v1 = (s32) 0x45f00000U;
    v1 = v1 | 0xc800;
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    if (!fcc) goto L_00B383C0;
    f0.f = (*(volatile f32 *) (u32) (sp + 44));
    (*(volatile f32 *) (u32) (a0 + 108)) = f0.f;
    v1 = (*(volatile s32 *) (u32) s0);
    f0.f = (*(volatile f32 *) (u32) (sp + 40));
    (*(volatile f32 *) (u32) (v1 + 112)) = f0.f;
L_00B383A0:;
    goto L_00B383D0;
L_00B383A8:;
    v1 = (*(volatile s32 *) (u32) s0);
    (*(volatile f32 *) (u32) (v1 + 108)) = f0.f;
    v1 = (*(volatile s32 *) (u32) s0);
    f0.f = (*(volatile f32 *) (u32) (sp + 40));
    (*(volatile f32 *) (u32) (v1 + 112)) = f0.f; goto L_00B383A0;
L_00B383C0:;
    (*(volatile u32 *) (u32) (a0 + 108)) = (u32) 0;
    v1 = (*(volatile s32 *) (u32) s0);
    (*(volatile u32 *) (u32) (v1 + 112)) = (u32) 0; goto L_00B383A0;
L_00B383D0:;
    return;
}
