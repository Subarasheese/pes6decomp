/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EE580(s32, s32);
void func_001EE630(s32, s32);
void func_001EEAC0(s32, s32);
void func_001EF5B0(s32, s32);
s32 func_0020D0E0(s32, s32, s32, s32, s32, s32);

s32 func_0026CF10(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s32 fcc = 0;
    s64 frame[24];
    s32 sp = (s32) (u32) frame;

    s0 = a0;
    if (s0 != 0) goto L_0026CF34;
    v0 = 0; goto L_0026D024;
L_0026CF34:;
    a0 = a1;
    a3 = (s32) ((u32) sp + 0xbcU);
    a1 = a2;
    a4 = (s32) ((u32) sp + 0xb4U);
    a2 = 0;
    a5 = (s32) ((u32) sp + 0xb6U); v0 = func_0020D0E0(a0, a1, a2, a3, a4, a5);
    a1 = v0;
    a0 = s0; func_001EEAC0(a0, a1);
    v1 = (*(volatile s32 *) (u32) (sp + 188));
    a0 = s0;
    a1 = (s32) ((u32) sp + 0xb0U);
    v0 = (*(volatile s16 *) (u32) v1);
    (*(volatile u16 *) (u32) (sp + 176)) = (u16) v0;
    v0 = (*(volatile s16 *) (u32) (v1 + 2));
    (*(volatile u16 *) (u32) (sp + 178)) = (u16) v0; func_001EE630(a0, a1);
    a0 = s0;
    a1 = (s32) ((u32) sp + 0x70U); func_001EE580(a0, a1);
    f1.f = (*(volatile f32 *) (u32) (sp + 128));
    v0 = (*(volatile s16 *) (u32) (sp + 180));
    f0.f = (*(volatile f32 *) (u32) (sp + 112));
    f1.f = f1.f - f0.f;
    f0.i = (s32) v0;
    f0.f = (f32) f0.i;
    fcc = f1.f < f0.f;
    if (!fcc) { v1 = (*(volatile s16 *) (u32) (sp + 182)); goto L_0026CFC4; }
    f0.i = (s32) f1.f;
    v0 = f0.i;
    (*(volatile u16 *) (u32) (sp + 180)) = (u16) v0;
    v1 = (*(volatile s16 *) (u32) (sp + 182));
L_0026CFC4:;
    v0 = (*(volatile s16 *) (u32) (sp + 180));
    f0.i = (s32) v1;
    f20.f = (f32) f0.i;
    f0.i = (s32) v0;
    { s32 c_ = s0 == 0; f21.f = (f32) f0.i; if (c_) goto L_0026D020; }
    a0 = s0;
    a1 = (s32) ((u32) sp + 0x30U); func_001EE580(a0, a1);
    f1.f = (*(volatile f32 *) (u32) (sp + 48));
    a0 = s0;
    f2.f = (*(volatile f32 *) (u32) (sp + 52));
    a1 = (s32) ((u32) sp + 0x30U);
    (*(volatile f32 *) (u32) (sp + 80)) = f1.f;
    f0.f = f2.f + f20.f;
    f1.f = f1.f + f21.f;
    (*(volatile f32 *) (u32) (sp + 68)) = f2.f;
    (*(volatile f32 *) (u32) (sp + 84)) = f0.f;
    (*(volatile f32 *) (u32) (sp + 100)) = f0.f;
    (*(volatile f32 *) (u32) (sp + 64)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 96)) = f1.f; func_001EF5B0(a0, a1);
L_0026D020:;
    v0 = (*(volatile s16 *) (u32) (sp + 180));
L_0026D024:;
    return v0;
}
