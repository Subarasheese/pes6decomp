/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002149D0(s32);
void func_00214A50(s32);
void func_0021DAF0(s32, s32, s32, s32);
void func_0021DBE0(s32);
s32 func_00623200(s32, s32, s32, s32);
s32 func_00623690(s32, s32, s32, s32, s32);
s32 func_006238E0(s32, s32, s32, s32);
void func_00629210(s32);
s32 func_00639BF0(s32);
void func_00639C60(s32, s32);
s32 func_00639CF0(s32);
void func_00639D20(void);
void func_00639DA0(s32);
void func_00639DC0(s32, s32);
s32 func_00639E00(s32);
s32 func_0063A050(s32);
void func_0063A900(void);
s32 func_0063B6C0(void);
void func_0063B6D0(s32);
void func_0063B750(void);
void func_0063D8C0(s32);
void func_0063DBD0(s32, s32, s32, s32);
void func_00645670(s32);
s32 func_00645860(s32);
void func_00651890(s32, s32);
s32 func_00655660(void);
void func_00655760(void);
void func_006557C0(void);
void func_00655D10(void);
void func_00655EE0(s32, s32);

s32 func_0063D030(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;
    s32 hi = 0, lo = 0;

    s3 = a0;
    v0 = (*(volatile u8 *) (u32) (a0 + 24));
    at = (u64) v0 < (u64) (s64) 9;
    { s32 c_ = at == 0; s2 = 0; if (c_) goto L_0063D078; }
    v1 = (s32) 0x660000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffb440U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x63d078U) goto L_0063D078; if (t_ == 0x63d0d8U) goto L_0063D0D8; if (t_ == 0x63d108U) goto L_0063D108; if (t_ == 0x63d1f4U) goto L_0063D1F4; if (t_ == 0x63d244U) goto L_0063D244; if (t_ == 0x63d4acU) goto L_0063D4AC; if (t_ == 0x63d4b4U) goto L_0063D4B4; if (t_ == 0x63d558U) goto L_0063D558; if (t_ == 0x63d890U) goto L_0063D890; }
L_0063D078:;
    a0 = 0; func_0021DBE0(a0);
    v1 = (*(volatile u8 *) (u32) (s3 + 26));
    v0 = 1;
    if (v1 != v0) { v0 = 1; goto L_0063D0D4; }
    a0 = (s32) ((u32) s3 + 0x8U); func_00645670(a0);
    a0 = 10; v0 = func_00645860(a0);
    a0 = v0;
    a1 = 0; func_00655EE0(a0, a1);
    a0 = 95; v0 = func_00645860(a0);
    a0 = v0;
    a1 = 1; func_00655EE0(a0, a1);
    func_006557C0();
    func_00655760();
    v0 = 1;
L_0063D0D4:;
    (*(volatile u8 *) (u32) (s3 + 24)) = (u8) v0;
L_0063D0D8:;
    v1 = (*(volatile u8 *) (u32) (s3 + 26));
    v0 = 1;
    if (v1 != v0) { (*(volatile u8 *) (u32) (s3 + 25)) = (u8) 0; goto L_0063D0FC; }
    v0 = func_00655660();
    if (v0 == 0) { v0 = s2; goto L_0063D89C; }
    (*(volatile u8 *) (u32) (s3 + 25)) = (u8) 0;
L_0063D0FC:;
    v0 = 2;
    (*(volatile u8 *) (u32) (s3 + 24)) = (u8) v0; goto L_0063D898;
L_0063D108:;
    { u32 a_ = (u32) (s3 + 8); u32 s_ = 8 * (a_ & 3); u32 w_ = *(volatile u32 *) (a_ & ~3U); u32 m_ = 0xFFFFFFFFU >> s_; a0 = (s32) (((u32) a0 & ~m_) | (w_ >> s_)); }
    { u32 a_ = (u32) (s3 + 11); u32 s_ = 24 - 8 * (a_ & 3); u32 w_ = *(volatile u32 *) (a_ & ~3U); a0 = (s32) ((w_ << s_) | ((u32) a0 & ((1U << s_) - 1))); } v0 = func_006238E0(a0, a1, a2, a3);
    v1 = 1;
    if (v0 != v1) goto L_0063D898;
    a0 = 0; func_00629210(a0);
    a0 = 254;
    a1 = 255; func_00651890(a0, a1);
    a0 = (*(volatile s16 *) (u32) (s3 + 8));
    v1 = (s32) 0x660000U;
    a1 = (*(volatile s16 *) (u32) (s3 + 10));
    v1 = (s32) ((u32) v1 + 0xffffc090U);
    v0 = 1;
    a0 = (s32) ((u32) a0 << 2);
    a0 = (s32) ((u32) a1 + (u32) a0);
    a1 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (*(volatile s32 *) (u32) v1);
    if (v1 == v0) { v0 = -126; goto L_0063D174; }
    a0 = 3;
    if (v1 != a0) goto L_0063D18C;
    v0 = -126;
