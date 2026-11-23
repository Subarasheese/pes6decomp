/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002C96C0(s32, s32, s32);

void func_002C9100(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;

    s6 = a1;
    s5 = a0;
    s4 = a2;
    if (s6 == 0) goto L_002C929C;
    if (s5 == 0) goto L_002C929C;
    if (s4 == 0) goto L_002C929C;
    s1 = (*(volatile u8 *) (u32) s6);
    at = s1 < 11;
    { s32 c_ = at == 0; a0 = (s32) ((u32) s5 + 0x14U); if (c_) goto L_002C929C; }
    s2 = (*(volatile u8 *) (u32) (s4 + 11));
    if (s2 == 0) goto L_002C929C;
    v1 = 1;
    if (s2 == v1) goto L_002C9234;
    v1 = 2;
    if (s2 == v1) goto L_002C921C;
    v1 = 3;
    if (s2 == v1) goto L_002C91FC;
    v1 = 4;
    if (s2 == v1) goto L_002C91D4;
    v1 = 5;
    if (s2 == v1) goto L_002C91A4;
    v1 = 0 < s2; goto L_002C9244;
L_002C91A4:;
    a0 = (s32) ((u32) a0 + (u32) s1);
    v1 = 13;
    (*(volatile u8 *) (u32) a0) = (u8) v1;
    v1 = 14;
    (*(volatile u8 *) (u32) (a0 + 1)) = (u8) v1;
    v1 = 12;
    (*(volatile u8 *) (u32) (a0 + 2)) = (u8) v1;
    v1 = 10;
    (*(volatile u8 *) (u32) (a0 + 3)) = (u8) v1;
    v1 = 11;
    (*(volatile u8 *) (u32) (a0 + 4)) = (u8) v1; goto L_002C9240;
L_002C91D4:;
    a0 = (s32) ((u32) a0 + (u32) s1);
    v1 = 13;
    (*(volatile u8 *) (u32) a0) = (u8) v1;
    v1 = 14;
    (*(volatile u8 *) (u32) (a0 + 1)) = (u8) v1;
    v1 = 10;
    (*(volatile u8 *) (u32) (a0 + 2)) = (u8) v1;
    v1 = 11;
    (*(volatile u8 *) (u32) (a0 + 3)) = (u8) v1; goto L_002C9240;
L_002C91FC:;
    a0 = (s32) ((u32) a0 + (u32) s1);
    v1 = 14;
    (*(volatile u8 *) (u32) a0) = (u8) v1;
    v1 = 12;
    (*(volatile u8 *) (u32) (a0 + 1)) = (u8) v1;
    v1 = 10;
    (*(volatile u8 *) (u32) (a0 + 2)) = (u8) v1; goto L_002C9240;
L_002C921C:;
    a0 = (s32) ((u32) a0 + (u32) s1);
    v1 = 14;
    (*(volatile u8 *) (u32) a0) = (u8) v1;
    v1 = 10;
    (*(volatile u8 *) (u32) (a0 + 1)) = (u8) v1; goto L_002C9240;
L_002C9234:;
    v1 = (s32) ((u32) a0 + (u32) s1);
    a0 = 12;
    (*(volatile u8 *) (u32) v1) = (u8) a0;
L_002C9240:;
    v1 = 0 < s2;
L_002C9244:;
    { s32 c_ = v1 != 0; s3 = 0; if (c_) goto L_002C9258; }
    v1 = (s32) ((u32) s1 + (u32) s2);
L_002C9250:;
    (*(volatile u8 *) (u32) s6) = (u8) v1; goto L_002C929C;
L_002C9258:;
    s0 = (s32) ((u32) s5 + (u32) s1);
L_002C925C:;
    v0 = s3 & 0xff;
    a0 = s5;
    v1 = (s32) ((u32) s0 + (u32) v0);
    a2 = s4;
    v0 = (s32) ((u32) s1 + (u32) v0);
    (*(volatile u8 *) (u32) (v1 + 31)) = (u8) 0;
    a1 = v0 & 0xff;
    (*(volatile u8 *) (u32) (v1 + 42)) = (u8) 0; func_002C96C0(a0, a1, a2);
    v1 = (s32) ((u32) s3 + 0x1U);
    s3 = v1 & 0xff;
    v1 = s3 < s2;
    if (v1 != 0) goto L_002C925C;
    v1 = (s32) ((u32) s1 + (u32) s2); goto L_002C9250;
L_002C929C:;
    return;
}
