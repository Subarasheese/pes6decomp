/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0063B410(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_0063CA40(s32);
s32 func_00645860(s32);
void func_00655940(void);
void func_00655EE0(s32, s32);
void func_00656020(s32, s32);

void func_00621D90(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    s0 = a0; func_00655940();
    v1 = 1;
    if (s0 == v1) { ; goto L_006220A8; }
    v1 = -118;
    if (s0 == v1) goto L_006220A4;
    if (s0 == 0) goto L_006220A4;
    v1 = -119;
    if (s0 == v1) { a0 = 18; goto L_00622038; }
    v1 = -121;
    if (s0 == v1) goto L_006220A4;
    v1 = -122;
    if (s0 == v1) { a0 = 16; goto L_00621FC4; }
    v1 = -120;
    if (s0 == v1) goto L_00621FC0;
    v1 = -125;
    if (s0 == v1) goto L_00621FC0;
    v1 = -123;
    if (s0 == v1) goto L_006220A4;
    v1 = -124;
    if (s0 == v1) { a0 = 12; goto L_00621F4C; }
    v1 = -126;
    if (s0 == v1) { a0 = 15; goto L_00621EC4; }
    v1 = -127;
    if (s0 == v1) { a0 = 11; goto L_00621E3C; }
    goto L_006220A4;
L_00621E3C:;
    v0 = func_00645860(a0);
    a0 = v0;
    a1 = 0; func_00656020(a0, a1);
    a0 = 102; v0 = func_00645860(a0);
    a0 = v0;
    a1 = 1; func_00656020(a0, a1);
    a0 = 101; v0 = func_00645860(a0);
    s1 = v0;
    a0 = 0; v0 = func_0063CA40(a0);
    s0 = v0;
    a0 = 5; v0 = func_0063CA40(a0);
    a0 = (s32) 0x660000U;
    a2 = (s32) ((u32) s0 + (u32) v0);
    a1 = s1;
    a0 = (s32) ((u32) a0 + 0xffffd630U); func_0063B410(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (s32) 0x660000U;
    a1 = 2;
    a0 = (s32) ((u32) a0 + 0xffffd630U); func_00656020(a0, a1);
    a0 = 103; v0 = func_00645860(a0);
    a0 = v0;
    a1 = 3; func_00656020(a0, a1);
    goto L_006220A4;
L_00621EC4:;
    v0 = func_00645860(a0);
    a0 = v0;
    a1 = 0; func_00656020(a0, a1);
    a0 = 102; v0 = func_00645860(a0);
    a0 = v0;
    a1 = 1; func_00656020(a0, a1);
    a0 = 101; v0 = func_00645860(a0);
    s1 = v0;
    a0 = 0; v0 = func_0063CA40(a0);
    s0 = v0;
    a0 = 5; v0 = func_0063CA40(a0);
    a0 = (s32) 0x660000U;
    a2 = (s32) ((u32) s0 + (u32) v0);
    a1 = s1;
    a0 = (s32) ((u32) a0 + 0xffffd630U); func_0063B410(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (s32) 0x660000U;
    a1 = 2;
    a0 = (s32) ((u32) a0 + 0xffffd630U); func_00656020(a0, a1);
    a0 = 103; v0 = func_00645860(a0);
    a0 = v0;
    a1 = 3; func_00656020(a0, a1);
    goto L_006220A4;
L_00621F4C:;
    v0 = func_00645860(a0);
    a0 = v0;
    a1 = 0; func_00655EE0(a0, a1);
    a0 = 107; v0 = func_00645860(a0);
    a0 = v0;
    a1 = 1; func_00655EE0(a0, a1);
    a0 = 101; v0 = func_00645860(a0);
    s1 = v0;
    a0 = 0; v0 = func_0063CA40(a0);
    s0 = v0;
    a0 = 5; v0 = func_0063CA40(a0);
    a0 = (s32) 0x660000U;
    a2 = (s32) ((u32) s0 + (u32) v0);
    a1 = s1;
    a0 = (s32) ((u32) a0 + 0xffffd630U); func_0063B410(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (s32) 0x660000U;
    a1 = 2;
    a0 = (s32) ((u32) a0 + 0xffffd630U); func_00656020(a0, a1);
    goto L_006220A4;
L_00621FC0:;
    a0 = 16;
L_00621FC4:;
    v0 = func_00645860(a0);
    a0 = v0;
    a1 = 0; func_00655EE0(a0, a1);
    a0 = 101; v0 = func_00645860(a0);
    s1 = v0;
    a0 = 0; v0 = func_0063CA40(a0);
    s0 = v0;
    a0 = 5; v0 = func_0063CA40(a0);
    a0 = (s32) 0x660000U;
    a2 = (s32) ((u32) s0 + (u32) v0);
    a1 = s1;
    a0 = (s32) ((u32) a0 + 0xffffd630U); func_0063B410(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (s32) 0x660000U;
    a1 = 2;
    a0 = (s32) ((u32) a0 + 0xffffd630U); func_00656020(a0, a1);
    a0 = 103; v0 = func_00645860(a0);
    a0 = v0;
    a1 = 3; func_00656020(a0, a1);
    goto L_006220A4;
L_00622038:;
    v0 = func_00645860(a0);
    a0 = v0;
    a1 = 0; func_00656020(a0, a1);
    a0 = 101; v0 = func_00645860(a0);
    s1 = v0;
    a0 = 0; v0 = func_0063CA40(a0);
    s0 = v0;
    a0 = 5; v0 = func_0063CA40(a0);
    a0 = (s32) 0x660000U;
    a2 = (s32) ((u32) s0 + (u32) v0);
    a1 = s1;
    a0 = (s32) ((u32) a0 + 0xffffd630U); func_0063B410(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (s32) 0x660000U;
    a1 = 1;
    a0 = (s32) ((u32) a0 + 0xffffd630U); func_00656020(a0, a1);
    a0 = 103; v0 = func_00645860(a0);
    a0 = v0;
    a1 = 2; func_00656020(a0, a1);
L_006220A4:;
L_006220A8:;
    return;
}
