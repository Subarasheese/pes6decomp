/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00623890(s32);

void func_00646820(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;

    a3 = 1;
    { s32 c_ = a1 == a3; s0 = a0; if (c_) goto L_00646A30; }
    v1 = -118;
    if (a1 == v1) { ; goto L_00646A34; }
    v1 = -119;
    if (a1 == v1) { (*(volatile u8 *) (u32) (s0 + 10)) = (u8) a3; goto L_00646A24; }
    v1 = -120;
    if (a1 == v1) { a0 = (*(volatile s16 *) (u32) a2); goto L_006469D4; }
    v1 = -121;
    if (a1 == v1) goto L_00646A30;
    v1 = -122;
    if (a1 == v1) { (*(volatile u8 *) (u32) (s0 + 10)) = (u8) a3; goto L_006469C4; }
    v1 = -123;
    if (a1 == v1) { (*(volatile u8 *) (u32) (s0 + 10)) = (u8) a3; goto L_006469B4; }
    v1 = -124;
    if (a1 == v1) { (*(volatile u8 *) (u32) (s0 + 10)) = (u8) a3; goto L_006469A4; }
    v1 = -125;
    if (a1 == v1) { (*(volatile u8 *) (u32) (s0 + 10)) = (u8) a3; goto L_00646990; }
    v1 = -126;
    if (a1 == v1) { (*(volatile u8 *) (u32) (s0 + 10)) = (u8) a3; goto L_00646980; }
    v1 = -127;
    if (a1 == v1) { v1 = (*(volatile u8 *) (u32) (s0 + 10)); goto L_006468C0; }
    if (a1 == 0) goto L_00646A30;
    goto L_00646A30;
L_006468C0:;
    if (v1 == 0) { a0 = 3; goto L_006468E0; }
    a0 = a2; v0 = func_00623890(a0);
    if (v0 != 0) goto L_006468DC;
    (*(volatile u8 *) (u32) (s0 + 10)) = (u8) 0;
L_006468DC:;
    a0 = 3;
L_006468E0:;
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (v1 + -16236)) = (u32) a0;
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (v1 + -16240)) = (u32) 0;
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (v1 + -16228)) = (u32) a0;
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (v1 + -16232)) = (u32) 0;
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (v1 + -16220)) = (u32) a0;
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (v1 + -16224)) = (u32) 0;
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (v1 + -16212)) = (u32) a0;
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (v1 + -16216)) = (u32) 0;
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (v1 + -16204)) = (u32) a0;
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (v1 + -16208)) = (u32) 0;
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (v1 + -16196)) = (u32) a0;
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (v1 + -16200)) = (u32) 0;
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (v1 + -16188)) = (u32) a0;
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (v1 + -16192)) = (u32) 0;
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (v1 + -16180)) = (u32) a0;
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (v1 + -16184)) = (u32) 0;
    (*(volatile u8 *) (u32) (s0 + 11)) = (u8) 0;
    v1 = 1;
    (*(volatile u8 *) (u32) (s0 + 12)) = (u8) 0;
    (*(volatile u8 *) (u32) (s0 + 13)) = (u8) 0;
    (*(volatile u8 *) (u32) (s0 + 14)) = (u8) v1;
    (*(volatile u8 *) (u32) (s0 + 16)) = (u8) 0;
    (*(volatile u8 *) (u32) (s0 + 17)) = (u8) 0; goto L_00646A30;
L_00646980:;
    (*(volatile u8 *) (u32) (s0 + 11)) = (u8) a3;
    (*(volatile u8 *) (u32) (s0 + 12)) = (u8) 0;
    (*(volatile u8 *) (u32) (s0 + 13)) = (u8) 0; goto L_00646A30;
L_00646990:;
    (*(volatile u8 *) (u32) (s0 + 11)) = (u8) a3;
    (*(volatile u8 *) (u32) (s0 + 12)) = (u8) 0;
    (*(volatile u8 *) (u32) (s0 + 13)) = (u8) 0;
    (*(volatile u8 *) (u32) (s0 + 14)) = (u8) a3; goto L_00646A30;
L_006469A4:;
    (*(volatile u8 *) (u32) (s0 + 11)) = (u8) a3;
    (*(volatile u8 *) (u32) (s0 + 12)) = (u8) 0;
    (*(volatile u8 *) (u32) (s0 + 13)) = (u8) a3; goto L_00646A30;
L_006469B4:;
    (*(volatile u8 *) (u32) (s0 + 11)) = (u8) a3;
    (*(volatile u8 *) (u32) (s0 + 12)) = (u8) 0;
    (*(volatile u8 *) (u32) (s0 + 13)) = (u8) 0; goto L_00646A30;
L_006469C4:;
    (*(volatile u8 *) (u32) (s0 + 11)) = (u8) a3;
    (*(volatile u8 *) (u32) (s0 + 12)) = (u8) 0;
    (*(volatile u8 *) (u32) (s0 + 13)) = (u8) 0; goto L_00646A30;
L_006469D4:;
    v1 = (s32) 0x660000U;
    a1 = (*(volatile s16 *) (u32) (a2 + 2));
    v1 = (s32) ((u32) v1 + 0xffffc180U);
    a0 = (s32) ((u32) a0 << 2);
    a0 = (s32) ((u32) a1 + (u32) a0);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    at = v1 < 128;
    if (at == 0) { (*(volatile u8 *) (u32) (s0 + 10)) = (u8) a3; goto L_00646A14; }
    (*(volatile u8 *) (u32) (s0 + 10)) = (u8) a3;
    (*(volatile u8 *) (u32) (s0 + 11)) = (u8) a3;
    (*(volatile u8 *) (u32) (s0 + 12)) = (u8) 0;
    (*(volatile u8 *) (u32) (s0 + 13)) = (u8) 0; goto L_00646A30;
L_00646A14:;
    (*(volatile u8 *) (u32) (s0 + 11)) = (u8) a3;
    (*(volatile u8 *) (u32) (s0 + 12)) = (u8) a3;
    (*(volatile u8 *) (u32) (s0 + 13)) = (u8) 0; goto L_00646A30;
L_00646A24:;
    (*(volatile u8 *) (u32) (s0 + 11)) = (u8) a3;
    (*(volatile u8 *) (u32) (s0 + 12)) = (u8) a3;
    (*(volatile u8 *) (u32) (s0 + 13)) = (u8) 0;
L_00646A30:;
L_00646A34:;
    return;
}
