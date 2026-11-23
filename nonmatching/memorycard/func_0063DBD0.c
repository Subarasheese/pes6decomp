/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00214A10(s64);
s64 func_00639B90(s64);
void func_00639BC0(s64, s64);
s64 func_00639BF0(s64);
void func_0063B690(s64);
s64 func_0063B6A0(s64);
void func_0063B750(void);
s64 func_0063B780(s64, s64, s64);
void func_00650A00(s64, s64);
void func_00650F50(s64, s64, s64, s64);

void func_0063DBD0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 gp = 0x3ef370;
    s64 hi = 0, lo = 0;

    v0 = 1;
    v1 = (*(volatile u8 *) (u32) (gp + -21832));
    { s32 c_ = v1 != v0; s3 = a0; if (c_) goto L_0063DC0C; }
    { u32 a_ = (u32) (s3 + 8); u32 s_ = 8 * (a_ & 3); u32 w_ = *(volatile u32 *) (a_ & ~3U); u32 m_ = 0xFFFFFFFFU >> s_; a0 = (s32) (((u32) a0 & ~m_) | (w_ >> s_)); }
    { u32 a_ = (u32) (s3 + 11); u32 s_ = 24 - 8 * (a_ & 3); u32 w_ = *(volatile u32 *) (a_ & ~3U); a0 = (s32) ((w_ << s_) | ((u32) a0 & ((1U << s_) - 1))); } v0 = func_00214A10(a0);
    if (v0 == 0) { v0 = (*(volatile s32 *) (u32) (s3 + 12)); goto L_0063DC14; }
L_0063DC0C:;
    (*(volatile u8 *) (u32) (gp + -21832)) = (u8) 0;
    v0 = (*(volatile s32 *) (u32) (s3 + 12));
L_0063DC14:;
    at = v0 < 37;
    if (at != 0) goto L_0063DC28;
    v0 = 36;
    (*(volatile u32 *) (u32) (s3 + 12)) = (u32) v0;
L_0063DC28:;
    func_0063B750();
    a0 = (s32) ((u32) s3 + 0x8U);
    a1 = 127;
    a2 = 6; v0 = func_0063B780(a0, a1, a2);
    a0 = v0 & 0xff; v0 = func_0063B6A0(a0);
    (*(volatile u16 *) (u32) (s3 + 20)) = (u16) v0;
    v1 = (*(volatile u16 *) (u32) (s3 + 20));
    v0 = (*(volatile s32 *) (u32) (s3 + 12));
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    a0 = v0 & 0xffff; func_0063B690(a0);
    a1 = (s32) 0x660000U;
    a2 = 0;
    a1 = (s32) ((u32) a1 + 0xffffd870U);
    a0 = 14;
L_0063DC70:;
    (*(volatile u8 *) (u32) a1) = (u8) a0;
    a2 = (s32) ((u32) a2 + 0x6U);
    (*(volatile u8 *) (u32) (a1 + 1)) = (u8) a0;
    v1 = a2 < 36;
    (*(volatile u8 *) (u32) (a1 + 2)) = (u8) a0;
    (*(volatile u8 *) (u32) (a1 + 3)) = (u8) a0;
    (*(volatile u8 *) (u32) (a1 + 4)) = (u8) a0;
    (*(volatile u8 *) (u32) (a1 + 5)) = (u8) a0;
    { s32 c_ = v1 != 0; a1 = (s32) ((u32) a1 + 0x6U); if (c_) goto L_0063DC70; }
    a1 = (*(volatile s32 *) (u32) (s3 + 12));
    { s32 c_ = a1 <= 0; s2 = 0; if (c_) goto L_0063DFB0; }
    s0 = 0;
L_0063DCA8:;
    a0 = s2; v0 = func_00639B90(a0);
    if (v0 == 0) goto L_0063DD18;
    v1 = (*(volatile u8 *) (u32) (gp + -21832));
    v0 = 1;
    { s32 c_ = v1 != v0; s1 = 35; if (c_) goto L_0063DCE8; }
    a0 = (*(volatile s32 *) (u32) (gp + -20972));
    v1 = (s32) 0x30000U;
    v0 = (s32) 0x660000U;
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = (*(volatile u8 *) (u32) (v1 + -17396));
    (*(volatile u8 *) (u32) (v0 + -10093)) = (u8) v1; goto L_0063DCF0;
L_0063DCE8:;
    v0 = (s32) 0x660000U;
    (*(volatile u8 *) (u32) (v0 + -10093)) = (u8) 0;