L_0063D174:;
    v1 = 2;
    (*(volatile u32 *) (u32) s3) = (u32) v0;
    v0 = 8;
    (*(volatile u32 *) (u32) (s3 + 4)) = (u32) v1;
    (*(volatile u8 *) (u32) (s3 + 24)) = (u8) v0; goto L_0063D1E0;
L_0063D18C:;
    if (v1 != 0) goto L_0063D1AC;
    v1 = -127;
    v0 = 8;
    (*(volatile u32 *) (u32) s3) = (u32) v1;
    (*(volatile u32 *) (u32) (s3 + 4)) = (u32) a0;
    (*(volatile u8 *) (u32) (s3 + 24)) = (u8) v0; goto L_0063D1E0;
L_0063D1AC:;
    v1 = (s32) 0x660000U;
    v0 = 2;
    v1 = (s32) ((u32) v1 + 0xffffc094U);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (*(volatile s32 *) (u32) v1);
    if (v1 != v0) { (*(volatile u8 *) (u32) (s3 + 24)) = (u8) a0; goto L_0063D1E0; }
    v0 = -124;
    v1 = 4;
    (*(volatile u32 *) (u32) s3) = (u32) v0;
    v0 = 8;
    (*(volatile u32 *) (u32) (s3 + 4)) = (u32) v1;
    (*(volatile u8 *) (u32) (s3 + 24)) = (u8) v0;
L_0063D1E0:;
    a0 = (s32) 0x660000U;
    a0 = (s32) ((u32) a0 + 0xffffc0e0U); func_0021DAF0(a0, a1, a2, a3);
    goto L_0063D898;
L_0063D1F4:;
    v1 = (*(volatile u8 *) (u32) (s3 + 26));
    v0 = 1;
    if (v1 != v0) { v0 = 4; goto L_0063D240; }
    a0 = 22; v0 = func_00645860(a0);
    a0 = v0;
    a1 = 0; func_00655EE0(a0, a1);
    a0 = 95; v0 = func_00645860(a0);
    a0 = v0;
    a1 = 1; func_00655EE0(a0, a1);
    a0 = 1; func_00655D10();
    func_006557C0();
    v0 = 4;
L_0063D240:;
    (*(volatile u8 *) (u32) (s3 + 24)) = (u8) v0;
L_0063D244:;
    a0 = 1; v0 = func_0063A050(a0);
    { u32 a_ = (u32) (s3 + 8); u32 s_ = 8 * (a_ & 3); u32 w_ = *(volatile u32 *) (a_ & ~3U); u32 m_ = 0xFFFFFFFFU >> s_; a1 = (s32) (((u32) a1 & ~m_) | (w_ >> s_)); }
    a2 = (s32) 0x660000U;
    a0 = v0;
    a2 = (s32) ((u32) a2 + 0xffffc0e0U);
    { u32 a_ = (u32) (s3 + 11); u32 s_ = 24 - 8 * (a_ & 3); u32 w_ = *(volatile u32 *) (a_ & ~3U); a1 = (s32) ((w_ << s_) | ((u32) a1 & ((1U << s_) - 1))); }
    a3 = 0; v0 = func_00623200(a0, a1, a2, a3);
    { s32 c_ = v0 == 0; (*(volatile u32 *) (u32) s3) = (u32) v0; if (c_) goto L_0063D898; }
    v1 = 1;
    if (v0 == v1) goto L_0063D43C;
    v1 = -119;
    if (v0 == v1) { (*(volatile u32 *) (u32) (s3 + 12)) = (u32) 0; goto L_0063D430; }
    v1 = -122;
    if (v0 == v1) { (*(volatile u8 *) (u32) (gp + -21832)) = (u8) 0; goto L_0063D384; }
    v1 = -118;
    if (v0 == v1) goto L_0063D380;
    v1 = -124;
    if (v0 == v1) { v1 = 1; goto L_0063D2DC; }
    v1 = -125;
    if (v0 == v1) goto L_0063D2D8;
    v1 = -126;
    if (v0 == v1) goto L_0063D2D8;
    v1 = -127;
    if (v0 == v1) goto L_0063D2D8;
    goto L_0063D380;
