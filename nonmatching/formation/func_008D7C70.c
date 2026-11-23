/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D7A20(s32, s32, s32);
void func_001EE5D0(s32, s32);
void func_001EEE60(s32, s32);
void func_001EF860(s32, s32);
s32 func_001FAB60(s32, s32, s32, s32);
s32 func_001FABB0(s32, s32, s32, s32);
s32 func_00292F00(s32);
void func_002C9E90(s32, s32, s32, s32, s32, s32, s32, s32);
void func_008BB3F0(s32, s32, s32, s32);
void func_008C59B0(s32, s32, s32, s32);
void func_008D5B70(s32, s32, s32, s32, s32);
void func_008D5D30(s32, s32, s32, s32);
void func_008D5E70(s32, s32, s32, s32);
void func_008D5FF0(s32, s32, s32, s32);

void func_008D7C70(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    s64 frame[40];
    s32 sp = (s32) (u32) frame;

    fp = a3;
    s7 = a2;
    s5 = a0;
    s4 = a1;
    v1 = (*(volatile s32 *) (u32) (a0 + 92));
    { s32 c_ = v1 == 0; (*(volatile u32 *) (u32) (sp + 172)) = (u32) a4; if (c_) goto L_008D7F0C; }
    s3 = 0;
    s2 = s4;
    s1 = (s32) ((u32) sp + 0xc0U);
    s0 = s5;
L_008D7CC8:;
    if (s3 == 0) goto L_008D7CE8;
    v1 = (*(volatile u8 *) (u32) (s2 + -2));
    v0 = (*(volatile u8 *) (u32) (s2 + -1));
    (*(volatile u8 *) (u32) (sp + 312)) = (u8) v1;
    (*(volatile u8 *) (u32) (sp + 313)) = (u8) v0; goto L_008D7D10;
L_008D7CE8:;
    a0 = 0;
    a1 = 0;
    a2 = 0; v0 = func_001FABB0(a0, a1, a2, a3);
    (*(volatile u8 *) (u32) (sp + 312)) = (u8) v0;
    a0 = 0;
    a1 = 0;
    a2 = 0; v0 = func_001FAB60(a0, a1, a2, a3);
    (*(volatile u8 *) (u32) (sp + 313)) = (u8) v0;
L_008D7D10:;
    a0 = (*(volatile s32 *) (u32) (s5 + 276));
    { s32 c_ = a0 == 0; s6 = (*(volatile u8 *) (u32) (s5 + 34)); if (c_) goto L_008D7E10; }
    a1 = (s32) ((u32) sp + 0xb0U);
    a2 = 191; v0 = func_001D7A20(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 312));
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_008D7D40; }
    f0.i = (s32) v0;
    f0.f = (f32) f0.i; goto L_008D7D58;
L_008D7D40:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f0.f + f0.f;
L_008D7D58:;
    v0 = (*(volatile u8 *) (u32) (sp + 313));
    { s32 c_ = v0 < 0; (*(volatile f32 *) (u32) s1) = f0.f; if (c_) goto L_008D7D70; }
    f0.i = (s32) v0;
    f0.f = (f32) f0.i; goto L_008D7D8C;
L_008D7D70:;
    v1 = (s32) ((u32) v0 >> 1);
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f0.f + f0.f;
L_008D7D8C:;
    v1 = s6 & 0xff;
    v0 = 1;
    { s32 c_ = v1 != v0; (*(volatile f32 *) (u32) (s1 + 4)) = f0.f; if (c_) goto L_008D7DC8; }
    f1.f = (*(volatile f32 *) (u32) s1);
    v1 = (s32) 0x42400000U;
    f2.i = (s32) v1;
    v0 = (s32) 0x42d00000U;
    f0.i = (s32) v0;
    f1.f = f2.f - f1.f;
    (*(volatile f32 *) (u32) s1) = f1.f;
    f1.f = (*(volatile f32 *) (u32) (s1 + 4));
    f0.f = f0.f - f1.f;
    (*(volatile f32 *) (u32) (s1 + 4)) = f0.f;
