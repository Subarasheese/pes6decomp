/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_002C3B00(s32, s32, s32, s32);
s32 func_002C3B20(s32, s32, s32, s32);

s32 func_003115C0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    s64 frame[24];
    s32 sp = (s32) (u32) frame;

    v0 = 8;
    v1 = (s32) ((u32) sp + 0xb0U);
    fp = a4;
    s7 = a5;
    s6 = a2;
    s5 = a3;
    (*(volatile u32 *) (u32) (sp + 172)) = (u32) a0;
    { s32 c_ = v1 == 0; (*(volatile u32 *) (u32) (sp + 168)) = (u32) a1; if (c_) goto L_0031162C; }
L_00311610:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_00311610;
L_0031162C:;
    s4 = 0;
    s0 = (s32) ((u32) sp + 0xb0U);
L_00311634:;
    at = s7 < fp;
    { s32 c_ = at != 0; s3 = fp; if (c_) goto L_003116B8; }
L_00311640:;
    a2 = s4 & 0xff;
    a4 = s3 & 0xff;
    a0 = (s32) ((u32) sp + 0xb8U);
    a1 = 4;
    a3 = 255; v0 = func_002C3B20(a0, a1, a2, a3);
    s2 = 0;
L_00311660:;
    at = s5 < s6;
    { s32 c_ = at != 0; s1 = s6; if (c_) goto L_00311698; }
L_00311670:;
    a0 = (s32) ((u32) sp + 0xb8U);
    a1 = s2;
    a2 = s1; f0.f = func_002C3B00(a0, a1, a2, a3);
    f1.f = (*(volatile f32 *) (u32) s0);
    s1 = (s32) ((u32) s1 + 0x1U);
    at = s5 < s1;
    f0.f = f1.f + f0.f;
    { s32 c_ = at == 0; (*(volatile f32 *) (u32) s0) = f0.f; if (c_) goto L_00311670; }
L_00311698:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 8;
    if (v0 != 0) goto L_00311660;
    s3 = (s32) ((u32) s3 + 0x1U);
    at = s7 < s3;
    if (at == 0) goto L_00311640;
L_003116B8:;
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = s4 < 2;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00311634; }
    f1.f = (*(volatile f32 *) (u32) (sp + 176));
    v1 = (*(volatile s32 *) (u32) (sp + 172));
    f0.f = (*(volatile f32 *) (u32) (sp + 180));
    v0 = 1;
    f1.i = (s32) f1.f;
    a0 = f1.i;
    (*(volatile u32 *) (u32) v1) = (u32) a0;
    f0.i = (s32) f0.f;
    v1 = (*(volatile s32 *) (u32) (sp + 168));
    a0 = f0.i;
    (*(volatile u32 *) (u32) v1) = (u32) a0;
    return v0;
}
