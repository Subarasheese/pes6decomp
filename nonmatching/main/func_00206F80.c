/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001A54C0(void);
f32 func_001A54E0(void);
s32 func_001A5550(s32);
f32 func_001A5660(void);
s32 func_001A5670(f32);
s32 func_00205FE0(s32);
s32 func_002063E0(s32, s32, s32, s32, s32, s32);
s32 func_00206650(void);

s32 func_00206F80(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, f32 fa12) {
    s32 v0 = 0, v1 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    union { f32 f; s32 i; } f4 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f20 = { 0 };
    union { f32 f; s32 i; } f21 = { 0 };
    union { f32 f; s32 i; } f22 = { 0 };
    s32 fcc = 0;
    f32 acc = 0;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    a0 = (s32) ((u32) sp + 0x3cU);
    a1 = (s32) ((u32) sp + 0x4fU);
    (*(volatile u32 *) (u32) (sp + 72)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 68)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 64)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 60)) = (u32) 0; v0 = func_00206650();
    a3 = v0 & 0xff;
    v0 = (s32) 0x40c00000U;
    f1.i = (s32) v0;
    f0.f = (*(volatile f32 *) (u32) (sp + 60));
    v0 = a3 & 0xf;
    { s32 c_ = v0 == 0; f0.f = f1.f * f0.f; if (c_) goto L_00206FE8; }
    f0.i = (s32) f0.f;
    a5 = (*(volatile u8 *) (u32) (sp + 79));
    a0 = (s32) ((u32) sp + 0x48U);
    a1 = (s32) ((u32) sp + 0x44U);
    a4 = f0.i;
    a2 = (s32) ((u32) sp + 0x40U); v0 = func_002063E0(a0, a1, a2, a3, a4, a5);
L_00206FE8:;
    v0 = (s32) 0x530000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 12356));
    if (v0 == 0) { a0 = (s32) ((u32) sp + 0x20U); goto L_00207030; }
    f0.f = (*(volatile f32 *) (u32) (sp + 72));
    v0 = (s32) 0x40000000U;
    f4.i = (s32) v0;
    f2.f = (*(volatile f32 *) (u32) (sp + 68));
    f3.f = f0.f / f4.f;
    f0.f = (*(volatile f32 *) (u32) (sp + 60));
    f2.f = f2.f / f4.f;
    f0.f = f0.f / f4.f;
    f1.f = (*(volatile f32 *) (u32) (sp + 64));
    (*(volatile f32 *) (u32) (sp + 72)) = f3.f;
    (*(volatile f32 *) (u32) (sp + 68)) = f2.f;
    f0.f = f1.f - f0.f;
    (*(volatile f32 *) (u32) (sp + 64)) = f0.f;
    a0 = (s32) ((u32) sp + 0x20U);
L_00207030:;
    v0 = func_00205FE0(a0);
    f0.f = func_001A54E0();
    f2.f = (*(volatile f32 *) (u32) (sp + 72));
    v0 = (s32) 0x46080000U;
    v1 = v0 | 0x6400;
    v0 = (s32) 0x46880000U;
    f0.f = f2.f + f0.f;
    v0 = v0 | 0x6400;
    (*(volatile f32 *) (u32) (sp + 48)) = f0.f;
    f1.f = (*(volatile f32 *) (u32) (sp + 40));
    f0.i = (s32) v1;
    f21.i = (s32) 0;
    f1.f = f0.f - f1.f;
    f0.i = (s32) v0;
    f22.f = f1.f / f0.f;
    f20.i = f21.i;
    f0.f = func_001A5660();
    v0 = (s32) 0x442f0000U;
    f1.i = (s32) v0;
    fcc = f0.f < f1.f;
    if (!fcc) goto L_002070C4;
    v0 = (s32) 0x44610000U;
    v1 = (s32) 0x40d00000U;
    f1.i = (s32) v0;
    f0.f = f1.f - f0.f;
    f2.i = (s32) v1;
    f21.f = f2.f * f0.f;