L_0063D2D8:;
    v1 = 1;
L_0063D2DC:;
    { s32 c_ = v0 == v1; (*(volatile u32 *) (u32) s3) = (u32) v0; if (c_) goto L_0063D374; }
    v1 = -119;
    if (v0 == v1) { v0 = 8; goto L_0063D378; }
    v1 = -122;
    if (v0 == v1) { v0 = 7; goto L_0063D370; }
    v1 = -123;
    if (v0 == v1) goto L_0063D36C;
    v1 = -118;
    if (v0 == v1) goto L_0063D36C;
    v1 = -124;
    if (v0 == v1) { v0 = 4; goto L_0063D364; }
    v1 = -125;
    if (v0 == v1) { v0 = 6; goto L_0063D35C; }
    v1 = -126;
    if (v0 == v1) { v0 = 2; goto L_0063D354; }
    v1 = -127;
    if (v0 == v1) { v0 = 3; goto L_0063D34C; }
    goto L_0063D374;
L_0063D34C:;
    (*(volatile u32 *) (u32) (s3 + 4)) = (u32) v0; goto L_0063D374;
L_0063D354:;
    (*(volatile u32 *) (u32) (s3 + 4)) = (u32) v0; goto L_0063D374;
L_0063D35C:;
    (*(volatile u32 *) (u32) (s3 + 4)) = (u32) v0; goto L_0063D374;
L_0063D364:;
    (*(volatile u32 *) (u32) (s3 + 4)) = (u32) v0; goto L_0063D374;
L_0063D36C:;
    v0 = 7;
L_0063D370:;
    (*(volatile u32 *) (u32) (s3 + 4)) = (u32) v0;
L_0063D374:;
    v0 = 8;
L_0063D378:;
    (*(volatile u8 *) (u32) (s3 + 24)) = (u8) v0; goto L_0063D498;
L_0063D380:;
    (*(volatile u8 *) (u32) (gp + -21832)) = (u8) 0;
L_0063D384:;
    v0 = 1;
    v1 = (*(volatile s32 *) (u32) s3);
    { s32 c_ = v1 == v0; (*(volatile u32 *) (u32) s3) = (u32) v1; if (c_) goto L_0063D424; }
    v0 = -119;
    if (v1 == v0) { v0 = 8; goto L_0063D428; }
    v0 = -122;
    if (v1 == v0) { v0 = 7; goto L_0063D420; }
    v0 = -123;
    if (v1 == v0) goto L_0063D41C;
    v0 = -118;
    if (v1 == v0) goto L_0063D41C;
    v0 = -124;
    if (v1 == v0) { v0 = 4; goto L_0063D414; }
    v0 = -125;
    if (v1 == v0) { v0 = 6; goto L_0063D40C; }
    v0 = -126;
    if (v1 == v0) { v0 = 2; goto L_0063D404; }
    v0 = -127;
    if (v1 == v0) { v0 = 3; goto L_0063D3FC; }
    goto L_0063D424;
L_0063D3FC:;
    (*(volatile u32 *) (u32) (s3 + 4)) = (u32) v0; goto L_0063D424;
L_0063D404:;
    (*(volatile u32 *) (u32) (s3 + 4)) = (u32) v0; goto L_0063D424;
L_0063D40C:;
    (*(volatile u32 *) (u32) (s3 + 4)) = (u32) v0; goto L_0063D424;
L_0063D414:;
    (*(volatile u32 *) (u32) (s3 + 4)) = (u32) v0; goto L_0063D424;
L_0063D41C:;
    v0 = 7;
L_0063D420:;
    (*(volatile u32 *) (u32) (s3 + 4)) = (u32) v0;
L_0063D424:;
    v0 = 8;
L_0063D428:;
    (*(volatile u8 *) (u32) (s3 + 24)) = (u8) v0; goto L_0063D498;
L_0063D430:;
    v0 = 6;
    (*(volatile u8 *) (u32) (s3 + 24)) = (u8) v0; goto L_0063D498;
