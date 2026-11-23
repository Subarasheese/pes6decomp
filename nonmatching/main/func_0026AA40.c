/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001F2530(s64, s64, s64);
void func_001F3D10(s64, s64);
void func_001F3D30(s64, s64);

void func_0026AA40(s64 a0, s64 a1, s64 a2, f32 fa12) {
    s64 v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s32 fcc = 0;
    s64 frame[10];
    s64 sp = (s32) (u32) frame;

    s0 = a0;
    { s32 c_ = s0 == 0; f20.i = f12.i; if (c_) goto L_0026AB34; }
    f0.i = (s32) 0;
    fcc = f20.f < f0.f;
    if (!fcc) { v0 = (s32) 0x3f800000U; goto L_0026AA78; }
    f20.i = f0.i; goto L_0026AA90;
L_0026AA78:;
    f0.i = (s32) v0;
    fcc = f20.f <= f0.f;
    if (fcc) { a0 = s0; goto L_0026AA94; }
    f20.i = f0.i;
L_0026AA90:;
    a0 = s0;
L_0026AA94:;
    a1 = (s32) ((u32) sp + 0x30U); func_001F3D30(a0, a1);
    f1.f = (*(volatile f32 *) (u32) (sp + 60));
    f2.f = (*(volatile f32 *) (u32) (sp + 56));
    fcc = f2.f <= f1.f;
    if (fcc) { v0 = 0; goto L_0026AAB4; }
    v0 = 1;
L_0026AAB4:;
    v0 = (s64) ((u64) v0 << 56);
    v0 = v0 >> 56;
    (*(volatile f32 *) (u32) (sp + 72)) = f2.f;
    { s32 c_ = v0 != 0; (*(volatile f32 *) (u32) (sp + 76)) = f1.f; if (c_) goto L_0026AAE4; }
    v0 = (s32) 0x41000000U;
    f0.i = (s32) v0;
    f0.f = f1.f - f0.f;
    f0.f = f0.f * f20.f;
    (*(volatile f32 *) (u32) (sp + 76)) = f0.f; goto L_0026AAFC;
L_0026AAE4:;
    v0 = (s32) 0x41000000U;
    f0.i = (s32) v0;
    f0.f = f2.f - f0.f;
    f0.f = f0.f * f20.f;
    (*(volatile f32 *) (u32) (sp + 72)) = f0.f;
L_0026AAFC:;
    a0 = s0;
    a1 = 1;
    a2 = (s32) ((u32) sp + 0x48U); func_001F2530(a0, a1, a2);
    v0 = (s32) 0x3f800000U;
    f0.i = (s32) v0;
    fcc = f20.f < f0.f;
    { s32 c_ = fcc; v1 = 1; if (c_) goto L_0026AB28; }
    v1 = 0;
L_0026AB28:;
    a1 = v1 & 0xff;
    a0 = s0; func_001F3D10(a0, a1);
L_0026AB34:;
    return;
}
