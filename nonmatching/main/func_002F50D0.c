/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001B5440(void);
void func_001B5450(void);
void func_001F2530(s64, s64, s64);
void func_001F26A0(s64, s64);
void func_001F3D10(s64, s64);
void func_001F3D80(s64, s64, s64);
s64 func_002EF260(s64);
f32 func_002EF2A0(s64);
f32 func_002EF2C0(s64);
void func_002EF3C0(s64, s64, s64);
s64 func_002EF540(s64);
s64 func_002EF590(s64);
s64 func_002EF640(s64);
s64 func_002EF690(s64);
void func_002EFF90(s64, s64);
void func_002F1920(s64, s64);
void func_002F64D0(s64, s64, f32);
void func_002F6780(s64);

void func_002F50D0(s64 a0, s64 a1, s64 a2, f32 fa12) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s64 frame[24];
    s64 sp = (s32) (u32) frame;

    s0 = a0;
    if (s0 == 0) goto L_002F586C;
    func_002F6780(a0);
    a0 = (*(volatile u8 *) (u32) s0);
    v1 = 5;
    if (a0 == v1) { a0 = (s32) ((u32) s0 + 0x10U); goto L_002F56CC; }
    v1 = 4;
    if (a0 == v1) { a0 = (s32) ((u32) s0 + 0x10U); goto L_002F5528; }
    v1 = 2;
    if (a0 == v1) { v0 = (*(volatile u8 *) (u32) (s0 + 1)); goto L_002F5330; }
    v1 = 1;
    if (a0 == v1) { v0 = (*(volatile u8 *) (u32) (s0 + 1)); goto L_002F5138; }
    goto L_002F5870;
L_002F5138:;
    if (v0 == 0) { a0 = (s32) ((u32) s0 + 0x10U); goto L_002F5170; }
    v0 = (*(volatile s8 *) (u32) (s0 + 5));
    v0 = (s32) ((u32) v0 + 0x1U);
    { s32 c_ = v0 >= 0; a1 = v0 & 0x1; if (c_) goto L_002F515C; }
    if (a1 == 0) { a0 = s0; goto L_002F5160; }
    a1 = (s32) ((u32) a1 + 0xfffffffeU);
L_002F515C:;
    a0 = s0;
L_002F5160:;
    func_002F64D0(a0, a1, f12.f);
    (*(volatile u8 *) (u32) (s0 + 1)) = (u8) 0;
    a0 = (s32) ((u32) s0 + 0x10U);
L_002F5170:;
    v0 = func_002EF690(a0);
    if (v0 == 0) { v1 = (*(volatile s32 *) (u32) (s0 + 180)); goto L_002F5288; }
    v0 = (*(volatile s8 *) (u32) (s0 + 5));
    v1 = (s32) ((u32) v0 + 0x1U);
    { s32 c_ = v1 >= 0; v0 = v1 & 0x1; if (c_) goto L_002F519C; }
    if (v0 == 0) { (*(volatile u8 *) (u32) (s0 + 5)) = (u8) v0; goto L_002F51A0; }
    v0 = (s32) ((u32) v0 + 0xfffffffeU);
L_002F519C:;
    (*(volatile u8 *) (u32) (s0 + 5)) = (u8) v0;
L_002F51A0:;
    v0 = (s64) ((u64) v0 << 56);
    v0 = v0 >> 56;
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) s0 + (u32) v0);
    s1 = (s32) ((u32) v0 + 0xb8U);
    v0 = (*(volatile s32 *) (u32) (v0 + 188));
    { s32 c_ = v0 <= 0; s3 = 0; if (c_) goto L_002F51E8; }
    s2 = 0;
L_002F51C4:;
    v0 = (*(volatile s32 *) (u32) s1);
    a1 = 1;
    a0 = (s32) ((u32) v0 + (u32) s2); func_002F1920(a0, a1);
    v0 = (*(volatile s32 *) (u32) (s1 + 4));
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < v0;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x24U); if (c_) goto L_002F51C4; }
L_002F51E8:;
    v0 = (*(volatile s8 *) (u32) (s0 + 5));
    v1 = (s32) ((u32) v0 + 0x1U);
    { s32 c_ = v1 >= 0; v0 = v1 & 0x1; if (c_) goto L_002F5204; }
    if (v0 == 0) { v0 = (s32) ((u32) v0 << 3); goto L_002F5208; }
    v0 = (s32) ((u32) v0 + 0xfffffffeU);
