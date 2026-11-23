/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D7A20(s32, s32, s32);
void func_001F1950(s32, s32, s32, s32);
s32 func_001F1A10(s32, s32, s32, s32, s32, s32);
void func_001F3D10(s32, s32);
void func_001F3D80(s32, s32, s32);
s32 func_00292D80(s32);
s32 func_008B2AB0(s32);
void func_008BAA40(s32, s32, s32, s32);

void func_008D7090(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    s32 fcc = 0;
    s64 frame[18];
    s32 sp = (s32) (u32) frame;

    a3 = (s32) 0x8f0000U;
    a3 = (s32) ((u32) a3 + 0xffffc1b0U);
    s2 = a0;
    s1 = a2;
    a2 = (s32) ((u32) sp + 0x78U);
    a0 = 4;
L_008D70BC:;
    v1 = (*(volatile s8 *) (u32) a3);
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    v0 = (*(volatile s8 *) (u32) (a3 + 1));
    (*(volatile u8 *) (u32) a2) = (u8) v1;
    (*(volatile u8 *) (u32) (a2 + 1)) = (u8) v0;
    a3 = (s32) ((u32) a3 + 0x2U);
    { s32 c_ = a0 > 0; a2 = (s32) ((u32) a2 + 0x2U); if (c_) goto L_008D70BC; }
    a0 = a1; v0 = func_00292D80(a0);
    a0 = v0; v0 = func_008B2AB0(a0);
    (*(volatile u32 *) (u32) (s2 + 48)) = (u32) v0;
    a0 = (*(volatile s32 *) (u32) (s2 + 272));
    if (a0 == 0) goto L_008D710C;
    a1 = (*(volatile s32 *) (u32) (s2 + 48)); func_001F1950(a0, a1, a2, a3);
    goto L_008D72F0;
L_008D710C:;
    if (s1 == 0) goto L_008D72EC;
    a0 = (*(volatile s32 *) (u32) (s2 + 276));
    { s32 c_ = a0 == 0; s0 = (*(volatile u8 *) (u32) (s2 + 34)); if (c_) goto L_008D7218; }
    a1 = (s32) ((u32) sp + 0x40U);
    a2 = 191; v0 = func_001D7A20(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) s1);
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_008D7144; }
    f0.i = (s32) v0;
    f0.f = (f32) f0.i; goto L_008D715C;
L_008D7144:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f0.f + f0.f;
L_008D715C:;
    (*(volatile f32 *) (u32) (sp + 128)) = f0.f;
    v0 = (*(volatile u8 *) (u32) (s1 + 1));
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_008D7178; }
    f0.i = (s32) v0;
    f3.f = (f32) f0.i; goto L_008D7190;
L_008D7178:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f3.f = (f32) f0.i;
    f3.f = f3.f + f3.f;
L_008D7190:;
    v1 = s0 & 0xff;
    v0 = 1;
    { s32 c_ = v1 != v0; (*(volatile f32 *) (u32) (sp + 132)) = f3.f; if (c_) goto L_008D71C8; }
    v0 = (s32) 0x42400000U;
    f2.i = (s32) v0;
    f1.f = (*(volatile f32 *) (u32) (sp + 128));
    v0 = (s32) 0x42d00000U;
    f0.i = (s32) v0;
    f0.f = f0.f - f3.f;
    f1.f = f2.f - f1.f;
    (*(volatile f32 *) (u32) (sp + 128)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 132)) = f0.f;
L_008D71C8:;
    f0.f = (*(volatile f32 *) (u32) (sp + 72));
    v0 = (s32) 0x3f800000U;
    f4.i = (s32) v0;
    v1 = (s32) 0x42400000U;
    f1.f = (*(volatile f32 *) (u32) (sp + 76));
    v0 = (s32) 0x42d00000U;
    f3.f = f0.f - f4.f;
    f1.f = f1.f - f4.f;
    f0.f = (*(volatile f32 *) (u32) (sp + 132));
    f2.f = (*(volatile f32 *) (u32) (sp + 128));
    f1.f = f0.f * f1.f;
    f2.f = f2.f * f3.f;
    f0.i = (s32) v1;
    f0.f = f2.f / f0.f;
    (*(volatile f32 *) (u32) (sp + 128)) = f0.f;
    f0.i = (s32) v0;
    f0.f = f1.f / f0.f;
    (*(volatile f32 *) (u32) (sp + 132)) = f0.f;
L_008D7218:;
    a0 = (*(volatile s32 *) (u32) (s2 + 84));
    a1 = 33;
    a3 = (*(volatile s32 *) (u32) (s2 + 48));
    a2 = (s32) ((u32) sp + 0x80U);
    a4 = 2;
    a5 = (s32) ((u32) sp + 0x78U); v0 = func_001F1A10(a0, a1, a2, a3, a4, a5);
    (*(volatile u32 *) (u32) (s2 + 272)) = (u32) v0;
    a0 = (*(volatile s32 *) (u32) (s2 + 276));
    if (a0 == 0) { a0 = (*(volatile s32 *) (u32) (s2 + 272)); goto L_008D72E4; }
    v0 = (*(volatile s32 *) (u32) (s2 + 272));
    if (v0 == 0) goto L_008D72E0;
    a1 = (s32) ((u32) sp + 0x50U);
    a2 = 191; v0 = func_001D7A20(a0, a1, a2);
    a1 = (*(volatile s32 *) (u32) (s2 + 48));
    a0 = 33;
    a2 = (s32) ((u32) sp + 0x8cU); func_008BAA40(a0, a1, a2, a3);
    f0.f = (*(volatile f32 *) (u32) (sp + 132));
    v0 = (s32) 0x41800000U;
    f1.f = (*(volatile f32 *) (u32) (sp + 128));
    (*(volatile u32 *) (u32) (sp + 108)) = (u32) v0;
    f2.i = (s32) v0;
    (*(volatile f32 *) (u32) (sp + 100)) = f0.f;
    (*(volatile f32 *) (u32) (sp + 96)) = f1.f;
    f0.f = f0.f + f2.f;
    f1.f = (*(volatile f32 *) (u32) (sp + 92));
    f3.f = (*(volatile f32 *) (u32) (sp + 140));
    fcc = f0.f <= f1.f;
    f0.f = (f32) f3.i;
    { s32 c_ = fcc; (*(volatile f32 *) (u32) (sp + 104)) = f0.f; if (c_) goto L_008D72AC; }
    f0.f = f1.f - f2.f;
    (*(volatile f32 *) (u32) (sp + 100)) = f0.f;
L_008D72AC:;
    f2.f = (*(volatile f32 *) (u32) (sp + 104));
    f0.f = (*(volatile f32 *) (u32) (sp + 96));
    f1.f = (*(volatile f32 *) (u32) (sp + 88));
    f0.f = f0.f + f2.f;
    fcc = f0.f <= f1.f;
    if (fcc) { a0 = (*(volatile s32 *) (u32) (s2 + 272)); goto L_008D72D4; }
    f0.f = f1.f - f2.f;
    (*(volatile f32 *) (u32) (sp + 96)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (s2 + 272));
L_008D72D4:;
    a1 = (s32) ((u32) sp + 0x60U);
    a2 = 0; func_001F3D80(a0, a1, a2);
L_008D72E0:;
    a0 = (*(volatile s32 *) (u32) (s2 + 272));
L_008D72E4:;
    a1 = 1; func_001F3D10(a0, a1);
L_008D72EC:;
L_008D72F0:;
    return;
}
