/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002D5410(void);
void func_002D5630(s32, s32);
void func_0091A410(s32, s32, s32, s32);
void memset(s32, s32, s32);

void func_00919BD0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;

    a1 = 0;
    a2 = 84;
    s0 = a0;
    (*(volatile u32 *) (u32) (gp + -20008)) = (u32) 0;
    a0 = (s32) 0x930000U;
    a0 = (s32) ((u32) a0 + 0xfffff2c0U); memset(a0, a1, a2);
    a2 = (*(volatile s32 *) (u32) (gp + -20008));
    a0 = (s32) 0x930000U;
    v0 = (s32) ((u32) gp + 0xffffb1dcU);
    a0 = (s32) ((u32) a0 + 0xfffff2c0U);
    a1 = (s32) ((u32) a2 << 3);
    v1 = (s32) ((u32) a2 << 2);
    a1 = (s32) ((u32) a1 - (u32) a2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) v1 - (u32) a1);
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) a0 + (u32) v1);
    (*(volatile u32 *) (u32) v0) = (u32) v1; v0 = func_002D5410();
    a0 = (*(volatile s32 *) (u32) (gp + -20008));
    v1 = (s32) ((u32) gp + 0xffffb1dcU);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    (*(volatile u32 *) (u32) (v1 + 20)) = (u32) v0; func_0091A410(a0, a1, a2, a3);
    if (s0 <= 0) { v1 = (*(volatile s32 *) (u32) (gp + -20008)); goto L_00919C6C; }
    at = s0 < 31;
    if (at != 0) { s0 = 1; goto L_00919C68; }
    s0 = (s32) ((u32) s0 + 0xffffffe2U); goto L_00919C68;
L_00919C68:;
    v1 = (*(volatile s32 *) (u32) (gp + -20008));
L_00919C6C:;
    v0 = (s32) ((u32) gp + 0xffffb1dcU);
    a1 = s0;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (s32) ((u32) v0 + 0x18U); func_002D5630(a0, a1);
    a0 = (*(volatile s32 *) (u32) (gp + -20008));
    v1 = (s32) ((u32) gp + 0xffffb1dcU);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    (*(volatile u32 *) (u32) (v1 + 16)) = (u32) 0;
    return;
}