L_002F5204:;
    v0 = (s32) ((u32) v0 << 3);
L_002F5208:;
    v0 = (s32) ((u32) s0 + (u32) v0);
    s1 = (s32) ((u32) v0 + 0xb8U);
    v0 = (*(volatile s32 *) (u32) (v0 + 188));
    { s32 c_ = v0 <= 0; s3 = 0; if (c_) goto L_002F5248; }
    s2 = 0;
L_002F5220:;
    v0 = (*(volatile s32 *) (u32) s1);
    a1 = 0;
    a0 = (s32) ((u32) v0 + (u32) s2); func_002F1920(a0, a1);
    v0 = (*(volatile s32 *) (u32) (s1 + 4));
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < v0;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x24U); if (c_) goto L_002F5220; }
L_002F5248:;
    a0 = (*(volatile s32 *) (u32) (s0 + 168));
    a1 = 1; func_001F3D10(a0, a1);
    a0 = (s32) ((u32) s0 + 0x10U);
    a1 = 0; func_002EFF90(a0, a1);
    v1 = (*(volatile u8 *) (u32) (s0 + 2));
    if (v1 != 0) { v1 = 3; goto L_002F5280; }
    func_001B5450();
    v1 = 1;
    (*(volatile u8 *) (u32) (s0 + 3)) = (u8) v1;
    v1 = 3;
L_002F5280:;
    (*(volatile u8 *) (u32) s0) = (u8) v1;
    v1 = (*(volatile s32 *) (u32) (s0 + 180));
L_002F5288:;
    if (v1 == 0) goto L_002F586C;
    a0 = (s32) ((u32) s0 + 0x10U);
    a1 = 1;
    a2 = (s32) ((u32) sp + 0x90U); func_002EF3C0(a0, a1, a2);
    f1.f = (*(volatile f32 *) (u32) (sp + 152));
    a1 = (s32) ((u32) sp + 0x90U);
    f0.f = (*(volatile f32 *) (u32) (sp + 156));
    (*(volatile f32 *) (u32) (sp + 184)) = f1.f;
    (*(volatile u32 *) (u32) (sp + 152)) = (u32) 0;
    (*(volatile f32 *) (u32) (sp + 188)) = f0.f;
    (*(volatile u32 *) (u32) (sp + 156)) = (u32) 0;
    a0 = (*(volatile s32 *) (u32) (s0 + 180));
    a2 = 0; func_001F3D80(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s0 + 180));
    a1 = 0;
    a2 = (s32) ((u32) sp + 0xb8U); func_001F2530(a0, a1, a2);
    a0 = (s32) ((u32) s0 + 0x10U); f0.f = func_002EF2C0(a0);
    f20.i = f0.i;
    a0 = (s32) ((u32) s0 + 0x10U); f0.f = func_002EF2A0(a0);
    f1.f = f20.f / f0.f;
    a1 = 1;
    f0.f = (*(volatile f32 *) (u32) (sp + 188));
    f0.f = f0.f * f1.f;
    (*(volatile f32 *) (u32) (sp + 188)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (s0 + 180));
    a2 = (s32) ((u32) sp + 0xb8U); func_001F2530(a0, a1, a2);
    a0 = (s32) ((u32) s0 + 0x10U); v0 = func_002EF260(a0);
    a0 = (*(volatile s32 *) (u32) (s0 + 180));
    a1 = v0; func_001F26A0(a0, a1);
    goto L_002F586C;
L_002F5330:;
    if (v0 == 0) { a0 = (s32) ((u32) s0 + 0x10U); goto L_002F5368; }
    v0 = (*(volatile s8 *) (u32) (s0 + 5));
    v0 = (s32) ((u32) v0 + 0x1U);
    { s32 c_ = v0 >= 0; a1 = v0 & 0x1; if (c_) goto L_002F5354; }
    if (a1 == 0) { a0 = s0; goto L_002F5358; }
    a1 = (s32) ((u32) a1 + 0xfffffffeU);
