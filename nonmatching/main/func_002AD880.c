/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002A1110(s32);
void func_002A11B0(s32, s32);
void func_002A95F0(s32, s32, s32);
s32 func_009B3070(s32, s32, s32, s32);
s32 func_009B34C0(s32, s32, s32, s32);

s32 func_002AD880(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f12 = { 0 };
    volatile union { f32 f; s32 i; } f13 = { 0 };
    volatile union { f32 f; s32 i; } f14 = { 0 };
    volatile union { f32 f; s32 i; } f15 = { 0 };
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    s2 = a0;
    s1 = a1;
    v0 = func_002A1110(a0);
    s0 = v0 & 0xffff;
    a1 = s1;
    a2 = s2 & 0xff;
    a0 = (s32) ((u32) sp + 0x40U); func_002A95F0(a0, a1, a2);
    a1 = s2;
    a0 = (s32) ((u32) sp + 0x50U); func_002A11B0(a0, a1);
    f13.f = (*(volatile f32 *) (u32) (sp + 88));
    f14.f = (*(volatile f32 *) (u32) (sp + 64));
    f15.f = (*(volatile f32 *) (u32) (sp + 72));
    f12.f = (*(volatile f32 *) (u32) (sp + 80)); v0 = func_009B34C0(a0, a1, a2, a3);
    a0 = s0;
    a1 = v0 & 0xffff; v0 = func_009B3070(a0, a1, a2, a3);
    v0 = v0 & 0xffff;
    return v0;
}
