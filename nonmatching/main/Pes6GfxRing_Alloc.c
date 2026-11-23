/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s64 Pes6GfxRing_Alloc(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, t8 = 0, t9 = 0, fp = 0;
    u64 qh_v0 = 0;
    u64 qh_t7 = 0;
    s64 frame[52];
    s64 sp = (s32) (u32) frame;

    v1 = (s32) ((u32) a0 + 0x7fU);
    v0 = -128;
    s5 = v1 & v0;
    v0 = (s32) 0x500000U;
    s3 = (s32) 0x440000U;
    { u32 a_ = (u32) (sp + 192) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    t9 = (s32) 0x500000U;
    v0 = (s32) 0x500000U;
    s4 = (s32) 0x500000U;
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    s3 = (s32) ((u32) s3 + 0xffffc880U);
    v0 = (s32) 0x500000U;
    t9 = (s32) ((u32) t9 + 0xffffc884U);
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    a4 = (s32) 0x500000U;
    v0 = (s32) 0x500000U;
    s4 = (s32) ((u32) s4 + 0xffffc880U);
    { u32 a_ = (u32) (sp + 144) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    a3 = (s32) 0x500000U;
    v0 = (s32) 0x500000U;
    a7 = (s32) 0x500000U;
    { u32 a_ = (u32) (sp + 320) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    a6 = (s32) 0x500000U;
    v0 = (s32) 0x500000U;
    a5 = (s32) 0x500000U;
    { u32 a_ = (u32) (sp + 304) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    t5 = (s32) 0x500000U;
    v0 = (s32) 0x500000U;
    t4 = (s32) 0x500000U;
    { u32 a_ = (u32) (sp + 240) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    a2 = (s32) 0x500000U;
    v0 = (s32) 0x500000U;
    a1 = (s32) 0x500000U;
    { u32 a_ = (u32) (sp + 224) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    a0 = (s32) 0x500000U;
    v0 = (s32) 0x500000U;
    v1 = (s32) 0x500000U;
    { u32 a_ = (u32) (sp + 208) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    t6 = (s32) 0x500000U;
    v0 = (s32) 0x500000U;
    fp = (s32) 0x500000U;
    { u32 a_ = (u32) (sp + 288) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s32) 0x500000U;
    { u32 a_ = (u32) (sp + 336) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s32) 0x500000U;
    { u32 a_ = (u32) (sp + 400) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s32) 0x500000U;
    { u32 a_ = (u32) (sp + 384) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s32) 0x500000U;
    { u32 a_ = (u32) (sp + 368) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s32) 0x500000U;
    { u32 a_ = (u32) (sp + 352) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s32) 0x500000U;
    { u32 a_ = (u32) (sp + 272) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s32) 0x500000U;
    { u32 a_ = (u32) (sp + 256) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
L_001399B8:;
    v0 = (*(volatile s32 *) (u32) (t6 + -12148));
    s0 = (*(volatile s32 *) (u32) (fp + -12144));
    t7 = (s32) ((u32) s0 - (u32) v0);
    at = t7 < s5;
    if (at != 0) goto L_001399E8;
    a0 = (s32) 0x500000U;
    v1 = (s32) 0x500000U;
    a0 = (*(volatile s32 *) (u32) (a0 + -12148));
    a0 = (s32) ((u32) a0 + (u32) s5);
    (*(volatile u32 *) (u32) (v1 + -12148)) = (u32) a0; goto L_00139C40;
L_001399E8:;
    if (s0 == s4) goto L_00139A90;
    { u32 a_ = (u32) (sp + 400) & ~15U; t7 = *(volatile s64 *) a_; qh_t7 = *(volatile u64 *) (a_ + 8); }
    v0 = (s32) 0x10000000U;
    s1 = (s32) 0xc0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 15408));
    s0 = (*(volatile s32 *) (u32) (t7 + -12156));
    t7 = (s32) ((u32) s0 << 3);
    t7 = (s32) ((u32) s3 + (u32) t7);
    s1 = (s32) ((u32) t7 + (u32) s1);
    s1 = (*(volatile s32 *) (u32) (s1 + 4));
    at = v0 < s1;
    if (at != 0) goto L_00139A48;
L_00139A20:;
    t7 = (s32) ((u32) s0 + 0x1U);
    s0 = t7 & 0xff;
    s1 = (s32) 0xc0000U;
    t7 = (s32) ((u32) s0 << 3);
    t7 = (s32) ((u32) s3 + (u32) t7);
    s1 = (s32) ((u32) t7 + (u32) s1);
    s1 = (*(volatile s32 *) (u32) (s1 + 4));
    at = v0 < s1;
    if (at == 0) goto L_00139A20;
L_00139A48:;
    v0 = (*(volatile s32 *) (u32) (t4 + -12160));
    { s32 c_ = v0 == s0; (*(volatile u32 *) (u32) (t5 + -12156)) = (u32) s0; if (c_) goto L_00139A80; }
    { u32 a_ = (u32) (sp + 384) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    s0 = (s32) 0xc0000U;
    s0 = (s32) ((u32) t7 + (u32) s0);
    t7 = (*(volatile s32 *) (u32) s0);
    v0 = (*(volatile s32 *) (u32) (v0 + -12148));
    v0 = (u64) t7 < (u64) v0;
    if (v0 != 0) goto L_00139A80;
    { u32 a_ = (u32) (sp + 368) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u32 *) (u32) (v0 + -12144)) = (u32) t7; goto L_001399B8;
L_00139A80:;
    { u32 a_ = (u32) (sp + 352) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u32 *) (u32) (v0 + -12144)) = (u32) s4; goto L_001399B8;
L_00139A90:;
    { u32 a_ = (u32) (sp + 336) & ~15U; t7 = *(volatile s64 *) a_; qh_t7 = *(volatile u64 *) (a_ + 8); }
    at = (s32) 0xc0000U;
    t7 = (*(volatile s32 *) (u32) (t7 + -12160));
    t7 = (s32) ((u32) t7 << 3);
    t7 = (s32) ((u32) s3 + (u32) t7);
    s0 = (s32) ((u32) t7 + (u32) at);
    t7 = (*(volatile s32 *) (u32) s0);
    if (v0 == t7) goto L_00139B40;
    { u32 a_ = (u32) (sp + 320) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u32 *) (u32) (v0 + -12148)) = (u32) s4;
    { u32 a_ = (u32) (sp + 304) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = (*(volatile s32 *) (u32) (v0 + -12160));
    v0 = (s32) ((u32) v0 + 0x1U);
    s2 = v0 & 0xff; goto L_00139B88;
L_00139AD0:;
    { u32 a_ = (u32) (sp + 288) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    s7 = (*(volatile s32 *) (u32) (v0 + -12156));
    if (s2 != s7) goto L_00139BF8;
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    t8 = (*(volatile s32 *) (u32) (v0 + -12160));
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    t7 = (*(volatile s32 *) (u32) (v0 + -12148));
L_00139AF0:;
    v0 = (s32) 0x10000000U;
    s1 = (*(volatile s32 *) (u32) (v0 + 15408));
    s6 = (s32) ((u32) s7 << 3);
    s0 = (s32) ((u32) s3 + (u32) s6);
    v0 = (s32) 0xc0000U;
    v0 = (s32) ((u32) s0 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    at = s1 < v0;
    if (at != 0) goto L_00139BB8;
L_00139B18:;
    v0 = (s32) ((u32) s7 + 0x1U);
    s7 = v0 & 0xff;
    s6 = (s32) ((u32) s7 << 3);
    v0 = (s32) ((u32) t9 + (u32) s6);
    v0 = (*(volatile s32 *) (u32) v0);
    at = s1 < v0;
    if (at == 0) goto L_00139B18;
    goto L_00139BB8;
L_00139B40:;
    (*(volatile u32 *) (u32) s0) = (u32) s3;
    t7 = (*(volatile s32 *) (u32) (a6 + -12156));
    v0 = (*(volatile s32 *) (u32) (a5 + -12160));
    { s32 c_ = v0 == t7; (*(volatile u32 *) (u32) (a7 + -12148)) = (u32) s3; if (c_) goto L_00139B78; }
    t7 = (s32) ((u32) t7 << 3);
    v0 = (s32) 0xc0000U;
    t7 = (s32) ((u32) s3 + (u32) t7);
    v0 = (s32) ((u32) t7 + (u32) v0);
    t7 = (*(volatile s32 *) (u32) v0);
    { u32 a_ = (u32) (sp + 272) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u32 *) (u32) (v0 + -12144)) = (u32) t7; goto L_001399B8;
L_00139B78:;
    { u32 a_ = (u32) (sp + 256) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u32 *) (u32) (v0 + -12144)) = (u32) s4; goto L_001399B8;
L_00139B88:;
    { u32 a_ = (u32) (sp + 240) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u32 *) (u32) (v0 + -12148)) = (u32) s3;
    { u32 a_ = (u32) (sp + 224) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    t7 = (*(volatile s32 *) (u32) (v0 + -12156));
    t7 = (s32) ((u32) t7 << 3);
    v0 = (s32) 0xc0000U;
    t7 = (s32) ((u32) s3 + (u32) t7);
    v0 = (s32) ((u32) t7 + (u32) v0);
    t7 = (*(volatile s32 *) (u32) v0);
    { u32 a_ = (u32) (sp + 208) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u32 *) (u32) (v0 + -12144)) = (u32) t7; goto L_00139AD0;
L_00139BB8:;
    { u32 a_ = (u32) (sp + 192) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    { s32 c_ = t8 == s7; (*(volatile u32 *) (u32) (v0 + -12156)) = (u32) s7; if (c_) goto L_00139C30; }
    s0 = (s32) ((u32) s3 + (u32) s6);
    v0 = (s32) 0xc0000U;
    v0 = (s32) ((u32) s0 + (u32) v0);
    s0 = (*(volatile s32 *) (u32) v0);
    v0 = (u64) s0 < (u64) t7;
    if (v0 != 0) goto L_00139C30;
    (*(volatile u32 *) (u32) (a4 + -12144)) = (u32) s0;
L_00139BE8:;
    s7 = (*(volatile s32 *) (u32) (a3 + -12156));
    if (s2 == s7) goto L_00139AF0;
L_00139BF8:;
    s0 = (*(volatile s32 *) (u32) (a1 + -12148));
    v0 = (s32) ((u32) s2 << 3);
    t7 = (s32) 0xc0000U;
    s1 = (s32) ((u32) s3 + (u32) v0);
    (*(volatile u32 *) (u32) (a2 + -12160)) = (u32) s2;
    t7 = (s32) ((u32) s1 + (u32) t7);
    v0 = (s32) 0xc0000U;
    v0 = (s32) ((u32) s1 + (u32) v0);
    (*(volatile u32 *) (u32) t7) = (u32) s0;
    t7 = (*(volatile s32 *) (u32) (a0 + -12152));
    t7 = (s32) ((u32) t7 + 0x1U);
    (*(volatile u32 *) (u32) (v1 + -12152)) = (u32) t7;
    (*(volatile u32 *) (u32) (v0 + 4)) = (u32) t7; goto L_001399B8;
L_00139C30:;
    { u32 a_ = (u32) (sp + 144) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u32 *) (u32) (v0 + -12144)) = (u32) s4; goto L_00139BE8;
L_00139C40:;
    return v0;
}