L_002F5354:;
    a0 = s0;
L_002F5358:;
    func_002F64D0(a0, a1, f12.f);
    (*(volatile u8 *) (u32) (s0 + 1)) = (u8) 0;
    a0 = (s32) ((u32) s0 + 0x10U);
L_002F5368:;
    v0 = func_002EF590(a0);
    if (v0 == 0) { v1 = (*(volatile s32 *) (u32) (s0 + 180)); goto L_002F5480; }
    v0 = (*(volatile s8 *) (u32) (s0 + 5));
    v1 = (s32) ((u32) v0 + 0x1U);
    { s32 c_ = v1 >= 0; v0 = v1 & 0x1; if (c_) goto L_002F5394; }
    if (v0 == 0) { (*(volatile u8 *) (u32) (s0 + 5)) = (u8) v0; goto L_002F5398; }
    v0 = (s32) ((u32) v0 + 0xfffffffeU);
L_002F5394:;
    (*(volatile u8 *) (u32) (s0 + 5)) = (u8) v0;
L_002F5398:;
    v0 = (s64) ((u64) v0 << 56);
    v0 = v0 >> 56;
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) s0 + (u32) v0);
    s1 = (s32) ((u32) v0 + 0xb8U);
    v0 = (*(volatile s32 *) (u32) (v0 + 188));
    { s32 c_ = v0 <= 0; s3 = 0; if (c_) goto L_002F53E0; }
    s2 = 0;
L_002F53BC:;
    v0 = (*(volatile s32 *) (u32) s1);
    a1 = 1;
    a0 = (s32) ((u32) v0 + (u32) s2); func_002F1920(a0, a1);
    v0 = (*(volatile s32 *) (u32) (s1 + 4));
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < v0;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x24U); if (c_) goto L_002F53BC; }
L_002F53E0:;
    v0 = (*(volatile s8 *) (u32) (s0 + 5));
    v1 = (s32) ((u32) v0 + 0x1U);
    { s32 c_ = v1 >= 0; v0 = v1 & 0x1; if (c_) goto L_002F53FC; }
    if (v0 == 0) { v0 = (s32) ((u32) v0 << 3); goto L_002F5400; }
    v0 = (s32) ((u32) v0 + 0xfffffffeU);
L_002F53FC:;
    v0 = (s32) ((u32) v0 << 3);
L_002F5400:;
    v0 = (s32) ((u32) s0 + (u32) v0);
    s1 = (s32) ((u32) v0 + 0xb8U);
    v0 = (*(volatile s32 *) (u32) (v0 + 188));
    { s32 c_ = v0 <= 0; s3 = 0; if (c_) goto L_002F5440; }
    s2 = 0;
L_002F5418:;
    v0 = (*(volatile s32 *) (u32) s1);
    a1 = 0;
    a0 = (s32) ((u32) v0 + (u32) s2); func_002F1920(a0, a1);
    v0 = (*(volatile s32 *) (u32) (s1 + 4));
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < v0;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x24U); if (c_) goto L_002F5418; }
L_002F5440:;
    a0 = (*(volatile s32 *) (u32) (s0 + 168));
    a1 = 1; func_001F3D10(a0, a1);
    a0 = (s32) ((u32) s0 + 0x10U);
    a1 = 0; func_002EFF90(a0, a1);
    v1 = (*(volatile u8 *) (u32) (s0 + 2));
    if (v1 != 0) { v1 = 3; goto L_002F5478; }
    func_001B5450();
    v1 = 1;
    (*(volatile u8 *) (u32) (s0 + 3)) = (u8) v1;
    v1 = 3;
L_002F5478:;
    (*(volatile u8 *) (u32) s0) = (u8) v1;
    v1 = (*(volatile s32 *) (u32) (s0 + 180));