L_0063DCF0:;
    v0 = (s32) 0x660000U;
    v1 = (*(volatile s32 *) (u32) (v0 + -16016));
    v0 = (s32) 0x660000U;
    a0 = (s32) ((u32) v1 + 0x118U);
    v0 = (*(volatile s32 *) (u32) (v0 + -16152));
    a1 = (s32) ((u32) v0 + (u32) s0); func_00650A00(a0, a1);
    goto L_0063DF88;
L_0063DD18:;
    a0 = s2; v0 = func_00639BF0(a0);
    v1 = (*(volatile u8 *) (u32) (gp + -21832));
    s1 = v0;
    v0 = 1;
    if (v1 != v0) goto L_0063DED8;
    { s32 c_ = s1 < 0; v1 = (s64) ((u64) 0 + (u64) (s64) 14); if (c_) goto L_0063DD78; }
    at = s1 < 36;
    if (at == 0) goto L_0063DD78;
    { s32 c_ = s1 < 0; v0 = 0; if (c_) goto L_0063DD70; }
    at = s1 < 36;
    if (at == 0) goto L_0063DD70;
    v0 = (s32) ((u32) s1 << 2);
    v1 = (*(volatile s32 *) (u32) (gp + -20972));
    v0 = (s32) ((u32) v0 + (u32) s1);
    v0 = (s32) ((u32) v0 << 10);
    v0 = (s32) ((u32) v1 + (u32) v0);
L_0063DD70:;
    v1 = (*(volatile u8 *) (u32) (v0 + 12));
L_0063DD78:;
    if (s1 < 0) goto L_0063DDA0;
    at = s1 < 36;
    if (at == 0) goto L_0063DDA0;
    v0 = (s32) 0x660000U;
    v0 = (s32) ((u32) v0 + 0xffffd870U);
    v0 = (s32) ((u32) v0 + (u32) s1);
    (*(volatile u8 *) (u32) v0) = (u8) v1;
L_0063DDA0:;
    { s32 c_ = s1 < 0; v0 = (s64) ((u64) 0 + (u64) (s64) 14); if (c_) goto L_0063DDC8; }
    at = s1 < 36;
    if (at == 0) goto L_0063DDC8;
    v0 = (s32) 0x660000U;
    v0 = (s32) ((u32) v0 + 0xffffd870U);
    v0 = (s32) ((u32) v0 + (u32) s1);
    v0 = (*(volatile u8 *) (u32) v0);
L_0063DDC8:;
    v0 = v0 & 0xff;
    v0 = v0 < 16;
    if (v0 != 0) goto L_0063DE00;
    if (s1 < 0) goto L_0063DE00;
    at = s1 < 36;
    if (at == 0) goto L_0063DE00;
    v0 = (s32) 0x660000U;
    v1 = 13;
    v0 = (s32) ((u32) v0 + 0xffffd870U);
    v0 = (s32) ((u32) v0 + (u32) s1);
    (*(volatile u8 *) (u32) v0) = (u8) v1;
L_0063DE00:;
    { s32 c_ = s1 < 0; v0 = (s64) ((u64) 0 + (u64) (s64) 14); if (c_) goto L_0063DE28; }
    at = s1 < 36;
    if (at == 0) goto L_0063DE28;
    v0 = (s32) 0x660000U;
    v0 = (s32) ((u32) v0 + 0xffffd870U);
    v0 = (s32) ((u32) v0 + (u32) s1);
    v0 = (*(volatile u8 *) (u32) v0);
L_0063DE28:;
    v0 = v0 & 0xff;
    if (v0 != 0) goto L_0063DE68;
    at = s1 < 35;
    if (at == 0) goto L_0063DE68;
    if (s1 < 0) goto L_0063DE68;
    at = s1 < 36;
    if (at == 0) goto L_0063DE68;
    v0 = (s32) 0x660000U;
    v1 = 13;
    v0 = (s32) ((u32) v0 + 0xffffd870U);
    v0 = (s32) ((u32) v0 + (u32) s1);
    (*(volatile u8 *) (u32) v0) = (u8) v1;
L_0063DE68:;
    { s32 c_ = s1 < 0; a0 = (s64) ((u64) 0 + (u64) (s64) 14); if (c_) goto L_0063DE90; }
    at = s1 < 36;
    if (at == 0) goto L_0063DE90;
    v0 = (s32) 0x660000U;
    v0 = (s32) ((u32) v0 + 0xffffd870U);
    v0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile u8 *) (u32) v0);
