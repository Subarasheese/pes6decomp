/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00259A30(s64);

void func_0025C360(s64 a0, s64 a1, s64 a2) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    s64 hi = 0, lo = 0;
    s64 frame[22];
    s64 sp = (s32) (u32) frame;

    a0 = (s32) 0x590000U;
    a1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + 0xffffcf88U);
    v1 = (s32) 0x590000U;
    v1 = (*(volatile s16 *) (u32) (v1 + -12416));
    s3 = (*(volatile s16 *) (u32) a0);
    at = v1 < s3;
    { s32 c_ = at == 0; a1 = (s32) ((u32) a1 + 0xffffcf80U); if (c_) goto L_0025C3B8; }
    a2 = (*(volatile s16 *) (u32) a1); goto L_0025C3C0;
L_0025C3B8:;
    a2 = s3;
    s3 = (*(volatile s16 *) (u32) a1);
L_0025C3C0:;
    s4 = (*(volatile s16 *) (u32) (a0 + 2));
    v1 = (*(volatile s16 *) (u32) (a1 + 2));
    at = v1 < s4;
    if (at == 0) { s7 = s4; goto L_0025C3DC; }
    s7 = v1; goto L_0025C3E0;
L_0025C3DC:;
    s4 = v1;
L_0025C3E0:;
    s2 = (s64) ((u64) a2 << 48);
    s6 = (s64) ((u64) s3 << 48);
    s2 = s2 >> 48;
    s6 = s6 >> 48;
    at = s6 < s2;
    { s32 c_ = at != 0; s5 = s2; if (c_) goto L_0025C4B0; }
    s1 = (s64) ((u64) s7 << 48);
    s0 = (s64) ((u64) s4 << 48);
    at = s6 < s2;
    s1 = s1 >> 48;
    { s32 c_ = at != 0; s0 = s0 >> 48; if (c_) goto L_0025C4B0; }
    fp = (s32) ((u32) sp + 0xaeU);
L_0025C418:;
    v1 = (s32) ((u32) sp + 0xacU);
    { s32 c_ = v1 == 0; v0 = 4; if (c_) goto L_0025C440; }
L_0025C424:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_0025C424;
L_0025C440:;
    a0 = (s32) ((u32) sp + 0xacU);
    (*(volatile u16 *) (u32) (sp + 172)) = (u16) s5;
    (*(volatile u16 *) (u32) fp) = (u16) s1; v0 = func_00259A30(a0);
    if (v0 != 0) goto L_0025C4D4;
L_0025C458:;
    v1 = (s32) ((u32) sp + 0xa8U);
    { s32 c_ = v1 == 0; v0 = 4; if (c_) goto L_0025C480; }
L_0025C464:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_0025C464;
L_0025C480:;
    v0 = (s32) ((u32) sp + 0xaaU);
    a0 = (s32) ((u32) sp + 0xa8U);
    (*(volatile u16 *) (u32) v0) = (u16) s0;
    (*(volatile u16 *) (u32) (sp + 168)) = (u16) s5; v0 = func_00259A30(a0);
    if (v0 != 0) goto L_0025C500;
L_0025C4A0:;
    s5 = (s32) ((u32) s5 + 0x1U);
    at = s6 < s5;
    if (at == 0) goto L_0025C418;
L_0025C4B0:;
    s1 = (s64) ((u64) s7 << 48);
    s0 = (s64) ((u64) s4 << 48);
    s1 = s1 >> 48;
    s0 = s0 >> 48;
    at = s0 < s1;
    if (at == 0) goto L_0025C528;
L_0025C4CC:;
    goto L_0025C620;
L_0025C4D4:;
    v0 = (s32) 0x590000U;
    a0 = 2;
    v0 = (*(volatile s16 *) (u32) (v0 + -12404));
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) s1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -12396));
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) s5);
    (*(volatile u8 *) (u32) v0) = (u8) a0; goto L_0025C458;
L_0025C500:;
    v1 = (s32) 0x590000U;
    v1 = (*(volatile s16 *) (u32) (v1 + -12404));
    a1 = 2;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) s0; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    v1 = (s32) 0x590000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -12396));
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 + (u32) s5);
    (*(volatile u8 *) (u32) v1) = (u8) a1; goto L_0025C4A0;
L_0025C528:;
    s4 = (s64) ((u64) s3 << 48);
    s4 = s4 >> 48;
    s5 = (s32) ((u32) sp + 0xa6U);
    s3 = (s32) ((u32) sp + 0xa2U);
L_0025C538:;
    v1 = (s32) ((u32) sp + 0xa4U);
    { s32 c_ = v1 == 0; v0 = 4; if (c_) goto L_0025C560; }
L_0025C544:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_0025C544;
L_0025C560:;
    a0 = (s32) ((u32) sp + 0xa4U);
    (*(volatile u16 *) (u32) (sp + 164)) = (u16) s2;
    (*(volatile u16 *) (u32) s5) = (u16) s1; v0 = func_00259A30(a0);
    if (v0 != 0) goto L_0025C5D0;
L_0025C578:;
    v1 = (s32) ((u32) sp + 0xa0U);
    { s32 c_ = v1 == 0; v0 = 4; if (c_) goto L_0025C5A0; }
L_0025C584:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_0025C584;
L_0025C5A0:;
    a0 = (s32) ((u32) sp + 0xa0U);
    (*(volatile u16 *) (u32) (sp + 160)) = (u16) s4;
    (*(volatile u16 *) (u32) s3) = (u16) s1; v0 = func_00259A30(a0);
    if (v0 != 0) goto L_0025C5F8;
L_0025C5B8:;
    s1 = (s32) ((u32) s1 + 0x1U);
    at = s0 < s1;
    if (at == 0) goto L_0025C538;
    goto L_0025C4CC;
L_0025C5D0:;
    v0 = (s32) 0x590000U;
    a0 = 2;
    v1 = (*(volatile s32 *) (u32) (v0 + -12396));
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) s2 + (u32) v1);
    v0 = (*(volatile s16 *) (u32) (v0 + -12404));
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) s1; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    v0 = (s32) ((u32) v1 + (u32) v0);
    (*(volatile u8 *) (u32) v0) = (u8) a0; goto L_0025C578;
L_0025C5F8:;
    a0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    a0 = (*(volatile s32 *) (u32) (a0 + -12396));
    v1 = (*(volatile s16 *) (u32) (v1 + -12404));
    a1 = 2;
    a0 = (s32) ((u32) s4 + (u32) a0);
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) s1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v1 = (s32) ((u32) a0 + (u32) v1);
    (*(volatile u8 *) (u32) v1) = (u8) a1; goto L_0025C5B8;
L_0025C620:;
    return;
}