L_002F5480:;
    if (v1 == 0) goto L_002F586C;
    a0 = (s32) ((u32) s0 + 0x10U);
    a1 = 1;
    a2 = (s32) ((u32) sp + 0x80U); func_002EF3C0(a0, a1, a2);
    f1.f = (*(volatile f32 *) (u32) (sp + 136));
    a1 = (s32) ((u32) sp + 0x80U);
    f0.f = (*(volatile f32 *) (u32) (sp + 140));
    (*(volatile f32 *) (u32) (sp + 176)) = f1.f;
    (*(volatile u32 *) (u32) (sp + 136)) = (u32) 0;
    (*(volatile f32 *) (u32) (sp + 180)) = f0.f;
    (*(volatile u32 *) (u32) (sp + 140)) = (u32) 0;
    a0 = (*(volatile s32 *) (u32) (s0 + 180));
    a2 = 0; func_001F3D80(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s0 + 180));
    a1 = 0;
    a2 = (s32) ((u32) sp + 0xb0U); func_001F2530(a0, a1, a2);
    a0 = (s32) ((u32) s0 + 0x10U); f0.f = func_002EF2C0(a0);
    f20.i = f0.i;
    a0 = (s32) ((u32) s0 + 0x10U); f0.f = func_002EF2A0(a0);
    f1.f = f20.f / f0.f;
    a1 = 1;
    f0.f = (*(volatile f32 *) (u32) (sp + 180));
    f0.f = f0.f * f1.f;
    (*(volatile f32 *) (u32) (sp + 180)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (s0 + 180));
    a2 = (s32) ((u32) sp + 0xb0U); func_001F2530(a0, a1, a2);
    a0 = (s32) ((u32) s0 + 0x10U); v0 = func_002EF260(a0);
    a0 = (*(volatile s32 *) (u32) (s0 + 180));
    a1 = v0; func_001F26A0(a0, a1);
    goto L_002F586C;
L_002F5528:;
    v0 = func_002EF640(a0);
    if (v0 == 0) { v1 = (*(volatile s32 *) (u32) (s0 + 180)); goto L_002F5624; }
    v1 = (*(volatile s8 *) (u32) (s0 + 5));
    a0 = (s32) ((u32) v1 + 0x1U);
    { s32 c_ = a0 >= 0; v1 = a0 & 0x1; if (c_) goto L_002F5554; }
    if (v1 == 0) { (*(volatile u8 *) (u32) (s0 + 5)) = (u8) v1; goto L_002F5558; }
    v1 = (s32) ((u32) v1 + 0xfffffffeU);
L_002F5554:;
    (*(volatile u8 *) (u32) (s0 + 5)) = (u8) v1;
L_002F5558:;
    v1 = (s64) ((u64) v1 << 56);
    v1 = v1 >> 56;
    v1 = (s32) ((u32) v1 << 3);
    v1 = (s32) ((u32) s0 + (u32) v1);
    s1 = (s32) ((u32) v1 + 0xb8U);
    v1 = (*(volatile s32 *) (u32) (v1 + 188));
    { s32 c_ = v1 <= 0; s3 = 0; if (c_) goto L_002F55A0; }
    s2 = 0;
L_002F557C:;
    v0 = (*(volatile s32 *) (u32) s1);
    a1 = 1;
    a0 = (s32) ((u32) v0 + (u32) s2); func_002F1920(a0, a1);
    v1 = (*(volatile s32 *) (u32) (s1 + 4));
    s3 = (s32) ((u32) s3 + 0x1U);
    v1 = s3 < v1;
    { s32 c_ = v1 != 0; s2 = (s32) ((u32) s2 + 0x24U); if (c_) goto L_002F557C; }
L_002F55A0:;
    v1 = (*(volatile s8 *) (u32) (s0 + 5));
    a0 = (s32) ((u32) v1 + 0x1U);
    { s32 c_ = a0 >= 0; v1 = a0 & 0x1; if (c_) goto L_002F55BC; }
    if (v1 == 0) { v1 = (s32) ((u32) v1 << 3); goto L_002F55C0; }
    v1 = (s32) ((u32) v1 + 0xfffffffeU);
L_002F55BC:;
    v1 = (s32) ((u32) v1 << 3);
L_002F55C0:;
    v1 = (s32) ((u32) s0 + (u32) v1);
    s1 = (s32) ((u32) v1 + 0xb8U);
    v1 = (*(volatile s32 *) (u32) (v1 + 188));
    { s32 c_ = v1 <= 0; s3 = 0; if (c_) goto L_002F5600; }
    s2 = 0;
