/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001D79A0(s32, s32);
s32 func_001D7A20(s32, s32, s32);
void func_002DF0A0(s32, s32);
s32 func_002DFC30(s32);
void func_002E19F0(s32, f32);

s32 func_002DEE90(s32 a0, s32 a1, s32 a2, f32 fa12) {
    s32 v0 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    s2 = a1;
    s1 = a2;
    s0 = a0;
    a2 = s1 & 0xffff;
    a0 = s2;
    a1 = (s32) ((u32) sp + 0x50U);
    v0 = func_001D7A20(a0, a1, a2);
    if (v0 != 0) { a0 = s0; goto L_002DEED4; }
    v0 = 0; goto L_002DEF30;
L_002DEED4:;
    v0 = func_002DFC30(a0);
    s0 = v0;
    if (s0 != 0) { a0 = s0; goto L_002DEEF0; }
    v0 = 0; goto L_002DEF30;
L_002DEEF0:;
    a1 = (s32) ((u32) sp + 0x50U); func_002DF0A0(a0, a1);
    a1 = s1 & 0xffff;
    a0 = s2; f0.f = func_001D79A0(a0, a1);
    { s32 c_ = s0 == 0; f20.i = f0.i; if (c_) goto L_002DEF2C; }
    a0 = (s32) ((u32) s0 + 0x28U);
    f12.i = f20.i; func_002E19F0(a0, f12.f);
    v0 = (s32) 0xbf800000U;
    a0 = (s32) ((u32) s0 + 0x4cU);
    f0.i = (s32) v0;
    f12.f = f0.f + f20.f; func_002E19F0(a0, f12.f);
L_002DEF2C:;
    v0 = s0;
L_002DEF30:;
    return v0;
}
