/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0027D0B0(s32, s32, s32, s32, f32);
s32 func_009B34C0(s32, s32, s32, s32, f32, f32, f32, f32);

s32 func_00AB30C0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };

    a1 = 9;
    s0 = a0;
    func_0027D0B0(a0, a1, a2, a3, f12.f);
    v0 = (s32) 0x590000U;
    a0 = s0;
    f21.f = (*(volatile f32 *) (u32) (v0 + 7788));
    v0 = (s32) 0x590000U;
    f20.f = (*(volatile f32 *) (u32) (v0 + 7796));
    a1 = 10; func_0027D0B0(a0, a1, a2, a3, f12.f);
    v1 = (s32) 0x590000U;
    v0 = (s32) 0x590000U;
    f14.f = (*(volatile f32 *) (u32) (v1 + 7788));
    f15.f = (*(volatile f32 *) (u32) (v0 + 7796));
    f12.i = f21.i;
    f13.i = f20.i; v0 = func_009B34C0(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    v0 = v0 & 0xffff;
    v0 = (s32) ((u32) v0 + 0x4000U);
    v0 = v0 & 0xffff;
    return v0;
}
