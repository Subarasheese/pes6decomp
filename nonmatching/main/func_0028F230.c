/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_002937A0(s64, s64, s64, s64);
s64 func_002C6320(s64, s64, s64, s64);
s64 func_002C6550(s64, s64, s64);
s64 func_002C71F0(s64, s64, s64, s64);

s64 func_0028F230(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    u64 qh_v1 = 0;
    s64 hi1 = 0, lo1 = 0;
    s64 hi = 0, lo = 0;
    s64 frame[34];
    s64 sp = (s32) (u32) frame;

    s5 = a1;
    (*(volatile u8 *) (u32) (sp + 263)) = (u8) a2;
    s0 = a0;
    a0 = (*(volatile u8 *) (u32) (sp + 263));
    (*(volatile u32 *) (u32) (sp + 240)) = (u32) a3;
    (*(volatile u32 *) (u32) (sp + 236)) = (u32) a4; v0 = func_002937A0(a0, a1, a2, a3);
    { s32 c_ = s5 == 0; v0 = v0 & 0xff; if (c_) goto L_0028F434; }
    s7 = v0 & 0xff;
    (*(volatile u32 *) (u32) (sp + 268)) = (u32) 0;
    v0 = (s32) ((u32) s7 << 1);
    s6 = (s32) 0x3e0000U;
    v1 = (s32) ((u32) v0 + (u32) s7);
    a2 = (*(volatile u8 *) (u32) s0);
    v0 = (s32) 0x3e0000U;
    a1 = (*(volatile u8 *) (u32) (s0 + 1));
    v0 = (s32) ((u32) v0 + 0xffff9e50U);
    (*(volatile u8 *) (u32) (sp + 264)) = (u8) 0;
    v0 = (s32) ((u32) v0 + (u32) v1);
    s3 = 0;
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    s4 = 0;
    v0 = (s32) ((u32) s7 << 2);
    (*(volatile u32 *) (u32) (sp + 208)) = (u32) 0;
    v1 = (s32) ((u32) v0 + (u32) s7);
    s6 = (s32) ((u32) s6 + 0xffff9d40U);
    v0 = (s32) 0x3e0000U;
    s0 = (s32) ((u32) sp + 0x108U);
    v0 = (s32) ((u32) v0 + 0xffff9e80U);
    a3 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 + 0xffff9ed0U);
    a0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (sp + 263));
    v1 = 90;
    v0 = v0;
    (*(volatile u32 *) (u32) (sp + 192)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (sp + 236));
    v0 = (s32) ((u32) v1 - (u32) v0);
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v1 = (s32) ((u32) a2 + (u32) a3);
    v0 = (s32) ((u32) a1 + (u32) a0);
    v1 = (*(volatile s8 *) (u32) v1);
    v0 = (*(volatile s8 *) (u32) v0);
    (*(volatile u8 *) (u32) (sp + 265)) = (u8) v1;
    (*(volatile u8 *) (u32) (sp + 266)) = (u8) v0;
L_0028F318:;
    { u32 a_ = (u32) (sp + 176) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    s1 = 0;
    v0 = (*(volatile s32 *) (u32) (sp + 208));
    fp = (s32) ((u32) v1 + (u32) v0);
L_0028F328:;
    v0 = 1;
    v1 = (s32) ((u32) v0 << (s1 & 31));
    v0 = (*(volatile s32 *) (u32) (sp + 240));
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = v1 & v0;
    if (v0 != 0) { a0 = s5; goto L_0028F43C; }
L_0028F348:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 25;
    if (v0 != 0) goto L_0028F328;
    v0 = (*(volatile s32 *) (u32) (sp + 240));
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = (s32) ((u32) v0 + 0x4U);
    (*(volatile u32 *) (u32) (sp + 240)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (sp + 208));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (sp + 208)) = (u32) v0;
    v0 = v0 < 3;
    { s32 c_ = v0 != 0; s6 = (s32) ((u32) s6 + 0x1U); if (c_) goto L_0028F318; }
    a0 = (*(volatile u8 *) (u32) (sp + 263)); v0 = func_002937A0(a0, a1, a2, a3);
    a0 = s5;
    a1 = v0; v0 = func_002C6320(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    at = v0 < 10;
    if (at != 0) goto L_0028F3BC;
    v0 = (*(volatile u8 *) (u32) (s5 + 33));
    v1 = v0 & 0x7;
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 1);
    s4 = (s32) ((u32) s4 + (u32) v0);
