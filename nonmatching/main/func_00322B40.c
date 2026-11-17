/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00311550(s32);

s32 func_00322B40(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, t8 = 0;
    s32 hi = 0, lo = 0;

    s3 = a1;
    s2 = a0;
    s1 = s3 & 0xff;
    a0 = s1; v0 = func_00311550(a0);
    v1 = (s32) ((u32) s1 << 4);
    a3 = (s32) 0x590000U;
    a0 = (s32) ((u32) v1 - (u32) s1);
    a2 = (s32) 0x590000U;
    v1 = (s32) ((u32) s1 << 10);
    a3 = (s32) ((u32) a3 + 0x2980U);
    t4 = (s32) ((u32) s2 + (u32) v1);
    a1 = s1;
    v1 = (s32) ((u32) a0 << 3);
    a2 = (s32) ((u32) a2 + 0x1a90U);
    v1 = (s32) ((u32) v1 - (u32) a0);
    t7 = 0;
    v1 = (s32) ((u32) v1 << 8);
    a0 = 139;
    t5 = (s32) ((u32) a3 + (u32) v1);
    a4 = 1;
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); a3 = lo; }
    v1 = (s32) ((u32) a1 << 4);
    a1 = (s32) ((u32) v1 - (u32) a1);
    a7 = (s32) ((u32) a2 + (u32) a3);
    a0 = (s32) ((u32) a1 << 2);
    v1 = (s32) 0x5a0000U;
    a0 = (s32) ((u32) a0 - (u32) a1);
    v1 = (s32) ((u32) v1 + 0x2020U);
    a0 = (s32) ((u32) a0 << 3);
    a1 = 2;
    a6 = (s32) ((u32) v1 + (u32) a0);
    a2 = 6;
    a5 = (s32) ((u32) a6 + 0x1U);
    a3 = 5;
    v1 = 4;
    a0 = 3;
L_00322BEC:;
    s1 = (*(volatile u16 *) (u32) (t5 + 70));
    t8 = 0;
    s2 = t4;
L_00322BF8:;
    t6 = (*(volatile u16 *) (u32) (s2 + 200));
    if (t6 != s1) goto L_00322C20;
    if (s1 == 0) goto L_00322C20;
    t6 = (s32) ((u32) t8 << 5);
    s1 = a4;
    t6 = (s32) ((u32) t4 + (u32) t6);
    s0 = (s32) ((u32) t6 + 0xc8U); goto L_00322C38;
L_00322C20:;
    t8 = (s32) ((u32) t8 + 0x1U);
    t6 = t8 < 32;
    { s32 c_ = t6 != 0; s2 = (s32) ((u32) s2 + 0x20U); if (c_) goto L_00322BF8; }
    s1 = 0;
L_00322C38:;
    if (s1 == 0) goto L_00322D78;
    t6 = (*(volatile s32 *) (u32) (s0 + 20));
    if (t6 == a3) goto L_00322D28;
    if (t6 == a2) goto L_00322CD0;
    if (t6 == a1) goto L_00322C78;
    if (t6 == a0) goto L_00322D78;
    if (t6 == v1) goto L_00322D78;
    goto L_00322D78;
L_00322C78:;
    t6 = 0;
L_00322C80:;
    s1 = (s32) ((u32) a7 + (u32) t6);
    s1 = (*(volatile u8 *) (u32) (s1 + 7));
    if (t7 != s1) goto L_00322CB8;
    s2 = (*(volatile u8 *) (u32) a5);
    s1 = (s32) ((u32) s2 << 2);
    s1 = (s32) ((u32) s1 + (u32) s2);
    s1 = (s32) ((u32) s1 << 3);
    s1 = (s32) ((u32) s1 + (u32) s2);
    s1 = (s32) ((u32) s1 << 1);
    s1 = (s32) ((u32) a6 + (u32) s1);
    s1 = (s32) ((u32) s1 + (u32) t6);
    s1 = (*(volatile u8 *) (u32) (s1 + 28));
    (*(volatile u8 *) (u32) (s0 + 17)) = (u8) s1;
L_00322CB8:;
    t6 = (s32) ((u32) t6 + 0x1U);
    s1 = t6 < 32;
    if (s1 != 0) goto L_00322C80;
    goto L_00322D78;
L_00322CD0:;
    s1 = 0;
L_00322CD8:;
    { s32 c_ = v0 <= 0; t8 = 0; if (c_) goto L_00322D10; }
    s2 = a7;
L_00322CE8:;
    t6 = (*(volatile u8 *) (u32) (s2 + 82));
    if (s1 != t6) goto L_00322D00;
    t6 = (*(volatile u8 *) (u32) (s2 + 85));
    (*(volatile u8 *) (u32) (s0 + 17)) = (u8) t6;
L_00322D00:;
    t8 = (s32) ((u32) t8 + 0x1U);
    t6 = t8 < v0;
    { s32 c_ = t6 != 0; s2 = (s32) ((u32) s2 + 0x8U); if (c_) goto L_00322CE8; }
L_00322D10:;
    s1 = (s32) ((u32) s1 + 0x1U);
    t6 = s1 < 32;
    if (t6 != 0) goto L_00322CD8;
    goto L_00322D78;
L_00322D28:;
    s2 = 0;
L_00322D30:;
    { s32 c_ = v0 <= 0; s1 = 0; if (c_) goto L_00322D68; }
    t8 = a7;
L_00322D40:;
    t6 = (*(volatile u8 *) (u32) (t8 + 83));
    if (s2 != t6) goto L_00322D58;
    t6 = (*(volatile u8 *) (u32) (t8 + 85));
    (*(volatile u8 *) (u32) (s0 + 17)) = (u8) t6;
L_00322D58:;
    s1 = (s32) ((u32) s1 + 0x1U);
    t6 = s1 < v0;
    { s32 c_ = t6 != 0; t8 = (s32) ((u32) t8 + 0x8U); if (c_) goto L_00322D40; }
L_00322D68:;
    s2 = (s32) ((u32) s2 + 0x1U);
    t6 = s2 < 32;
    if (t6 != 0) goto L_00322D30;
L_00322D78:;
    t7 = (s32) ((u32) t7 + 0x1U);
    t6 = t7 < 32;
    { s32 c_ = t6 != 0; t5 = (s32) ((u32) t5 + 0x348U); if (c_) goto L_00322BEC; }
    v0 = 1;
    return v0;
}
