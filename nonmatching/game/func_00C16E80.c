/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00C17D50(s32);

void func_00C16E80(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    s32 hi = 0, lo = 0;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    v0 = 8;
    v1 = (s32) ((u32) sp + 0x40U);
    s2 = a1;
    { s32 c_ = v1 == 0; s1 = a0; if (c_) goto L_00C16EC4; }
L_00C16EA8:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_00C16EA8;
L_00C16EC4:;
    a0 = s2;
    s0 = 0; v0 = func_00C17D50(a0);
    a0 = s2 & 0xff;
    t7 = (s32) 0x590000U;
    v1 = (s32) ((u32) a0 << 4);
    a4 = v0 & 0xff;
    a1 = (s32) ((u32) v1 - (u32) a0);
    a6 = 0;
    a0 = (s32) ((u32) a1 << 2);
    v1 = (s32) 0x5a0000U;
    a0 = (s32) ((u32) a0 - (u32) a1);
    v1 = (s32) ((u32) v1 + 0x2020U);
    a0 = (s32) ((u32) a0 << 3);
    a3 = (s32) ((u32) sp + 0x4dU);
    a1 = (s32) ((u32) v1 + (u32) a0);
    a2 = (s32) ((u32) sp + 0x44U);
    a0 = (*(volatile u8 *) (u32) (a1 + 1));
    t7 = (s32) ((u32) t7 + 0xffffe5b0U);
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 3);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 1);
    a0 = 23;
    a5 = (s32) ((u32) a1 + (u32) v1);
    v1 = 1;
    a1 = 255;
L_00C16F34:;
    t5 = (*(volatile u8 *) (u32) (a5 + 8));
    a7 = (s32) ((u32) a4 + (u32) a6);
    t4 = (*(volatile u8 *) (u32) (a5 + 9));
    (*(volatile u8 *) (u32) (sp + 76)) = (u8) t5;
    { s32 c_ = a7 == a1; (*(volatile u8 *) (u32) (sp + 77)) = (u8) t4; if (c_) goto L_00C16F5C; }
    if ((s32) a0 != 0) { s64 q_ = (s32) ((s32) a6 / (s32) a0); hi = (s32) ((s32) a6 % (s32) a0); lo = q_; }
    a7 = hi;
    t4 = (s32) ((u32) a4 + (u32) a7); goto L_00C16F60;
L_00C16F5C:;
    t4 = v1;
L_00C16F60:;
    a7 = (s32) ((u32) t4 << 3);
    a7 = (s32) ((u32) a7 + (u32) t4);
    a7 = (s32) ((u32) a7 << 6);
    a7 = (s32) ((u32) t7 + (u32) a7);
    a7 = (*(volatile s32 *) (u32) (a7 + 4));
    a7 = (*(volatile u8 *) (u32) (a7 + 44));
    if (a7 != 0) goto L_00C16FB8;
L_00C16F80:;
    a6 = (s32) ((u32) a6 + 0x1U);
    a7 = a6 < 10;
    { s32 c_ = a7 != 0; a5 = (s32) ((u32) a5 + 0x2U); if (c_) goto L_00C16F34; }
    if (s0 != 0) goto L_00C16FE0;
L_00C16F98:;
    if (s1 == 0) goto L_00C17060;
    f1.f = (*(volatile f32 *) (u32) (sp + 64));
    f0.f = (*(volatile f32 *) (u32) (sp + 68));
    (*(volatile f32 *) (u32) s1) = f1.f;
    (*(volatile f32 *) (u32) (s1 + 4)) = f0.f;
    goto L_00C17064;
L_00C16FB8:;
    t6 = (*(volatile u8 *) (u32) (sp + 76));
    s0 = (s32) ((u32) s0 + 0x1U);
    t5 = (*(volatile s32 *) (u32) (sp + 64));
    t4 = (*(volatile u8 *) (u32) a3);
    a7 = (*(volatile s32 *) (u32) a2);
    t5 = (s32) ((u32) t5 + (u32) t6);
    (*(volatile u32 *) (u32) (sp + 64)) = (u32) t5;
    a7 = (s32) ((u32) a7 + (u32) t4);
    (*(volatile u32 *) (u32) a2) = (u32) a7; goto L_00C16F80;
L_00C16FE0:;
    f0.i = (s32) s0;
    a0 = (s32) 0x440c0000U;
    a0 = a0 | 0x42ab;
    v1 = (s32) 0x46520000U;
    f3.f = (f32) f0.i;
    a1 = v1 | 0x6400;
    v1 = (s32) 0x43270000U;
    f1.i = (s32) a0;
    f2.f = (*(volatile f32 *) (u32) (sp + 64));
    f0.f = f1.f / f3.f;
    a0 = v1 | 0xdd8a;
    v1 = (s32) 0x46080000U;
    v1 = v1 | 0x6400;
    f2.f = (f32) f2.i;
    f2.f = f2.f * f0.f;
    f1.i = (s32) a1;
    f0.i = (s32) a0;
    f2.f = f2.f - f1.f;
    f1.f = f0.f / f3.f;
    f0.i = (s32) f2.f;
    f2.f = (*(volatile f32 *) (u32) a2);
    a0 = f0.i;
    f0.i = (s32) v1;
    (*(volatile u32 *) (u32) (sp + 64)) = (u32) a0;
    f2.f = (f32) f2.i;
    f1.f = f2.f * f1.f;
    f0.f = f1.f - f0.f;
    f0.i = (s32) f0.f;
    v1 = f0.i;
    (*(volatile u32 *) (u32) a2) = (u32) v1; goto L_00C16F98;
L_00C17060:;
L_00C17064:;
    return;
}
