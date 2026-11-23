/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001DF820(s32, s32, s32, s32);
s32 func_002F96F0(s32, s32);
void sprintf(s32, s32, s32, s32, s32, s32, s32, s32);

void func_0091AA50(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;
    s64 frame[20];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) ((u32) gp + 0xffffb1dcU);
    a1 = 4;
    v1 = (*(volatile s32 *) (u32) (gp + -20008));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { v1 = (*(volatile s32 *) (u32) (gp + -20008)); goto L_0091AA90; }
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
    v1 = (*(volatile s32 *) (u32) (gp + -20008));
L_0091AA90:;
    a1 = (s32) 0x930000U;
    v0 = (s32) ((u32) gp + 0xffffb1dcU);
    a0 = (s32) ((u32) sp + 0x80U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a2 = (*(volatile s32 *) (u32) (v0 + 68));
    a1 = (s32) ((u32) a1 + 0xffffe880U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = s0;
    a1 = (s32) ((u32) sp + 0x80U); func_001DF820(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (gp + -20008));
    v0 = (s32) ((u32) gp + 0xffffb1dcU);
    a1 = 6;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { v1 = (*(volatile s32 *) (u32) (gp + -20008)); goto L_0091AAF4; }
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
    v1 = (*(volatile s32 *) (u32) (gp + -20008));
L_0091AAF4:;
    a1 = (s32) 0x930000U;
    v0 = (s32) ((u32) gp + 0xffffb1dcU);
    a0 = (s32) ((u32) sp + 0x60U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a2 = (*(volatile s32 *) (u32) (v0 + 60));
    a1 = (s32) ((u32) a1 + 0xffffe880U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = s0;
    a1 = (s32) ((u32) sp + 0x60U); func_001DF820(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (gp + -20008));
    v0 = (s32) ((u32) gp + 0xffffb1dcU);
    a1 = 8;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { v1 = (*(volatile s32 *) (u32) (gp + -20008)); goto L_0091AB58; }
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
    v1 = (*(volatile s32 *) (u32) (gp + -20008));
L_0091AB58:;
    a1 = (s32) 0x930000U;
    v0 = (s32) ((u32) gp + 0xffffb1dcU);
    a0 = (s32) ((u32) sp + 0x40U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a2 = (*(volatile s32 *) (u32) (v0 + 64));
    a1 = (s32) ((u32) a1 + 0xffffe880U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = s0;
    a1 = (s32) ((u32) sp + 0x40U); func_001DF820(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (gp + -20008));
    v0 = (s32) ((u32) gp + 0xffffb1dcU);
    a1 = 10;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { v1 = (*(volatile s32 *) (u32) (gp + -20008)); goto L_0091ABBC; }
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
    v1 = (*(volatile s32 *) (u32) (gp + -20008));
L_0091ABBC:;
    a1 = (s32) 0x930000U;
    v0 = (s32) ((u32) gp + 0xffffb1dcU);
    a0 = (s32) ((u32) sp + 0x20U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a2 = (*(volatile s32 *) (u32) (v0 + 72));
    a1 = (s32) ((u32) a1 + 0xffffe880U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = s0;
    a1 = (s32) ((u32) sp + 0x20U); func_001DF820(a0, a1, a2, a3);
    return;
}
