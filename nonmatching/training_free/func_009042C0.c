/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00B29640(s32, s32, s32, s32);
s32 func_00BDB8B0(s32, s32, s32, s32);

f32 func_009042C0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s32 fcc = 0;
    f32 acc = 0;

    v0 = a0 & 0xff;
    s2 = a1;
    if (v0 != 0) goto L_0090441C;
    v0 = (s32) 0x46520000U;
    s1 = (s32) 0x590000U;
    v0 = v0 | 0x6400;
    s1 = (s32) ((u32) s1 + 0xffffe7f0U);
    f20.i = (s32) v0;
    s0 = 0;
    f21.i = f20.i;
L_00904304:;
    a0 = s1; v0 = func_00BDB8B0(a0, a1, a2, a3);
    if (v0 == 0) goto L_009043E8;
    f3.f = (*(volatile f32 *) (u32) (s1 + 240));
    f0.i = (s32) 0;
    fcc = f3.f < f0.f;
    if (!fcc) goto L_00904380;
    { s32 c_ = s2 < 0; f2.f = (*(volatile f32 *) (u32) (s1 + 224)); if (c_) goto L_00904340; }
    f0.i = (s32) s2;
    f0.f = (f32) f0.i; goto L_0090435C;
L_00904340:;
    v1 = (s32) ((u32) s2 >> 1);
    v0 = s2 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f0.f + f0.f;
L_0090435C:;
    f1.f = f3.f * f0.f;
    v0 = (s32) 0x40000000U;
    f0.i = (s32) v0;
    f0.f = f1.f / f0.f;
    f0.f = f2.f + f0.f; goto L_009043C0;
L_00904380:;
    if (s2 < 0) { v1 = (s32) ((u32) s2 >> 1); goto L_00904394; }
    f0.i = (s32) s2;
    f2.f = (f32) f0.i; goto L_009043AC;
L_00904394:;
    v0 = s2 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f2.f = (f32) f0.i;
    f2.f = f2.f + f2.f;
L_009043AC:;
    f1.f = (*(volatile f32 *) (u32) (s1 + 224));
    f0.i = (s32) 0;
    acc = f0.f + f1.f;
    f0.f = acc + f3.f * f2.f;
L_009043C0:;
    fcc = f0.f < f20.f;
    if (!fcc) goto L_009043D8;
    f21.i = f20.i;
    f20.i = f0.i; goto L_009043E8;
L_009043D8:;
    fcc = f0.f < f21.f;
    if (!fcc) goto L_009043E8;
    f21.i = f0.i;
L_009043E8:;
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 11;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x240U); if (c_) goto L_00904304; }
    v0 = (s32) 0x46520000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f0.f == f21.f;
    if (!fcc) goto L_00904594;
    f21.i = f20.i; goto L_00904594;
L_0090441C:;
    v0 = (s32) 0xc6520000U;
    s1 = (s32) 0x590000U;
    v0 = v0 | 0x6400;
    s1 = (s32) ((u32) s1 + 0xb0U);
    f20.i = (s32) v0;
    s0 = 0;
    f21.i = f20.i;
L_00904438:;
    a0 = s1; v0 = func_00BDB8B0(a0, a1, a2, a3);
    if (v0 == 0) goto L_00904510;
    f3.f = (*(volatile f32 *) (u32) (s1 + 240));
    f0.i = (s32) 0;
    fcc = f3.f < f0.f;
    if (!fcc) { f2.f = (*(volatile f32 *) (u32) (s1 + 224)); goto L_009044A4; }
    if (s2 < 0) { v1 = (s32) ((u32) s2 >> 1); goto L_00904474; }
    f0.i = (s32) s2;
    f2.f = (f32) f0.i; goto L_0090448C;
L_00904474:;
    v0 = s2 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f2.f = (f32) f0.i;
    f2.f = f2.f + f2.f;
L_0090448C:;
    f1.f = (*(volatile f32 *) (u32) (s1 + 224));
    f0.i = (s32) 0;
    acc = f0.f + f1.f;
    f0.f = acc + f3.f * f2.f; goto L_009044E8;
L_009044A4:;
    if (s2 < 0) { v1 = (s32) ((u32) s2 >> 1); goto L_009044B8; }
    f0.i = (s32) s2;
    f0.f = (f32) f0.i; goto L_009044D0;
L_009044B8:;
    v0 = s2 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f0.f + f0.f;
L_009044D0:;
    f1.f = f3.f * f0.f;
    v0 = (s32) 0x40000000U;
    f0.i = (s32) v0;
    f0.f = f1.f / f0.f;
    f0.f = f2.f + f0.f;
L_009044E8:;
    fcc = f0.f <= f20.f;
    if (fcc) goto L_00904500;
    f21.i = f20.i;
    f20.i = f0.i; goto L_00904510;
L_00904500:;
    fcc = f0.f <= f21.f;
    if (fcc) goto L_00904510;
    f21.i = f0.i;
L_00904510:;
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 11;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x240U); if (c_) goto L_00904438; }
    v0 = (s32) 0xc6520000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f0.f == f21.f;
    if (fcc) { f21.i = f20.i; goto L_0090453C; }
L_0090453C:;
    v0 = (s32) 0xc6520000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f0.f == f21.f;
    if (fcc) goto L_0090459C;
L_00904558:;
    v0 = (s32) 0x590000U;
    v1 = 5;
    v0 = (*(volatile u8 *) (u32) (v0 + 7177));
    if (v0 != v1) goto L_00904594;
    v0 = func_00B29640(a0, a1, a2, a3);
    if (v0 != 0) goto L_00904594;
    v0 = (s32) 0x590000U;
    v1 = (s32) 0x44800000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 7808));
    f1.i = (s32) v1;
    f21.f = f1.f + f0.f;
L_00904594:;
    f0.i = f21.i; goto L_009045B4;
L_0090459C:;
    v0 = (s32) 0x590000U;
    v1 = (s32) 0x44800000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 7808));
    f1.i = (s32) v1;
    f21.f = f1.f + f0.f; goto L_00904558;
L_009045B4:;
    return f0.f;
}
