/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001B97A0(void);
s32 func_001B97B0(void);
s32 func_001B98D0(s32, s32);
s32 func_002F96F0(s32, s32);
void func_002FA280(s32, s32, s32, s32, s32);

void func_0091AED0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) ((u32) gp + 0xffffb1dcU);
    s2 = a0;
    s1 = a2;
    v1 = (*(volatile s32 *) (u32) (gp + -20008));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    s3 = (*(volatile s32 *) (u32) (v0 + 48));
    s0 = a3; v0 = func_001B97B0();
    f0.i = (s32) v0;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (sp + 88)) = f0.f; v0 = func_001B97A0();
    f0.i = (s32) v0;
    a1 = s3;
    f0.f = (f32) f0.i;
    a0 = s2;
    (*(volatile f32 *) (u32) (sp + 92)) = f0.f; v0 = func_001B98D0(a0, a1);
    v1 = (*(volatile s32 *) (u32) (gp + -20008));
    v0 = (s32) ((u32) gp + 0xffffb1dcU);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 0; v0 = func_002F96F0(a0, a1);
    a0 = s2;
    a2 = s1;
    a3 = s0;
    a1 = v0;
    a4 = (s32) ((u32) sp + 0x58U); func_002FA280(a0, a1, a2, a3, a4);
    return;
}
