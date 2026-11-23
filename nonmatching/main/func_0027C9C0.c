/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002A6D80(s32, s32);

void func_0027C9C0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, v1 = 0;
    s64 frame[74];
    s32 sp = (s32) (u32) frame;

    v1 = (s32) ((u32) a0 << 3);
    a2 = (s32) ((u32) v1 + (u32) a0);
    a2 = (s32) ((u32) a2 << 3);
    v1 = (s32) 0x5a0000U;
    a2 = (s32) ((u32) a2 - (u32) a0);
    v1 = (s32) ((u32) v1 + 0xfffffbf0U);
    a2 = (s32) ((u32) a2 << 3);
    a5 = (s32) ((u32) sp + 0x10U);
    v1 = (s32) ((u32) v1 + (u32) a2);
    a4 = 71;
    a6 = v1;
L_0027C9F4:;
    a3 = (*(volatile s32 *) (u32) a6);
    a4 = (s32) ((u32) a4 + 0xffffffffU);
    a2 = (*(volatile s32 *) (u32) (a6 + 4));
    (*(volatile u32 *) (u32) a5) = (u32) a3;
    (*(volatile u32 *) (u32) (a5 + 4)) = (u32) a2;
    a6 = (s32) ((u32) a6 + 0x8U);
    { s32 c_ = a4 > 0; a5 = (s32) ((u32) a5 + 0x8U); if (c_) goto L_0027C9F4; }
    a3 = (s32) ((u32) a1 << 3);
    a2 = (s32) 0x5a0000U;
    a4 = (s32) ((u32) a3 + (u32) a1);
    a2 = (s32) ((u32) a2 + 0xfffffbf0U);
    a5 = (s32) ((u32) a4 << 3);
    a3 = 71;
    a1 = (s32) ((u32) a5 - (u32) a1);
    a4 = v1;
    a1 = (s32) ((u32) a1 << 3);
    a6 = (s32) ((u32) a2 + (u32) a1);
    a5 = a6;
L_0027CA40:;
    a2 = (*(volatile s32 *) (u32) a5);
    a3 = (s32) ((u32) a3 + 0xffffffffU);
    a1 = (*(volatile s32 *) (u32) (a5 + 4));
    (*(volatile u32 *) (u32) a4) = (u32) a2;
    a5 = (s32) ((u32) a5 + 0x8U);
    (*(volatile u32 *) (u32) (a4 + 4)) = (u32) a1;
    { s32 c_ = a3 > 0; a4 = (s32) ((u32) a4 + 0x8U); if (c_) goto L_0027CA40; }
    a4 = (s32) ((u32) sp + 0x10U);
    a3 = 71;
L_0027CA68:;
    a2 = (*(volatile s32 *) (u32) a4);
    a3 = (s32) ((u32) a3 + 0xffffffffU);
    a1 = (*(volatile s32 *) (u32) (a4 + 4));
    (*(volatile u32 *) (u32) a6) = (u32) a2;
    (*(volatile u32 *) (u32) (a6 + 4)) = (u32) a1;
    a4 = (s32) ((u32) a4 + 0x8U);
    { s32 c_ = a3 > 0; a6 = (s32) ((u32) a6 + 0x8U); if (c_) goto L_0027CA68; }
    a1 = 6;
    if (a0 == a1) goto L_0027CAB4;
    a1 = 5;
    if (a0 == a1) goto L_0027CAB4;
    a1 = 4;
    if (a0 == a1) goto L_0027CAB4;
L_0027CAAC:;
    goto L_0027CAC8;
L_0027CAB4:;
    a1 = (s32) ((u32) v1 + 0x8U);
    a0 = 1; func_002A6D80(a0, a1);
    goto L_0027CAAC;
L_0027CAC8:;
    return;
}
