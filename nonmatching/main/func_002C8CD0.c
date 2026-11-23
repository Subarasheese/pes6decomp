/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002C96C0(s32, s32, s32);

void func_002C8CD0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    s64 frame[22];
    s32 sp = (s32) (u32) frame;

    v1 = a1;
    s5 = a0;
    s4 = a2;
    { s32 c_ = v1 == 0; (*(volatile u32 *) (u32) (sp + 172)) = (u32) a1; if (c_) goto L_002C8FA0; }
    if (s5 == 0) goto L_002C8FA0;
    if (s4 == 0) goto L_002C8FA0;
    s2 = (*(volatile u8 *) (u32) v1);
    at = s2 < 11;
    { s32 c_ = at == 0; s1 = (s32) ((u32) s5 + 0x14U); if (c_) goto L_002C8FA0; }
    s3 = (*(volatile u8 *) (u32) (s4 + 13));
    if (s3 == 0) goto L_002C8FA0;
    v1 = 1;
    if (s3 == v1) goto L_002C8F14;
    v1 = 2;
    if (s3 == v1) goto L_002C8EFC;
    v1 = 3;
    if (s3 == v1) goto L_002C8EDC;
    v1 = 4;
    if (s3 == v1) goto L_002C8EB4;
    v1 = 5;
    if (s3 == v1) goto L_002C8D80;
    v1 = 0 < s3; goto L_002C8F24;
L_002C8D80:;
    at = 0 < s3;
    { s32 c_ = at == 0; s6 = 0; if (c_) goto L_002C8F20; }
    v1 = s3 & 0xff;
    at = (u64) v1 < (u64) (s64) 9;
    { s32 c_ = at != 0; s0 = (s32) ((u32) s3 + 0xfffffff8U); if (c_) goto L_002C8E60; }
    t6 = (s32) 0x3b0000U;
    t7 = (s32) ((u32) s1 + (u32) s2);
    t6 = (s32) ((u32) t6 + 0xffffc7e0U);
L_002C8DA8:;
    a1 = s6 & 0xff;
    v1 = (s32) ((u32) s6 + 0x1U);
    v1 = v1 & 0xff;
    a0 = (s32) ((u32) a1 << 1);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a5 = (s32) ((u32) t7 + (u32) v1);
    t5 = (s32) ((u32) t6 + (u32) a0);
    v1 = (s32) ((u32) s6 + 0x2U);
    v1 = v1 & 0xff;
    t4 = (*(volatile u8 *) (u32) t5);
    a2 = (s32) ((u32) t7 + (u32) v1);
    a6 = (*(volatile u8 *) (u32) (t5 + 3));
    a7 = (s32) ((u32) t7 + (u32) a1);
    v1 = (s32) ((u32) s6 + 0x3U);
    a0 = v1 & 0xff;
    a4 = (*(volatile u8 *) (u32) (t5 + 6));
    a1 = (*(volatile u8 *) (u32) (t5 + 9));
    s7 = (s32) ((u32) s6 + 0x4U);
    v1 = (*(volatile u8 *) (u32) (t5 + 12));
    a0 = (s32) ((u32) t7 + (u32) a0);
    (*(volatile u8 *) (u32) a7) = (u8) t4;
    (*(volatile u8 *) (u32) a5) = (u8) a6;
    a7 = s7 & 0xff;
    a5 = (s32) ((u32) t7 + (u32) a7);
    a6 = (*(volatile u8 *) (u32) (t5 + 18));
    (*(volatile u8 *) (u32) a2) = (u8) a4;
    (*(volatile u8 *) (u32) a0) = (u8) a1;
    a2 = (s32) ((u32) s6 + 0x5U);
    a0 = a2 & 0xff;
    (*(volatile u8 *) (u32) a5) = (u8) v1;
    v1 = (s32) ((u32) t7 + (u32) a0);
    a1 = (s32) ((u32) s6 + 0x6U);
    a0 = (*(volatile u8 *) (u32) (t5 + 15));
    a1 = a1 & 0xff;
    a4 = (*(volatile u8 *) (u32) (t5 + 21));
    a5 = (s32) ((u32) t7 + (u32) a1);
    a2 = (s32) ((u32) s6 + 0x7U);
    a1 = (s32) ((u32) s6 + 0x8U);
    a2 = a2 & 0xff;
    s6 = a1 & 0xff;
    a2 = (s32) ((u32) t7 + (u32) a2);
    a1 = s6 < s0;
    (*(volatile u8 *) (u32) v1) = (u8) a0;
    (*(volatile u8 *) (u32) a5) = (u8) a6;
    { s32 c_ = a1 != 0; (*(volatile u8 *) (u32) a2) = (u8) a4; if (c_) goto L_002C8DA8; }
