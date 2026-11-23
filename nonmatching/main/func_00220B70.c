/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001F08B0(s32);
s32 func_00223BA0(void);

void func_00220B70(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    s2 = a0;
    v0 = func_00223BA0();
    at = s2 < 29;
    { s32 c_ = at == 0; s1 = v0; if (c_) goto L_00220BB0; }
    v0 = (s32) ((u32) s2 << 3);
    v1 = (s32) ((u32) v0 - (u32) s2);
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) v0 << 2);
    s1 = (s32) ((u32) s1 + (u32) v0);
L_00220BB0:;
    s0 = 1; v0 = func_00223BA0();
    a0 = (s32) ((u32) s2 << 3);
    v1 = s0;
    a1 = (s32) ((u32) a0 - (u32) s2);
    a0 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) a0 - (u32) a1);
    a0 = (s32) ((u32) a0 << 2);
    { s32 c_ = v1 != 0; v0 = (s32) ((u32) v0 + (u32) a0); if (c_) goto L_00220BE0; }
    v0 = (*(volatile u8 *) (u32) (v0 + 82)); goto L_00220BE4;
L_00220BE0:;
    v0 = (*(volatile u8 *) (u32) (v0 + 83));
L_00220BE4:;
    v0 = v0 & 0xff;
    if (v0 != 0) goto L_00220C24;
    at = s2 < 29;
    if (at == 0) { v0 = 0; goto L_00220C1C; }
    v1 = (s32) 0x3b0000U;
    a0 = (s32) ((u32) s2 << 3);
    v1 = (s32) ((u32) v1 + 0xffff98f0U);
    v0 = (s32) ((u32) s0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_001F08B0(a0);
L_00220C1C:;
    goto L_00220C34;
L_00220C24:;
    if (s0 != 0) { v0 = (s32) ((u32) s1 + 0x15U); goto L_00220C30; }
    v0 = s1;
L_00220C30:;
L_00220C34:;
    return;
}
