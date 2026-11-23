/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002C96C0(s32, s32, s32);

void func_002C86A0(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;

    s7 = a1;
    s5 = a0;
    s4 = a2;
    if (s7 == 0) goto L_002C883C;
    if (s5 == 0) goto L_002C883C;
    if (s4 == 0) goto L_002C883C;
    s6 = (*(volatile u8 *) (u32) s7);
    at = s6 < 11;
    { s32 c_ = at == 0; a0 = (s32) ((u32) s5 + 0x14U); if (c_) goto L_002C883C; }
    s0 = (*(volatile u8 *) (u32) (s4 + 17));
    if (s0 == 0) goto L_002C883C;
    v1 = 1;
    if (s0 == v1) goto L_002C87D8;
    v1 = 2;
    if (s0 == v1) goto L_002C87C0;
    v1 = 3;
    if (s0 == v1) goto L_002C87A0;
    v1 = 4;
    if (s0 == v1) goto L_002C8778;
    v1 = 5;
    if (s0 == v1) goto L_002C8748;
    v1 = 0 < s0; goto L_002C87E8;
L_002C8748:;
    a0 = (s32) ((u32) a0 + (u32) s6);
    v1 = 34;
    (*(volatile u8 *) (u32) a0) = (u8) v1;
    v1 = 35;
    (*(volatile u8 *) (u32) (a0 + 1)) = (u8) v1;
    v1 = 33;
    (*(volatile u8 *) (u32) (a0 + 2)) = (u8) v1;
    v1 = 31;
    (*(volatile u8 *) (u32) (a0 + 3)) = (u8) v1;
    v1 = 32;
    (*(volatile u8 *) (u32) (a0 + 4)) = (u8) v1; goto L_002C87E4;
L_002C8778:;
    a0 = (s32) ((u32) a0 + (u32) s6);
    v1 = 34;
    (*(volatile u8 *) (u32) a0) = (u8) v1;
    v1 = 35;
    (*(volatile u8 *) (u32) (a0 + 1)) = (u8) v1;
    v1 = 31;
    (*(volatile u8 *) (u32) (a0 + 2)) = (u8) v1;
    v1 = 32;
    (*(volatile u8 *) (u32) (a0 + 3)) = (u8) v1; goto L_002C87E4;
L_002C87A0:;
    a0 = (s32) ((u32) a0 + (u32) s6);
    v1 = 35;
    (*(volatile u8 *) (u32) a0) = (u8) v1;
    v1 = 33;
    (*(volatile u8 *) (u32) (a0 + 1)) = (u8) v1;
    v1 = 31;
    (*(volatile u8 *) (u32) (a0 + 2)) = (u8) v1; goto L_002C87E4;
L_002C87C0:;
    a0 = (s32) ((u32) a0 + (u32) s6);
    v1 = 35;
    (*(volatile u8 *) (u32) a0) = (u8) v1;
    v1 = 31;
    (*(volatile u8 *) (u32) (a0 + 1)) = (u8) v1; goto L_002C87E4;
L_002C87D8:;
    v1 = (s32) ((u32) a0 + (u32) s6);
    a0 = (*(volatile u8 *) (u32) (s4 + 3));
    (*(volatile u8 *) (u32) v1) = (u8) a0;
L_002C87E4:;
    v1 = 0 < s0;
L_002C87E8:;
    { s32 c_ = v1 != 0; s3 = 0; if (c_) goto L_002C87FC; }
    v1 = (s32) ((u32) s6 + (u32) s0);
L_002C87F4:;
    (*(volatile u8 *) (u32) s7) = (u8) v1; goto L_002C883C;
L_002C87FC:;
    s2 = (s32) ((u32) s5 + (u32) s6);
    s1 = s6;
L_002C8804:;
    (*(volatile u8 *) (u32) (s2 + 31)) = (u8) 0;
    v0 = 2;
    (*(volatile u8 *) (u32) (s2 + 42)) = (u8) v0;
    a1 = s1 & 0xff;
    a0 = s5;
    a2 = s4; func_002C96C0(a0, a1, a2);
    s3 = (s32) ((u32) s3 + 0x1U);
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = s3 < s0;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x1U); if (c_) goto L_002C8804; }
    v1 = (s32) ((u32) s6 + (u32) s0); goto L_002C87F4;
L_002C883C:;
    return;
}
