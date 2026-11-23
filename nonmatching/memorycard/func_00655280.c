/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001B9D80(s32);
void func_001B9DD0(s32);
s32 func_001B9DF0(void);
void func_001B9E30(s32, s32, s32, s32);
s32 func_002E8B80(void);
s32 func_002E8BD0(void);
s32 func_0063B610(void);

void func_00655280(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;
    s64 frame[6];
    s32 sp = (s32) (u32) frame;

    v0 = func_001B9DF0();
    if (v0 != 0) { ; goto L_00655328; }
    v0 = func_0063B610();
    v0 = v0 & 0xff;
    a0 = (*(volatile u8 *) (u32) (gp + -21840));
    v1 = (s32) ((u32) v0 << 2);
    (*(volatile u32 *) (u32) (sp + 20)) = (u32) 0;
    v0 = (s32) 0x660000U;
    v0 = (s32) ((u32) v0 + 0xffffa090U);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = 2;
    (*(volatile u32 *) (u32) (sp + 16)) = (u32) v0;
    v0 = (s32) ((u32) sp + 0x10U);
    (*(volatile u32 *) (u32) (sp + 44)) = (u32) v0;
    v0 = (s32) ((u32) sp + 0x2cU);
    (*(volatile u32 *) (u32) (sp + 32)) = (u32) v0;
    v0 = 1;
    (*(volatile u32 *) (u32) (sp + 36)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) v1);
    (*(volatile u32 *) (u32) (sp + 24)) = (u32) v0; func_001B9DD0(a0);
    a0 = (s32) ((u32) sp + 0x20U); func_001B9E30(a0, a1, a2, a3);
    v0 = func_002E8BD0();
    v1 = 73;
    if (v0 == v1) { a0 = 3; goto L_0065531C; }
    v0 = func_002E8B80();
    v1 = 1;
    if (v0 != v1) goto L_00655324;
    a0 = 3;
L_0065531C:;
    func_001B9D80(a0);
L_00655324:;
L_00655328:;
    return;
}
