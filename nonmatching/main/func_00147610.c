/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6GsPacket_AppendImageUpload(s64, s64, s64, s64, s64, s64);
void func_00146C70(s64, s64, s64, s64, s64, s64, s64, s64);
void func_00147A30(s64, s64);
void func_00147BF0(s64, s64, s64, s64, s64, s64, s64, s64);

void func_00147610(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    u64 qh_v1 = 0;
    s64 hi = 0, lo = 0;
    s64 frame[38];
    s64 sp = (s32) (u32) frame;

    v1 = (s32) 0x510000U;
    v1 = (s32) ((u32) v1 + 0xffffada8U);
    fp = a2;
    s6 = 0;
    s7 = (s32) ((u32) s6 << 5);
    v0 = (*(volatile u8 *) (u32) (a1 + 20));
    (*(volatile u32 *) (u32) (sp + 300)) = (u32) a0;
    s4 = (*(volatile s32 *) (u32) (a2 + 32));
    s3 = (*(volatile u16 *) (u32) (a2 + 40));
    s2 = (*(volatile u16 *) (u32) (a2 + 42));
    s1 = (*(volatile u8 *) (u32) (a2 + 44));
    (*(volatile u32 *) (u32) (sp + 272)) = (u32) v0;
    v0 = (s32) ((u32) fp + 0x2eU);
    a1 = (*(volatile u16 *) (u32) (a2 + 16));
    { u32 a_ = (u32) (sp + 224) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (*(volatile u8 *) (u32) (a2 + 45));
    s5 = (s32) ((u32) fp + (u32) a1);
    a1 = (*(volatile u16 *) (u32) (a2 + 46));
    { u32 a_ = (u32) (sp + 240) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (*(volatile s32 *) (u32) (sp + 272));
    a3 = a1 & 0xfff;
    a0 = (s32) ((u32) v0 << 4);
    v0 = (s32) ((u32) a0 + (u32) v0);
    v0 = (s32) ((u32) v0 << 2);
    { u32 a_ = (u32) (sp + 208) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (s32) ((u32) s7 + (u32) v0);
    s0 = (*(volatile s32 *) (u32) v0);
L_001476AC:;
    v0 = (*(volatile s32 *) (u32) (s0 + 28));
    if (v0 != 0) goto L_0014770C;
    v0 = (*(volatile u8 *) (u32) (s0 + 105));
    v0 = (u64) v0 < (u64) a3;
    if (v0 != 0) goto L_0014770C;
    a0 = (*(volatile s32 *) (u32) (sp + 272));
    a1 = 0;
    a2 = s0; func_00147BF0(a0, a1, a2, a3, a4, a5, a6, a7);
    { u32 a_ = (u32) (sp + 208) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = (s32) 0x510000U;
    v1 = (s32) ((u32) v1 + 0xffffadb0U);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v1 = (s32) ((u32) s7 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v1);
    (*(volatile u32 *) (u32) v1) = (u32) s0;
    (*(volatile u32 *) (u32) (s0 + 8)) = (u32) 0;
    { s32 c_ = v0 == 0; (*(volatile u32 *) (u32) (s0 + 12)) = (u32) v0; if (c_) goto L_0014771C; }
    (*(volatile u32 *) (u32) (v0 + 8)) = (u32) s0;
    goto L_0014771C;
L_0014770C:;
    s0 = (*(volatile s32 *) (u32) (s0 + 4));
    if (s0 != 0) goto L_001476AC;
    s0 = 0;
L_0014771C:;
    if (s0 == 0) goto L_00147908;
    v0 = (s32) ((u32) s6 << 2);
    a0 = (*(volatile u8 *) (u32) (s0 + 104));
    v1 = (s32) ((u32) v0 + (u32) s6);
    v0 = (s32) 0x370000U;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + 0x68b0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); a3 = lo; }
    v1 = (s32) 0x510000U;
    a1 = (s32) 0x3c0000U;
    v1 = (s32) ((u32) v1 + 0xffffadbcU);
    a2 = (*(volatile s32 *) (u32) (fp + 12));
    a1 = (s32) ((u32) a1 + 0x6b90U);
    { u32 a_ = (u32) (sp + 208) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = (s32) 0x3c0000U;
    a0 = (s32) ((u32) a0 + 0x6ca0U);
    v1 = (s32) ((u32) v1 + (u32) v0);
    { u32 a_ = (u32) (sp + 224) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = (s32) ((u32) s7 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v1);
    v0 = (*(volatile u16 *) (u32) v0);
    s6 = (s32) ((u32) v1 + (u32) a3);
    a3 = s6;
    a4 = v0 & 0xfff; func_00146C70(a0, a1, a2, a3, a4, a5, a6, a7);
    { u32 a_ = (u32) (sp + 224) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = (*(volatile u16 *) (u32) v0);
    v0 = (s32) s6 >> 6;
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s32) v1 >> 12;
    { s32 c_ = s6 >= 0; { u32 a_ = (u32) (sp + 192) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } if (c_) goto L_001477B4; }
    v0 = (s32) ((u32) s6 + 0x3fU);
    v0 = (s32) v0 >> 6;
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
L_001477B4:;
    { u32 a_ = (u32) (sp + 240) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a3 = s5;
    a4 = s4;
    v1 = (s64) ((u64) v0 << 32);
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = v1 >> 32;
    v0 = (s64) ((u64) v0 << 32);
    v0 = v0 >> 32;
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s64) ((u64) v1 << 56);
    (*(volatile u64 *) (u32) (sp + 256)) = (u64) v0;
    v1 = (s64) ((u64) s3 << 32);
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = v1 >> 32;
    a1 = (s64) ((u64) v0 << 32);
    v0 = (s64) ((u64) s1 << 32);
    v0 = v0 >> 32;
    a0 = (s64) ((u64) v0 << 48);
    v0 = (s64) ((u64) s2 << 32);
    a0 = a1 | a0;
    v0 = v0 >> 32;
    v0 = (s64) ((u64) v0 << 32);
    a2 = v1 | v0;
    v0 = (*(volatile s64 *) (u32) (sp + 256));
    a1 = v0 | a0;
    a0 = (*(volatile s32 *) (u32) (sp + 300));
    a5 = 1; Pes6GsPacket_AppendImageUpload(a0, a1, a2, a3, a4, a5);
    { u32 a_ = (u32) (sp + 192) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    at = 0 < v0;
    { s32 c_ = at == 0; s6 = 0; if (c_) goto L_00147950; }
    s7 = fp;
L_00147838:;
    v1 = (s32) ((u32) s4 << 4);
    v0 = (s32) ((u32) s4 + 0x3U);
    s5 = (s32) ((u32) s5 + (u32) v1);
    { s32 c_ = v0 >= 0; s4 = (s32) v0 >> 2; if (c_) goto L_00147854; }
    v0 = (s32) ((u32) v0 + 0x3U);
    s4 = (s32) v0 >> 2;
L_00147854:;
    v0 = (s32) ((u32) s1 + 0x1U);
    { s32 c_ = v0 >= 0; s1 = (s32) v0 >> 1; if (c_) goto L_00147868; }
    v0 = (s32) ((u32) v0 + 0x1U);
    s1 = (s32) v0 >> 1;
L_00147868:;
    v0 = (s32) ((u32) s3 + 0x1U);
    { s32 c_ = v0 >= 0; s3 = (s32) v0 >> 1; if (c_) goto L_0014787C; }
    v0 = (s32) ((u32) v0 + 0x1U);
    s3 = (s32) v0 >> 1;
L_0014787C:;
    v0 = (s32) ((u32) s2 + 0x1U);
    { s32 c_ = v0 >= 0; s2 = (s32) v0 >> 1; if (c_) goto L_00147890; }
    v0 = (s32) ((u32) v0 + 0x1U);
    s2 = (s32) v0 >> 1;
L_00147890:;
    v0 = (s64) ((u64) s1 << 32);
    v1 = (s64) ((u64) s3 << 32);
    v0 = v0 >> 32;
    v1 = v1 >> 32;
    a1 = (s64) ((u64) v0 << 48);
    a6 = (*(volatile u16 *) (u32) (s7 + 48));
    v0 = (s64) ((u64) s2 << 32);
    a0 = (*(volatile s32 *) (u32) (sp + 300));
    v0 = v0 >> 32;
    a3 = s5;
    v0 = (s64) ((u64) v0 << 32);
    a4 = s4;
    a2 = v1 | v0;
    a5 = 1;
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = (s32) ((u32) v0 + (u32) a6);
    v0 = (s64) ((u64) v0 << 32);
    v0 = v0 >> 32;
    v0 = (s64) ((u64) v0 << 32);
    v1 = v0 | a1;
    v0 = (*(volatile s64 *) (u32) (sp + 256));
    a1 = v0 | v1; Pes6GsPacket_AppendImageUpload(a0, a1, a2, a3, a4, a5);
    { u32 a_ = (u32) (sp + 192) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    s6 = (s32) ((u32) s6 + 0x1U);
    v0 = s6 < v0;
    { s32 c_ = v0 != 0; s7 = (s32) ((u32) s7 + 0x2U); if (c_) goto L_00147838; }
    goto L_00147950;
L_00147908:;
    a0 = (s32) 0x3c0000U;
    a1 = (s32) 0x3c0000U;
    a3 = (s32) 0x3c0000U;
    a4 = (s32) 0x3c0000U;
    a0 = (s32) ((u32) a0 + 0x6c30U);
    a1 = (s32) ((u32) a1 + 0x6b90U);
    a2 = 1324;
    a3 = (s32) ((u32) a3 + 0x6c50U);
    a4 = (s32) ((u32) a4 + 0x6cc0U); func_00146C70(a0, a1, a2, a3, a4, a5, a6, a7);
L_00147930:;
    goto L_00147930;
L_00147950:;
    a1 = (s32) ((u32) s0 + 0x10U);
    a0 = 8;
    a2 = fp;
L_00147960:;
    v1 = (*(volatile s32 *) (u32) a2);
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    v0 = (*(volatile s32 *) (u32) (a2 + 4));
    (*(volatile u32 *) (u32) a1) = (u32) v1;
    a2 = (s32) ((u32) a2 + 0x8U);
    (*(volatile u32 *) (u32) (a1 + 4)) = (u32) v0;
    { s32 c_ = a0 > 0; a1 = (s32) ((u32) a1 + 0x8U); if (c_) goto L_00147960; }
    a4 = (*(volatile u8 *) (u32) (fp + 25));
    v0 = 4;
    a3 = (*(volatile u8 *) (u32) (fp + 24));
    v1 = (s64) ((u64) v0 << 32);
    v0 = (*(volatile u8 *) (u32) (fp + 26));
    a1 = s0;
    a2 = (*(volatile u8 *) (u32) (fp + 27));
    a0 = (*(volatile s32 *) (u32) (sp + 272));
    a4 = (s64) ((u64) a4 << 32);
    a4 = a4 >> 32;
    a3 = (s64) ((u64) a3 << 32);
    a5 = (s64) ((u64) a4 << 20);
    a3 = a3 >> 32;
    a4 = (s64) ((u64) a3 << 14);
    a3 = (s64) ((u64) v0 << 32);
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a3 = a3 >> 32;
    a3 = (s64) ((u64) a3 << 26);
    v0 = v0 | a4;
    a4 = a5 | v0;
    v0 = (s64) ((u64) a2 << 32);
    v0 = v0 >> 32;
    a2 = a3 | a4;
    v0 = (s64) ((u64) v0 << 30);
    v0 = v0 | a2;
    v0 = v0 | v1;
    (*(volatile u64 *) (u32) (s0 + 80)) = (u64) v0; func_00147A30(a0, a1);
    { u32 a_ = (u32) (sp + 176) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u32 *) (u32) (s0 + 108)) = (u32) v1;
    return;
}
