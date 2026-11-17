/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_001304E0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f20 = { 0 };
    union { f32 f; s32 i; } f21 = { 0 };
    s32 fcc = 0;

    a3 = (*(volatile s32 *) (u32) (a1 + 4));
    a5 = a3 & 0x8;
    { s32 c_ = a5 != 0; v1 = a3 & 0x2; if (c_) goto L_001306F8; }
L_00130510:;
    a3 = (*(volatile s32 *) (u32) (a1 + 16));
    a3 = (s32) ((u32) a1 + (u32) a3);
    a3 = (s32) ((u32) a3 + 0x4U);
    if (a2 == a3) goto L_0013070C;
    f2.f = (*(volatile f32 *) (u32) (a2 + -8));
    a6 = 0;
L_0013052C:;
    f1.f = (*(volatile f32 *) (u32) a2);
    a3 = (*(volatile s32 *) (u32) (a2 + 4));
    f0.i = (s32) 0;
    f20.f = f12.f - f2.f;
    f21.f = f1.f - f2.f;
    fcc = f0.f == f21.f;
    { s32 c_ = !fcc; a4 = (s32) ((u32) a1 + (u32) a3); if (c_) goto L_00130554; }
    a3 = a4; goto L_0013055C;
L_00130554:;
    a2 = (*(volatile s32 *) (u32) (a2 + 12));
    a3 = (s32) ((u32) a1 + (u32) a2);
L_0013055C:;
    if (v1 == 0) goto L_00130580;
    if (a5 == 0) goto L_00130574;
    s2 = 0; goto L_00130598;
L_00130574:;
    s2 = (s32) 0x130000U;
    s2 = (s32) ((u32) s2 + 0xa50U); goto L_00130598;
L_00130580:;
    if (a5 == 0) goto L_00130590;
    s2 = 0; goto L_00130598;
L_00130590:;
    s2 = (s32) 0x130000U;
    s2 = (s32) ((u32) s2 + 0xb50U);
L_00130598:;
    a2 = (*(volatile s32 *) (u32) (a1 + 4));
    s0 = 0;
    a2 = (s32) ((u32) a2 >> 28);
    a1 = 5;
    a2 = a2 & 0xf;
    { s32 c_ = a2 == a1; s1 = 0; if (c_) goto L_0013066C; }
    a1 = 4;
    if (a2 == a1) goto L_00130640;
    a1 = 3;
    if (a2 == a1) goto L_00130618;
    a1 = 2;
    if (a2 == a1) goto L_0013060C;
    a1 = 1;
    if (a2 == a1) goto L_001305EC;
    goto L_00130720;
L_001305EC:;
    s0 = (s32) 0x130000U;
    { s32 c_ = v1 == 0; s0 = (s32) ((u32) s0 + 0x970U); if (c_) goto L_00130604; }
    s1 = (s32) 0x130000U;
    s1 = (s32) ((u32) s1 + 0x750U); goto L_0013066C;
L_00130604:;
    s1 = s0; goto L_0013066C;
L_0013060C:;
    s0 = (s32) 0x130000U;
    s0 = (s32) ((u32) s0 + 0x970U); goto L_0013066C;
L_00130618:;
    if (a6 == 0) goto L_0013066C;
    s0 = (s32) 0x130000U;
    { s32 c_ = v1 == 0; s0 = (s32) ((u32) s0 + 0x970U); if (c_) goto L_00130638; }
    s1 = (s32) 0x130000U;
    s1 = (s32) ((u32) s1 + 0x750U); goto L_0013066C;
L_00130638:;
    s1 = s0; goto L_0013066C;
L_00130640:;
    if (a6 == 0) goto L_00130664;
    if (v1 == 0) goto L_0013065C;
    s1 = (s32) 0x130000U;
    s1 = (s32) ((u32) s1 + 0x750U); goto L_00130664;
L_0013065C:;
    s1 = (s32) 0x130000U;
    s1 = (s32) ((u32) s1 + 0x970U);
L_00130664:;
    s0 = (s32) 0x130000U;
    s0 = (s32) ((u32) s0 + 0x970U);
L_0013066C:;
    a1 = (s32) 0x400000U;
    v1 = (s32) 0x400000U;
    (*(volatile u32 *) (u32) (a1 + -18552)) = (u32) a4;
    (*(volatile u32 *) (u32) (v1 + -18548)) = (u32) a3;
    s3 = (*(volatile s32 *) (u32) a0);
    if (s3 == 0) goto L_001306F0;
L_00130688:;
    { u32 t_ = (u32) s2; a0 = s3; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    (*(volatile f32 *) (u32) (s3 + 192)) = f21.f;
    (*(volatile f32 *) (u32) (s3 + 196)) = f20.f;
    v1 = (*(volatile s8 *) (u32) (s3 + 259));
    v1 = v1 & 0x80;
    if (v1 == 0) goto L_001306C8;
    if (s0 == 0) { (*(volatile u32 *) (u32) (s3 + 200)) = (u32) 0; goto L_001306E0; }
    { u32 t_ = (u32) s0; a0 = s3; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    (*(volatile f32 *) (u32) (s3 + 200)) = f21.f;
    (*(volatile f32 *) (u32) (s3 + 204)) = f20.f; goto L_001306E0;
L_001306C8:;
    if (s1 == 0) goto L_00130718;
    { u32 t_ = (u32) s1; a0 = s3; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    (*(volatile f32 *) (u32) (s3 + 200)) = f21.f;
    (*(volatile f32 *) (u32) (s3 + 204)) = f20.f;
L_001306E0:;
    s3 = (*(volatile s32 *) (u32) (s3 + 260));
    if (s3 != 0) goto L_00130688;
L_001306F0:;
    goto L_00130720;
L_001306F8:;
    a4 = (*(volatile s8 *) (u32) (a0 + 29));
    a3 = -128;
    a3 = a4 | a3;
    (*(volatile u8 *) (u32) (a0 + 29)) = (u8) a3; goto L_00130510;
L_0013070C:;
    f2.i = (s32) 0;
    a6 = 1; goto L_0013052C;
L_00130718:;
    (*(volatile u32 *) (u32) (s3 + 200)) = (u32) 0; goto L_001306E0;
L_00130720:;
    return v0;
}
