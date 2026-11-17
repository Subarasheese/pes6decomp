/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Team_ResolveSpecialId(s64);
s64 func_0022F190(void);

void func_00322300(s64 a0, s64 a1, s64 a2) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    u64 qh_s1 = 0;
    u64 qh_s6 = 0;
    s64 frame[24];
    s64 sp = (s32) (u32) frame;

    s5 = a0;
    (*(volatile u32 *) (u32) (sp + 188)) = (u32) a1;
    (*(volatile u32 *) (u32) (sp + 184)) = (u32) a2;
    v0 = func_0022F190();
    at = 0xca72;
    v1 = 1;
    v0 = (s32) ((u32) v0 + (u32) at);
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (*(volatile s32 *) (u32) (sp + 188));
    (*(volatile u8 *) (u32) (v0 + 3)) = (u8) v1;
    v0 = (*(volatile s32 *) (u32) (sp + 184));
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    { s32 c_ = v0 <= 0; s4 = 0; if (c_) goto L_003225C0; }
    { u32 a_ = (u32) (sp + 160) & ~15U; s6 = *(volatile s64 *) a_; qh_s6 = *(volatile u64 *) (a_ + 8); }
    { u64 x_[2], y_[2], z_[2]; s32 n_; x_[0] = (u64) s6; x_[1] = qh_s6; y_[0] = (u64) 0; y_[1] = (u64) 0; z_[0] = z_[1] = 0; for (n_ = 0; n_ < 16; n_++) { u32 b_ = (u32) ((x_[n_ >> 3] >> (8 * (n_ & 7))) & 0xFF) + (u32) ((y_[n_ >> 3] >> (8 * (n_ & 7))) & 0xFF); if (b_ > 0xFF) b_ = 0xFF; z_[n_ >> 3] |= (u64) b_ << (8 * (n_ & 7)); } s1 = (s64) z_[0]; qh_s1 = z_[1]; }
L_0032236C:;
    v0 = (*(volatile s16 *) (u32) (s5 + 2296));
    s7 = (s32) ((u32) s5 + 0x8f8U);
    s0 = (*(volatile u16 *) (u32) s6);
    s3 = (s32) ((u32) s7 + 0x4U);
    { s32 c_ = v0 <= 0; s2 = 0; if (c_) goto L_003223E8; }
L_00322388:;
    a0 = (*(volatile u16 *) (u32) s3);
    v0 = 295;
    if (a0 == v0) goto L_003223B0;
    v0 = 294;
    if (a0 == v0) goto L_003223B0;
    goto L_003223C0;
L_003223B0:;
    v0 = Pes6Team_ResolveSpecialId(a0);
    a0 = v0 & 0xffff; goto L_003223C0;
L_003223C0:;
    if (a0 != s0) goto L_003223D0;
    goto L_003223F0;
L_003223D0:;
    v0 = (*(volatile s16 *) (u32) s7);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < v0;
    { s32 c_ = v0 != 0; s3 = (s32) ((u32) s3 + 0x10U); if (c_) goto L_00322388; }
L_003223E8:;
    s3 = 0;
L_003223F0:;
    v0 = (*(volatile s16 *) (u32) (s5 + 2296));
    s0 = (*(volatile u16 *) (u32) (s6 + 2));
    fp = (s32) ((u32) s5 + 0x8f8U);
    s7 = 0;
    { s32 c_ = v0 <= 0; s2 = (s32) ((u32) fp + 0x4U); if (c_) goto L_00322468; }
L_00322408:;
    a0 = (*(volatile u16 *) (u32) s2);
    v0 = 295;
    if (a0 == v0) goto L_00322430;
    v0 = 294;
    if (a0 == v0) goto L_00322430;
    goto L_00322440;
L_00322430:;
    v0 = Pes6Team_ResolveSpecialId(a0);
    a0 = v0 & 0xffff; goto L_00322440;
L_00322440:;
    if (a0 != s0) goto L_00322450;
    goto L_00322470;
L_00322450:;
    v0 = (*(volatile s16 *) (u32) fp);
    s7 = (s32) ((u32) s7 + 0x1U);
    v0 = s7 < v0;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x10U); if (c_) goto L_00322408; }
