/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002C96C0(s32, s32, s32);

void func_002C8BA0(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;

    s6 = a1;
    s5 = a0;
    s4 = a2;
    if (s6 == 0) goto L_002C8CA4;
    if (s5 == 0) goto L_002C8CA4;
    if (s4 == 0) goto L_002C8CA4;
    s0 = (*(volatile u8 *) (u32) s6);
    at = s0 < 11;
    { s32 c_ = at == 0; a1 = (s32) ((u32) s5 + 0x14U); if (c_) goto L_002C8CA4; }
    a0 = (*(volatile s8 *) (u32) (s4 + 14));
    if (a0 == 0) goto L_002C8C44;
    v1 = 1;
    if (a0 == v1) goto L_002C8C38;
    v1 = 2;
    if (a0 == v1) goto L_002C8C20;
    a0 = (*(volatile s8 *) (u32) (s4 + 14)); goto L_002C8C48;
L_002C8C20:;
    a0 = (s32) ((u32) a1 + (u32) s0);
    v1 = 23;
    (*(volatile u8 *) (u32) a0) = (u8) v1;
    v1 = 22;
    (*(volatile u8 *) (u32) (a0 + 1)) = (u8) v1; goto L_002C8C44;
L_002C8C38:;
    a0 = (*(volatile u8 *) (u32) (s4 + 2));
    v1 = (s32) ((u32) a1 + (u32) s0);
    (*(volatile u8 *) (u32) v1) = (u8) a0;
L_002C8C44:;
    a0 = (*(volatile s8 *) (u32) (s4 + 14));
L_002C8C48:;
    v1 = 0 < a0;
    { s32 c_ = v1 != 0; s3 = 0; if (c_) goto L_002C8C60; }
    v1 = (s32) ((u32) s0 + (u32) a0);
L_002C8C58:;
    (*(volatile u8 *) (u32) s6) = (u8) v1; goto L_002C8CA4;
L_002C8C60:;
    s2 = (s32) ((u32) s5 + (u32) s0);
    s1 = s0;
L_002C8C68:;
    (*(volatile u8 *) (u32) (s2 + 31)) = (u8) 0;
    v0 = 1;
    (*(volatile u8 *) (u32) (s2 + 42)) = (u8) v0;
    a1 = s1 & 0xff;
    a0 = s5;
    a2 = s4; func_002C96C0(a0, a1, a2);
    a0 = (*(volatile s8 *) (u32) (s4 + 14));
    s3 = (s32) ((u32) s3 + 0x1U);
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = s3 < a0;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x1U); if (c_) goto L_002C8C68; }
    v1 = (s32) ((u32) s0 + (u32) a0); goto L_002C8C58;
L_002C8CA4:;
    return;
}
