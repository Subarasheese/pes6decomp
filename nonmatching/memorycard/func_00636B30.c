/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001D6D30(s64, s64);
void func_001D7D60(s64, s64);
void func_001D7D80(s64, s64, s64, s64);
s64 func_001DEEF0(s64);
void func_001DF4F0(s64, s64);
s64 func_001F08B0(s64);
void func_0063ABF0(s64, s64, s64);
void func_0063AC30(s64, s64, s64, s64, f32);
void func_0063ACE0(s64, s64, s64, s64);
void func_0063AD20(s64, s64, s64, s64);
s64 func_0063AD90(s64, s64, s64, s64);
s64 func_0063E160(s64, s64);
void sprintf(s64, s64, s64, s64, s64, s64, s64, s64);

void func_00636B30(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7, f32 fa12) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s64 frame[22];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0x660000U;
    s6 = a2;
    fp = (*(volatile s32 *) (u32) (v0 + -10088));
    { s32 c_ = a0 == 0; s4 = a1; if (c_) goto L_00636B78; }
    s0 = (*(volatile u8 *) (u32) (a0 + 12)); goto L_00636B7C;
L_00636B78:;
    s0 = (s64) ((u64) 0 + (u64) (s64) 14);
L_00636B7C:;
    v0 = s0 & 0xff;
    (*(volatile u8 *) (u32) (sp + 160)) = (u8) v0;
    v0 = (s32) 0x20000000U;
    v0 = fp & v0;
    if (v0 != 0) { v0 = (*(volatile u8 *) (u32) (s6 + 38)); goto L_00636BB4; }
    v0 = (s32) 0x40000000U;
    if (fp != v0) { v0 = (*(volatile u8 *) (u32) (sp + 160)); goto L_00636BF0; }
    v1 = (*(volatile u8 *) (u32) (s6 + 19));
    v0 = 255;
    if (v1 == v0) goto L_00636BEC;
    v0 = (*(volatile u8 *) (u32) (s6 + 38));
L_00636BB4:;
    if (v0 != 0) { a0 = (*(volatile u8 *) (u32) (s6 + 18)); goto L_00636BD4; }
    v0 = (s32) 0x660000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -4240));
    if (v0 == 0) goto L_00636BEC;
    s0 = (*(volatile u8 *) (u32) (v0 + 12)); goto L_00636BEC;
L_00636BD4:;
    a1 = 0; v0 = func_0063E160(a0, a1);
    if (v0 == 0) goto L_00636BEC;
    v0 = (*(volatile u8 *) (u32) (v0 + 12));
    (*(volatile u8 *) (u32) (sp + 160)) = (u8) v0;
L_00636BEC:;
    v0 = (*(volatile u8 *) (u32) (sp + 160));
L_00636BF0:;
    a1 = (s32) 0x650000U;
    a1 = (s32) ((u32) a1 + 0x7ee0U);
    v1 = s0 & 0xff;
    v1 = (s32) ((u32) a1 + (u32) v1);
    a0 = v0;
    s0 = (*(volatile s8 *) (u32) v1);
    a0 = (s32) ((u32) a1 + (u32) a0);
    v0 = (*(volatile s32 *) (u32) (s4 + 4));
    s1 = (*(volatile s8 *) (u32) a0);
    a0 = (*(volatile s32 *) (u32) (v0 + 120));
    a1 = s1; func_001D7D80(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s4 + 4));
    a0 = (*(volatile s32 *) (u32) (v0 + 124));
    a1 = s0; func_001D7D80(a0, a1, a2, a3);
    v0 = (*(volatile u8 *) (u32) (s6 + 38));
    { s32 c_ = v0 != 0; v1 = (*(volatile s32 *) (u32) (s4 + 4)); if (c_) goto L_00636C44; }
    a0 = (*(volatile s32 *) (u32) (v1 + 116)); goto L_00636C4C;
L_00636C44:;
    s0 = s1;
    a0 = (*(volatile s32 *) (u32) (v1 + 116));
L_00636C4C:;
    a1 = s0; func_001D7D80(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s4 + 4));
    s0 = (s32) 0x650000U;
    s7 = 0;
    s2 = 0;
    s1 = s4;
    s0 = (s32) ((u32) s0 + 0x7ef0U);
    s3 = (*(volatile s32 *) (u32) (v0 + 128));
    s5 = (s32) ((u32) s4 + 0x24cU);
L_00636C74:;
    v0 = (*(volatile s32 *) (u32) (s1 + 588));
    if (v0 != 0) goto L_00636C98;
    a2 = (*(volatile s32 *) (u32) s0);
    a0 = s3;
    a1 = s5;
    a3 = (s32) ((u32) gp + 0xffff83acU); v0 = func_0063AD90(a0, a1, a2, a3);
    s7 = 1;
L_00636C98:;
    a1 = (*(volatile s32 *) (u32) s0);
    a2 = (*(volatile s32 *) (u32) (s1 + 588));
    a0 = s3; func_0063ABF0(a0, a1, a2);
    s2 = (s32) ((u32) s2 + 0x1U);
    s1 = (s32) ((u32) s1 + 0x4U);
    v0 = s2 < 4;
    s0 = (s32) ((u32) s0 + 0x4U);
    { s32 c_ = v0 != 0; s5 = (s32) ((u32) s5 + 0x4U); if (c_) goto L_00636C74; }
    a0 = s3;
    a1 = 1; func_001D7D60(a0, a1);
    if (s7 == 0) goto L_00636D1C;
    s1 = (s32) 0x650000U;
    s2 = 0;
    s1 = (s32) ((u32) s1 + 0x7ef0U);
    s0 = s4;