L_00322468:;
    s2 = 0;
L_00322470:;
    if (s2 == 0) goto L_00322480;
    if (s3 != 0) { v0 = (*(volatile u8 *) (u32) (s5 + 15)); goto L_00322488; }
L_00322480:;
    v0 = 0; goto L_003225C4;
L_00322488:;
    if (v0 == 0) goto L_003224A0;
    v0 = 1;
    (*(volatile u8 *) (u32) (s3 + 10)) = (u8) v0;
    (*(volatile u8 *) (u32) (s2 + 10)) = (u8) v0; goto L_003224D8;
L_003224A0:;
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = (s32) ((u32) v0 + (u32) s4);
    v0 = (*(volatile u8 *) (u32) (v0 + 72));
    if (v0 != 0) goto L_003224C8;
    v0 = 1;
    (*(volatile u8 *) (u32) (s3 + 10)) = (u8) v0;
    (*(volatile u8 *) (u32) (s2 + 10)) = (u8) v0; goto L_003224D8;
L_003224C8:;
    v0 = (*(volatile s32 *) (u32) (sp + 188));
    (*(volatile u8 *) (u32) (s3 + 10)) = (u8) 0;
    (*(volatile u8 *) (u32) (s2 + 10)) = (u8) 0;
    (*(volatile u8 *) (u32) (v0 + 3)) = (u8) 0;
L_003224D8:;
    v0 = (*(volatile u8 *) (u32) (s3 + 10));
    if (v0 == 0) goto L_003225A0;
    v0 = (*(volatile u8 *) (u32) (s2 + 10));
    if (v0 == 0) goto L_003225A0;
    a1 = (*(volatile u8 *) (u32) (s1 + 36));
    v0 = (*(volatile u8 *) (u32) (s1 + 54));
    a0 = (*(volatile u8 *) (u32) (s1 + 37));
    v1 = (*(volatile u8 *) (u32) (s1 + 55));
    v0 = (s32) ((u32) a1 + (u32) v0);
    v0 = (s64) ((u64) v0 << 48);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = v0 >> 48;
    a0 = (s64) ((u64) v1 << 48);
    a0 = a0 >> 48;
    if (v0 != a0) goto L_00322540;
    v1 = (*(volatile s16 *) (u32) (s3 + 2));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u16 *) (u32) (s3 + 2)) = (u16) v1;
    v1 = (*(volatile s16 *) (u32) (s2 + 2));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u16 *) (u32) (s2 + 2)) = (u16) v1; goto L_00322570;
L_00322540:;
    at = a0 < v0;
    if (at == 0) goto L_00322560;
    v1 = (*(volatile s16 *) (u32) (s3 + 2));
    v1 = (s32) ((u32) v1 + 0x3U);
    (*(volatile u16 *) (u32) (s3 + 2)) = (u16) v1; goto L_00322570;
L_00322560:;
    v1 = (*(volatile s16 *) (u32) (s2 + 2));
    v1 = (s32) ((u32) v1 + 0x3U);
    (*(volatile u16 *) (u32) (s2 + 2)) = (u16) v1;
L_00322570:;
    v1 = (*(volatile s16 *) (u32) (s3 + 6));
    v1 = (s32) ((u32) v1 + (u32) v0);
    (*(volatile u16 *) (u32) (s3 + 6)) = (u16) v1;
    v1 = (*(volatile s16 *) (u32) (s3 + 8));
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u16 *) (u32) (s3 + 8)) = (u16) v1;
    v1 = (*(volatile s16 *) (u32) (s2 + 6));
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u16 *) (u32) (s2 + 6)) = (u16) v1;
    v1 = (*(volatile s16 *) (u32) (s2 + 8));
    v0 = (s32) ((u32) v1 + (u32) v0);
    (*(volatile u16 *) (u32) (s2 + 8)) = (u16) v0;
L_003225A0:;
    v0 = (*(volatile s32 *) (u32) (sp + 184));
    s4 = (s32) ((u32) s4 + 0x1U);
    s6 = (s32) ((u32) s6 + 0x4U);
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v0 = s4 < v0;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x2U); if (c_) goto L_0032236C; }
L_003225C0:;
    v0 = 1;
L_003225C4:;
    return;
}
