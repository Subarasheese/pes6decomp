/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00B7F030(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, t8 = 0, t9 = 0;
    s32 hi1 = 0, lo1 = 0;
    s32 hi = 0, lo = 0;

    t8 = 0;
    s0 = 0;
    v1 = (s32) 0x590000U;
    a1 = (s32) 0xca0000U;
    s5 = (*(volatile u8 *) (u32) (v1 + 7628));
    t5 = (s32) 0x590000U;
    a7 = (s32) 0x590000U;
    a4 = (s32) 0x590000U;
    s7 = 255;
    a1 = (s32) ((u32) a1 + 0xffffa710U);
    s3 = 12;
    s2 = 1;
    t5 = (s32) ((u32) t5 + 0x1e00U);
    t4 = 139;
    a7 = (s32) ((u32) a7 + 0x1a90U);
    a4 = (s32) ((u32) a4 + 0x2980U);
L_00B7F094:;
    a0 = s0 & 0xff;
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) t4; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); a2 = lo1; }
    v1 = (s32) ((u32) t5 + (u32) a0);
    a5 = (s32) ((u32) a7 + (u32) a2);
    t9 = (*(volatile u8 *) (u32) (v1 + 250));
    a2 = (s32) ((u32) a0 << 4);
    s4 = a0 ^ s5;
    a3 = (s32) ((u32) a2 - (u32) a0);
    a2 = (s32) ((u32) a3 << 3);
    a2 = (s32) ((u32) a2 - (u32) a3);
    a2 = (s32) ((u32) a2 << 8);
    a3 = (s32) ((u32) a4 + (u32) a2);
    a2 = (*(volatile u8 *) (u32) (v1 + 248));
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) t4; lo = (s32) m_; hi = (s32) (m_ >> 32); a6 = lo; }
    a6 = (s32) ((u32) a7 + (u32) a6);
L_00B7F0D0:;
    v1 = t9 & 0xff;
    at = v1 < a2;
    if (at == 0) goto L_00B7F1D8;
    v1 = (s32) ((u32) v1 << 3); goto L_00B7F1C8;
L_00B7F0E8:;
    at = a0 < 2;
    if (at == 0) goto L_00B7F1BC;
    a0 = (s32) ((u32) a0 << 3);
    t7 = 0;
    s6 = (s32) ((u32) a1 + (u32) a0);
    (*(volatile u8 *) (u32) (s6 + 18)) = (u8) s0;
    a0 = (s32) ((u32) s6 + 0x12U);
    (*(volatile u8 *) (u32) (s6 + 20)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (s6 + 20));
L_00B7F110:;
    s6 = (s32) ((u32) a5 + (u32) t7);
    s6 = (*(volatile u8 *) (u32) (s6 + 7));
    if (v1 != s6) { t7 = (s32) ((u32) t7 + 0x1U); goto L_00B7F128; }
    t6 = t7 & 0xff; goto L_00B7F138;
L_00B7F128:;
    s6 = t7 < 32;
    if (s6 != 0) goto L_00B7F110;
L_00B7F138:;
    t7 = t6 & 0xff;
    at = t7 < 11;
    if (at == 0) { v1 = 0; goto L_00B7F158; }
    v1 = s3;
    if (s4 == 0) v1 = s2;
    v1 = (s32) ((u32) t7 + (u32) v1);
    v1 = v1 & 0xff;
L_00B7F158:;
    t7 = (*(volatile u8 *) (u32) (s1 + 83));
    (*(volatile u8 *) (u32) (a0 + 1)) = (u8) v1;
    v1 = (s32) ((u32) t8 + 0x1U);
    t8 = v1 & 0xff;
    s1 = (*(volatile u8 *) (u32) (a0 + 2));
    v1 = (s32) ((u32) s1 << 4);
    s1 = (s32) ((u32) v1 - (u32) s1);
    v1 = (s32) ((u32) s1 << 3);
    v1 = (s32) ((u32) v1 - (u32) s1);
    v1 = (s32) ((u32) v1 << 3);
    v1 = (s32) ((u32) a3 + (u32) v1);
    v1 = (*(volatile u8 *) (u32) (v1 + 16));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) (a0 + 3)) = (u8) v1;
    (*(volatile u8 *) (u32) (a0 + 4)) = (u8) t7;
    t7 = (*(volatile u8 *) (u32) (a0 + 4));
    v1 = (s32) ((u32) t7 << 4);
    t7 = (s32) ((u32) v1 - (u32) t7);
    v1 = (s32) ((u32) t7 << 3);
    v1 = (s32) ((u32) v1 - (u32) t7);
    v1 = (s32) ((u32) v1 << 3);
    v1 = (s32) ((u32) a3 + (u32) v1);
    v1 = (*(volatile u8 *) (u32) (v1 + 16));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) (a0 + 5)) = (u8) v1;
L_00B7F1BC:;
    v1 = (s32) ((u32) t9 + 0x1U);
    t9 = v1 & 0xff; goto L_00B7F0D0;
L_00B7F1C8:;
    s1 = (s32) ((u32) a6 + (u32) v1);
    v1 = (*(volatile u8 *) (u32) (s1 + 82));
    if (v1 != s7) { a0 = t8 & 0xff; goto L_00B7F0E8; }
L_00B7F1D8:;
    v1 = (s32) ((u32) s0 + 0x1U);
    s0 = v1 & 0xff;
    v1 = s0 < 2;
    if (v1 != 0) goto L_00B7F094;
    return;
}