L_0063D43C:;
    v0 = (s32) 0x660000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -16156));
    (*(volatile u32 *) (u32) (s3 + 12)) = (u32) v0; func_00639D20();
    v0 = (*(volatile s32 *) (u32) (s3 + 12));
    { s32 c_ = v0 <= 0; s1 = 0; if (c_) goto L_0063D488; }
    s0 = 0;
L_0063D45C:;
    v0 = (s32) 0x660000U;
    a0 = s1;
    v0 = (*(volatile s32 *) (u32) (v0 + -16152));
    v0 = (s32) ((u32) v0 + (u32) s0);
    a1 = (s32) ((u32) v0 + 0x20U); func_00639C60(a0, a1);
    v0 = (*(volatile s32 *) (u32) (s3 + 12));
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < v0;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x40U); if (c_) goto L_0063D45C; }
L_0063D488:;
    v0 = 5;
    (*(volatile u8 *) (u32) (s3 + 24)) = (u8) v0;
    a0 = s3; func_0063DBD0(a0, a1, a2, a3);
L_0063D498:;
    a0 = (s32) 0x660000U;
    a0 = (s32) ((u32) a0 + 0xffffc0e0U); func_0021DAF0(a0, a1, a2, a3);
    goto L_0063D898;
L_0063D4AC:;
    v0 = 6;
    (*(volatile u8 *) (u32) (s3 + 24)) = (u8) v0;
L_0063D4B4:;
    a1 = (*(volatile s32 *) (u32) (s3 + 16));
    v0 = (*(volatile s32 *) (u32) (s3 + 12));
    at = a1 < v0;
    if (at == 0) goto L_0063D4F8;
    a0 = 7; func_00639DC0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s3 + 16)); v0 = func_00639CF0(a0);
    a0 = v0; func_00639DA0(a0);
    a0 = (s32) 0x650000U;
    a0 = (s32) ((u32) a0 + 0x6e00U); func_00214A50(a0);
    v0 = 7;
    (*(volatile u8 *) (u32) (s3 + 24)) = (u8) v0; goto L_0063D898;
L_0063D4F8:;
    func_0063A900();
    { u32 a_ = (u32) (s3 + 8); u32 s_ = 8 * (a_ & 3); u32 w_ = *(volatile u32 *) (a_ & ~3U); u32 m_ = 0xFFFFFFFFU >> s_; a0 = (s32) (((u32) a0 & ~m_) | (w_ >> s_)); }
    { u32 a_ = (u32) (s3 + 11); u32 s_ = 24 - 8 * (a_ & 3); u32 w_ = *(volatile u32 *) (a_ & ~3U); a0 = (s32) ((w_ << s_) | ((u32) a0 & ((1U << s_) - 1))); } func_002149D0(a0);
    v0 = 1;
    (*(volatile u8 *) (u32) (gp + -21832)) = (u8) v0; func_0063B750();
    v1 = (*(volatile u8 *) (u32) (s3 + 26));
    v0 = 1;
    if (v1 != v0) { a0 = 1; goto L_0063D534; }
    a0 = 0; func_00655D10();
    a0 = 1;
L_0063D534:;
    func_0021DBE0(a0);
    a0 = 0; func_00214A50(a0);
    v1 = 1;
    v0 = 8;
    (*(volatile u32 *) (u32) (s3 + 4)) = (u32) v1;
    (*(volatile u8 *) (u32) (s3 + 24)) = (u8) v0; goto L_0063D898;
L_0063D558:;
    a0 = 7; v0 = func_00639E00(a0);
    { u32 a_ = (u32) (s3 + 8); u32 s_ = 8 * (a_ & 3); u32 w_ = *(volatile u32 *) (a_ & ~3U); u32 m_ = 0xFFFFFFFFU >> s_; a1 = (s32) (((u32) a1 & ~m_) | (w_ >> s_)); }
    a2 = (s32) 0x660000U;
    a0 = v0;
    a2 = (s32) ((u32) a2 + 0xffffc0e0U);
    a3 = 0;
    { u32 a_ = (u32) (s3 + 11); u32 s_ = 24 - 8 * (a_ & 3); u32 w_ = *(volatile u32 *) (a_ & ~3U); a1 = (s32) ((w_ << s_) | ((u32) a1 & ((1U << s_) - 1))); }
    a4 = 1; v0 = func_00623690(a0, a1, a2, a3, a4);
    (*(volatile u32 *) (u32) s3) = (u32) v0;
    v1 = (*(volatile s32 *) (u32) (s3 + 16));
    v0 = (*(volatile u16 *) (u32) (s3 + 20));
    v1 = (s32) ((u32) v1 + 0x1U);
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); s0 = lo; } v0 = func_0063B6C0();
    v1 = s0 & 0xffff;
    at = v1 < v0;
    if (at == 0) { v1 = (*(volatile s32 *) (u32) s3); goto L_0063D5B4; }
    a0 = s0; func_0063B6D0(a0);
    v1 = (*(volatile s32 *) (u32) s3);