L_008D7DC8:;
    v0 = (s32) 0x3f800000U;
    f2.f = (*(volatile f32 *) (u32) (sp + 184));
    v1 = (s32) 0x42400000U;
    f1.i = (s32) v0;
    f0.f = (*(volatile f32 *) (u32) (sp + 188));
    v0 = (s32) 0x42d00000U;
    f4.f = f2.f - f1.f;
    f2.f = f0.f - f1.f;
    f3.f = (*(volatile f32 *) (u32) s1);
    f1.i = (s32) v1;
    f0.i = (s32) v0;
    f3.f = f3.f * f4.f;
    f1.f = f3.f / f1.f;
    (*(volatile f32 *) (u32) s1) = f1.f;
    f1.f = (*(volatile f32 *) (u32) (s1 + 4));
    f1.f = f1.f * f2.f;
    f0.f = f1.f / f0.f;
    (*(volatile f32 *) (u32) (s1 + 4)) = f0.f;
L_008D7E10:;
    a0 = (*(volatile s32 *) (u32) (s0 + 112));
    a1 = (s32) ((u32) sp + 0x120U); func_001EE5D0(a0, a1);
    f1.f = (*(volatile f32 *) (u32) s1);
    f0.f = (*(volatile f32 *) (u32) (s1 + 4));
    (*(volatile f32 *) (u32) (sp + 288)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 292)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (s0 + 112));
    a1 = (s32) ((u32) sp + 0x120U); func_001EF860(a0, a1);
    v0 = (s32) ((u32) s4 + (u32) s3);
    a0 = (*(volatile u8 *) (u32) (v0 + 20)); v0 = func_00292F00(a0);
    a1 = v0;
    a0 = (s32) ((u32) sp + 0x13cU);
    v0 = (s32) ((u32) s7 + (u32) s3);
    a3 = (*(volatile u8 *) (u32) v0);
    a2 = 0; func_008BB3F0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s0 + 112));
    a1 = (s32) ((u32) sp + 0x13cU); func_001EEE60(a0, a1);
    s3 = (s32) ((u32) s3 + 0x1U);
    s2 = (s32) ((u32) s2 + 0x2U);
    v1 = s3 < 11;
    s1 = (s32) ((u32) s1 + 0x8U);
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_008D7CC8; }
    a0 = (*(volatile s8 *) (u32) (s5 + 32));
    v1 = 1;
    if (a0 == v1) { a3 = (*(volatile s32 *) (u32) (sp + 172)); goto L_008D7EA0; }
    if (a0 == 0) { ; goto L_008D7F10; }
    goto L_008D7F0C;
L_008D7EA0:;
    a0 = s5;
    a1 = (s32) ((u32) sp + 0xc0U);
    a2 = s4; func_008D5FF0(a0, a1, a2, a3);
    a0 = s5;
    a1 = (s32) ((u32) sp + 0xc0U);
    a2 = s4; func_008D5E70(a0, a1, a2, a3);
    a0 = s5;
    a1 = (s32) ((u32) sp + 0xc0U);
    a2 = s4; func_008D5D30(a0, a1, a2, a3);
    a2 = s7;
    a3 = fp;
    a0 = s5;
    a1 = (s32) ((u32) sp + 0xc0U);
    a4 = s4; func_008D5B70(a0, a1, a2, a3, a4);
    a1 = (s32) ((u32) s4 + 0x14U);
    a0 = (s32) ((u32) s5 + 0x34U); func_002C9E90(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = (*(volatile s8 *) (u32) (s5 + 33));
    if (v1 != 0) goto L_008D7F0C;
    a0 = s5;
    a1 = (s32) ((u32) s5 + 0x34U); func_008C59B0(a0, a1, a2, a3);
L_008D7F0C:;
L_008D7F10:;
    return;
}