L_002F55D8:;
    v0 = (*(volatile s32 *) (u32) s1);
    a1 = 0;
    a0 = (s32) ((u32) v0 + (u32) s2); func_002F1920(a0, a1);
    v1 = (*(volatile s32 *) (u32) (s1 + 4));
    s3 = (s32) ((u32) s3 + 0x1U);
    v1 = s3 < v1;
    { s32 c_ = v1 != 0; s2 = (s32) ((u32) s2 + 0x24U); if (c_) goto L_002F55D8; }
L_002F5600:;
    v1 = (*(volatile u8 *) (u32) (s0 + 3));
    if (v1 == 0) { v1 = 6; goto L_002F561C; }
    func_001B5440();
    (*(volatile u8 *) (u32) (s0 + 3)) = (u8) 0;
    v1 = 6;
L_002F561C:;
    (*(volatile u8 *) (u32) s0) = (u8) v1;
    v1 = (*(volatile s32 *) (u32) (s0 + 180));
L_002F5624:;
    if (v1 == 0) goto L_002F586C;
    a0 = (s32) ((u32) s0 + 0x10U);
    a1 = 1;
    a2 = (s32) ((u32) sp + 0x70U); func_002EF3C0(a0, a1, a2);
    f1.f = (*(volatile f32 *) (u32) (sp + 120));
    a1 = (s32) ((u32) sp + 0x70U);
    f0.f = (*(volatile f32 *) (u32) (sp + 124));
    (*(volatile f32 *) (u32) (sp + 168)) = f1.f;
    (*(volatile u32 *) (u32) (sp + 120)) = (u32) 0;
    (*(volatile f32 *) (u32) (sp + 172)) = f0.f;
    (*(volatile u32 *) (u32) (sp + 124)) = (u32) 0;
    a0 = (*(volatile s32 *) (u32) (s0 + 180));
    a2 = 0; func_001F3D80(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s0 + 180));
    a1 = 0;
    a2 = (s32) ((u32) sp + 0xa8U); func_001F2530(a0, a1, a2);
    a0 = (s32) ((u32) s0 + 0x10U); f0.f = func_002EF2C0(a0);
    f20.i = f0.i;
    a0 = (s32) ((u32) s0 + 0x10U); f0.f = func_002EF2A0(a0);
    f1.f = f20.f / f0.f;
    a1 = 1;
    f0.f = (*(volatile f32 *) (u32) (sp + 172));
    f0.f = f0.f * f1.f;
    (*(volatile f32 *) (u32) (sp + 172)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (s0 + 180));
    a2 = (s32) ((u32) sp + 0xa8U); func_001F2530(a0, a1, a2);
    a0 = (s32) ((u32) s0 + 0x10U); v0 = func_002EF260(a0);
    a0 = (*(volatile s32 *) (u32) (s0 + 180));
    a1 = v0; func_001F26A0(a0, a1);
    goto L_002F586C;
L_002F56CC:;
    v0 = func_002EF540(a0);
    if (v0 == 0) { v1 = (*(volatile s32 *) (u32) (s0 + 180)); goto L_002F57CC; }
    v1 = (*(volatile s8 *) (u32) (s0 + 5));
    a0 = (s32) ((u32) v1 + 0x1U);
    { s32 c_ = a0 >= 0; v1 = a0 & 0x1; if (c_) goto L_002F56F8; }
    if (v1 == 0) { (*(volatile u8 *) (u32) (s0 + 5)) = (u8) v1; goto L_002F56FC; }
    v1 = (s32) ((u32) v1 + 0xfffffffeU);
L_002F56F8:;
    (*(volatile u8 *) (u32) (s0 + 5)) = (u8) v1;
L_002F56FC:;
    v1 = (s64) ((u64) v1 << 56);
    v1 = v1 >> 56;
    v1 = (s32) ((u32) v1 << 3);
    v1 = (s32) ((u32) s0 + (u32) v1);
    s1 = (s32) ((u32) v1 + 0xb8U);
    v1 = (*(volatile s32 *) (u32) (v1 + 188));
    { s32 c_ = v1 <= 0; s3 = 0; if (c_) goto L_002F5748; }
    s2 = 0;
