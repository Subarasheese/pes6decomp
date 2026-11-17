/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00A8A7B0(s32, s32, s32, s32, f32, f32, f32, f32);

s32 func_00A1AC10(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };

    a4 = (s32) ((u32) a4 << 2);
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    s0 = a0;
    v1 = (*(volatile u8 *) (u32) (a0 + 19));
    v0 = (s32) ((u32) a4 + (u32) v0);
    f12.f = (*(volatile f32 *) (u32) (v0 + 1148));
    v1 = v1 ^ 0x1;
    f13.f = (*(volatile f32 *) (u32) (v0 + 2940));
    a0 = v1 & 0xff; func_00A8A7B0(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    v1 = (*(volatile u8 *) (u32) (s0 + 19));
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e53U);
    v1 = v1 ^ 0x1;
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    v0 = v0 ^ 0xff;
    v0 = (u64) 0 < (u64) v0;
    return v0;
}
