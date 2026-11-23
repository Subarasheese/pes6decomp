/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Heap_Alloc(s64, s64, s64, s64);
void func_001B5450(void);
s64 func_001D4ED0(s64);
s64 func_001D5A10(s64);
void func_001D6E40(s64, s64, s64, s64);
f32 func_001D79A0(s64, s64);
s64 func_001D7A20(s64, s64, s64);
void func_001D7C20(s64, s64, s64, s64);
void func_001D7D60(s64, s64);
void func_001D7D80(s64, s64, s64, s64);
void func_001D7E40(s64, s64, s64, s64);
void func_001D7F10(s64, s64, s64, s64);
s64 func_001D7F90(s64, s64, s64, s64);
void func_002DF0A0(s64, s64);
void func_002DF8E0(s64, s64, s64, s64);
void func_002DF960(s64, s64, s64, s64, s64, s64, s64, s64);
s64 func_002DFC30(s64);
void func_002F2ED0(s64, s64, s64, s64, f32);
s64 func_002F3850(s64);
void func_002F38E0(s64, s64, s64, s64);
void func_002F39A0(s64);
void func_002F3A00(s64);
void func_002F3AE0(s64, s64);
void func_002F3BF0(s64, s64);
void func_002F3C30(s64, s64);
void func_002F3C70(s64, s64, s64, s64);
void func_002F4980(s64, s64, s64, s64);
void func_002F4D20(s64, s64, s64, s64);
void func_002F4D80(s64, s64);
void func_002F4E10(s64, s64, s64, s64, s64, s64, s64, s64);
s64 func_002F4E90(s64, s64, s64, s64);
void func_006316A0(s64, s64, s64, s64);
void func_00631770(s64, s64);
void func_006319D0(s64, s64);
void func_00631C30(s64, s64, s64, s64);
void func_006562F0(s64, s64, s64, s64);

void func_00631070(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7, f32 fa12) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s64 frame[12];
    s64 sp = (s32) (u32) frame;

    s0 = (s32) 0x660000U;
    s0 = (s32) ((u32) s0 + 0xffffc2b0U); func_001B5450();
    v1 = (s32) 0x660000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -15696));
    if (v1 == 0) { ; goto L_00631684; }
    v1 = (*(volatile u8 *) (u32) (s0 + 17));
    v0 = 2;
    { s32 c_ = v1 != v0; (*(volatile u8 *) (u32) s0) = (u8) 0; if (c_) goto L_00631108; }
    v1 = (*(volatile u8 *) (u32) (s0 + 4));
    v0 = 1;
    if (v1 != v0) { v0 = (*(volatile u8 *) (u32) (s0 + 5)); goto L_0063110C; }
    s1 = (*(volatile s32 *) (u32) (gp + -21040));
    s2 = 0;
    (*(volatile u8 *) (u32) (s0 + 1)) = (u8) v0;
    (*(volatile u8 *) (u32) (s0 + 2)) = (u8) v0;
L_006310D4:;
    a0 = (*(volatile s32 *) (u32) s1);
    if (a0 == 0) goto L_006310F0;
    func_001D6E40(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) s1) = (u32) 0;
L_006310F0:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 26;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_006310D4; }
    v0 = 1;
    (*(volatile u8 *) (u32) (s0 + 3)) = (u8) v0;
L_00631108:;
    v0 = (*(volatile u8 *) (u32) (s0 + 5));
L_0063110C:;
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) (gp + -21048)); goto L_006311C0; }
    a0 = (*(volatile s32 *) (u32) (gp + -21052));
    v0 = -1;
    { s32 c_ = a0 == 0; (*(volatile u32 *) (u32) (gp + -31768)) = (u32) v0; if (c_) goto L_00631138; }
    func_002F4E10(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = 5;
    (*(volatile u32 *) (u32) (gp + -21052)) = (u32) 0;
    (*(volatile u8 *) (u32) (s0 + 17)) = (u8) v0;
L_00631138:;
    v0 = (*(volatile s32 *) (u32) (gp + -21032));
    { s32 c_ = v0 <= 0; s1 = 0; if (c_) goto L_00631188; }
    s0 = 0;
L_00631148:;
    v0 = (*(volatile s32 *) (u32) (gp + -21044));
    if (v0 == 0) goto L_00631170;
    v0 = (s32) ((u32) v0 + (u32) s0);
    a0 = (*(volatile s32 *) (u32) v0); func_001D7F10(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -21044));
    v0 = (s32) ((u32) v0 + (u32) s0);
    (*(volatile u32 *) (u32) v0) = (u32) 0;