L_0063D5B4:;
    if (v1 == 0) goto L_0063D898;
    v0 = 1;
    if (v1 == v0) { a0 = s3; goto L_0063D83C; }
    v0 = -120;
    if (v1 == v0) { a0 = (*(volatile s32 *) (u32) (s3 + 16)); goto L_0063D7A4; }
    v0 = -119;
    if (v1 == v0) goto L_0063D7A0;
    v0 = -122;
    if (v1 == v0) { (*(volatile u32 *) (u32) (s3 + 16)) = (u32) 0; goto L_0063D6F0; }
    v0 = -123;
    if (v1 == v0) goto L_0063D6EC;
    v0 = -118;
    if (v1 == v0) goto L_0063D6EC;
    v0 = -124;
    if (v1 == v0) { v0 = 1; goto L_0063D648; }
    v0 = -125;
    if (v1 == v0) goto L_0063D644;
    v0 = -126;
    if (v1 == v0) goto L_0063D644;
    v0 = -127;
    if (v1 == v0) goto L_0063D644;
    if (v1 == 0) { v1 = (*(volatile u8 *) (u32) (s3 + 24)); goto L_0063D850; }
    goto L_0063D6EC;
L_0063D644:;
    v0 = 1;
L_0063D648:;
    { s32 c_ = v1 == v0; (*(volatile u32 *) (u32) s3) = (u32) v1; if (c_) goto L_0063D6E0; }
    v0 = -119;
    if (v1 == v0) { v0 = 8; goto L_0063D6E4; }
    v0 = -122;
    if (v1 == v0) { v0 = 7; goto L_0063D6DC; }
    v0 = -123;
    if (v1 == v0) goto L_0063D6D8;
    v0 = -118;
    if (v1 == v0) goto L_0063D6D8;
    v0 = -124;
    if (v1 == v0) { v0 = 4; goto L_0063D6D0; }
    v0 = -125;
    if (v1 == v0) { v0 = 6; goto L_0063D6C8; }
    v0 = -126;
    if (v1 == v0) { v0 = 2; goto L_0063D6C0; }
    v0 = -127;
    if (v1 == v0) { v0 = 3; goto L_0063D6B8; }
    goto L_0063D6E0;
L_0063D6B8:;
    (*(volatile u32 *) (u32) (s3 + 4)) = (u32) v0; goto L_0063D6E0;
L_0063D6C0:;
    (*(volatile u32 *) (u32) (s3 + 4)) = (u32) v0; goto L_0063D6E0;
L_0063D6C8:;
    (*(volatile u32 *) (u32) (s3 + 4)) = (u32) v0; goto L_0063D6E0;
L_0063D6D0:;
    (*(volatile u32 *) (u32) (s3 + 4)) = (u32) v0; goto L_0063D6E0;
L_0063D6D8:;
    v0 = 7;
L_0063D6DC:;
    (*(volatile u32 *) (u32) (s3 + 4)) = (u32) v0;
L_0063D6E0:;
    v0 = 8;
L_0063D6E4:;
    (*(volatile u8 *) (u32) (s3 + 24)) = (u8) v0; goto L_0063D84C;
L_0063D6EC:;
    (*(volatile u32 *) (u32) (s3 + 16)) = (u32) 0;
