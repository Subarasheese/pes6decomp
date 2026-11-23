/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0020E310(s32, s32);
void func_0035D5F0(s32, s32, s32, s32, s32, s32, s32, s32, f32);

void func_0035D2B0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    a0 = 1;
    s2 = a1;
    s1 = a2;
    s0 = a3;
    a1 = (s32) ((u32) sp + 0x4cU); func_0020E310(a0, a1);
    a3 = (*(volatile s32 *) (u32) (gp + -21424));
    v0 = (s32) 0x42900000U;
    v1 = (s32) 0x3b0000U;
    a2 = (s32) 0x210000U;
    a4 = (s32) ((u32) gp + 0xffffac54U);
    v1 = (s32) ((u32) v1 + 0x7ba4U);
    a6 = (s32) ((u32) a3 << 2);
    a0 = s2;
    a4 = (s32) ((u32) a4 + (u32) a6);
    a3 = 1;
    a4 = (*(volatile s32 *) (u32) a4);
    f12.i = (s32) v0;
    a1 = s1;
    a5 = s0;
    a2 = (s32) ((u32) a2 + 0xffffd080U);
    a6 = a3;
    a4 = (*(volatile s32 *) (u32) (a4 + 608));
    v0 = (s32) ((u32) a4 << 1);
    v0 = (s32) ((u32) v0 + (u32) a4);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    a4 = (*(volatile s32 *) (u32) v0);
    a7 = (s32) ((u32) sp + 0x4cU); func_0035D5F0(a0, a1, a2, a3, a4, a5, a6, a7, f12.f);
    return;
}
