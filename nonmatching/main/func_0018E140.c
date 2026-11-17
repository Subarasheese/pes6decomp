/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_0018E140(s32 a0, s32 a1, f32 fa12) {
    s32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, a4 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    union { f32 f; s32 i; } f4 = { 0 };
    union { f32 f; s32 i; } f5 = { 0 };
    union { f32 f; s32 i; } f6 = { 0 };
    union { f32 f; s32 i; } f7 = { 0 };
    union { f32 f; s32 i; } f8 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    s32 fcc = 0;
    f32 acc = 0;

    v1 = (s32) 0x520000U;
    a2 = 0;
    a4 = (*(s32 *) (u32) (v1 + 528));
    f1.i = (s32) 0;
L_0018E150:;
    f0.f = (*(f32 *) (u32) (a4 + 12));
    fcc = f0.f <= f1.f;
    if (!fcc) { a2 = (s32) ((u32) a2 + 0x1U); goto L_0018E220; }
    v1 = (s32) 0x3f800000U;
    a2 = (s32) 0x390000U;
    (*(u32 *) (u32) (a4 + 12)) = (u32) v1;
    f3.i = (s32) v1;
    f0.f = (*(f32 *) (u32) a0);
    a3 = 0;
    v1 = (s32) 0x40000000U;
    a2 = (s32) ((u32) a2 + 0x75d0U);
    f2.i = (s32) v1;
    f4.i = (s32) 0;
    v1 = (s32) 0x42480000U;
    (*(f32 *) (u32) a4) = f0.f;
    (*(f32 *) (u32) (a4 + 4)) = f1.f;
    f0.f = (*(f32 *) (u32) (a0 + 8));
    f1.i = (s32) v1;
    (*(f32 *) (u32) (a4 + 8)) = f0.f;
    f0.f = (*(f32 *) (u32) a1);
    (*(f32 *) (u32) (a4 + 16)) = f0.f;
    f0.f = (*(f32 *) (u32) (a1 + 8));
    (*(f32 *) (u32) (a4 + 20)) = f0.f;
L_0018E1B4:;
    f6.f = (*(f32 *) (u32) (a1 + 8));
    f5.f = (*(f32 *) (u32) (a2 + 4));
    f8.f = (*(f32 *) (u32) a1);
    f7.f = (*(f32 *) (u32) a2);
    f0.f = (*(f32 *) (u32) (a1 + 4));
    acc = f6.f * f5.f;
    f5.f = acc + f8.f * f7.f;
    f0.f = f0.f + f5.f;
    f0.f = f3.f + f0.f;
    fcc = f0.f < f4.f;
    if (fcc) { f0.i = f4.i; goto L_0018E1F8; }
    fcc = f0.f <= f2.f;
    if (fcc) goto L_0018E1F8;
    f0.i = f2.i;
L_0018E1F8:;
    a3 = (s32) ((u32) a3 + 0x1U);
    f0.f = f0.f * f12.f;
    v1 = a3 < 6;
    a2 = (s32) ((u32) a2 + 0x8U);
    f0.f = f1.f * f0.f;
    (*(f32 *) (u32) (a4 + 24)) = f0.f;
    { s32 c_ = v1 != 0; a4 = (s32) ((u32) a4 + 0x4U); if (c_) goto L_0018E1B4; }
    goto L_0018E230;
L_0018E220:;
    v1 = a2 < 12;
    { s32 c_ = v1 != 0; a4 = (s32) ((u32) a4 + 0x190U); if (c_) goto L_0018E150; }
L_0018E230:;
    return v0;
}