L_00631170:;
    v0 = (*(volatile s32 *) (u32) (gp + -21032));
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < v0;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00631148; }
L_00631188:;
    a0 = (*(volatile s32 *) (u32) (gp + -21044));
    (*(volatile u32 *) (u32) (gp + -21048)) = (u32) 0; func_006562F0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -21036));
    (*(volatile u32 *) (u32) (gp + -21044)) = (u32) 0; func_006562F0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -21040)); func_006562F0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -21028));
    (*(volatile u32 *) (u32) (gp + -21040)) = (u32) 0;
    (*(volatile u32 *) (u32) (gp + -21036)) = (u32) 0; func_002DF960(a0, a1, a2, a3, a4, a5, a6, a7);
    (*(volatile u32 *) (u32) (gp + -21028)) = (u32) 0; goto L_00631680;
L_006311C0:;
    if (v0 != 0) { v1 = (*(volatile u8 *) (u32) (s0 + 17)); goto L_00631464; }
    v0 = (s32) 0x10000U;
    a0 = v0 | 0x380; v0 = func_001D5A10(a0);
    (*(volatile u32 *) (u32) (gp + -21048)) = (u32) v0;
    a0 = v0; v0 = func_001D4ED0(a0);
    (*(volatile u32 *) (u32) (gp + -21032)) = (u32) v0;
    a0 = v0;
    a1 = 4; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (gp + -21044)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (gp + -21032));
    { s32 c_ = v0 <= 0; s1 = 0; if (c_) goto L_006312A0; }
    s2 = 0;
L_00631204:;
    v0 = (*(volatile s32 *) (u32) (gp + -21044));
    a0 = (*(volatile s32 *) (u32) (gp + -21048));
    s3 = (s32) ((u32) v0 + (u32) s2); v0 = func_001D7F90(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) s3) = (u32) v0;
    a0 = v0;
    a1 = s1; func_001D7E40(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -21044));
    v0 = (s32) ((u32) v0 + (u32) s2);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 0; func_001D7D80(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -21044));
    v0 = (s32) ((u32) v0 + (u32) s2);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 0; func_001D7D60(a0, a1);
    v0 = (*(volatile s32 *) (u32) (gp + -21044));
    v0 = (s32) ((u32) v0 + (u32) s2);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 1; func_001D7C20(a0, a1, a2, a3);
    v1 = (*(volatile u8 *) (u32) (s0 + 17));
    v0 = 2;
    if (v1 != v0) goto L_00631288;
    v0 = (*(volatile s32 *) (u32) (gp + -21044));
    v0 = (s32) ((u32) v0 + (u32) s2);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 1; func_001D7D60(a0, a1);
L_00631288:;
    v0 = (*(volatile s32 *) (u32) (gp + -21032));
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < v0;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x4U); if (c_) goto L_00631204; }
L_006312A0:;
    a0 = 5;
    a1 = 4; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (gp + -21036)) = (u32) v0;
    a0 = 24;
    a1 = 4; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (gp + -21040)) = (u32) v0;
    a0 = 0; v0 = func_002DFC30(a0);
    (*(volatile u32 *) (u32) (gp + -21028)) = (u32) v0;
    a1 = (s32) ((u32) sp + 0x50U);
    v0 = (*(volatile s32 *) (u32) (gp + -21044));
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a2 = 0; v0 = func_001D7A20(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (gp + -21028));
    a1 = (s32) ((u32) sp + 0x50U); func_002DF0A0(a0, a1);
    v1 = (*(volatile u8 *) (u32) (s0 + 17));
    v0 = 2;
    if (v1 == v0) { a0 = 23; goto L_0063130C; }
    a0 = (*(volatile s32 *) (u32) (gp + -21028));
    a1 = 0; func_002DF8E0(a0, a1, a2, a3);
    a0 = 23;
