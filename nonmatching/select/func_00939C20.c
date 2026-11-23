/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s32);
void SD_stop(s32);
s32 func_0026DA40(s32);

s32 func_00939C20(s32 a0) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;

    v1 = (*(volatile s8 *) (u32) (gp + -18532));
    v0 = 2;
    if (v1 == v0) goto L_00939CA8;
    a0 = 1;
    if (v1 == a0) goto L_00939C70;
    if (v1 == 0) { v0 = (*(volatile s16 *) (u32) (gp + -18548)); goto L_00939C50; }
    v0 = 0; goto L_00939CDC;
L_00939C50:;
    if (v0 != a0) { v0 = (*(volatile s8 *) (u32) (gp + -18532)); goto L_00939C64; }
    a0 = (*(volatile s32 *) (u32) (gp + -18540)); SD_stop(a0);
    v0 = (*(volatile s8 *) (u32) (gp + -18532));
L_00939C64:;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -18532)) = (u8) v0; goto L_00939CD8;
L_00939C70:;
    v0 = func_0026DA40(a0);
    if (v0 != 0) goto L_00939CD8;
    v1 = (*(volatile s16 *) (u32) (gp + -18548));
    v0 = 1;
    if (v1 != v0) { v0 = 2; goto L_00939CA0; }
    v0 = 2;
    (*(volatile u16 *) (u32) (gp + -18548)) = (u16) 0;
    (*(volatile u8 *) (u32) (gp + -18532)) = (u8) v0; goto L_00939CD8;
L_00939CA0:;
    (*(volatile u8 *) (u32) (gp + -18532)) = (u8) v0; goto L_00939CD8;
L_00939CA8:;
    v1 = (*(volatile s32 *) (u32) (gp + -18544));
    v0 = (s32) 0x960000U;
    v0 = (s32) ((u32) v0 + 0x79f0U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
    (*(volatile u32 *) (u32) (gp + -18540)) = (u32) a0; SD_call(a0);
    v0 = 1;
    (*(volatile u8 *) (u32) (gp + -18532)) = (u8) 0;
    (*(volatile u16 *) (u32) (gp + -18548)) = (u16) v0; goto L_00939CDC;
L_00939CD8:;
    v0 = 0;
L_00939CDC:;
    return v0;
}
