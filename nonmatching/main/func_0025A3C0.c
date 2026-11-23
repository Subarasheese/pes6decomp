/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00259A30(s64);

s64 func_0025A3C0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v1 = 0;
    s64 hi = 0, lo = 0;
    s64 frame[38];
    s64 sp = (s32) (u32) frame;

    a2 = (s32) 0x590000U;
    a1 = (s32) 0x590000U;
    a2 = (s32) ((u32) a2 + 0xffffcf88U);
    v1 = (s32) 0x590000U;
    a1 = (s32) ((u32) a1 + 0xffffcf80U);
    a0 = (*(volatile s16 *) (u32) a2);
    v1 = (*(volatile s16 *) (u32) (v1 + -12416));
    at = a0 < v1;
    { s32 c_ = at == 0; s5 = 0; if (c_) goto L_0025A42C; }
    a3 = (*(volatile s16 *) (u32) a1);
    v1 = -1;
    (*(volatile u32 *) (u32) (sp + 224)) = (u32) v1;
    v1 = (s32) ((u32) a3 - (u32) a0);
    fp = (s32) ((u32) v1 + 0x1U); goto L_0025A440;
L_0025A42C:;
    a3 = (*(volatile s16 *) (u32) a1);
    v1 = 1;
    (*(volatile u32 *) (u32) (sp + 224)) = (u32) v1;
    v1 = (s32) ((u32) a0 - (u32) a3);
    fp = (s32) ((u32) v1 + 0x1U);
L_0025A440:;
    a1 = (*(volatile s16 *) (u32) (a1 + 2));
    v1 = (*(volatile s16 *) (u32) (a2 + 2));
    at = v1 < a1;
    if (at == 0) { a0 = (s32) ((u32) v1 - (u32) a1); goto L_0025A46C; }
    a0 = (s32) ((u32) a1 - (u32) v1);
    v1 = -1;
    (*(volatile u32 *) (u32) (sp + 208)) = (u32) v1;
    v1 = (s32) ((u32) a0 + 0x1U);
    (*(volatile u32 *) (u32) (sp + 240)) = (u32) v1; goto L_0025A47C;
L_0025A46C:;
    v1 = 1;
    (*(volatile u32 *) (u32) (sp + 208)) = (u32) v1;
    v1 = (s32) ((u32) a0 + 0x1U);
    (*(volatile u32 *) (u32) (sp + 240)) = (u32) v1;
L_0025A47C:;
    v1 = (s64) ((u64) a1 << 48);
    s7 = (s64) ((u64) a3 << 48);
    v1 = v1 >> 48;
    (*(volatile u32 *) (u32) (sp + 256)) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (sp + 240));
    at = v1 < fp;
    { s32 c_ = at == 0; s7 = s7 >> 48; if (c_) goto L_0025A638; }
    at = 0 < fp;
    { s32 c_ = at == 0; (*(volatile u32 *) (u32) (sp + 272)) = (u32) 0; if (c_) goto L_0025A7D8; }
    s6 = (s32) ((u32) sp + 0x12eU);
L_0025A4AC:;
    v1 = (s32) 0x590000U;
    a0 = (s32) 0x3b0000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -12368));
    a0 = (s32) ((u32) a0 + 0xffffaf80U);
    v1 = (s32) ((u32) v1 + 0xfffffffcU);
    v1 = v1 & 0xff;
    v1 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) a0 + (u32) v1);
    s3 = (*(volatile s8 *) (u32) v1);
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    v1 = (*(volatile s8 *) (u32) (v1 + 1));
    at = v1 < s3;
    if (at != 0) goto L_0025A5E8;
    { u32 a_ = (u32) (sp + 176) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    s2 = (s32) ((u32) v1 + 0x1U);
L_0025A4F0:;
    v1 = (*(volatile s32 *) (u32) (sp + 256));
    s1 = (s32) ((u32) v1 + (u32) s3);
    if (s1 < 0) goto L_0025A5D0;
    v1 = (s32) 0x590000U;
    v1 = (*(volatile s16 *) (u32) (v1 + -12402));
    at = s1 < v1;
    if (at == 0) goto L_0025A5D0;
    { u32 a_ = (u32) (sp + 176) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    s4 = (*(volatile s8 *) (u32) v1);
    v1 = (*(volatile s8 *) (u32) s2);
    at = v1 < s4;
    if (at != 0) goto L_0025A5D0;
L_0025A530:;
    s0 = (s32) ((u32) s7 + (u32) s4);
    if (s0 < 0) goto L_0025A5B8;
    v1 = (s32) 0x590000U;
    v1 = (*(volatile s16 *) (u32) (v1 + -12404));
    at = s0 < v1;
    if (at == 0) goto L_0025A5B8;
    v1 = (s32) ((u32) sp + 0x12cU);
    { s32 c_ = v1 == 0; v0 = 4; if (c_) goto L_0025A578; }
L_0025A55C:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_0025A55C;
L_0025A578:;
    a0 = (s32) ((u32) sp + 0x12cU);
    (*(volatile u16 *) (u32) (sp + 300)) = (u16) s0;
    (*(volatile u16 *) (u32) s6) = (u16) s1; v0 = func_00259A30(a0);
    if (v0 == 0) goto L_0025A5B8;
    v1 = (s32) 0x590000U;
    a1 = 2;
    v1 = (*(volatile s16 *) (u32) (v1 + -12404));
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) s1; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    v1 = (s32) 0x590000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -12396));
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 + (u32) s0);
    (*(volatile u8 *) (u32) v1) = (u8) a1;