L_0063130C:;
    v0 = func_002F4E90(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (gp + -21052)) = (u32) v0;
    a1 = (s32) ((u32) sp + 0x50U);
    v0 = (*(volatile s32 *) (u32) (gp + -21044));
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a2 = 5; v0 = func_001D7A20(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (gp + -21044));
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = 5; f0.f = func_001D79A0(a0, a1);
    f1.f = (*(volatile f32 *) (u32) (sp + 80));
    a0 = (s32) 0x660000U;
    f3.f = (*(volatile f32 *) (u32) (sp + 84));
    v1 = (s32) 0x660000U;
    f2.f = (*(volatile f32 *) (u32) (sp + 88));
    v0 = (s32) 0x660000U;
    (*(volatile f32 *) (u32) (a0 + -12368)) = f1.f;
    a1 = 1;
    f1.f = (*(volatile f32 *) (u32) (sp + 92));
    (*(volatile f32 *) (u32) (v1 + -12364)) = f3.f;
    v1 = (s32) 0x660000U;
    (*(volatile f32 *) (u32) (v1 + -12356)) = f1.f;
    v1 = (*(volatile s32 *) (u32) (gp + -21044));
    (*(volatile f32 *) (u32) (v0 + -12360)) = f2.f;
    v0 = (s32) 0x660000U;
    a0 = (*(volatile s32 *) (u32) (v1 + 12));
    (*(volatile f32 *) (u32) (v0 + -12336)) = f0.f; func_001D7D80(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -21044));
    a1 = (s32) ((u32) sp + 0x50U);
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a2 = 5; v0 = func_001D7A20(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (gp + -21044));
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = 5; f0.f = func_001D79A0(a0, a1);
    f1.f = (*(volatile f32 *) (u32) (sp + 80));
    a0 = (s32) 0x660000U;
    f2.f = (*(volatile f32 *) (u32) (sp + 88));
    v0 = (s32) 0x660000U;
    f3.f = (*(volatile f32 *) (u32) (sp + 84));
    v1 = (s32) 0x660000U;
    (*(volatile f32 *) (u32) (a0 + -12352)) = f1.f;
    (*(volatile f32 *) (u32) (v0 + -12344)) = f2.f;
    (*(volatile f32 *) (u32) (v1 + -12348)) = f3.f;
    v0 = (s32) 0x660000U;
    (*(volatile f32 *) (u32) (v0 + -12332)) = f0.f;
    v1 = (s32) 0x660000U;
    f1.f = (*(volatile f32 *) (u32) (sp + 92));
    v0 = (*(volatile s32 *) (u32) (gp + -21044));
    (*(volatile f32 *) (u32) (v1 + -12340)) = f1.f;
    v1 = (*(volatile u8 *) (u32) (s0 + 16));
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    s1 = (u64) 0 < (u64) v1;
    a1 = s1; func_001D7D80(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -21044));
    a1 = (s64) ((u64) s1 << 48);
    a0 = (*(volatile s32 *) (u32) (v0 + 8));
    a1 = a1 >> 48; func_001D7D80(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -21052));
    a1 = 1; func_002F3C30(a0, a1);
    a0 = (*(volatile s32 *) (u32) (gp + -21052));
    a1 = 0; func_002F3C70(a0, a1, a2, a3);
    v0 = (s32) 0x660000U;
    a0 = (*(volatile s32 *) (u32) (gp + -21052));
    v1 = (s32) ((u32) s1 << 4);
    v0 = (s32) ((u32) v0 + 0xffffcfb0U);
    a1 = (s32) ((u32) v0 + (u32) v1); func_002F3AE0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (gp + -21052));
    a1 = 0; func_002F3BF0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (gp + -21052));
    a1 = (s32) 0x660000U;
    a1 = (s32) ((u32) a1 + 0xffffcec0U); func_002F4980(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -21052)); func_002F3A00(a0);
    v1 = (*(volatile u8 *) (u32) (s0 + 17));
L_00631464:;
    v0 = 2;
    if (v1 != v0) { v1 = (*(volatile u8 *) (u32) (s0 + 18)); goto L_006314C4; }
    v1 = (*(volatile u8 *) (u32) (s0 + 3));
    v0 = 1;
    if (v1 != v0) goto L_006314C0;
    v1 = (*(volatile u8 *) (u32) (s0 + 16));
    v0 = (s32) 0x660000U;
    a0 = (*(volatile s32 *) (u32) (gp + -21052));
    v0 = (s32) ((u32) v0 + 0xffffcfb0U);
    (*(volatile u8 *) (u32) (s0 + 3)) = (u8) 0;
    v1 = (u64) 0 < (u64) v1;
    v1 = (s32) ((u32) v1 << 4);
    a1 = (s32) ((u32) v0 + (u32) v1); func_002F3AE0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (gp + -21052));
    a1 = (s32) 0x660000U;
    a1 = (s32) ((u32) a1 + 0xffffcec0U); func_002F38E0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -21052));
    a1 = 1; func_002F4D20(a0, a1, a2, a3);
L_006314C0:;
    v1 = (*(volatile u8 *) (u32) (s0 + 18));
L_006314C4:;
    v0 = 1;
    if (v1 != v0) { a0 = (*(volatile s32 *) (u32) (gp + -21052)); goto L_00631528; }
    a0 = (*(volatile s32 *) (u32) (gp + -21052));
    (*(volatile u8 *) (u32) (s0 + 18)) = (u8) 0; func_002F39A0(a0);
    v0 = (*(volatile s32 *) (u32) (gp + -21032));
    { s32 c_ = v0 <= 0; s1 = 0; if (c_) goto L_00631518; }
    s2 = 0;
