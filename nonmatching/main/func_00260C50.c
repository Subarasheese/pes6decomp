/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00260650(void);
void func_00260FA0(s32, s32, s32, s32);
void memset(s32, s32, s32);

void func_00260C50(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;
    s64 frame[4];
    s32 sp = (s32) (u32) frame;

    func_00260FA0(a0, a1, a2, a3);
    func_00260650();
    a0 = (s32) ((u32) gp + 0xffffa898U);
    a1 = 0;
    a2 = 4; memset(a0, a1, a2);
    v1 = 256;
    (*(volatile u8 *) (u32) (sp + 28)) = (u8) 0;
    (*(volatile u16 *) (u32) (gp + -22376)) = (u16) v1;
    a1 = (s32) ((u32) sp + 0x1dU);
    v1 = 255;
    a0 = (*(volatile u8 *) (u32) (sp + 28));
    (*(volatile u8 *) (u32) a1) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) a1);
    (*(volatile u8 *) (u32) (gp + -22374)) = (u8) a0;
    (*(volatile u8 *) (u32) (gp + -22373)) = (u8) v1;
    return;
}
