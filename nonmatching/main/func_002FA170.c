/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001B4F60(s32, s32, s32, s32, s32);
s32 func_001D7A20(s32, s32, s32);

s32 func_002FA170(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f20 = { 0 };
    union { f32 f; s32 i; } f21 = { 0 };
    s64 frame[20];
    s32 sp = (s32) (u32) frame;

    s4 = a2;
    s3 = a3;
    s2 = a5;
    s1 = a0;
    s0 = a1;
    a2 = a4 & 0xffff;
    a0 = s4;
    a1 = (s32) ((u32) sp + 0x70U);
    v0 = func_001D7A20(a0, a1, a2);
    f20.f = (*(volatile f32 *) (u32) (sp + 112));
    v0 = (s32) ((u32) sp + 0x98U);
    f21.f = (*(volatile f32 *) (u32) (sp + 116));
    (*(volatile f32 *) (u32) (sp + 152)) = f20.f;
    { s32 c_ = v0 == 0; (*(volatile f32 *) (u32) (sp + 156)) = f21.f; if (c_) goto L_002FA1D8; }
    a2 = s3 & 0xffff; goto L_002FA1E8;
L_002FA1D8:;
    f20.i = (s32) 0;
    f21.i = f20.i;
    a2 = s3 & 0xffff;
L_002FA1E8:;
    a0 = s4;
    a1 = (s32) ((u32) sp + 0x80U);
    (*(volatile u32 *) (u32) (sp + 128)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 132)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 136)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 140)) = (u32) 0; v0 = func_001D7A20(a0, a1, a2);
    v0 = (s32) 0x3e0000U;
    a1 = (s32) ((u32) s2 << 3);
    f1.f = (*(volatile f32 *) (u32) (sp + 128));
    v0 = (s32) ((u32) v0 + 0xffffc950U);
    v1 = (s32) ((u32) v0 + (u32) a1);
    a0 = s1;
    f0.f = (*(volatile f32 *) (u32) (sp + 132));
    v0 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 + 0xffffc954U);
    a3 = (*(volatile s32 *) (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) a1);
    a2 = s0;
    f1.f = f1.f - f20.f;
    a4 = (*(volatile s32 *) (u32) v0);
    a1 = (s32) ((u32) sp + 0x80U);
    f0.f = f0.f - f21.f;
    (*(volatile f32 *) (u32) (sp + 128)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 132)) = f0.f; v0 = func_001B4F60(a0, a1, a2, a3, a4);
    return v0;
}