L_00636CE4:;
    a1 = (*(volatile s32 *) (u32) s1);
    a0 = s3; v0 = func_001D6D30(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 588));
    a1 = v0; func_0063ACE0(a0, a1, a2, a3);
    s2 = (s32) ((u32) s2 + 0x1U);
    s1 = (s32) ((u32) s1 + 0x4U);
    v0 = s2 < 4;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00636CE4; }
    a0 = s3;
    a1 = 1; func_001D7D60(a0, a1);
L_00636D1C:;
    if (s7 == 0) { v0 = (s32) 0x80000000U; goto L_00636D50; }
    v0 = (*(volatile s32 *) (u32) (s4 + 600));
    a0 = (*(volatile s32 *) (u32) (v0 + 12)); v0 = func_001DEEF0(a0);
    v1 = (*(volatile s32 *) (u32) (s4 + 4));
    a3 = v0;
    v0 = (s32) 0x650000U;
    a1 = (*(volatile s32 *) (u32) (v0 + 32508));
    a0 = (*(volatile s32 *) (u32) (v1 + 128));
    a2 = (*(volatile s32 *) (u32) (s4 + 600)); func_0063AC30(a0, a1, a2, a3, f12.f);
    v0 = (s32) 0x80000000U;
L_00636D50:;
    if (fp == v0) { v0 = 0; goto L_00636DD0; }
    v0 = (s32) 0x10000000U;
    v0 = fp & v0;
    if (v0 != 0) goto L_00636D78;
    v0 = (s32) 0x8000000U;
    v0 = fp & v0;
    if (v0 == 0) { v0 = (s32) 0x40000000U; goto L_00636D84; }
L_00636D78:;
    v0 = 0;
    goto L_00636DD0;
L_00636D84:;
    if (fp != v0) { v0 = (*(volatile u8 *) (u32) (s6 + 38)); goto L_00636DB4; }
    v1 = (*(volatile u8 *) (u32) (s6 + 19));
    v0 = 255;
    if (v1 != v0) { v0 = (*(volatile u8 *) (u32) (s6 + 38)); goto L_00636DA4; }
    v0 = 0; goto L_00636DD0;
L_00636DA4:;
    if (v0 != 0) { v0 = (s64) ((u64) 0 + (u64) (s64) 2); goto L_00636DD0; }
    v0 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_00636DD0;
L_00636DB4:;
    if (v0 != 0) { v0 = (s64) ((u64) 0 + (u64) (s64) 2); goto L_00636DD0; }
    v1 = (*(volatile u8 *) (u32) (s6 + 31));
    v0 = 1;
    if (v1 != v0) { v0 = v0 & 0xff; goto L_00636DD0; }
    v0 = (s64) ((u64) 0 + (u64) (s64) 3);
L_00636DD0:;
    s0 = v0 & 0xff;
    s3 = 0;
    v0 = (s32) 0x650000U;
    s5 = (s32) ((u32) s0 << 2);
    v0 = (s32) ((u32) v0 + 0x7f00U);
    s1 = s4;
    s2 = (s32) ((u32) v0 + (u32) s5);
L_00636DEC:;
    v0 = (*(volatile s32 *) (u32) (s1 + 588));
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = (*(volatile u8 *) (u32) s2); func_001DF4F0(a0, a1);
    s3 = (s32) ((u32) s3 + 0x1U);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s3 < 4;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00636DEC; }
    v0 = (*(volatile u8 *) (u32) (sp + 160));
    v1 = v0;
    v0 = 14;
    if (v1 != v0) { v0 = (s32) 0x350000U; goto L_00636E2C; }
    v0 = 0; goto L_00636E8C;
L_00636E2C:;
    a0 = v0 | 0xba; v0 = func_001F08B0(a0);
    v1 = (*(volatile u8 *) (u32) (s6 + 18));
    a0 = (s32) 0x660000U;
    a1 = v0;
    a0 = (s32) ((u32) a0 + 0xffffccf0U);
    a2 = (s32) ((u32) v1 + 0x1U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (*(volatile s32 *) (u32) (s4 + 596));
    a1 = (s32) 0x660000U;
    a1 = (s32) ((u32) a1 + 0xffffccf0U); func_0063AD20(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (s4 + 4));
    v0 = (s32) 0x650000U;
    a3 = (s32) 0x660000U;
    a1 = (*(volatile s32 *) (u32) (v0 + 32504));
    a2 = (*(volatile s32 *) (u32) (s4 + 596));
    a0 = (*(volatile s32 *) (u32) (v1 + 128));
    a3 = (s32) ((u32) a3 + 0xffffccf0U); func_0063AC30(a0, a1, a2, a3, f12.f);
    v0 = (s32) 0x650000U;
    v0 = (s32) ((u32) v0 + 0x7f02U);
    v0 = (s32) ((u32) v0 + (u32) s5);
    v0 = (*(volatile u8 *) (u32) v0);
L_00636E8C:;
    a1 = v0 & 0xff;
    v0 = (*(volatile s32 *) (u32) (s4 + 596));
    a0 = (*(volatile s32 *) (u32) (v0 + 12)); func_001DF4F0(a0, a1);
    v0 = (s32) ((u32) s0 << 2);
    s1 = 0;
    v1 = (s32) ((u32) v0 + (u32) s0);
    v0 = (s32) 0x650000U;
    s0 = (s32) 0x650000U;
    v0 = (s32) ((u32) v0 + 0x7f20U);
    s0 = (s32) ((u32) s0 + 0x7f10U);
    s2 = (s32) ((u32) v0 + (u32) v1);
L_00636EBC:;
    v1 = (*(volatile u8 *) (u32) s0);
    v0 = (*(volatile s32 *) (u32) (s4 + 4));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = (*(volatile u8 *) (u32) s2); func_001D7D60(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = s1 < 5;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x1U); if (c_) goto L_00636EBC; }
    return;
}