L_002C8E60:;
    a6 = s6 & 0xff;
    at = a6 < s3;
    if (at == 0) goto L_002C8F20;
    a2 = (s32) 0x3b0000U;
    a5 = (s32) ((u32) s1 + (u32) s2);
    a2 = (s32) ((u32) a2 + 0xffffc7e0U);
L_002C8E7C:;
    a4 = s6 & 0xff;
    v1 = (s32) ((u32) s6 + 0x1U);
    a1 = (s32) ((u32) a4 << 1);
    s6 = v1 & 0xff;
    a1 = (s32) ((u32) a1 + (u32) a4);
    a0 = (s32) ((u32) a5 + (u32) a6);
    v1 = (s32) ((u32) a2 + (u32) a1);
    a6 = s6;
    a1 = (*(volatile u8 *) (u32) v1);
    v1 = s6 < s3;
    { s32 c_ = v1 != 0; (*(volatile u8 *) (u32) a0) = (u8) a1; if (c_) goto L_002C8E7C; }
    goto L_002C8F20;
L_002C8EB4:;
    a0 = (s32) ((u32) s1 + (u32) s2);
    v1 = 20;
    (*(volatile u8 *) (u32) a0) = (u8) v1;
    v1 = 21;
    (*(volatile u8 *) (u32) (a0 + 1)) = (u8) v1;
    v1 = 17;
    (*(volatile u8 *) (u32) (a0 + 2)) = (u8) v1;
    v1 = 18;
    (*(volatile u8 *) (u32) (a0 + 3)) = (u8) v1; goto L_002C8F20;
L_002C8EDC:;
    a0 = (s32) ((u32) s1 + (u32) s2);
    v1 = 21;
    (*(volatile u8 *) (u32) a0) = (u8) v1;
    v1 = 19;
    (*(volatile u8 *) (u32) (a0 + 1)) = (u8) v1;
    v1 = 17;
    (*(volatile u8 *) (u32) (a0 + 2)) = (u8) v1; goto L_002C8F20;
L_002C8EFC:;
    a0 = (s32) ((u32) s1 + (u32) s2);
    v1 = 21;
    (*(volatile u8 *) (u32) a0) = (u8) v1;
    v1 = 17;
    (*(volatile u8 *) (u32) (a0 + 1)) = (u8) v1; goto L_002C8F20;
L_002C8F14:;
    v1 = (s32) ((u32) s1 + (u32) s2);
    a0 = 19;
    (*(volatile u8 *) (u32) v1) = (u8) a0;
L_002C8F20:;
    v1 = 0 < s3;
L_002C8F24:;
    { s32 c_ = v1 != 0; s1 = 0; if (c_) goto L_002C8F3C; }
    v1 = (*(volatile s32 *) (u32) (sp + 172));
L_002C8F30:;
    a0 = (s32) ((u32) s2 + (u32) s3);
    (*(volatile u8 *) (u32) v1) = (u8) a0; goto L_002C8FA0;
L_002C8F3C:;
    v0 = (s32) ((u32) s2 << 1);
    s7 = a3 & 0xff;
    s6 = (s32) ((u32) s5 + (u32) s2);
    fp = (s32) ((u32) s5 + (u32) v0);
L_002C8F4C:;
    s0 = s1 & 0xff;
    v1 = 1;
    a0 = (s32) ((u32) s6 + (u32) s0);
    v0 = (s32) ((u32) s2 + (u32) s0);
    (*(volatile u8 *) (u32) (a0 + 31)) = (u8) 0;
    a1 = v0 & 0xff;
    (*(volatile u8 *) (u32) (a0 + 42)) = (u8) v1;
    a2 = s4;
    a0 = s5; func_002C96C0(a0, a1, a2);
    a0 = (s32) ((u32) s0 << 1);
    v1 = (s32) ((u32) s1 + 0x1U);
    a1 = (s32) ((u32) fp + (u32) a0);
    s1 = v1 & 0xff;
    a0 = (*(volatile u8 *) (u32) (a1 + -1));
    v1 = s1 < s3;
    a0 = (s32) ((u32) a0 + (u32) s7);
    { s32 c_ = v1 != 0; (*(volatile u8 *) (u32) (a1 + -1)) = (u8) a0; if (c_) goto L_002C8F4C; }
    v1 = (*(volatile s32 *) (u32) (sp + 172)); goto L_002C8F30;
L_002C8FA0:;
    return;
}
