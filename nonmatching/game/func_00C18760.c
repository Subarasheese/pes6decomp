/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00C13AB0(s32, s32, s32, s32);
s32 func_00C18DC0(s32);

void func_00C18760(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    s32 gp = 0x3ef370;
    s32 hi = 0, lo = 0;
    s64 frame[22];
    s32 sp = (s32) (u32) frame;

    s4 = -1;
    s2 = (s32) 0xcd0000U;
    s2 = (s32) ((u32) s2 + 0xffffaf50U);
    s3 = (*(volatile u8 *) (u32) (s2 + 8));
    at = (u64) s3 < (u64) (s64) 124;
    { s32 c_ = at == 0; a2 = s3; if (c_) goto L_00C187D8; }
    v1 = (s32) 0xcb0000U;
    a0 = a0 & 0xff;
    v1 = (s32) ((u32) v1 + 0x3640U);
    a1 = (s32) ((u32) v1 + (u32) s3);
L_00C187B8:;
    v1 = (*(volatile u8 *) (u32) a1);
    if (a0 != v1) { a2 = (s32) ((u32) a2 + 0x1U); goto L_00C187CC; }
    s4 = (s32) ((u32) a2 + 0x1U); goto L_00C187D8;
L_00C187CC:;
    v1 = (u64) a2 < (u64) (s64) 124;
    { s32 c_ = v1 != 0; a1 = (s32) ((u32) a1 + 0x1U); if (c_) goto L_00C187B8; }
L_00C187D8:;
    if (s4 < 0) goto L_00C1896C;
    at = s3 < s4;
    if (at == 0) goto L_00C18948;
    s1 = (s32) 0xcd0000U;
    at = s3 < s4;
    { s32 c_ = at == 0; s1 = (s32) ((u32) s1 + 0xffffaf50U); if (c_) goto L_00C18948; }
    v0 = (s32) 0xcb0000U;
    s7 = (s32) ((u32) sp + 0xadU);
    v0 = (s32) ((u32) v0 + 0x3640U);
    fp = (s32) ((u32) sp + 0xaeU);
    s5 = (s32) ((u32) v0 + (u32) s3);
L_00C18810:;
    s0 = (*(volatile u8 *) (u32) s5);
    s6 = 1;
    a0 = s0;
    (*(volatile u8 *) (u32) (gp + -19344)) = (u8) s0; v0 = func_00C18DC0(a0);
    (*(volatile u8 *) (u32) (gp + -19343)) = (u8) v0;
    a0 = (s32) 0x88880000U;
    v0 = s0 & 0xff;
    a0 = a0 | 0x8889;
    v1 = v0 & 0x7f;
    a3 = (s32) v0 >> 7;
    v0 = 15;
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a2 = (s32) ((u32) v1 >> 31);
    a1 = hi;
    a0 = (u64) 0 < (u64) a3;
    a1 = (s32) ((u32) a1 + (u32) v1);
    a1 = (s32) a1 >> 3;
    a1 = (s32) ((u32) a1 + (u32) a2);
    a0 = (s32) ((u32) a1 - (u32) a0);
    { s32 c_ = a3 != 0; (*(volatile u8 *) (u32) (gp + -19342)) = (u8) a0; if (c_) goto L_00C188E0; }
    a0 = 120;
    if (v1 == a0) goto L_00C188D8;
    a0 = 105;
    if (v1 == a0) goto L_00C188D8;
    a0 = 90;
    if (v1 == a0) goto L_00C188D8;
    a0 = 45;
    if (v1 == a0) goto L_00C188D8;
    a0 = 75;
    if (v1 == a0) goto L_00C188D0;
    a0 = 60;
    if (v1 == a0) goto L_00C188D0;
    a0 = 30;
    if (v1 == a0) goto L_00C188D0;
    if (v1 == v0) goto L_00C188D0;
    goto L_00C188E0;
L_00C188D0:;
    s6 = 2; goto L_00C188E0;
L_00C188D8:;
    s6 = 3;
L_00C188E0:;
    a4 = (*(volatile u8 *) (u32) (gp + -19344));
    a3 = (*(volatile u8 *) (u32) (gp + -19343));
    a1 = s6;
    v1 = (*(volatile u8 *) (u32) (gp + -19342));
    a0 = (s32) ((u32) s1 + 0x14U);
    v0 = (*(volatile u8 *) (u32) (gp + -19341));
    a2 = (s32) ((u32) gp + 0xffffb470U);
    (*(volatile u8 *) (u32) (s1 + 4)) = (u8) a4;
    (*(volatile u8 *) (u32) (s1 + 5)) = (u8) a3;
    (*(volatile u8 *) (u32) (s1 + 6)) = (u8) v1;
    (*(volatile u8 *) (u32) (s1 + 7)) = (u8) v0; func_00C13AB0(a0, a1, a2, a3);
    v1 = (*(volatile u8 *) (u32) (gp + -19342));
    s3 = (s32) ((u32) s3 + 0x1U);
    a3 = (*(volatile u8 *) (u32) (gp + -19344));
    a0 = s3 < s4;
    a2 = (*(volatile u8 *) (u32) (gp + -19343));
    s5 = (s32) ((u32) s5 + 0x1U);
    a1 = (*(volatile u8 *) (u32) (gp + -19341));
    (*(volatile u8 *) (u32) fp) = (u8) v1;
    v1 = (s32) ((u32) sp + 0xafU);
    (*(volatile u8 *) (u32) (sp + 172)) = (u8) a3;
    (*(volatile u8 *) (u32) s7) = (u8) a2;
    { s32 c_ = a0 != 0; (*(volatile u8 *) (u32) v1) = (u8) a1; if (c_) goto L_00C18810; }
L_00C18948:;
    a2 = (*(volatile u8 *) (u32) (sp + 172));
    a1 = (*(volatile u8 *) (u32) (sp + 173));
    a0 = (*(volatile u8 *) (u32) (sp + 174));
    v1 = (*(volatile u8 *) (u32) (sp + 175));
    (*(volatile u8 *) (u32) (s2 + 8)) = (u8) s4;
    (*(volatile u8 *) (u32) (s2 + 4)) = (u8) a2;
    (*(volatile u8 *) (u32) (s2 + 5)) = (u8) a1;
    (*(volatile u8 *) (u32) (s2 + 6)) = (u8) a0;
    (*(volatile u8 *) (u32) (s2 + 7)) = (u8) v1;
L_00C1896C:;
    return;
}
