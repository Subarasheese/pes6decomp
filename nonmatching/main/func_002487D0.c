/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s32);
void func_0023EC10(s32, s32);
s32 func_0024E650(void);

void func_002487D0(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;

    v0 = func_0024E650();
    s1 = v0;
    a0 = (s32) 0x8e0000U;
    a0 = (s32) ((u32) a0 + 0xffffc230U);
    s0 = (s32) ((u32) s1 << 2);
    a0 = (s32) ((u32) a0 + (u32) s0);
    v1 = 64;
    a0 = (*(volatile s32 *) (u32) a0);
    if (a0 == v1) goto L_00248810;
    goto L_00248860;
L_00248810:;
    v0 = (s32) 0x540000U;
    a2 = 6;
    v0 = (s32) ((u32) v0 + 0xffffcb40U);
    a0 = (s32) ((u32) gp + 0xffffa7a0U);
    v1 = (s32) ((u32) v0 + (u32) s0);
    a1 = 4;
    v0 = (s32) ((u32) s1 << 1);
    (*(volatile u32 *) (u32) v1) = (u32) a2;
    v0 = (s32) ((u32) v0 + (u32) s1);
    v1 = (s32) ((u32) v0 << 2);
    v0 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) v1 + (u32) s1);
    v0 = (s32) ((u32) v0 + 0xffffa200U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u8 *) (u32) v0) = (u8) a2; func_0023EC10(a0, a1);
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0xf802; SD_call(a0);
L_00248860:;
    a0 = (s32) 0x8e0000U;
    v1 = 2;
    a0 = (s32) ((u32) a0 + 0xffffc270U);
    a0 = (s32) ((u32) a0 + (u32) s0);
    a0 = (*(volatile s32 *) (u32) a0);
    if (a0 == v1) goto L_002488A8;
    v1 = 1;
    if (a0 == v1) { v1 = 3; goto L_00248890; }
    goto L_002488FC;
L_00248890:;
    v0 = (s32) 0x84020000U;
    (*(volatile u8 *) (u32) (gp + -22640)) = (u8) v1;
    a0 = v0 | 0x8400; SD_call(a0);
    goto L_002488F8;
L_002488A8:;
    v0 = (s32) 0x540000U;
    a2 = 6;
    v0 = (s32) ((u32) v0 + 0xffffcb40U);
    a0 = (s32) ((u32) gp + 0xffffa7a0U);
    v1 = (s32) ((u32) v0 + (u32) s0);
    a1 = 4;
    v0 = (s32) ((u32) s1 << 1);
    (*(volatile u32 *) (u32) v1) = (u32) a2;
    v0 = (s32) ((u32) v0 + (u32) s1);
    v1 = (s32) ((u32) v0 << 2);
    v0 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) v1 + (u32) s1);
    v0 = (s32) ((u32) v0 + 0xffffa200U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u8 *) (u32) v0) = (u8) a2; func_0023EC10(a0, a1);
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0x8401; SD_call(a0);
L_002488F8:;
L_002488FC:;
    return;
}