L_002070C4:;
    v0 = (s32) 0x530000U;
    v1 = 3;
    a0 = (*(volatile u8 *) (u32) (v0 + 12352));
    if (a0 == v1) { (*(volatile f32 *) (u32) (sp + 52)) = f20.f; goto L_00207150; }
    v0 = 1;
    if (a0 == v0) { v0 = (s32) 0x44fa0000U; goto L_00207138; }
    v0 = 2;
    if (a0 == v0) { v0 = (s32) 0x45090000U; goto L_0020711C; }
    if (a0 == 0) { v0 = (s32) 0x44bb0000U; goto L_00207100; }
    goto L_0020714C;
L_00207100:;
    v0 = v0 | 0x8000;
    f0.i = (s32) 0;
    f1.i = (s32) v0;
    acc = f0.f + f21.f;
    f20.f = acc + f1.f * f22.f; goto L_0020714C;
L_0020711C:;
    v0 = v0 | 0x8000;
    f0.i = (s32) 0;
    f1.i = (s32) v0;
    acc = f0.f + f21.f;
    f20.f = acc + f1.f * f22.f; goto L_0020714C;
L_00207138:;
    f0.i = (s32) 0;
    f1.i = (s32) v0;
    acc = f0.f + f21.f;
    f20.f = acc + f1.f * f22.f;
L_0020714C:;
    (*(volatile f32 *) (u32) (sp + 52)) = f20.f;
L_00207150:;
    f0.f = func_001A54C0();
    f1.f = (*(volatile f32 *) (u32) (sp + 68));
    f0.f = f1.f + f0.f;
    (*(volatile f32 *) (u32) (sp + 56)) = f0.f; f0.f = func_001A5660();
    f1.f = (*(volatile f32 *) (u32) (sp + 64));
    f20.f = f1.f + f0.f; f0.f = func_001A5660();
    v1 = (s32) 0x41900000U;
    v0 = (s32) 0x41980000U;
    f2.i = (s32) 0;
    a1 = 0;
    f1.i = (s32) v0;
    f3.i = (s32) v1;
    v0 = (s32) 0x530000U;
    acc = f2.f + f20.f;
    a0 = (*(volatile u8 *) (u32) (v0 + 12352));
    f0.f = acc + f3.f * f0.f;
    f20.f = f0.f / f1.f;
    v0 = 3;
    if (a0 == v0) goto L_0020722C;
    v1 = 1;
    if (a0 == v1) { v0 = (s32) 0x453b0000U; goto L_00207208; }
    v0 = 2;
    if (a0 == v0) { v0 = (s32) 0x41200000U; goto L_002071E0; }
    if (a0 == 0) goto L_002071DC;
    goto L_0020722C;
L_002071DC:;
    v0 = (s32) 0x41200000U;
L_002071E0:;
    f1.i = (s32) v0;
    f1.f = f1.f * f20.f;
    f0.f = (*(volatile f32 *) (u32) (sp + 56));
    fcc = f0.f <= f1.f;
    if (fcc) goto L_0020722C;
    (*(volatile f32 *) (u32) (sp + 56)) = f1.f;
    a1 = 1; goto L_0020722C;
L_00207208:;
    v0 = v0 | 0x8000;
    f1.f = (*(volatile f32 *) (u32) (sp + 56));
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_0020722C;
    (*(volatile f32 *) (u32) (sp + 56)) = f0.f;
    a1 = v1;
L_0020722C:;
    if (a1 == 0) { a0 = (s32) ((u32) sp + 0x30U); goto L_00207244; }
    v1 = 1;
    v0 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v0 + 12356)) = (u32) v1;
    a0 = (s32) ((u32) sp + 0x30U);
L_00207244:;
    v0 = func_001A5550(a0);
    f12.i = f20.i; v0 = func_001A5670(f12.f);
    a0 = 3;
    v1 = (s32) 0x530000U;
    (*(volatile u8 *) (u32) (v1 + 12362)) = (u8) a0;
    return v0;
}
