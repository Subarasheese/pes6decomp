/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0018BF30(s32, s32, s32, s32);

void func_0018BB80(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;

    v1 = (s32) 0x520000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 304));
    if (v1 == 0) goto L_0018BC04;
    a0 = (*(volatile u8 *) (u32) (v1 + 14));
    a1 = (s32) ((u32) v1 + 0xeU);
    v1 = 1;
    { s32 c_ = a0 == v1; a3 = 0; if (c_) goto L_0018BBE8; }
L_0018BBAC:;
    v1 = (s32) 0x520000U;
    a1 = 1;
    a2 = (*(volatile s32 *) (u32) (v1 + 304));
    v1 = (*(volatile s32 *) (u32) a2);
    if (v1 != a1) goto L_0018BBD8;
    v1 = (*(volatile u8 *) (u32) (a2 + 18));
    { s32 c_ = v1 != a1; a0 = (s32) ((u32) a2 + 0x12U); if (c_) goto L_0018BBD8; }
    (*(volatile u8 *) (u32) a0) = (u8) 0;
    a3 = a1;
L_0018BBD8:;
    if (a3 != 0) goto L_0018BBF4;
L_0018BBE0:;
    goto L_0018BC08;
L_0018BBE8:;
    (*(volatile u8 *) (u32) a1) = (u8) 0;
    a3 = v1; goto L_0018BBAC;
L_0018BBF4:;
    func_0018BF30(a0, a1, a2, a3);
    goto L_0018BBE0;
L_0018BC04:;
L_0018BC08:;
    return;
}