L_0025A5B8:;
    v1 = (*(volatile s8 *) (u32) s2);
    s4 = (s32) ((u32) s4 + 0x1U);
    at = v1 < s4;
    if (at == 0) goto L_0025A530;
L_0025A5D0:;
    v1 = (*(volatile s8 *) (u32) s2);
    s3 = (s32) ((u32) s3 + 0x1U);
    at = v1 < s3;
    if (at == 0) goto L_0025A4F0;
L_0025A5E8:;
    v1 = (*(volatile s32 *) (u32) (sp + 240));
    s5 = (s32) ((u32) s5 + (u32) v1);
    v1 = s5 < fp;
    if (v1 != 0) goto L_0025A610;
    a0 = (*(volatile s32 *) (u32) (sp + 256));
    s5 = (s32) ((u32) s5 - (u32) fp);
    v1 = (*(volatile s32 *) (u32) (sp + 208));
    a0 = (s32) ((u32) a0 + (u32) v1);
    (*(volatile u32 *) (u32) (sp + 256)) = (u32) a0;
L_0025A610:;
    v1 = (*(volatile s32 *) (u32) (sp + 224));
    s7 = (s32) ((u32) s7 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) (sp + 272));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (sp + 272)) = (u32) v1;
    v1 = v1 < fp;
    if (v1 != 0) goto L_0025A4AC;
    goto L_0025A7D8;
L_0025A638:;
    at = 0 < v1;
    { s32 c_ = at == 0; (*(volatile u32 *) (u32) (sp + 192)) = (u32) 0; if (c_) goto L_0025A7D8; }
    s6 = (s32) ((u32) sp + 0x12aU);
L_0025A648:;
    v1 = (s32) 0x590000U;
    a0 = (s32) 0x3b0000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -12368));
    a0 = (s32) ((u32) a0 + 0xffffaf80U);
    v1 = (s32) ((u32) v1 + 0xfffffffcU);
    v1 = v1 & 0xff;
    v1 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) a0 + (u32) v1);
    s3 = (*(volatile s8 *) (u32) v1);
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    v1 = (*(volatile s8 *) (u32) (v1 + 1));
    at = v1 < s3;
    if (at != 0) goto L_0025A780;
    { u32 a_ = (u32) (sp + 160) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    s2 = (s32) ((u32) v1 + 0x1U);
L_0025A688:;
    v1 = (*(volatile s32 *) (u32) (sp + 256));
    s1 = (s32) ((u32) v1 + (u32) s3);
    if (s1 < 0) goto L_0025A768;
    v1 = (s32) 0x590000U;
    v1 = (*(volatile s16 *) (u32) (v1 + -12402));
    at = s1 < v1;
    if (at == 0) goto L_0025A768;
    { u32 a_ = (u32) (sp + 160) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    s4 = (*(volatile s8 *) (u32) v1);
    v1 = (*(volatile s8 *) (u32) s2);
    at = v1 < s4;
    if (at != 0) goto L_0025A768;
L_0025A6C8:;
    s0 = (s32) ((u32) s7 + (u32) s4);
    if (s0 < 0) goto L_0025A750;
    v1 = (s32) 0x590000U;
    v1 = (*(volatile s16 *) (u32) (v1 + -12404));
    at = s0 < v1;
    if (at == 0) goto L_0025A750;
    v1 = (s32) ((u32) sp + 0x128U);
    { s32 c_ = v1 == 0; v0 = 4; if (c_) goto L_0025A710; }
L_0025A6F4:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_0025A6F4;
L_0025A710:;
    a0 = (s32) ((u32) sp + 0x128U);
    (*(volatile u16 *) (u32) (sp + 296)) = (u16) s0;
    (*(volatile u16 *) (u32) s6) = (u16) s1; v0 = func_00259A30(a0);
    if (v0 == 0) goto L_0025A750;
    v1 = (s32) 0x590000U;
    a1 = 2;
    v1 = (*(volatile s16 *) (u32) (v1 + -12404));
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) s1; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    v1 = (s32) 0x590000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -12396));
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 + (u32) s0);
    (*(volatile u8 *) (u32) v1) = (u8) a1;
L_0025A750:;
    v1 = (*(volatile s8 *) (u32) s2);
    s4 = (s32) ((u32) s4 + 0x1U);
    at = v1 < s4;
    if (at == 0) goto L_0025A6C8;
L_0025A768:;
    v1 = (*(volatile s8 *) (u32) s2);
    s3 = (s32) ((u32) s3 + 0x1U);
    at = v1 < s3;
    if (at == 0) goto L_0025A688;
L_0025A780:;
    v1 = (*(volatile s32 *) (u32) (sp + 240));
    s5 = (s32) ((u32) s5 + (u32) fp);
    v1 = s5 < v1;
    if (v1 != 0) goto L_0025A7A8;
    v1 = (*(volatile s32 *) (u32) (sp + 240));
    s5 = (s32) ((u32) s5 - (u32) v1);
    v1 = (*(volatile s32 *) (u32) (sp + 224));
    s7 = (s32) ((u32) s7 + (u32) v1);
L_0025A7A8:;
    a0 = (*(volatile s32 *) (u32) (sp + 256));
    v1 = (*(volatile s32 *) (u32) (sp + 208));
    a0 = (s32) ((u32) a0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) (sp + 192));
    (*(volatile u32 *) (u32) (sp + 256)) = (u32) a0;
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (sp + 192)) = (u32) v1;
    a0 = v1;
    v1 = (*(volatile s32 *) (u32) (sp + 240));
    v1 = a0 < v1;
    if (v1 != 0) goto L_0025A648;
L_0025A7D8:;
    return v0;
}
