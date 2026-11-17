/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001DF030(s32, s32);
void func_001DF370(s32, s32);
void func_001DF510(s32, f32, f32);
f32 func_001E4E30(s32, s32, s32, s32);

void func_001B6E40(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 v0 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s32 fcc = 0;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    s1 = a0;
    s0 = a1;
    a1 = (s32) ((u32) sp + 0x40U);
    func_001DF030(a0, a1);
    v0 = (s32) 0x7f7f0000U;
    a0 = s1;
    v0 = v0 | 0xffff;
    f12.i = (s32) v0;
    f13.i = f12.i; func_001DF510(a0, f12.f, f13.f);
    a0 = s1; f0.f = func_001E4E30(a0, a1, a2, a3);
    f12.f = (*(volatile f32 *) (u32) (sp + 72));
    a0 = s1;
    f13.f = (*(volatile f32 *) (u32) (sp + 76));
    f20.i = f0.i; func_001DF510(a0, f12.f, f13.f);
    f0.f = (*(volatile f32 *) (u32) (sp + 72));
    fcc = f20.f <= f0.f;
    if (fcc) { a0 = s1; goto L_001B6EB0; }
    s0 = 16;
    a0 = s1;
L_001B6EB0:;
    a1 = s0; func_001DF370(a0, a1);
    v0 = s0;
    return;
}