L_0063DE90:;
    if (s1 < 0) goto L_0063DED8;
    at = s1 < 36;
    if (at == 0) goto L_0063DED8;
    { s32 c_ = s1 < 0; v0 = 0; if (c_) goto L_0063DED0; }
    at = s1 < 36;
    if (at == 0) goto L_0063DED0;
    v0 = (s32) ((u32) s1 << 2);
    v1 = (*(volatile s32 *) (u32) (gp + -20972));
    v0 = (s32) ((u32) v0 + (u32) s1);
    v0 = (s32) ((u32) v0 << 10);
    v0 = (s32) ((u32) v1 + (u32) v0);
L_0063DED0:;
    (*(volatile u8 *) (u32) (v0 + 12)) = (u8) a0;
L_0063DED8:;
    { s32 c_ = s1 < 0; v0 = (s64) ((u64) 0 + (u64) (s64) 14); if (c_) goto L_0063DF00; }
    at = s1 < 36;
    if (at == 0) goto L_0063DF00;
    v0 = (s32) 0x660000U;
    v0 = (s32) ((u32) v0 + 0xffffd870U);
    v0 = (s32) ((u32) v0 + (u32) s1);
    v0 = (*(volatile u8 *) (u32) v0);
L_0063DF00:;
    v1 = v0 & 0xff;
    v0 = 14;
    if (v1 == v0) goto L_0063DF88;
    { s32 c_ = s1 < 0; v0 = v0 & 0xff; if (c_) goto L_0063DF38; }
    at = s1 < 36;
    if (at == 0) goto L_0063DF38;
    v0 = (s32) 0x660000U;
    v0 = (s32) ((u32) v0 + 0xffffd870U);
    v0 = (s32) ((u32) v0 + (u32) s1);
    v0 = (*(volatile u8 *) (u32) v0);
L_0063DF38:;
    v1 = v0 & 0xff;
    v0 = 13;
    if (v1 == v0) goto L_0063DF88;
    { s32 c_ = s1 < 0; a1 = 0; if (c_) goto L_0063DF70; }
    at = s1 < 36;
    if (at == 0) goto L_0063DF70;
    v0 = (s32) ((u32) s1 << 2);
    v1 = (*(volatile s32 *) (u32) (gp + -20972));
    v0 = (s32) ((u32) v0 + (u32) s1);
    v0 = (s32) ((u32) v0 << 10);
    a1 = (s32) ((u32) v1 + (u32) v0);
L_0063DF70:;
    v0 = (s32) 0x660000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -16016));
    v1 = (s32) ((u32) s1 << 3);
    a0 = (s32) ((u32) v0 + (u32) v1); func_00650F50(a0, a1, a2, a3);
L_0063DF88:;
    a1 = (s64) ((u64) s1 << 56);
    a1 = a1 >> 56;
    a0 = s2; func_00639BC0(a0, a1);
    a1 = (*(volatile s32 *) (u32) (s3 + 12));
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = s2 < a1;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x40U); if (c_) goto L_0063DCA8; }
L_0063DFB0:;
    a0 = (*(volatile u8 *) (u32) (gp + -21832));
    v1 = 1;
    if (a0 != v1) { (*(volatile u32 *) (u32) (s3 + 16)) = (u32) 0; goto L_0063DFC8; }
    (*(volatile u32 *) (u32) (s3 + 16)) = (u32) a1; goto L_0063E018;
L_0063DFC8:;
    v1 = 255;
    (*(volatile u8 *) (u32) (gp + -21776)) = (u8) v1;
    a2 = 0;
    a0 = 14;
L_0063DFD8:;
    { s32 c_ = a2 < 0; v1 = 0; if (c_) goto L_0063E000; }
    at = a2 < 36;
    if (at == 0) goto L_0063E000;
    v1 = (s32) ((u32) a2 << 2);
    a1 = (*(volatile s32 *) (u32) (gp + -20972));
    v1 = (s32) ((u32) v1 + (u32) a2);
    v1 = (s32) ((u32) v1 << 10);
    v1 = (s32) ((u32) a1 + (u32) v1);
L_0063E000:;
    (*(volatile u8 *) (u32) (v1 + 12)) = (u8) a0;
    a2 = (s32) ((u32) a2 + 0x1U);
    v1 = a2 < 36;
    if (v1 != 0) goto L_0063DFD8;
L_0063E018:;
    return;
}