L_006314EC:;
    v0 = (*(volatile s32 *) (u32) (gp + -21044));
    v0 = (s32) ((u32) v0 + (u32) s2);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 0; func_001D7D60(a0, a1);
    v0 = (*(volatile s32 *) (u32) (gp + -21032));
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < v0;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x4U); if (c_) goto L_006314EC; }
L_00631518:;
    a0 = (*(volatile s32 *) (u32) (gp + -21028));
    a1 = 0; func_002DF8E0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -21052));
L_00631528:;
    if (a0 == 0) { a0 = (*(volatile s32 *) (u32) (gp + -21052)); goto L_00631548; }
    func_002F2ED0(a0, a1, a2, a3, f12.f);
    a0 = (*(volatile s32 *) (u32) (gp + -21052));
    a1 = 0; func_002F4D80(a0, a1);
    a0 = (*(volatile s32 *) (u32) (gp + -21052));
L_00631548:;
    v0 = func_002F3850(a0);
    v1 = 4;
    if (v0 == v1) { (*(volatile u8 *) (u32) (s0 + 17)) = (u8) v1; goto L_006315FC; }
    v1 = 3;
    if (v0 == v1) { (*(volatile u8 *) (u32) (s0 + 17)) = (u8) v1; goto L_006315FC; }
    v1 = 2;
    if (v0 == v1) { a0 = (*(volatile u8 *) (u32) (s0 + 17)); goto L_00631590; }
    v1 = 1;
    if (v0 == v1) { (*(volatile u8 *) (u32) (s0 + 17)) = (u8) v1; goto L_006315FC; }
    if (v0 == 0) { (*(volatile u8 *) (u32) (s0 + 17)) = (u8) 0; goto L_006315FC; }
    a0 = (*(volatile u8 *) (u32) (s0 + 17)); goto L_00631600;
L_00631590:;
    v1 = 1;
    if (a0 != v1) { v1 = 2; goto L_006315F8; }
    v0 = (*(volatile s32 *) (u32) (gp + -21032));
    { s32 c_ = v0 <= 0; s1 = 0; if (c_) goto L_006315D8; }
    s2 = 0;
L_006315AC:;
    v0 = (*(volatile s32 *) (u32) (gp + -21044));
    v0 = (s32) ((u32) v0 + (u32) s2);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 1; func_001D7D60(a0, a1);
    v0 = (*(volatile s32 *) (u32) (gp + -21032));
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < v0;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x4U); if (c_) goto L_006315AC; }
L_006315D8:;
    a0 = (*(volatile s32 *) (u32) (gp + -21044));
    a1 = (*(volatile s32 *) (u32) (gp + -21028));
    (*(volatile u8 *) (u32) (s0 + 1)) = (u8) 0; func_00631C30(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -21028));
    a1 = 0; func_002DF8E0(a0, a1, a2, a3);
    v1 = 2;
L_006315F8:;
    (*(volatile u8 *) (u32) (s0 + 17)) = (u8) v1;
L_006315FC:;
    a0 = (*(volatile u8 *) (u32) (s0 + 17));
L_00631600:;
    v1 = 2;
    if (a0 != v1) goto L_00631680;
    v1 = (*(volatile u8 *) (u32) (s0 + 4));
    v0 = 1;
    if (v1 != v0) { a0 = (*(volatile s32 *) (u32) (gp + -21044)); goto L_00631628; }
    a0 = (*(volatile s32 *) (u32) (gp + -21044)); func_006316A0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -21044));
L_00631628:;
    a1 = (*(volatile s32 *) (u32) (gp + -21036)); func_006319D0(a0, a1);
    v1 = (*(volatile u8 *) (u32) (s0 + 1));
    v0 = 1;
    if (v1 != v0) { v1 = (*(volatile u8 *) (u32) (s0 + 2)); goto L_00631654; }
    a0 = (*(volatile s32 *) (u32) (gp + -21044));
    a1 = (*(volatile s32 *) (u32) (gp + -21028));
    (*(volatile u8 *) (u32) (s0 + 1)) = (u8) 0; func_00631C30(a0, a1, a2, a3);
    v1 = (*(volatile u8 *) (u32) (s0 + 2));
L_00631654:;
    v0 = 1;
    if (v1 != v0) { v0 = (*(volatile s32 *) (u32) (gp + -21044)); goto L_00631674; }
    a0 = (*(volatile s32 *) (u32) (gp + -21044));
    a1 = (*(volatile s32 *) (u32) (gp + -21040));
    (*(volatile u8 *) (u32) (s0 + 2)) = (u8) 0; func_00631770(a0, a1);
    v0 = (*(volatile s32 *) (u32) (gp + -21044));
L_00631674:;
    a0 = (*(volatile s32 *) (u32) (v0 + 16));
    a1 = 0; func_001D7D60(a0, a1);
L_00631680:;
L_00631684:;
    return;
}
