/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002A11B0(s32, s32);
s32 func_002A95F0(s32, s32, s32);
s32 func_009B34C0(s32, s32, s32, s32);

s32 func_002AD720(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    union { f32 f; s32 i; } f12 = { 0 };
    union { f32 f; s32 i; } f13 = { 0 };
    union { f32 f; s32 i; } f14 = { 0 };
    union { f32 f; s32 i; } f15 = { 0 };
    s64 frame[36];
    s32 sp = (s32) (u32) frame;

    fp = (s32) ((u32) sp + 0xb8U);
    s7 = (s32) ((u32) sp + 0xa8U);
    s6 = a1 & 0xffff;
    s5 = a0;
    s4 = a2;
    s3 = 0;
    s2 = (s32) ((u32) sp + 0xc0U);
    s1 = s4;
    s0 = s5 & 0xff;
L_002AD770:;
    a0 = (s32) ((u32) sp + 0xa0U);
    a1 = s3;
    a2 = s0; v0 = func_002A95F0(a0, a1, a2);
    a0 = (s32) ((u32) sp + 0xb0U);
    a1 = s5; v0 = func_002A11B0(a0, a1);
    f13.f = (*(volatile f32 *) (u32) fp);
    f14.f = (*(volatile f32 *) (u32) (sp + 160));
    f15.f = (*(volatile f32 *) (u32) s7);
    f12.f = (*(volatile f32 *) (u32) (sp + 176)); v0 = func_009B34C0(a0, a1, a2, a3);
    v1 = v0 & 0xffff;
    v1 = (s32) ((u32) s6 - (u32) v1);
    if (v1 <= 0) { v1 = (s32) ((u32) 0 - (u32) v1); goto L_002AD7B0; }
L_002AD7B0:;
    (*(volatile u32 *) (u32) s1) = (u32) s3;
    (*(volatile u16 *) (u32) s2) = (u16) v1;
    s3 = (s32) ((u32) s3 + 0x1U);
    v1 = s3 < 43;
    s2 = (s32) ((u32) s2 + 0x2U);
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_002AD770; }
    a2 = 1;
    a4 = (s32) ((u32) sp + 0xc2U);
L_002AD7D4:;
    a1 = (*(volatile u16 *) (u32) a4);
    a5 = (s32) ((u32) a2 + 0xffffffffU);
    a0 = (s32) ((u32) a5 << 1);
    v1 = (s32) ((u32) a5 << 2);
    a0 = (s32) ((u32) a0 + (u32) sp);
    a3 = (s32) ((u32) s4 + (u32) v1);
    a0 = (s32) ((u32) a0 + 0xc0U);
L_002AD7F0:;
    if (a5 < 0) goto L_002AD828;
    v1 = (*(volatile u16 *) (u32) a0);
    at = a1 < v1;
    if (at == 0) goto L_002AD828;
    (*(volatile u16 *) (u32) (a0 + 2)) = (u16) v1;
    a5 = (s32) ((u32) a5 + 0xffffffffU);
    v1 = (*(volatile s32 *) (u32) a3);
    a0 = (s32) ((u32) a0 + 0xfffffffeU);
    (*(volatile u32 *) (u32) (a3 + 4)) = (u32) v1;
    a3 = (s32) ((u32) a3 + 0xfffffffcU); goto L_002AD7F0;
L_002AD828:;
    v1 = (s32) ((u32) a5 << 1);
    a0 = (s32) ((u32) v1 + (u32) sp);
    a4 = (s32) ((u32) a4 + 0x2U);
    v1 = (s32) ((u32) a5 << 2);
    v1 = (s32) ((u32) s4 + (u32) v1);
    (*(volatile u32 *) (u32) (v1 + 4)) = (u32) a2;
    a2 = (s32) ((u32) a2 + 0x1U);
    v1 = a2 < 43;
    { s32 c_ = v1 != 0; (*(volatile u16 *) (u32) (a0 + 194)) = (u16) a1; if (c_) goto L_002AD7D4; }
    return v0;
}