L_0063D6F0:;
    v0 = 1;
    (*(volatile u8 *) (u32) (gp + -21832)) = (u8) 0;
    v1 = (*(volatile s32 *) (u32) s3);
    { s32 c_ = v1 == v0; (*(volatile u32 *) (u32) s3) = (u32) v1; if (c_) goto L_0063D794; }
    v0 = -119;
    if (v1 == v0) { v0 = 8; goto L_0063D798; }
    v0 = -122;
    if (v1 == v0) { v0 = 7; goto L_0063D790; }
    v0 = -123;
    if (v1 == v0) goto L_0063D78C;
    v0 = -118;
    if (v1 == v0) goto L_0063D78C;
    v0 = -124;
    if (v1 == v0) { v0 = 4; goto L_0063D784; }
    v0 = -125;
    if (v1 == v0) { v0 = 6; goto L_0063D77C; }
    v0 = -126;
    if (v1 == v0) { v0 = 2; goto L_0063D774; }
    v0 = -127;
    if (v1 == v0) { v0 = 3; goto L_0063D76C; }
    goto L_0063D794;
L_0063D76C:;
    (*(volatile u32 *) (u32) (s3 + 4)) = (u32) v0; goto L_0063D794;
L_0063D774:;
    (*(volatile u32 *) (u32) (s3 + 4)) = (u32) v0; goto L_0063D794;
L_0063D77C:;
    (*(volatile u32 *) (u32) (s3 + 4)) = (u32) v0; goto L_0063D794;
L_0063D784:;
    (*(volatile u32 *) (u32) (s3 + 4)) = (u32) v0; goto L_0063D794;
L_0063D78C:;
    v0 = 7;
L_0063D790:;
    (*(volatile u32 *) (u32) (s3 + 4)) = (u32) v0;
L_0063D794:;
    v0 = 8;
L_0063D798:;
    (*(volatile u8 *) (u32) (s3 + 24)) = (u8) v0; goto L_0063D84C;
L_0063D7A0:;
    a0 = (*(volatile s32 *) (u32) (s3 + 16));
L_0063D7A4:;
    v0 = func_00639BF0(a0);
    if (v0 < 0) goto L_0063D7F0;
    at = v0 < 36;
    if (at == 0) goto L_0063D7F0;
    { s32 c_ = v0 < 0; a0 = 0; if (c_) goto L_0063D7E8; }
    at = v0 < 36;
    if (at == 0) { v1 = 13; goto L_0063D7EC; }
    v1 = (s32) ((u32) v0 << 2);
    a0 = (*(volatile s32 *) (u32) (gp + -20972));
    v1 = (s32) ((u32) v1 + (u32) v0);
    v1 = (s32) ((u32) v1 << 10);
    a0 = (s32) ((u32) a0 + (u32) v1);
L_0063D7E8:;
    v1 = 13;
L_0063D7EC:;
    (*(volatile u8 *) (u32) (a0 + 12)) = (u8) v1;
L_0063D7F0:;
    if (v0 < 0) { v0 = (*(volatile s32 *) (u32) (s3 + 16)); goto L_0063D81C; }
    at = v0 < 36;
    if (at == 0) goto L_0063D818;
    v1 = (s32) 0x660000U;
    a0 = 13;
    v1 = (s32) ((u32) v1 + 0xffffd870U);
    v0 = (s32) ((u32) v1 + (u32) v0);
    (*(volatile u8 *) (u32) v0) = (u8) a0;
L_0063D818:;
    v0 = (*(volatile s32 *) (u32) (s3 + 16));
L_0063D81C:;
    v1 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (s3 + 16)) = (u32) v1;
    v0 = (*(volatile u16 *) (u32) (s3 + 20));
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; } func_0063B6D0(a0);
    v0 = 6;
    (*(volatile u8 *) (u32) (s3 + 24)) = (u8) v0; goto L_0063D84C;
L_0063D83C:;
    func_0063D8C0(a0);
    v0 = 6;
    (*(volatile u8 *) (u32) (s3 + 24)) = (u8) v0;
L_0063D84C:;
    v1 = (*(volatile u8 *) (u32) (s3 + 24));
L_0063D850:;
    v0 = 7;
    if (v1 == v0) goto L_0063D898;
    v0 = 6;
    if (v1 == v0) goto L_0063D898;
    func_0063B750();
    v1 = (*(volatile u8 *) (u32) (s3 + 26));
    v0 = 1;
    if (v1 != v0) goto L_0063D898;
    a0 = 0; func_00655D10();
    goto L_0063D898;
L_0063D890:;
    (*(volatile u8 *) (u32) (s3 + 24)) = (u8) 0;
    s2 = 1;
L_0063D898:;
    v0 = s2;
L_0063D89C:;
    return v0;
}
