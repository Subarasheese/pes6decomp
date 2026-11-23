/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001B6A30(s32, s32, s32, s32);
void func_001F4B20(s32, s32, s32, s32);
void func_0023B040(s32, s32, s32, s32);
void func_0023EA10(s32, s32, s32, s32);
s32 func_0023F330(void);
void func_008BC320(s32, s32, s32, s32);
void func_008C0470(s32, s32, s32, s32, s32, s32, s32, s32);
void func_00934540(s32, s32, s32, s32);
s32 func_0093D740(s32, s32, s32, s32);

s32 func_008BD110(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0;

    a0 = 0;
    s0 = (s32) 0x540000U;
    s0 = (s32) ((u32) s0 + 0xffffc300U); func_0023EA10(a0, a1, a2, a3);
    v0 = (s32) 0x510000U;
    v1 = 4;
    v0 = (*(volatile s32 *) (u32) (v0 + 4048));
    if (v0 != v1) goto L_008BD188;
    v1 = (*(volatile s8 *) (u32) (s0 + 9));
    v0 = 1;
    if (v1 != v0) goto L_008BD168;
    a0 = 20437; v0 = func_001B6A30(a0, a1, a2, a3);
    if (v0 != 0) goto L_008BD1B4;
    v0 = 0; goto L_008BD234;
L_008BD168:;
    v0 = func_0023F330();
    a0 = v0; v0 = func_001B6A30(a0, a1, a2, a3);
    if (v0 != 0) goto L_008BD1B4;
    v0 = 0; goto L_008BD234;
L_008BD188:;
    v0 = func_0093D740(a0, a1, a2, a3);
    if (v0 != 0) { v0 = (s32) 0xee0000U; goto L_008BD1A0; }
    v0 = 0; goto L_008BD234;
L_008BD1A0:;
    a0 = -1;
    a1 = v0 | 0x81be;
    a2 = v0 | 0x81bf;
    a3 = 0; func_001F4B20(a0, a1, a2, a3);
L_008BD1B4:;
    a0 = (s32) 0x8e0000U;
    a0 = (s32) ((u32) a0 + 0xfffff000U); func_008C0470(a0, a1, a2, a3, a4, a5, a6, a7);
    func_0023B040(a0, a1, a2, a3);
    v1 = (*(volatile s8 *) (u32) (s0 + 9));
    v0 = 2;
    if (v1 != v0) goto L_008BD1E0;
    func_008BC320(a0, a1, a2, a3);
L_008BD1E0:;
    v0 = (s32) 0x510000U;
    v1 = 4;
    v0 = (*(volatile s32 *) (u32) (v0 + 4048));
    if (v0 != v1) { v0 = 1; goto L_008BD234; }
    v0 = (s32) 0x8e0000U;
    v0 = (*(volatile s16 *) (u32) (v0 + -2812));
    if (v0 != 0) goto L_008BD230;
    v0 = (s32) 0x8e0000U;
    v1 = (*(volatile s16 *) (u32) (v0 + -1540));
    v0 = v1 < 17;
    if (v0 != 0) goto L_008BD230;
    v0 = (s32) 0x960000U;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + 0x174cU);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); func_00934540(a0, a1, a2, a3);
L_008BD230:;
    v0 = 1;
L_008BD234:;
    return v0;
}
