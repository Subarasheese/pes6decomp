/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002C96C0(s32, s32, s32);

void func_002C89A0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    s64 frame[22];
    s32 sp = (s32) (u32) frame;

    v1 = a1;
    s6 = a2;
    s5 = a0;
    { s32 c_ = v1 == 0; (*(volatile u32 *) (u32) (sp + 172)) = (u32) a1; if (c_) goto L_002C8B64; }
    if (s5 == 0) goto L_002C8B64;
    if (s6 == 0) goto L_002C8B64;
    s7 = (*(volatile u8 *) (u32) v1);
    at = s7 < 11;
    { s32 c_ = at == 0; a0 = (s32) ((u32) s5 + 0x14U); if (c_) goto L_002C8B64; }
    s0 = (*(volatile u8 *) (u32) (s6 + 15));
    if (s0 == 0) goto L_002C8B64;
    v1 = 1;
    if (s0 == v1) goto L_002C8AE0;
    v1 = 2;
    if (s0 == v1) goto L_002C8AC8;
    v1 = 3;
    if (s0 == v1) goto L_002C8AA8;
    v1 = 4;
    if (s0 == v1) goto L_002C8A80;
    v1 = 5;
    if (s0 == v1) goto L_002C8A50;
    v1 = 0 < s0; goto L_002C8AF0;
L_002C8A50:;
    a0 = (s32) ((u32) a0 + (u32) s7);
    v1 = 27;
    (*(volatile u8 *) (u32) a0) = (u8) v1;
    v1 = 28;
    (*(volatile u8 *) (u32) (a0 + 1)) = (u8) v1;
    v1 = 26;
    (*(volatile u8 *) (u32) (a0 + 2)) = (u8) v1;
    v1 = 24;
    (*(volatile u8 *) (u32) (a0 + 3)) = (u8) v1;
    v1 = 25;
    (*(volatile u8 *) (u32) (a0 + 4)) = (u8) v1; goto L_002C8AEC;
L_002C8A80:;
    a0 = (s32) ((u32) a0 + (u32) s7);
    v1 = 27;
    (*(volatile u8 *) (u32) a0) = (u8) v1;
    v1 = 28;
    (*(volatile u8 *) (u32) (a0 + 1)) = (u8) v1;
    v1 = 24;
    (*(volatile u8 *) (u32) (a0 + 2)) = (u8) v1;
    v1 = 25;
    (*(volatile u8 *) (u32) (a0 + 3)) = (u8) v1; goto L_002C8AEC;
L_002C8AA8:;
    a0 = (s32) ((u32) a0 + (u32) s7);
    v1 = 28;
    (*(volatile u8 *) (u32) a0) = (u8) v1;
    v1 = 26;
    (*(volatile u8 *) (u32) (a0 + 1)) = (u8) v1;
    v1 = 24;
    (*(volatile u8 *) (u32) (a0 + 2)) = (u8) v1; goto L_002C8AEC;
L_002C8AC8:;
    a0 = (s32) ((u32) a0 + (u32) s7);
    v1 = 28;
    (*(volatile u8 *) (u32) a0) = (u8) v1;
    v1 = 24;
    (*(volatile u8 *) (u32) (a0 + 1)) = (u8) v1; goto L_002C8AEC;
L_002C8AE0:;
    v1 = (s32) ((u32) a0 + (u32) s7);
    a0 = 26;
    (*(volatile u8 *) (u32) v1) = (u8) a0;
L_002C8AEC:;
    v1 = 0 < s0;
L_002C8AF0:;
    { s32 c_ = v1 != 0; s4 = 0; if (c_) goto L_002C8B08; }
    v1 = (*(volatile s32 *) (u32) (sp + 172));
L_002C8AFC:;
    a0 = (s32) ((u32) s7 + (u32) s0);
    (*(volatile u8 *) (u32) v1) = (u8) a0; goto L_002C8B64;
L_002C8B08:;
    v0 = (s32) ((u32) s7 << 1);
    fp = a3 & 0xff;
    s3 = (s32) ((u32) s5 + (u32) s7);
    s2 = s7;
    s1 = (s32) ((u32) s5 + (u32) v0);
L_002C8B1C:;
    (*(volatile u8 *) (u32) (s3 + 31)) = (u8) 0;
    v0 = 2;
    (*(volatile u8 *) (u32) (s3 + 42)) = (u8) v0;
    a1 = s2 & 0xff;
    a0 = s5;
    a2 = s6; func_002C96C0(a0, a1, a2);
    a0 = (*(volatile u8 *) (u32) (s1 + -1));
    s4 = (s32) ((u32) s4 + 0x1U);
    v1 = s4 < s0;
    s3 = (s32) ((u32) s3 + 0x1U);
    s2 = (s32) ((u32) s2 + 0x1U);
    a0 = (s32) ((u32) a0 + (u32) fp);
    (*(volatile u8 *) (u32) (s1 + -1)) = (u8) a0;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x2U); if (c_) goto L_002C8B1C; }
    v1 = (*(volatile s32 *) (u32) (sp + 172)); goto L_002C8AFC;
L_002C8B64:;
    return;
}
