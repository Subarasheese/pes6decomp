/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_0025E7F0(s64);

s64 func_0025E630(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    s64 hi = 0, lo = 0;
    s64 frame[24];
    s64 sp = (s32) (u32) frame;

    a1 = (s32) 0x590000U;
    v0 = (s32) 0x590000U;
    a1 = (s32) ((u32) a1 + 0xffffd1e8U);
    a2 = 1;
    v1 = (s32) 0x590000U;
    s6 = 0;
    s5 = 0;
    a4 = (*(volatile u8 *) (u32) (v0 + -11778));
    v0 = (s32) 0x590000U;
    a3 = (s32) ((u32) a2 - (u32) a4);
    a0 = (*(volatile s16 *) (u32) (v0 + -11802));
    a2 = a3 & 0xff;
    v0 = (s32) ((u32) a4 << 2);
    at = 0 < a0;
    v0 = (s32) ((u32) a1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s32) ((u32) a2 << 2);
    v0 = (s32) ((u32) a1 + (u32) v0);
    s7 = (*(volatile s32 *) (u32) v0);
    { s32 c_ = at == 0; (*(volatile u8 *) (u32) (v1 + -11778)) = (u8) a3; if (c_) goto L_0025E798; }
    fp = (s32) ((u32) sp + 0xbeU);
L_0025E6B8:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s16 *) (u32) (v0 + -11804));
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) s6; lo = (s32) m_; hi = (s32) (m_ >> 32); s4 = lo; }
    at = 0 < v0;
    { s32 c_ = at == 0; s3 = 0; if (c_) goto L_0025E780; }
L_0025E6D0:;
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = (s32) ((u32) v0 + (u32) s4);
    v1 = (*(volatile u8 *) (u32) v0);
    v0 = 1;
    if (v1 == v0) goto L_0025E700;
    if (v1 == 0) goto L_0025E768;
    v1 = (s32) ((u32) v1 + 0x1U);
    v0 = (s32) ((u32) s7 + (u32) s4);
    (*(volatile u8 *) (u32) v0) = (u8) v1;
L_0025E700:;
    v1 = (s32) ((u32) s7 + (u32) s4);
    v0 = (*(volatile u8 *) (u32) v1);
    s0 = (s32) 0x3e0000U;
    s1 = 0;
    s0 = (s32) ((u32) s0 + 0xffff9178U);
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) v1) = (u8) v0;
L_0025E720:;
    v0 = (s32) ((u32) s6 + 0xffffffffU);
    v0 = (s32) ((u32) v0 + (u32) s1);
    s2 = 0;
    (*(volatile u16 *) (u32) fp) = (u16) v0;
L_0025E730:;
    v0 = (s32) ((u32) s3 + 0xffffffffU);
    v1 = (s32) ((u32) v0 + (u32) s2);
    v0 = (s32) ((u32) s0 + (u32) s2);
    v0 = (*(volatile u8 *) (u32) v0);
    { s32 c_ = v0 != 0; (*(volatile u16 *) (u32) (sp + 188)) = (u16) v1; if (c_) goto L_0025E7A0; }
L_0025E748:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 3;
    if (v0 != 0) goto L_0025E730;
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 3;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x3U); if (c_) goto L_0025E720; }
L_0025E768:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s16 *) (u32) (v0 + -11804));
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < v0;
    { s32 c_ = v0 != 0; s4 = (s32) ((u32) s4 + 0x1U); if (c_) goto L_0025E6D0; }
L_0025E780:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s16 *) (u32) (v0 + -11802));
    s6 = (s32) ((u32) s6 + 0x1U);
    v0 = s6 < v0;
    if (v0 != 0) goto L_0025E6B8;
L_0025E798:;
    v0 = s5; goto L_0025E7B8;
L_0025E7A0:;
    a0 = (s32) ((u32) sp + 0xbcU); v0 = func_0025E7F0(a0);
    if (v0 == 0) goto L_0025E748;
    s5 = (s32) ((u32) s5 + 0x1U); goto L_0025E748;
L_0025E7B8:;
    return v0;
}
