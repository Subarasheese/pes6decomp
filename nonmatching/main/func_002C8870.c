/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002C96C0(s32, s32, s32);

void func_002C8870(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;

    s7 = a1;
    s5 = a0;
    s4 = a2;
    if (s7 == 0) goto L_002C8970;
    if (s5 == 0) goto L_002C8970;
    if (s4 == 0) goto L_002C8970;
    s6 = (*(volatile u8 *) (u32) s7);
    at = s6 < 11;
    { s32 c_ = at == 0; a0 = (s32) ((u32) s5 + 0x14U); if (c_) goto L_002C8970; }
    s0 = (*(volatile u8 *) (u32) (s4 + 16));
    if (s0 == 0) goto L_002C8970;
    v1 = 1;
    if (s0 == v1) goto L_002C890C;
    v1 = 2;
    if (s0 == v1) goto L_002C88F4;
    v1 = 0 < s0; goto L_002C891C;
L_002C88F4:;
    a0 = (s32) ((u32) a0 + (u32) s6);
    v1 = 30;
    (*(volatile u8 *) (u32) a0) = (u8) v1;
    v1 = 29;
    (*(volatile u8 *) (u32) (a0 + 1)) = (u8) v1; goto L_002C8918;
L_002C890C:;
    v1 = (s32) ((u32) a0 + (u32) s6);
    a0 = (*(volatile u8 *) (u32) (s4 + 4));
    (*(volatile u8 *) (u32) v1) = (u8) a0;
L_002C8918:;
    v1 = 0 < s0;
L_002C891C:;
    { s32 c_ = v1 != 0; s3 = 0; if (c_) goto L_002C8930; }
    v1 = (s32) ((u32) s6 + (u32) s0);
L_002C8928:;
    (*(volatile u8 *) (u32) s7) = (u8) v1; goto L_002C8970;
L_002C8930:;
    s2 = (s32) ((u32) s5 + (u32) s6);
    s1 = s6;
L_002C8938:;
    (*(volatile u8 *) (u32) (s2 + 31)) = (u8) 0;
    v0 = 2;
    (*(volatile u8 *) (u32) (s2 + 42)) = (u8) v0;
    a1 = s1 & 0xff;
    a0 = s5;
    a2 = s4; func_002C96C0(a0, a1, a2);
    s3 = (s32) ((u32) s3 + 0x1U);
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = s3 < s0;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x1U); if (c_) goto L_002C8938; }
    v1 = (s32) ((u32) s6 + (u32) s0); goto L_002C8928;
L_002C8970:;
    return;
}
