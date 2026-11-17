/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001DCCF0(s32);
s32 func_001E5010(s32, s32);

s32 func_001E3FF0(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    union { f32 f; s32 i; } f4 = { 0 };
    f32 acc = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    v0 = 16;
    v1 = (s32) ((u32) sp + 0x50U);
    s3 = a0;
    s2 = a1;
    if (v1 == 0) goto L_001E4038;
L_001E401C:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_001E401C;
L_001E4038:;
    v0 = 2;
    v1 = (s32) 0x530000U;
    (*(volatile u8 *) (u32) (s2 + 44)) = (u8) v0;
    s1 = (*(volatile s32 *) (u32) (v1 + -20768));
    v0 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) s2) = (u32) s1;
    s0 = (*(volatile s32 *) (u32) (v0 + -20764));
    (*(volatile u32 *) (u32) (s2 + 8)) = (u32) s0;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    v0 = (*(volatile u8 *) (u32) (v0 + 56));
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_001E4074; }
    f0.i = (s32) v0;
    f1.f = (f32) f0.i; goto L_001E408C;
L_001E4074:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f1.f = (f32) f0.i;
    f1.f = f1.f + f1.f;
L_001E408C:;
    f0.f = (*(volatile f32 *) (u32) (s3 + 52));
    f0.f = f1.f * f0.f;
    (*(volatile f32 *) (u32) (sp + 88)) = f0.f;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    v0 = (*(volatile u8 *) (u32) (v0 + 57));
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_001E40B4; }
    f0.i = (s32) v0;
    f1.f = (f32) f0.i; goto L_001E40CC;
L_001E40B4:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f1.f = (f32) f0.i;
    f1.f = f1.f + f1.f;
L_001E40CC:;
    f0.f = (*(volatile f32 *) (u32) (s3 + 56));
    f0.f = f1.f * f0.f;
    (*(volatile f32 *) (u32) (sp + 92)) = f0.f;
L_001E40D8:;
    a0 = s1; v0 = func_001DCCF0(a0);
    v1 = (s32) 0x530000U;
    a0 = 1;
    v1 = (*(volatile s32 *) (u32) (v1 + -21008));
    if (v1 != a0) goto L_001E4188;
    v1 = (s32) 0x530000U;
    a0 = 32;
    v1 = (*(volatile s32 *) (u32) (v1 + -21000));
    if (v1 != a0) goto L_001E4188;
    a0 = s0;
    a1 = (s32) ((u32) sp + 0x50U); v0 = func_001E5010(a0, a1);
    v0 = (s32) 0x530000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -20996));
    s1 = (s32) ((u32) s1 + (u32) v0);
    (*(volatile u32 *) (u32) (s2 + 4)) = (u32) s1;
    (*(volatile u32 *) (u32) (s2 + 12)) = (u32) s0;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    v0 = (*(volatile u8 *) (u32) (v0 + 56));
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_001E4144; }
    f0.i = (s32) v0;
    f4.f = (f32) f0.i; goto L_001E415C;
L_001E4144:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f4.f = (f32) f0.i;
    f4.f = f4.f + f4.f;
L_001E415C:;
    v0 = (s32) 0x530000U;
    f1.f = (*(volatile f32 *) (u32) (sp + 80));
    f3.f = (*(volatile f32 *) (u32) (v0 + -20732));
    f0.i = (s32) 0;
    f2.f = (*(volatile f32 *) (u32) (s3 + 52));
    acc = f0.f + f1.f;
    f0.f = f4.f + f3.f;
    f0.f = acc + f2.f * f0.f;
    (*(volatile f32 *) (u32) (sp + 80)) = f0.f;
    s0 = (*(volatile s32 *) (u32) s0); goto L_001E40D8;
L_001E4188:;
    a0 = (s32) 0x530000U;
    f0.f = (*(volatile f32 *) (u32) (sp + 80));
    v1 = (s32) 0x530000U;
    (*(volatile f32 *) (u32) (s2 + 24)) = f0.f;
    (*(volatile u32 *) (u32) (a0 + -20768)) = (u32) s1;
    (*(volatile u32 *) (u32) (v1 + -20764)) = (u32) s0;
    return v0;
}
