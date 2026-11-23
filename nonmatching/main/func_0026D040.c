/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001E6E10(s32);
void func_001EE580(s32, s32);
void func_001EE630(s32, s32);
void func_001EEAC0(s32, s32);
void func_001EF5B0(s32, s32);

void func_0026D040(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    s1 = a1;
    s0 = a0;
    if (s0 == 0) goto L_0026D108;
    a0 = 20191; v0 = func_001E6E10(a0);
    a1 = v0;
    a0 = s0; func_001EEAC0(a0, a1);
    v0 = (s32) 0x3b0000U;
    s1 = (s32) ((u32) s1 << 3);
    v0 = (s32) ((u32) v0 + 0xffffb5b0U);
    a0 = s0;
    a1 = (s32) ((u32) v0 + (u32) s1); func_001EE630(a0, a1);
    a0 = (s32) 0x3b0000U;
    v1 = (s32) 0x3b0000U;
    a0 = (s32) ((u32) a0 + 0xffffb5b6U);
    v1 = (s32) ((u32) v1 + 0xffffb5b4U);
    a0 = (s32) ((u32) a0 + (u32) s1);
    v1 = (s32) ((u32) v1 + (u32) s1);
    a0 = (*(volatile s16 *) (u32) a0);
    v1 = (*(volatile s16 *) (u32) v1);
    f0.i = (s32) a0;
    f20.f = (f32) f0.i;
    f0.i = (s32) v1;
    { s32 c_ = s0 == 0; f21.f = (f32) f0.i; if (c_) goto L_0026D108; }
    a0 = s0;
    a1 = (s32) ((u32) sp + 0x40U); func_001EE580(a0, a1);
    f1.f = (*(volatile f32 *) (u32) (sp + 64));
    a0 = s0;
    f2.f = (*(volatile f32 *) (u32) (sp + 68));
    a1 = (s32) ((u32) sp + 0x40U);
    (*(volatile f32 *) (u32) (sp + 96)) = f1.f;
    f0.f = f2.f + f20.f;
    f1.f = f1.f + f21.f;
    (*(volatile f32 *) (u32) (sp + 84)) = f2.f;
    (*(volatile f32 *) (u32) (sp + 100)) = f0.f;
    (*(volatile f32 *) (u32) (sp + 116)) = f0.f;
    (*(volatile f32 *) (u32) (sp + 80)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 112)) = f1.f; func_001EF5B0(a0, a1);
L_0026D108:;
    return;
}
