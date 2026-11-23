/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00623890(s32);
void func_0064D650(s32);

void func_00647A80(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;

    a3 = 1;
    { s32 c_ = a1 == a3; s0 = a0; if (c_) goto L_00647C9C; }
    v1 = -118;
    if (a1 == v1) { ; goto L_00647CA0; }
    v1 = -119;
    if (a1 == v1) { (*(volatile u8 *) (u32) (s0 + 10)) = (u8) a3; goto L_00647C90; }
    v1 = -120;
    if (a1 == v1) { a0 = (*(volatile s16 *) (u32) a2); goto L_00647C40; }
    v1 = -121;
    if (a1 == v1) goto L_00647C9C;
    v1 = -122;
    if (a1 == v1) { (*(volatile u8 *) (u32) (s0 + 10)) = (u8) a3; goto L_00647C30; }
    v1 = -123;
    if (a1 == v1) { (*(volatile u8 *) (u32) (s0 + 10)) = (u8) a3; goto L_00647C20; }
    v1 = -124;
    if (a1 == v1) { (*(volatile u8 *) (u32) (s0 + 10)) = (u8) a3; goto L_00647C10; }
    v1 = -125;
    if (a1 == v1) { (*(volatile u8 *) (u32) (s0 + 10)) = (u8) a3; goto L_00647BFC; }
    v1 = -126;
    if (a1 == v1) { (*(volatile u8 *) (u32) (s0 + 10)) = (u8) a3; goto L_00647BEC; }
    v1 = -127;
    if (a1 == v1) { v0 = (*(volatile u8 *) (u32) (s0 + 10)); goto L_00647B20; }
    if (a1 == 0) goto L_00647C9C;
    goto L_00647C9C;
L_00647B20:;
    if (v0 == 0) { a0 = 0; goto L_00647B40; }
    a0 = a2; v0 = func_00623890(a0);
    if (v0 != 0) goto L_00647B3C;
    (*(volatile u8 *) (u32) (s0 + 10)) = (u8) 0;
L_00647B3C:;
    a0 = 0;
L_00647B40:;
    func_0064D650(a0);
    a0 = 3;
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
    (*(volatile u8 *) (u32) (s0 + 17)) = (u8) 0; goto L_00647C9C;
L_00647BEC:;
    (*(volatile u8 *) (u32) (s0 + 11)) = (u8) a3;
    (*(volatile u8 *) (u32) (s0 + 12)) = (u8) 0;
    (*(volatile u8 *) (u32) (s0 + 13)) = (u8) 0; goto L_00647C9C;
L_00647BFC:;
    (*(volatile u8 *) (u32) (s0 + 11)) = (u8) a3;
    (*(volatile u8 *) (u32) (s0 + 12)) = (u8) 0;
    (*(volatile u8 *) (u32) (s0 + 13)) = (u8) 0;
    (*(volatile u8 *) (u32) (s0 + 14)) = (u8) a3; goto L_00647C9C;
L_00647C10:;
    (*(volatile u8 *) (u32) (s0 + 11)) = (u8) a3;
    (*(volatile u8 *) (u32) (s0 + 12)) = (u8) 0;
    (*(volatile u8 *) (u32) (s0 + 13)) = (u8) a3; goto L_00647C9C;
L_00647C20:;
    (*(volatile u8 *) (u32) (s0 + 11)) = (u8) a3;
    (*(volatile u8 *) (u32) (s0 + 12)) = (u8) 0;
    (*(volatile u8 *) (u32) (s0 + 13)) = (u8) 0; goto L_00647C9C;
L_00647C30:;
    (*(volatile u8 *) (u32) (s0 + 11)) = (u8) a3;
    (*(volatile u8 *) (u32) (s0 + 12)) = (u8) 0;
    (*(volatile u8 *) (u32) (s0 + 13)) = (u8) 0; goto L_00647C9C;
L_00647C40:;
    v1 = (s32) 0x660000U;
    a1 = (*(volatile s16 *) (u32) (a2 + 2));
    v1 = (s32) ((u32) v1 + 0xffffc180U);
    a0 = (s32) ((u32) a0 << 2);
    a0 = (s32) ((u32) a1 + (u32) a0);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    at = v1 < 128;
    if (at == 0) { (*(volatile u8 *) (u32) (s0 + 10)) = (u8) a3; goto L_00647C80; }
    (*(volatile u8 *) (u32) (s0 + 10)) = (u8) a3;
    (*(volatile u8 *) (u32) (s0 + 11)) = (u8) a3;
    (*(volatile u8 *) (u32) (s0 + 12)) = (u8) 0;
    (*(volatile u8 *) (u32) (s0 + 13)) = (u8) 0; goto L_00647C9C;
L_00647C80:;
    (*(volatile u8 *) (u32) (s0 + 11)) = (u8) a3;
    (*(volatile u8 *) (u32) (s0 + 12)) = (u8) a3;
    (*(volatile u8 *) (u32) (s0 + 13)) = (u8) 0; goto L_00647C9C;
L_00647C90:;
    (*(volatile u8 *) (u32) (s0 + 11)) = (u8) a3;
    (*(volatile u8 *) (u32) (s0 + 12)) = (u8) a3;
    (*(volatile u8 *) (u32) (s0 + 13)) = (u8) 0;
L_00647C9C:;
L_00647CA0:;
    return;
}
