/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Sprite_SetPositionZ(s32, f32);
void func_001D7840(s32, s32);
s32 func_002F96F0(s32, s32);

void func_0091B0E0(s32 a0, s32 a1, f32 fa12) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };

    v0 = (s32) ((u32) gp + 0xffffb1e4U);
    v1 = (*(volatile s32 *) (u32) (gp + -20000));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 0; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    v0 = (s32) 0xc7850000U;
    v0 = v0 | 0xc580;
    f12.i = (s32) v0;
    Pes6Sprite_SetPositionZ(a0, f12.f);
    v1 = (*(volatile s32 *) (u32) (gp + -20000));
    v0 = (s32) ((u32) gp + 0xffffb1e4U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 0; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    a1 = 1; func_001D7840(a0, a1);
    return;
}
