/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001F08B0(s32);
s32 func_00623430(void);
void func_006560C0(s32, s32);

void func_00645670(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;

    s0 = (*(volatile s16 *) (u32) a0);
    s1 = a0; v0 = func_00623430();
    v1 = 1;
    v1 = (s32) ((u32) v1 << (s0 & 31));
    v0 = v1 & v0;
    if (v0 != 0) { v1 = (*(volatile s16 *) (u32) (s1 + 2)); goto L_006456C0; }
    v1 = (*(volatile s16 *) (u32) (s1 + 2));
    if (v1 != 0) { v0 = (s32) ((u32) s0 << 2); goto L_006456B4; }
    v0 = s0; goto L_006456CC;
L_006456B4:;
    v0 = (s32) ((u32) v0 + 0x2U);
    v0 = (s32) ((u32) v1 + (u32) v0); goto L_006456CC;
L_006456C0:;
    v0 = (s32) ((u32) s0 << 2);
    v0 = (s32) ((u32) v0 + 0x2U);
    v0 = (s32) ((u32) v1 + (u32) v0);
L_006456CC:;
    if (s0 != 0) { s0 = (s32) ((u32) gp + 0xffff8418U); goto L_006456D8; }
    s0 = (s32) ((u32) gp + 0xffff8414U);
L_006456D8:;
    v1 = (s32) ((u32) v0 << 2);
    v0 = (s32) 0x660000U;
    v0 = (s32) ((u32) v0 + 0xffff9ff0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_001F08B0(a0);
    a1 = s0;
    a0 = v0; func_006560C0(a0, a1);
    return;
}
