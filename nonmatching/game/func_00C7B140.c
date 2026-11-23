/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EF900(s64, s64);
s64 func_0020CA10(s64, s64);
s64 func_002D5410(void);
s64 func_002F9370(s64);
void func_002FA170(s64, s64, s64, s64, s64, s64);

void func_00C7B140(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 hi = 0, lo = 0;

    s3 = a0;
    s2 = a1;
    s1 = a2;
    s0 = a3; v0 = func_002D5410();
    v1 = 14;
    if (v0 == v1) { v0 = 1; goto L_00C7B1C8; }
    if (v0 == 0) goto L_00C7B18C;
    goto L_00C7B198;
L_00C7B18C:;
    v0 = 1;
    goto L_00C7B1C8;
L_00C7B198:;
    v0 = (s32) 0xcd0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -16616));
    v0 = (s64) ((u64) v0 << 61);
    v0 = (s64) ((u64) v0 >> 63);
    if (v0 == 0) goto L_00C7B1B8;
    v0 = 1; goto L_00C7B1C8;
L_00C7B1B8:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7628));
    v0 = v0 & 0x1;
    v0 = v0 ^ 0x1;
L_00C7B1C8:;
    if (v0 == 0) goto L_00C7B1F4;
    v0 = (s32) 0xcb0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 13056));
    a0 = (*(volatile s16 *) (u32) (v0 + 764));
    at = a0 < 100;
    if (at != 0) { v0 = (s32) 0x66660000U; goto L_00C7B214; }
    a0 = 99;
    goto L_00C7B210;
L_00C7B1F4:;
    v0 = (s32) 0xcb0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 13056));
    a0 = (*(volatile s16 *) (u32) (v0 + 8));
    at = a0 < 100;
    if (at != 0) goto L_00C7B210;
    a0 = 99;
L_00C7B210:;
    v0 = (s32) 0x66660000U;
L_00C7B214:;
    v1 = (s32) ((u32) a0 >> 31);
    v0 = v0 | 0x6667;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v0 = hi;
    v0 = (s32) v0 >> 2;
    v0 = (s32) ((u32) v0 + (u32) v1);
    if (v0 != 0) { v0 = 10; goto L_00C7B23C; }
    s1 = (s32) ((u32) s1 + 0x2U);
    v0 = 10;
L_00C7B23C:;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v0); hi = (s32) ((s32) a0 % (s32) v0); lo = q_; }
    a0 = hi;
    at = a0 < 10;
    if (at != 0) goto L_00C7B254;
    a0 = 9;
L_00C7B254:;
    a1 = 1; v0 = func_0020CA10(a0, a1);
    s4 = v0;
    v0 = (s32) 0xcd0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -16672)); v0 = func_002F9370(a0);
    a1 = s4;
    a2 = v0;
    a3 = s1;
    a4 = s0;
    a0 = s3;
    a5 = 1; func_002FA170(a0, a1, a2, a3, a4, a5);
    a0 = s3;
    a1 = 1; func_001EF900(a0, a1);
    v1 = (s32) 0xcd0000U;
    a0 = 1;
    v1 = (s32) ((u32) v1 + 0xffffbef0U);
    v1 = (s32) ((u32) v1 + (u32) s2);
    (*(volatile u8 *) (u32) v1) = (u8) a0;
    return;
}