L_0028F3BC:;
    v1 = (s32) ((u32) s3 + 0x46U);
    if (v1 == 0) goto L_0028F558;
    v0 = (s32) ((u32) s4 << 5);
    v0 = (s32) ((u32) v0 - (u32) s4);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) s4);
    v0 = (s32) ((u32) v0 << 3);
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) v1); hi = (s32) ((s32) v0 % (s32) v1); lo = q_; }
    s4 = lo;
    goto L_0028F558;
L_0028F3EC:;
    a0 = (*(volatile u8 *) (u32) (sp + 263)); v0 = func_002937A0(a0, a1, a2, a3);
    a0 = s5;
    a1 = v0; v0 = func_002C6320(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    v0 = (s32) ((u32) v0 + 0x13U);
    { s64 m_ = (s64) (s32) s4 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    v0 = (s32) 0x88880000U;
    v0 = v0 | 0x8889;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) a0 >> 31);
    v0 = hi;
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) v0 >> 4;
    v0 = (s32) ((u32) v0 + (u32) v1); goto L_0028F57C;
L_0028F434:;
    v0 = 0; goto L_0028F57C;
L_0028F43C:;
    a1 = s1;
    a2 = (s32) ((u32) sp + 0x10cU);
    (*(volatile u32 *) (u32) (sp + 268)) = (u32) 0; v0 = func_002C71F0(a0, a1, a2, a3);
    a0 = (*(volatile s8 *) (u32) s0);
    v1 = (*(volatile s8 *) (u32) fp);
    a2 = (s32) ((u32) a0 + (u32) v1);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a2; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = (s32) 0x66660000U;
    a1 = v0 | 0x6667;
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a0 = (s32) ((u32) v1 >> 31);
    v1 = hi;
    v0 = (*(volatile s32 *) (u32) (sp + 268));
    v1 = (s32) v1 >> 2;
    s2 = (s32) ((u32) v1 + (u32) a0);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a2; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); v0 = lo1; }
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v0 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 2;
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u32 *) (u32) (sp + 268)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (sp + 236));
    at = v0 < 90;
    if (at == 0) goto L_0028F510;
    v0 = (*(volatile u8 *) (u32) s6);
    a1 = 100;
    v1 = (s32) ((u32) a1 - (u32) v0);
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    v0 = (s32) 0xb60b0000U;
    v0 = v0 | 0x60b7;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) a0 >> 31);
    v0 = hi;
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) v0 >> 6;
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) a1 - (u32) v0);
    { s64 m_ = (s64) (s32) s2 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = (s32) 0x51eb0000U;
    v0 = v0 | 0x851f;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v1 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 5;
    s2 = (s32) ((u32) v0 + (u32) v1);
L_0028F510:;
    a1 = (*(volatile s32 *) (u32) (sp + 192));
    a0 = s5;
    a2 = s1; v0 = func_002C6550(a0, a1, a2);
    { s64 m_ = (s64) (s32) s2 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = (s32) 0x51eb0000U;
    v0 = v0 | 0x851f;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a0 = (s32) ((u32) v1 >> 31);
    v1 = hi;
    v0 = (*(volatile s32 *) (u32) (sp + 268));
    v1 = (s32) v1 >> 5;
    v1 = (s32) ((u32) v1 + (u32) a0);
    s4 = (s32) ((u32) s4 + (u32) v1);
    s3 = (s32) ((u32) s3 + (u32) v0); goto L_0028F348;
L_0028F558:;
    v0 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 + 0xffff9e38U);
    v0 = (s32) ((u32) v0 + (u32) s7);
    v0 = (*(volatile u8 *) (u32) v0);
    s4 = (s32) ((u32) s4 + (u32) v0);
    if (s4 != 0) goto L_0028F3EC;
    s4 = 1; goto L_0028F3EC;
L_0028F57C:;
    return v0;
}
