/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001B9C60(s32, s32, s32, s32);
s32 func_001B9CA0(s32, s32, s32, s32, f32, f32);
void func_001F3C80(s32);
void func_002EF440(s32, s32, s32);
void func_002F0110(s32, f32);

void func_002F6240(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    s0 = a0;
    { s32 c_ = s0 == 0; f20.i = f12.i; if (c_) goto L_002F62C0; }
    a0 = (s32) ((u32) s0 + 0x10U); func_002F0110(a0, f12.f);
    v0 = (s32) 0xc0000000U;
    a0 = (*(volatile s32 *) (u32) (s0 + 168));
    f0.i = (s32) v0;
    f12.f = f0.f + f20.f; func_001F3C80(a0);
    a0 = (*(volatile s32 *) (u32) (s0 + 176));
    if (a0 == 0) { ; goto L_002F62C4; }
    func_001B9C60(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 + 0x10U);
    a1 = 0;
    a2 = (s32) ((u32) sp + 0x30U); func_002EF440(a0, a1, a2);
    v1 = (s32) 0xbf800000U;
    v0 = (s32) 0xc0400000U;
    f0.i = (s32) v1;
    a0 = (s32) ((u32) sp + 0x30U);
    f12.f = f0.f + f20.f;
    f0.i = (s32) v0;
    f13.f = f0.f + f20.f; v0 = func_001B9CA0(a0, a1, a2, a3, f12.f, f13.f);
    (*(volatile u32 *) (u32) (s0 + 176)) = (u32) v0;
L_002F62C0:;
L_002F62C4:;
    return;
}
