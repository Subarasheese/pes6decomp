/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002C96C0(s32, s32, s32);

void func_002C84D0(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;

    s7 = a1;
    s5 = a0;
    s4 = a2;
    if (s7 == 0) goto L_002C866C;
    if (s5 == 0) goto L_002C866C;
    if (s4 == 0) goto L_002C866C;
    s6 = (*(volatile u8 *) (u32) s7);
    at = s6 < 11;
    { s32 c_ = at == 0; a0 = (s32) ((u32) s5 + 0x14U); if (c_) goto L_002C866C; }
    s0 = (*(volatile u8 *) (u32) (s4 + 18));
    if (s0 == 0) goto L_002C866C;
    v1 = 1;
    if (s0 == v1) goto L_002C8608;
    v1 = 2;
    if (s0 == v1) goto L_002C85F0;
    v1 = 3;
    if (s0 == v1) goto L_002C85D0;
    v1 = 4;
    if (s0 == v1) goto L_002C85A8;
    v1 = 5;
    if (s0 == v1) goto L_002C8578;
    v1 = 0 < s0; goto L_002C8618;
L_002C8578:;
    a0 = (s32) ((u32) a0 + (u32) s6);
    v1 = 39;
    (*(volatile u8 *) (u32) a0) = (u8) v1;
    v1 = 40;
    (*(volatile u8 *) (u32) (a0 + 1)) = (u8) v1;
    v1 = 38;
    (*(volatile u8 *) (u32) (a0 + 2)) = (u8) v1;
    v1 = 36;
    (*(volatile u8 *) (u32) (a0 + 3)) = (u8) v1;
    v1 = 37;
    (*(volatile u8 *) (u32) (a0 + 4)) = (u8) v1; goto L_002C8614;
L_002C85A8:;
    a0 = (s32) ((u32) a0 + (u32) s6);
    v1 = 39;
    (*(volatile u8 *) (u32) a0) = (u8) v1;
    v1 = 40;
    (*(volatile u8 *) (u32) (a0 + 1)) = (u8) v1;
    v1 = 36;
    (*(volatile u8 *) (u32) (a0 + 2)) = (u8) v1;
    v1 = 37;
    (*(volatile u8 *) (u32) (a0 + 3)) = (u8) v1; goto L_002C8614;
L_002C85D0:;
    a0 = (s32) ((u32) a0 + (u32) s6);
    v1 = 40;
    (*(volatile u8 *) (u32) a0) = (u8) v1;
    v1 = 38;
    (*(volatile u8 *) (u32) (a0 + 1)) = (u8) v1;
    v1 = 36;
    (*(volatile u8 *) (u32) (a0 + 2)) = (u8) v1; goto L_002C8614;
L_002C85F0:;
    a0 = (s32) ((u32) a0 + (u32) s6);
    v1 = 40;
    (*(volatile u8 *) (u32) a0) = (u8) v1;
    v1 = 36;
    (*(volatile u8 *) (u32) (a0 + 1)) = (u8) v1; goto L_002C8614;
L_002C8608:;
    v1 = (s32) ((u32) a0 + (u32) s6);
    a0 = (*(volatile u8 *) (u32) (s4 + 5));
    (*(volatile u8 *) (u32) v1) = (u8) a0;
L_002C8614:;
    v1 = 0 < s0;
L_002C8618:;
    { s32 c_ = v1 != 0; s3 = 0; if (c_) goto L_002C862C; }
    v1 = (s32) ((u32) s6 + (u32) s0);
L_002C8624:;
    (*(volatile u8 *) (u32) s7) = (u8) v1; goto L_002C866C;
L_002C862C:;
    s2 = (s32) ((u32) s5 + (u32) s6);
    s1 = s6;
L_002C8634:;
    (*(volatile u8 *) (u32) (s2 + 31)) = (u8) 0;
    v0 = 2;
    (*(volatile u8 *) (u32) (s2 + 42)) = (u8) v0;
    a1 = s1 & 0xff;
    a0 = s5;
    a2 = s4; func_002C96C0(a0, a1, a2);
    s3 = (s32) ((u32) s3 + 0x1U);
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = s3 < s0;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x1U); if (c_) goto L_002C8634; }
    v1 = (s32) ((u32) s6 + (u32) s0); goto L_002C8624;
L_002C866C:;
    return;
}
