/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00907230(s32, s32, s32, s32);
void func_0090BA30(s32);
void func_0090F9A0(s32, s32, s32, s32);
void func_00911160(s32, s32, s32, s32, f32);
void func_00912460(s32, s32, s32, s32, f32, f32);
void func_00973EC0(s32, s32, s32, s32);

void func_0092C4C0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 fcc = 0;

    v1 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (v1 + 7177));
    v1 = 5;
    if (a0 == v1) goto L_0092C624;
    func_00907230(a0, a1, a2, a3);
    func_00911160(a0, a1, a2, a3, f12.f);
    s1 = (s32) 0x590000U;
    s0 = 0;
    s1 = (s32) ((u32) s1 + 0xffffe7f0U);
L_0092C500:;
    a0 = s1;
    a1 = 1; func_00973EC0(a0, a1, a2, a3);
    a0 = s1; func_0090BA30(a0);
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 22;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x240U); if (c_) goto L_0092C500; }
    a0 = 1; func_0090F9A0(a0, a1, a2, a3);
    s1 = (s32) 0x590000U;
    s0 = 0;
    s1 = (s32) ((u32) s1 + 0xffffe7f0U);
L_0092C538:;
    a1 = (*(volatile u8 *) (u32) (s1 + 469));
    if (a1 == 0) goto L_0092C614;
    a0 = s1; func_00912460(a0, a1, a2, a3, f12.f, f13.f);
    v1 = (s32) 0xcb0000U;
    a0 = (s32) 0xcb0000U;
    f3.f = (*(volatile f32 *) (u32) (v1 + 21276));
    f2.f = (*(volatile f32 *) (u32) (a0 + 21280));
    f1.i = f3.i & 0x7FFFFFFF;
    v1 = (s32) 0x46620000U;
    v1 = v1 | 0x6400;
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_0092C5B4;
    f0.i = (s32) 0;
    fcc = f3.f < f0.f;
    if (!fcc) { v1 = 1; goto L_0092C594; }
    v1 = -1;
L_0092C594:;
    f0.i = (s32) v1;
    f1.f = (f32) f0.i;
    v1 = (s32) 0x46620000U;
    v1 = v1 | 0x6400;
    f0.i = (s32) v1;
    f3.f = f0.f * f1.f;
L_0092C5B4:;
    f1.i = f2.i & 0x7FFFFFFF;
    v1 = (s32) 0x46180000U;
    v1 = v1 | 0x6400;
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_0092C60C;
    f0.i = (s32) 0;
    fcc = f2.f < f0.f;
    if (!fcc) { v1 = 1; goto L_0092C5EC; }
    v1 = -1;
L_0092C5EC:;
    f0.i = (s32) v1;
    f1.f = (f32) f0.i;
    v1 = (s32) 0x46180000U;
    v1 = v1 | 0x6400;
    f0.i = (s32) v1;
    f2.f = f0.f * f1.f;
L_0092C60C:;
    (*(volatile f32 *) (u32) (s1 + 108)) = f3.f;
    (*(volatile f32 *) (u32) (s1 + 112)) = f2.f;
L_0092C614:;
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = s0 < 22;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x240U); if (c_) goto L_0092C538; }
L_0092C624:;
    return;
}
