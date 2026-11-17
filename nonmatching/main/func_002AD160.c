/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001CD9E0(void);
void func_002A11B0(s32, s32);
void func_002A95F0(s32, s32, s32);

void func_002AD160(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    union { f32 f; s32 i; } f12 = { 0 };
    f32 acc = 0;
    s64 frame[34];
    s32 sp = (s32) (u32) frame;

    s7 = (s32) ((u32) sp + 0xa8U);
    s6 = (s32) ((u32) sp + 0x98U);
    s5 = a0;
    s4 = a1;
    s3 = 0;
    s2 = (s32) ((u32) sp + 0xb0U);
    s1 = s4;
    s0 = s5 & 0xff;
L_002AD1A8:;
    a0 = (s32) ((u32) sp + 0x90U);
    a1 = s3;
    a2 = s0; func_002A95F0(a0, a1, a2);
    a0 = (s32) ((u32) sp + 0xa0U);
    a1 = s5; func_002A11B0(a0, a1);
    f1.f = (*(volatile f32 *) (u32) s7);
    f0.f = (*(volatile f32 *) (u32) s6);
    f3.f = (*(volatile f32 *) (u32) (sp + 160));
    f2.f = (*(volatile f32 *) (u32) (sp + 144));
    f0.f = f1.f - f0.f;
    f2.f = f3.f - f2.f;
    acc = f0.f * f0.f;
    f12.f = acc + f2.f * f2.f; f0.f = func_001CD9E0();
    f0.i = (s32) f0.f;
    (*(volatile u32 *) (u32) s1) = (u32) s3;
    s3 = (s32) ((u32) s3 + 0x1U);
    s1 = (s32) ((u32) s1 + 0x4U);
    v1 = s3 < 43;
    a0 = f0.i;
    (*(volatile u16 *) (u32) s2) = (u16) a0;
    { s32 c_ = v1 != 0; s2 = (s32) ((u32) s2 + 0x2U); if (c_) goto L_002AD1A8; }
    a2 = 1;
    a4 = (s32) ((u32) sp + 0xb2U);
L_002AD218:;
    a1 = (*(volatile u16 *) (u32) a4);
    a5 = (s32) ((u32) a2 + 0xffffffffU);
    a0 = (s32) ((u32) a5 << 1);
    v1 = (s32) ((u32) a5 << 2);
    a0 = (s32) ((u32) a0 + (u32) sp);
    a3 = (s32) ((u32) s4 + (u32) v1);
    a0 = (s32) ((u32) a0 + 0xb0U);
L_002AD238:;
    if (a5 < 0) goto L_002AD270;
    v1 = (*(volatile u16 *) (u32) a0);
    at = a1 < v1;
    if (at == 0) goto L_002AD270;
    (*(volatile u16 *) (u32) (a0 + 2)) = (u16) v1;
    a5 = (s32) ((u32) a5 + 0xffffffffU);
    v1 = (*(volatile s32 *) (u32) a3);
    a0 = (s32) ((u32) a0 + 0xfffffffeU);
    (*(volatile u32 *) (u32) (a3 + 4)) = (u32) v1;
    a3 = (s32) ((u32) a3 + 0xfffffffcU); goto L_002AD238;
L_002AD270:;
    v1 = (s32) ((u32) a5 << 1);
    a0 = (s32) ((u32) v1 + (u32) sp);
    a4 = (s32) ((u32) a4 + 0x2U);
    v1 = (s32) ((u32) a5 << 2);
    v1 = (s32) ((u32) s4 + (u32) v1);
    (*(volatile u32 *) (u32) (v1 + 4)) = (u32) a2;
    a2 = (s32) ((u32) a2 + 0x1U);
    v1 = a2 < 43;
    { s32 c_ = v1 != 0; (*(volatile u16 *) (u32) (a0 + 178)) = (u16) a1; if (c_) goto L_002AD218; }
    return;
}
