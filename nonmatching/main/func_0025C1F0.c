/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00259A30(s64);

s64 func_0025C1F0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s64 hi = 0, lo = 0;
    s64 frame[16];
    s64 sp = (s32) (u32) frame;

    a0 = (s32) 0x590000U;
    a1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + 0xffffcf88U);
    v1 = (s32) 0x590000U;
    v1 = (*(volatile s16 *) (u32) (v1 + -12416));
    a2 = (*(volatile s16 *) (u32) a0);
    at = v1 < a2;
    { s32 c_ = at == 0; a1 = (s32) ((u32) a1 + 0xffffcf80U); if (c_) goto L_0025C23C; }
    a3 = (*(volatile s16 *) (u32) a1); goto L_0025C244;
L_0025C23C:;
    a3 = a2;
    a2 = (*(volatile s16 *) (u32) a1);
L_0025C244:;
    a0 = (*(volatile s16 *) (u32) (a0 + 2));
    v1 = (*(volatile s16 *) (u32) (a1 + 2));
    at = v1 < a0;
    if (at == 0) { a1 = a0; goto L_0025C260; }
    a1 = v1; goto L_0025C264;
L_0025C260:;
    a0 = v1;
L_0025C264:;
    s4 = (s64) ((u64) a1 << 48);
    s2 = (s64) ((u64) a0 << 48);
    s4 = s4 >> 48;
    s2 = s2 >> 48;
    at = s2 < s4;
    if (at != 0) goto L_0025C2B0;
    s3 = (s64) ((u64) a3 << 48);
    s0 = (s64) ((u64) a2 << 48);
    s3 = s3 >> 48;
    s0 = s0 >> 48;
    s1 = (s32) ((u32) sp + 0x7eU);
L_0025C294:;
    at = s0 < s3;
    { s32 c_ = at == 0; s5 = s3; if (c_) goto L_0025C2B8; }
L_0025C2A0:;
    s4 = (s32) ((u32) s4 + 0x1U);
    at = s2 < s4;
    if (at == 0) goto L_0025C294;
L_0025C2B0:;
    goto L_0025C338;
L_0025C2B8:;
    v1 = (s32) ((u32) sp + 0x7cU);
    { s32 c_ = v1 == 0; v0 = 4; if (c_) goto L_0025C2E0; }
L_0025C2C4:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_0025C2C4;
L_0025C2E0:;
    a0 = (s32) ((u32) sp + 0x7cU);
    (*(volatile u16 *) (u32) (sp + 124)) = (u16) s5;
    (*(volatile u16 *) (u32) s1) = (u16) s4; v0 = func_00259A30(a0);
    if (v0 != 0) goto L_0025C310;
L_0025C2F8:;
    s5 = (s32) ((u32) s5 + 0x1U);
    at = s0 < s5;
    if (at == 0) goto L_0025C2B8;
    goto L_0025C2A0;
L_0025C310:;
    v1 = (s32) 0x590000U;
    v1 = (*(volatile s16 *) (u32) (v1 + -12404));
    a1 = 2;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) s4; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    v1 = (s32) 0x590000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -12396));
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 + (u32) s5);
    (*(volatile u8 *) (u32) v1) = (u8) a1; goto L_0025C2F8;
L_0025C338:;
    return v0;
}