L_002F5720:;
    v0 = (*(volatile s32 *) (u32) s1);
    a1 = 1;
    a0 = (s32) ((u32) v0 + (u32) s2); func_002F1920(a0, a1);
    v1 = (*(volatile s32 *) (u32) (s1 + 4));
    s3 = (s32) ((u32) s3 + 0x1U);
    v1 = s3 < v1;
    { s32 c_ = v1 != 0; s2 = (s32) ((u32) s2 + 0x24U); if (c_) goto L_002F5720; }
L_002F5748:;
    v1 = (*(volatile s8 *) (u32) (s0 + 5));
    a0 = (s32) ((u32) v1 + 0x1U);
    { s32 c_ = a0 >= 0; v1 = a0 & 0x1; if (c_) goto L_002F5764; }
    if (v1 == 0) { v1 = (s32) ((u32) v1 << 3); goto L_002F5768; }
    v1 = (s32) ((u32) v1 + 0xfffffffeU);
L_002F5764:;
    v1 = (s32) ((u32) v1 << 3);
L_002F5768:;
    v1 = (s32) ((u32) s0 + (u32) v1);
    s1 = (s32) ((u32) v1 + 0xb8U);
    v1 = (*(volatile s32 *) (u32) (v1 + 188));
    { s32 c_ = v1 <= 0; s3 = 0; if (c_) goto L_002F57A8; }
    s2 = 0;
L_002F5780:;
    v0 = (*(volatile s32 *) (u32) s1);
    a1 = 0;
    a0 = (s32) ((u32) v0 + (u32) s2); func_002F1920(a0, a1);
    v1 = (*(volatile s32 *) (u32) (s1 + 4));
    s3 = (s32) ((u32) s3 + 0x1U);
    v1 = s3 < v1;
    { s32 c_ = v1 != 0; s2 = (s32) ((u32) s2 + 0x24U); if (c_) goto L_002F5780; }
L_002F57A8:;
    v1 = (*(volatile u8 *) (u32) (s0 + 3));
    if (v1 == 0) { v1 = 6; goto L_002F57C4; }
    func_001B5440();
    (*(volatile u8 *) (u32) (s0 + 3)) = (u8) 0;
    v1 = 6;
L_002F57C4:;
    (*(volatile u8 *) (u32) s0) = (u8) v1;
    v1 = (*(volatile s32 *) (u32) (s0 + 180));
L_002F57CC:;
    if (v1 == 0) goto L_002F586C;
    a0 = (s32) ((u32) s0 + 0x10U);
    a1 = 1;
    a2 = (s32) ((u32) sp + 0x60U); func_002EF3C0(a0, a1, a2);
    f1.f = (*(volatile f32 *) (u32) (sp + 104));
    a1 = (s32) ((u32) sp + 0x60U);
    f0.f = (*(volatile f32 *) (u32) (sp + 108));
    (*(volatile f32 *) (u32) (sp + 160)) = f1.f;
    (*(volatile u32 *) (u32) (sp + 104)) = (u32) 0;
    (*(volatile f32 *) (u32) (sp + 164)) = f0.f;
    (*(volatile u32 *) (u32) (sp + 108)) = (u32) 0;
    a0 = (*(volatile s32 *) (u32) (s0 + 180));
    a2 = 0; func_001F3D80(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s0 + 180));
    a1 = 0;
    a2 = (s32) ((u32) sp + 0xa0U); func_001F2530(a0, a1, a2);
    a0 = (s32) ((u32) s0 + 0x10U); f0.f = func_002EF2C0(a0);
    f20.i = f0.i;
    a0 = (s32) ((u32) s0 + 0x10U); f0.f = func_002EF2A0(a0);
    f1.f = f20.f / f0.f;
    a1 = 1;
    f0.f = (*(volatile f32 *) (u32) (sp + 164));
    f0.f = f0.f * f1.f;
    (*(volatile f32 *) (u32) (sp + 164)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (s0 + 180));
    a2 = (s32) ((u32) sp + 0xa0U); func_001F2530(a0, a1, a2);
    a0 = (s32) ((u32) s0 + 0x10U); v0 = func_002EF260(a0);
    a0 = (*(volatile s32 *) (u32) (s0 + 180));
    a1 = v0; func_001F26A0(a0, a1);
L_002F586C:;
L_002F5870:;
    return;
}
