/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00BBB8C0(s32);

s32 func_00BD4780(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    v1 = a0 & 0xff;
    at = (u64) v1 < (u64) (s64) 7;
    { s32 c_ = at == 0; v0 = 0; if (c_) goto L_00BD4890; }
    a0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0x2480U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0xbd47b4U) goto L_00BD47B4; if (t_ == 0xbd47d4U) goto L_00BD47D4; if (t_ == 0xbd47f4U) goto L_00BD47F4; if (t_ == 0xbd4814U) goto L_00BD4814; if (t_ == 0xbd4834U) goto L_00BD4834; if (t_ == 0xbd4854U) goto L_00BD4854; if (t_ == 0xbd4874U) goto L_00BD4874; }
L_00BD47B4:;
    a0 = 2; v0 = func_00BBB8C0(a0);
    v1 = (s32) ((u32) v0 << 1);
    v0 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 + 0x2428U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u16 *) (u32) v0); goto L_00BD4890;
L_00BD47D4:;
    a0 = 3; v0 = func_00BBB8C0(a0);
    v1 = (s32) ((u32) v0 << 1);
    v0 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 + 0x2430U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u16 *) (u32) v0); goto L_00BD4890;
L_00BD47F4:;
    a0 = 3; v0 = func_00BBB8C0(a0);
    v1 = (s32) ((u32) v0 << 1);
    v0 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 + 0x2438U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u16 *) (u32) v0); goto L_00BD4890;
L_00BD4814:;
    a0 = 3; v0 = func_00BBB8C0(a0);
    v1 = (s32) ((u32) v0 << 1);
    v0 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 + 0x2440U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u16 *) (u32) v0); goto L_00BD4890;
L_00BD4834:;
    a0 = 3; v0 = func_00BBB8C0(a0);
    v1 = (s32) ((u32) v0 << 1);
    v0 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 + 0x2448U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u16 *) (u32) v0); goto L_00BD4890;
L_00BD4854:;
    a0 = 1; v0 = func_00BBB8C0(a0);
    v1 = (s32) ((u32) v0 << 1);
    v0 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 + 0x2450U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u16 *) (u32) v0); goto L_00BD4890;
L_00BD4874:;
    a0 = 1; v0 = func_00BBB8C0(a0);
    v1 = (s32) ((u32) v0 << 1);
    v0 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 + 0x2458U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u16 *) (u32) v0);
L_00BD4890:;
    return v0;
}
