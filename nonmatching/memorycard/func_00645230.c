/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002374A0(s32, s32);
s32 func_00237530(s32);

void func_00645230(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;

    v0 = a0 & 0x1;
    s1 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) gp + 0xffff8410U);
    s0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile u16 *) (u32) s0); v0 = func_00237530(a0);
    a0 = (*(volatile u16 *) (u32) s0);
    a1 = 0xffff;
    s0 = v0;
    v0 = (s32) ((u32) gp + 0xffffa620U);
    v0 = (s32) ((u32) v0 + (u32) s1);
    (*(volatile u16 *) (u32) v0) = (u16) a1; func_002374A0(a0, a1);
    a0 = 0;
L_00645278:;
    (*(volatile u16 *) (u32) (s0 + 4340)) = (u16) 0;
    a0 = (s32) ((u32) a0 + 0x8U);
    (*(volatile u16 *) (u32) (s0 + 4404)) = (u16) 0;
    v1 = a0 < 32;
    (*(volatile u16 *) (u32) (s0 + 4342)) = (u16) 0;
    (*(volatile u16 *) (u32) (s0 + 4406)) = (u16) 0;
    (*(volatile u16 *) (u32) (s0 + 4344)) = (u16) 0;
    (*(volatile u16 *) (u32) (s0 + 4408)) = (u16) 0;
    (*(volatile u16 *) (u32) (s0 + 4346)) = (u16) 0;
    (*(volatile u16 *) (u32) (s0 + 4410)) = (u16) 0;
    (*(volatile u16 *) (u32) (s0 + 4348)) = (u16) 0;
    (*(volatile u16 *) (u32) (s0 + 4412)) = (u16) 0;
    (*(volatile u16 *) (u32) (s0 + 4350)) = (u16) 0;
    (*(volatile u16 *) (u32) (s0 + 4414)) = (u16) 0;
    (*(volatile u16 *) (u32) (s0 + 4352)) = (u16) 0;
    (*(volatile u16 *) (u32) (s0 + 4416)) = (u16) 0;
    (*(volatile u16 *) (u32) (s0 + 4354)) = (u16) 0;
    (*(volatile u16 *) (u32) (s0 + 4418)) = (u16) 0;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x10U); if (c_) goto L_00645278; }
    return;
}
