/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_0064D390(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;

    a2 = 1;
    if (a1 == a2) goto L_0064D534;
    v1 = -118;
    if (a1 == v1) goto L_0064D534;
    v1 = -119;
    if (a1 == v1) { (*(volatile u8 *) (u32) (gp + -20896)) = (u8) a2; goto L_0064D524; }
    v1 = -120;
    if (a1 == v1) { (*(volatile u8 *) (u32) (a0 + 2)) = (u8) a2; goto L_0064D514; }
    v1 = -121;
    if (a1 == v1) goto L_0064D534;
    v1 = -122;
    if (a1 == v1) { (*(volatile u8 *) (u32) (a0 + 2)) = (u8) a2; goto L_0064D504; }
    v1 = -123;
    if (a1 == v1) { (*(volatile u8 *) (u32) (a0 + 2)) = (u8) a2; goto L_0064D4F4; }
    v1 = -124;
    if (a1 == v1) { (*(volatile u8 *) (u32) (gp + -20892)) = (u8) a2; goto L_0064D4E0; }
    v1 = -125;
    if (a1 == v1) { (*(volatile u8 *) (u32) (a0 + 2)) = (u8) a2; goto L_0064D4D0; }
    v1 = -126;
    if (a1 == v1) { (*(volatile u8 *) (u32) (a0 + 2)) = (u8) a2; goto L_0064D4C0; }
    v1 = -127;
    if (a1 == v1) { a1 = 3; goto L_0064D424; }
    if (a1 == 0) goto L_0064D534;
    goto L_0064D534;
L_0064D424:;
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (v1 + -16236)) = (u32) a1;
    v1 = (s32) 0x660000U;
    (*(volatile u8 *) (u32) (gp + -20888)) = (u8) 0;
    (*(volatile u32 *) (u32) (v1 + -16240)) = (u32) 0;
    v1 = (s32) 0x660000U;
    (*(volatile u8 *) (u32) (gp + -20892)) = (u8) 0;
    (*(volatile u32 *) (u32) (v1 + -16228)) = (u32) a1;
    v1 = (s32) 0x660000U;
    (*(volatile u8 *) (u32) (gp + -20896)) = (u8) 0;
    (*(volatile u32 *) (u32) (v1 + -16232)) = (u32) 0;
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (v1 + -16220)) = (u32) a1;
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (v1 + -16224)) = (u32) 0;
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (v1 + -16212)) = (u32) a1;
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (v1 + -16216)) = (u32) 0;
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (v1 + -16204)) = (u32) a1;
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (v1 + -16208)) = (u32) 0;
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (v1 + -16196)) = (u32) a1;
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (v1 + -16200)) = (u32) 0;
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (v1 + -16188)) = (u32) a1;
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (v1 + -16192)) = (u32) 0;
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (v1 + -16180)) = (u32) a1;
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (v1 + -16184)) = (u32) 0;
    (*(volatile u8 *) (u32) (a0 + 3)) = (u8) 0;
    (*(volatile u8 *) (u32) (a0 + 4)) = (u8) 0;
    (*(volatile u8 *) (u32) (a0 + 5)) = (u8) 0; goto L_0064D534;
L_0064D4C0:;
    (*(volatile u8 *) (u32) (a0 + 3)) = (u8) a2;
    (*(volatile u8 *) (u32) (a0 + 4)) = (u8) 0;
    (*(volatile u8 *) (u32) (a0 + 5)) = (u8) 0; goto L_0064D534;
L_0064D4D0:;
    (*(volatile u8 *) (u32) (a0 + 3)) = (u8) a2;
    (*(volatile u8 *) (u32) (a0 + 4)) = (u8) 0;
    (*(volatile u8 *) (u32) (a0 + 5)) = (u8) 0; goto L_0064D534;
L_0064D4E0:;
    (*(volatile u8 *) (u32) (a0 + 2)) = (u8) a2;
    (*(volatile u8 *) (u32) (a0 + 3)) = (u8) a2;
    (*(volatile u8 *) (u32) (a0 + 4)) = (u8) a2;
    (*(volatile u8 *) (u32) (a0 + 5)) = (u8) 0; goto L_0064D534;
L_0064D4F4:;
    (*(volatile u8 *) (u32) (a0 + 3)) = (u8) a2;
    (*(volatile u8 *) (u32) (a0 + 4)) = (u8) 0;
    (*(volatile u8 *) (u32) (a0 + 5)) = (u8) 0; goto L_0064D534;
L_0064D504:;
    (*(volatile u8 *) (u32) (a0 + 3)) = (u8) a2;
    (*(volatile u8 *) (u32) (a0 + 4)) = (u8) 0;
    (*(volatile u8 *) (u32) (a0 + 5)) = (u8) 0; goto L_0064D534;
L_0064D514:;
    (*(volatile u8 *) (u32) (a0 + 3)) = (u8) a2;
    (*(volatile u8 *) (u32) (a0 + 4)) = (u8) a2;
    (*(volatile u8 *) (u32) (a0 + 5)) = (u8) 0; goto L_0064D534;
L_0064D524:;
    (*(volatile u8 *) (u32) (a0 + 2)) = (u8) a2;
    (*(volatile u8 *) (u32) (a0 + 3)) = (u8) a2;
    (*(volatile u8 *) (u32) (a0 + 4)) = (u8) a2;
    (*(volatile u8 *) (u32) (a0 + 5)) = (u8) 0;
L_0064D534:;
    return;
}
