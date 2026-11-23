/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D7A20(s32, s32, s32);
void func_001EE5D0(s32, s32);
void func_001EF860(s32, s32);
void func_001F3D80(s32, s32, s32);
void func_008BAA40(s32, s32, s32, s32);

void func_008D76B0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s32 fcc = 0;
    s64 frame[20];
    s32 sp = (s32) (u32) frame;

    s2 = a0;
    v1 = (*(volatile s32 *) (u32) (a0 + 244));
    f20.f = (*(volatile f32 *) (u32) (sp + 144));
    f21.f = (*(volatile f32 *) (u32) (sp + 148));
    { s32 c_ = v1 == 0; s1 = a1; if (c_) goto L_008D788C; }
    a0 = (*(volatile s32 *) (u32) (s2 + 276));
    { s32 c_ = a0 == 0; s0 = (*(volatile u8 *) (u32) (s2 + 34)); if (c_) goto L_008D77CC; }
    a1 = (s32) ((u32) sp + 0x50U);
    a2 = 191; v0 = func_001D7A20(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) s1);
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_008D7714; }
    f0.i = (s32) v0;
    f4.f = (f32) f0.i; goto L_008D772C;
L_008D7714:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f4.f = (f32) f0.i;
    f4.f = f4.f + f4.f;
L_008D772C:;
    v0 = (*(volatile u8 *) (u32) (s1 + 1));
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_008D7744; }
    f0.i = (s32) v0;
    f5.f = (f32) f0.i; goto L_008D775C;
L_008D7744:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f5.f = (f32) f0.i;
    f5.f = f5.f + f5.f;
L_008D775C:;
    v1 = s0 & 0xff;
    v0 = 1;
    if (v1 != v0) { f2.f = (*(volatile f32 *) (u32) (sp + 88)); goto L_008D7790; }
    v1 = (s32) 0x42400000U;
    v0 = (s32) 0x42d00000U;
    f0.i = (s32) v1;
    f4.f = f0.f - f4.f;
    f0.i = (s32) v0;
    f5.f = f0.f - f5.f;
    f2.f = (*(volatile f32 *) (u32) (sp + 88));
L_008D7790:;
    v0 = (s32) 0x3f800000U;
    f3.i = (s32) v0;
    v0 = (s32) 0x42400000U;
    f2.f = f2.f - f3.f;
    f2.f = f4.f * f2.f;
    f1.i = (s32) v0;
    f20.f = f2.f / f1.f;
    v0 = (s32) 0x42d00000U;
    f0.f = (*(volatile f32 *) (u32) (sp + 92));
    f0.f = f0.f - f3.f;
    f1.f = f5.f * f0.f;
    f0.i = (s32) v0;
    f21.f = f1.f / f0.f;
L_008D77CC:;
    a0 = (*(volatile s32 *) (u32) (s2 + 244));
    a1 = (s32) ((u32) sp + 0x80U); func_001EE5D0(a0, a1);
    (*(volatile f32 *) (u32) (sp + 128)) = f20.f;
    (*(volatile f32 *) (u32) (sp + 132)) = f21.f;
    a0 = (*(volatile s32 *) (u32) (s2 + 244));
    a1 = (s32) ((u32) sp + 0x80U); func_001EF860(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s2 + 276));
    if (a0 == 0) { ; goto L_008D7890; }
    v1 = (*(volatile s32 *) (u32) (s2 + 272));
    if (v1 == 0) goto L_008D788C;
    a1 = (s32) ((u32) sp + 0x60U);
    a2 = 191; v0 = func_001D7A20(a0, a1, a2);
    a1 = (*(volatile s32 *) (u32) (s2 + 48));
    a0 = 33;
    a2 = (s32) ((u32) sp + 0x9cU); func_008BAA40(a0, a1, a2, a3);
    f3.f = (*(volatile f32 *) (u32) (sp + 156));
    v0 = (s32) 0x41800000U;
    f2.i = (s32) v0;
    (*(volatile u32 *) (u32) (sp + 124)) = (u32) v0;
    f0.f = f21.f + f2.f;
    f3.f = (f32) f3.i;
    f1.f = (*(volatile f32 *) (u32) (sp + 108));
    (*(volatile f32 *) (u32) (sp + 112)) = f20.f;
    (*(volatile f32 *) (u32) (sp + 116)) = f21.f;
    fcc = f0.f <= f1.f;
    { s32 c_ = fcc; (*(volatile f32 *) (u32) (sp + 120)) = f3.f; if (c_) goto L_008D7858; }
    f0.f = f1.f - f2.f;
    (*(volatile f32 *) (u32) (sp + 116)) = f0.f;
L_008D7858:;
    f2.f = (*(volatile f32 *) (u32) (sp + 120));
    f0.f = (*(volatile f32 *) (u32) (sp + 112));
    f1.f = (*(volatile f32 *) (u32) (sp + 104));
    f0.f = f0.f + f2.f;
    fcc = f0.f <= f1.f;
    if (fcc) { a0 = (*(volatile s32 *) (u32) (s2 + 272)); goto L_008D7880; }
    f0.f = f1.f - f2.f;
    (*(volatile f32 *) (u32) (sp + 112)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (s2 + 272));
L_008D7880:;
    a1 = (s32) ((u32) sp + 0x70U);
    a2 = 0; func_001F3D80(a0, a1, a2);
L_008D788C:;
L_008D7890:;
    return;
}
