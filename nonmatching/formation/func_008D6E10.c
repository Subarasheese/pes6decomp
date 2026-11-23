/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D7A20(s32, s32, s32);
void func_001EEE60(s32, s32);
void func_001EF900(s32, s32);
s32 func_001FAB60(s32, s32, s32, s32);
s32 func_001FABB0(s32, s32, s32, s32);
s32 func_00292F00(s32);
void func_008BB300(s32, s32, s32, s32);
s32 func_008BB4D0(s32, s32, s32, s32);

void func_008D6E10(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    s64 frame[22];
    s32 sp = (s32) (u32) frame;

    s6 = a2;
    s5 = a0;
    s2 = (*(volatile s32 *) (u32) (a0 + 108));
    { s32 c_ = s2 == 0; s4 = a1; if (c_) goto L_008D7004; }
    s7 = a3 & 0xff;
    s3 = 0;
    s1 = s4;
    s0 = s5;
L_008D6E5C:;
    if (s3 == 0) goto L_008D6E78;
    v1 = (*(volatile u8 *) (u32) (s1 + -2));
    v0 = (*(volatile u8 *) (u32) (s1 + -1));
    (*(volatile u8 *) (u32) (sp + 172)) = (u8) v1;
    (*(volatile u8 *) (u32) (sp + 173)) = (u8) v0; goto L_008D6EA0;
L_008D6E78:;
    a0 = 0;
    a1 = 0;
    a2 = 0; v0 = func_001FABB0(a0, a1, a2, a3);
    (*(volatile u8 *) (u32) (sp + 172)) = (u8) v0;
    a0 = 0;
    a1 = 0;
    a2 = 0; v0 = func_001FAB60(a0, a1, a2, a3);
    (*(volatile u8 *) (u32) (sp + 173)) = (u8) v0;
L_008D6EA0:;
    a0 = (*(volatile s32 *) (u32) (s5 + 276));
    if (a0 == 0) goto L_008D6FA0;
    a1 = (s32) ((u32) sp + 0x90U);
    a2 = 191; v0 = func_001D7A20(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 172));
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_008D6ED0; }
    f0.i = (s32) v0;
    f0.f = (f32) f0.i; goto L_008D6EE8;
L_008D6ED0:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f0.f + f0.f;
L_008D6EE8:;
    v0 = (*(volatile u8 *) (u32) (sp + 173));
    { s32 c_ = v0 < 0; (*(volatile f32 *) (u32) (sp + 160)) = f0.f; if (c_) goto L_008D6F00; }
    f0.i = (s32) v0;
    f3.f = (f32) f0.i; goto L_008D6F1C;
L_008D6F00:;
    v1 = (s32) ((u32) v0 >> 1);
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f3.f = (f32) f0.i;
    f3.f = f3.f + f3.f;
L_008D6F1C:;
    v0 = 1;
    { s32 c_ = s7 != v0; (*(volatile f32 *) (u32) (sp + 164)) = f3.f; if (c_) goto L_008D6F50; }
    v0 = (s32) 0x42400000U;
    f2.i = (s32) v0;
    f1.f = (*(volatile f32 *) (u32) (sp + 160));
    v0 = (s32) 0x42d00000U;
    f0.i = (s32) v0;
    f0.f = f0.f - f3.f;
    f1.f = f2.f - f1.f;
    (*(volatile f32 *) (u32) (sp + 160)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 164)) = f0.f;
L_008D6F50:;
    v0 = (s32) 0x3f800000U;
    f0.f = (*(volatile f32 *) (u32) (sp + 152));
    v1 = (s32) 0x42400000U;
    f4.i = (s32) v0;
    f1.f = (*(volatile f32 *) (u32) (sp + 156));
    v0 = (s32) 0x42d00000U;
    f3.f = f0.f - f4.f;
    f2.f = (*(volatile f32 *) (u32) (sp + 160));
    f1.f = f1.f - f4.f;
    f0.f = (*(volatile f32 *) (u32) (sp + 164));
    f2.f = f2.f * f3.f;
    f1.f = f0.f * f1.f;
    f0.i = (s32) v1;
    f0.f = f2.f / f0.f;
    (*(volatile f32 *) (u32) (sp + 160)) = f0.f;
    f0.i = (s32) v0;
    f0.f = f1.f / f0.f;
    (*(volatile f32 *) (u32) (sp + 164)) = f0.f;
L_008D6FA0:;
    a0 = s2;
    a1 = (s32) ((u32) sp + 0xa0U);
    a2 = 2; v0 = func_008BB4D0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 156)) = (u32) v0;
    a0 = v0;
    a1 = 1; func_001EF900(a0, a1);
    v0 = (s32) ((u32) s4 + (u32) s3);
    a0 = (*(volatile u8 *) (u32) (v0 + 20)); v0 = func_00292F00(a0);
    a1 = v0;
    a0 = (s32) ((u32) sp + 0xa8U);
    v0 = (s32) ((u32) s6 + (u32) s3);
    a2 = (*(volatile u8 *) (u32) v0);
    a3 = 1; func_008BB300(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s0 + 156));
    a1 = (s32) ((u32) sp + 0xa8U); func_001EEE60(a0, a1);
    s3 = (s32) ((u32) s3 + 0x1U);
    s1 = (s32) ((u32) s1 + 0x2U);
    v1 = s3 < 11;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_008D6E5C; }
L_008D7004:;
    return;
}
