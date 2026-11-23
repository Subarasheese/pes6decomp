/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002C96C0(s32, s32, s32);

void func_002C8FD0(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;

    s5 = a0;
    s4 = a1;
    s3 = a2;
    if (s4 == 0) goto L_002C90D4;
    if (s5 == 0) goto L_002C90D4;
    if (s3 == 0) goto L_002C90D4;
    s1 = (*(volatile u8 *) (u32) s4);
    at = s1 < 11;
    { s32 c_ = at == 0; a1 = (s32) ((u32) s5 + 0x14U); if (c_) goto L_002C90D4; }
    a0 = (*(volatile s8 *) (u32) (s3 + 12));
    if (a0 == 0) goto L_002C9070;
    v1 = 1;
    if (a0 == v1) goto L_002C9064;
    v1 = 2;
    if (a0 == v1) goto L_002C904C;
    a0 = (*(volatile s8 *) (u32) (s3 + 12)); goto L_002C9074;
L_002C904C:;
    a0 = (s32) ((u32) a1 + (u32) s1);
    v1 = 16;
    (*(volatile u8 *) (u32) a0) = (u8) v1;
    v1 = 15;
    (*(volatile u8 *) (u32) (a0 + 1)) = (u8) v1; goto L_002C9070;
L_002C9064:;
    a0 = (*(volatile u8 *) (u32) (s3 + 2));
    v1 = (s32) ((u32) a1 + (u32) s1);
    (*(volatile u8 *) (u32) v1) = (u8) a0;
L_002C9070:;
    a0 = (*(volatile s8 *) (u32) (s3 + 12));
L_002C9074:;
    v1 = 0 < a0;
    { s32 c_ = v1 != 0; s2 = 0; if (c_) goto L_002C908C; }
    v1 = (s32) ((u32) s1 + (u32) a0);
L_002C9084:;
    (*(volatile u8 *) (u32) s4) = (u8) v1; goto L_002C90D4;
L_002C908C:;
    s0 = (s32) ((u32) s5 + (u32) s1);
L_002C9090:;
    v0 = s2 & 0xff;
    a0 = s5;
    v1 = (s32) ((u32) s0 + (u32) v0);
    a2 = s3;
    v0 = (s32) ((u32) s1 + (u32) v0);
    (*(volatile u8 *) (u32) (v1 + 31)) = (u8) 0;
    a1 = v0 & 0xff;
    (*(volatile u8 *) (u32) (v1 + 42)) = (u8) 0; func_002C96C0(a0, a1, a2);
    a0 = (*(volatile s8 *) (u32) (s3 + 12));
    v1 = (s32) ((u32) s2 + 0x1U);
    s2 = v1 & 0xff;
    v1 = s2 < a0;
    if (v1 != 0) goto L_002C9090;
    v1 = (s32) ((u32) s1 + (u32) a0); goto L_002C9084;
L_002C90D4:;
    return;
}
