/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001DD3C0(s32);
void func_001DEF30(s32, s32);
void func_001DEF70(s32, f32);
s32 func_001DFA30(s32, s32, s32, s32, s32, f32, f32);

void func_00C89280(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    s1 = a0;
    s0 = a1;
    f21.i = f12.i;
    { s32 c_ = s0 == 0; f20.i = f13.i; if (c_) goto L_00C89340; }
    a0 = 23; v0 = func_001DD3C0(a0);
    if (v0 == 0) { ; goto L_00C89344; }
    at = s1 < 3;
    if (at == 0) goto L_00C89340;
    v1 = (s32) ((u32) sp + 0x40U);
    { s32 c_ = v1 == 0; v0 = 12; if (c_) goto L_00C892F0; }
L_00C892D4:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_00C892D4;
L_00C892F0:;
    v0 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) s1 << 2);
    a2 = s0;
    v0 = (s32) ((u32) v0 + 0xffffd048U);
    a0 = 23;
    s0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (s32) ((u32) sp + 0x40U);
    (*(volatile f32 *) (u32) (sp + 64)) = f21.f;
    (*(volatile f32 *) (u32) (sp + 68)) = f20.f; v0 = func_001DFA30(a0, a1, a2, a3, a4, f12.f, f13.f);
    (*(volatile u32 *) (u32) s0) = (u32) v0;
    a0 = v0;
    v0 = (s32) 0x454b0000U;
    v0 = v0 | 0x2000;
    f12.i = (s32) v0;
    func_001DEF70(a0, f12.f);
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = 3; func_001DEF30(a0, a1);
L_00C89340:;
L_00C89344:;
    return;
}
