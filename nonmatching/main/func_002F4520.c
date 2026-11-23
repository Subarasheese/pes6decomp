/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EE580(s32, s32);
void func_001EF370(s32, s32);

void func_002F4520(s32 a0, s32 a1, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    { s32 c_ = a0 == 0; f20.i = f12.i; if (c_) goto L_002F45A8; }
    a1 = (*(volatile s8 *) (u32) (a0 + 8));
    v1 = (s32) ((u32) a1 << 5);
    a1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (s32) ((u32) a1 << 3);
    v1 = (s32) ((u32) a1 + (u32) v1);
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) a0 + (u32) v1);
    s0 = (s32) ((u32) v1 + 0xb4U);
    v1 = (*(volatile u8 *) (u32) (v1 + 1351));
    if (v1 == 0) { ; goto L_002F45AC; }
    a0 = (*(volatile s32 *) (u32) (s0 + 1124));
    a1 = (s32) ((u32) sp + 0x40U); func_001EE580(a0, a1);
    f1.f = (*(volatile f32 *) (u32) (sp + 80));
    v0 = (s32) 0x40000000U;
    f0.i = (s32) v0;
    (*(volatile u32 *) (u32) (sp + 48)) = (u32) 0;
    v0 = (s32) 0x41000000U;
    (*(volatile u32 *) (u32) (sp + 52)) = (u32) 0;
    f0.f = f1.f - f0.f;
    (*(volatile u32 *) (u32) (sp + 60)) = (u32) v0;
    f0.f = f0.f * f20.f;
    (*(volatile f32 *) (u32) (sp + 56)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (s0 + 1128));
    a1 = (s32) ((u32) sp + 0x30U); func_001EF370(a0, a1);
    (*(volatile f32 *) (u32) (s0 + 1120)) = f20.f;
L_002F45A8:;
L_002F45AC:;
    return;
}
