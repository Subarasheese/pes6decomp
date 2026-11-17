/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002BB910(f32, f32);
s32 func_00BBBD40(s32, s32, s32, s32);

s32 func_002BB1B0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0;
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };

    v0 = (s32) 0x5e0000U;
    v1 = (s32) 0x5e0000U;
    a2 = (*(volatile s32 *) (u32) (v0 + 12200));
    a1 = (s32) 0x5e0000U;
    a0 = (*(volatile u8 *) (u32) (v1 + 12513));
    v0 = (s32) 0x5e0000U;
    f12.f = (*(volatile f32 *) (u32) (v0 + 12196));
    (*(volatile u32 *) (u32) (a1 + 12664)) = (u32) a2; v0 = func_00BBBD40(a0, a1, a2, a3);
    v0 = (s32) 0x5e0000U;
    v1 = (s32) 0x5e0000U;
    a1 = (*(volatile s32 *) (u32) (v0 + 12192));
    v0 = (s32) 0x5e0000U;
    a1 = a1 | 0x8;
    a0 = (*(volatile s32 *) (u32) (v0 + 12668));
    (*(volatile u32 *) (u32) (v1 + 12192)) = (u32) a1;
    v0 = (s32) 0x5e0000U;
    v1 = (s32) ((u32) a0 + 0x1U);
    (*(volatile u32 *) (u32) (v0 + 12668)) = (u32) v1; v0 = func_002BB910(f12.f, f13.f);
    v0 = (s32) 0x5e0000U;
    v1 = (s32) 0x5e0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 12152));
    v1 = (s32) ((u32) v1 + 0x2f7cU);
    a0 = (s32) ((u32) a0 << 2);
    v0 = 1;
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) v1) = (u32) 0;
    return v0;
}
