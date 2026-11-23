/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Keyboard_Acquire(s32, s32, s32, s32);
void Pes6Keyboard_Release(s32, s32, s32, s32, s32, s32, s32, s32);
void func_0023E0E0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_0023EC10(s32, s32);
void func_0024BBB0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_0024DA90(s32, s32, s32, s32);
s32 func_0024E650(void);
s32 func_002E8C60(s32, s32, s32, s32);
void func_002E8CB0(s32, s32);
void func_002E92D0(s32);
s32 func_002E9310(void);

s32 func_0024D980(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;

    v0 = func_0024E650();
    v1 = (*(volatile s32 *) (u32) (gp + -22592));
    s0 = v0;
    v0 = 1;
    if (v1 == v0) goto L_0024D9E4;
    if (v1 == 0) { a1 = s0; goto L_0024D9B4; }
    v0 = 0; goto L_0024DA80;
L_0024D9B4:;
    a0 = 68; func_002E8CB0(a0, a1);
    a0 = 1; func_002E92D0(a0);
    a0 = 30; func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    Pes6Keyboard_Release(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (*(volatile s32 *) (u32) (gp + -22592));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -22592)) = (u32) v0; goto L_0024DA7C;
L_0024D9E4:;
    v0 = func_002E8C60(a0, a1, a2, a3);
    v1 = 1;
    if (v0 != v1) goto L_0024DA7C;
    (*(volatile u32 *) (u32) (gp + -22592)) = (u32) 0; Pes6Keyboard_Acquire(a0, a1, a2, a3);
    func_0024BBB0(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = func_002E9310();
    v1 = 1;
    if (v0 != v1) goto L_0024DA24;
    v0 = v1; goto L_0024DA80;
L_0024DA24:;
    func_0024DA90(a0, a1, a2, a3);
    v1 = (s32) 0x540000U;
    v0 = (s32) ((u32) s0 << 1);
    a0 = (s32) ((u32) s0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffcb40U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a2 = 6;
    v0 = (s32) ((u32) v0 + (u32) s0);
    (*(volatile u32 *) (u32) v1) = (u32) a2;
    v0 = (s32) ((u32) v0 << 2);
    a0 = (s32) ((u32) gp + 0xffffa7a0U);
    v1 = (s32) ((u32) v0 + (u32) s0);
    a1 = 4;
    v0 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + 0xffffa200U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u8 *) (u32) v0) = (u8) a2; func_0023EC10(a0, a1);
    v0 = 2; goto L_0024DA80;
L_0024DA7C:;
    v0 = 0;
L_0024DA80:;
    return v0;
}
