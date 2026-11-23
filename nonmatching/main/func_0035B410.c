/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Vsync_GetFieldCount(void);
void func_001D76B0(s64, s64);
void func_001D7C20(s64, s64, s64, s64);
void func_001D7D60(s64, s64);
void func_001DF420(s64, s64);
void func_001DF4F0(s64, s64);
void func_001ED8F0(s64, s64);
void func_001EDAE0(s64, s64);
s64 func_002D55B0(s64);
void func_002D5630(s64, s64);
s64 func_002D5870(s64);
s64 func_002D58A0(s64);
s64 func_002F9630(s64);
s64 func_002F96F0(s64, s64);
s64 func_0035A260(void);
s64 func_0035B9D0(s64, s64, s64, s64);
s64 func_0035BA20(s64, s64, s64, s64);
s64 func_0035BA90(void);
s64 func_0035BB60(void);
s64 func_0035BD70(void);
s64 func_0035C080(void);
s64 func_0035C380(void);

s64 func_0035B410(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 gp = 0x3ef370;
    s64 hi = 0, lo = 0;

    v1 = (s32) ((u32) gp + 0xffffac54U);
    v0 = 24;
    a0 = (*(volatile s32 *) (u32) (gp + -21424));
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    s0 = (*(volatile s32 *) (u32) (v1 + 604));
    { s32 c_ = s0 == v0; s1 = 0; if (c_) goto L_0035B774; }
    v0 = 23;
    if (s0 == v0) { a0 = (s32) ((u32) v1 + 0x8U); goto L_0035B74C; }
    v0 = 22;
    if (s0 == v0) goto L_0035B730;
    v0 = 21;
    if (s0 == v0) goto L_0035B6D8;
    a1 = 20;
    if (s0 == a1) goto L_0035B6BC;
    v0 = 10;
    if (s0 == v0) { s0 = a1; goto L_0035B868; }
    v0 = 9;
    if (s0 == v0) goto L_0035B688;
    v0 = 8;
    if (s0 == v0) { a0 = (s32) ((u32) v1 + 0x264U); goto L_0035B654; }
    v0 = 7;
    if (s0 == v0) goto L_0035B620;
    v0 = 6;
    if (s0 == v0) { a0 = (*(volatile s32 *) (u32) v1); goto L_0035B5C0; }
    v0 = 5;
    if (s0 == v0) { a0 = (s32) ((u32) v1 + 0x264U); goto L_0035B594; }
    v0 = 4;
    if (s0 == v0) goto L_0035B558;
    v0 = 3;
    if (s0 == v0) goto L_0035B53C;
    v0 = 2;
    if (s0 == v0) goto L_0035B520;
    v0 = 1;
    if (s0 == v0) goto L_0035B504;
    if (s0 == 0) { s0 = (s32) ((u32) s0 + 0x1U); goto L_0035B504; }
    s1 = v0; goto L_0035B868;
L_0035B504:;
    v0 = func_0035C380();
    v1 = 1;
    if (v0 != v1) { v0 = (*(volatile s32 *) (u32) (gp + -21424)); goto L_0035B86C; }
    s0 = (s32) ((u32) s0 + 0x1U); goto L_0035B868;
L_0035B520:;
    v0 = func_0035C080();
    v1 = 1;
    if (v0 != v1) goto L_0035B868;
    s0 = (s32) ((u32) s0 + 0x1U); goto L_0035B868;
L_0035B53C:;
    v0 = func_0035BD70();
    v1 = 1;
    if (v0 != v1) goto L_0035B868;
    s0 = (s32) ((u32) s0 + 0x1U); goto L_0035B868;
L_0035B558:;
    v0 = func_0035A260();
    if (v0 == 0) { v1 = (*(volatile s32 *) (u32) (gp + -21424)); goto L_0035B570; }
    s0 = 20; goto L_0035B868;
L_0035B570:;
    v0 = (s32) ((u32) gp + 0xffffac54U);
    a1 = 10;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (s32) ((u32) v0 + 0x264U); func_002D5630(a0, a1);
    s0 = (s32) ((u32) s0 + 0x1U); goto L_0035B868;
L_0035B594:;
    s2 = 0; v0 = func_002D55B0(a0);
    v1 = 1;
    if (v0 != v1) { v0 = 1; goto L_0035B5B0; }
    s2 = v1;
    v0 = 1;
L_0035B5B0:;
    if (s2 != v0) goto L_0035B868;
    s0 = (s32) ((u32) s0 + 0x1U); goto L_0035B868;
L_0035B5C0:;
    a1 = 0; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    a1 = 2; func_001D7C20(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
    v0 = (s32) ((u32) gp + 0xffffac54U);
    a1 = 20;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (s32) ((u32) v0 + 0x264U); func_002D5630(a0, a1);
    v0 = Vsync_GetFieldCount();
    a1 = (*(volatile s32 *) (u32) (gp + -21424));
    a0 = 860;
    v1 = (s32) 0x620000U;
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = (s32) ((u32) v1 + 0xffffc9e0U);
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) v1) = (u32) v0; goto L_0035B868;
L_0035B620:;
    v0 = func_0035A260();
    if (v0 == 0) goto L_0035B638;
    s0 = 20; goto L_0035B868;
L_0035B638:;
    v0 = func_0035BB60();
    v1 = 1;
    if (v0 != v1) goto L_0035B868;
    s0 = (s32) ((u32) s0 + 0x1U); goto L_0035B868;
L_0035B654:;
    func_002D5630(a0, a1);
    v0 = Vsync_GetFieldCount();
    a1 = (*(volatile s32 *) (u32) (gp + -21424));
    a0 = 860;
    v1 = (s32) 0x620000U;
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = (s32) ((u32) v1 + 0xffffc9e0U);
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) v1) = (u32) v0; goto L_0035B868;
L_0035B688:;
    v0 = func_0035A260();
    if (v0 == 0) goto L_0035B6A0;
    s0 = 20; goto L_0035B868;
L_0035B6A0:;
    v0 = func_0035BA90();
    v1 = 1;
    if (v0 != v1) goto L_0035B868;
    s0 = (s32) ((u32) s0 + 0x1U); goto L_0035B868;
L_0035B6BC:;
    v0 = func_0035BA20(a0, a1, a2, a3);
    v1 = 1;
    if (v0 != v1) goto L_0035B868;
    s0 = (s32) ((u32) s0 + 0x1U); goto L_0035B868;
L_0035B6D8:;
    v0 = func_0035A260();
    if (v0 == 0) { v1 = (*(volatile s32 *) (u32) (gp + -21424)); goto L_0035B6F0; }
    s0 = (s32) ((u32) s0 + 0x1U); goto L_0035B868;
L_0035B6F0:;
    v0 = (s32) ((u32) gp + 0xffffac54U);
    s2 = 0;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (s32) ((u32) v0 + 0x264U); v0 = func_002D55B0(a0);
    v1 = 1;
    if (v0 != v1) { v0 = 1; goto L_0035B720; }
    s2 = v1;
    v0 = 1;
L_0035B720:;
    if (s2 != v0) goto L_0035B868;
    s0 = (s32) ((u32) s0 + 0x1U); goto L_0035B868;
L_0035B730:;
    v0 = func_0035B9D0(a0, a1, a2, a3);
    v1 = 1;
    if (v0 != v1) goto L_0035B868;
    s0 = (s32) ((u32) s0 + 0x1U); goto L_0035B868;
L_0035B74C:;
    s2 = 0; v0 = func_002D5870(a0);
    if (v0 != 0) { v0 = 1; goto L_0035B764; }
    s2 = 1;
    v0 = 1;
L_0035B764:;
    if (s2 != v0) goto L_0035B868;
    s0 = (s32) ((u32) s0 + 0x1U); goto L_0035B868;
L_0035B774:;
    v0 = (*(volatile u8 *) (u32) (v1 + 628));
    v0 = v0 & 0x1;
    if (v0 == 0) { s0 = (s32) ((u32) s0 + 0x1U); goto L_0035B868; }
    a0 = (*(volatile s32 *) (u32) v1); v0 = func_002F9630(a0);
    s2 = v0;
    { s32 c_ = s2 <= 0; s3 = 0; if (c_) goto L_0035B7D8; }
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
L_0035B79C:;
    v0 = (s32) ((u32) gp + 0xffffac54U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s3; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    a1 = 0; func_001D7D60(a0, a1);
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < s2;
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -21424)); goto L_0035B79C; }
L_0035B7D8:;
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
    v0 = (s32) ((u32) gp + 0xffffac54U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v1 + 628));
    v0 = (s64) ((u64) v0 << 62);
    v0 = (s64) ((u64) v0 >> 63);
    if (v0 == 0) { v1 = (*(volatile s32 *) (u32) (gp + -21424)); goto L_0035B82C; }
    a0 = (*(volatile s32 *) (u32) (v1 + 4));
    a1 = 0;
    s2 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a0 = s2; goto L_0035B820; }
    s2 = (*(volatile s32 *) (u32) (v0 + 12));
    a0 = s2;
L_0035B820:;
    a1 = 0; func_001EDAE0(a0, a1);
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
L_0035B82C:;
    v0 = (s32) ((u32) gp + 0xffffac54U);
    a1 = 1;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s2 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a0 = s2; goto L_0035B85C; }
    s2 = (*(volatile s32 *) (u32) (v0 + 12));
    a0 = s2;
L_0035B85C:;
    a1 = 0; func_001DF4F0(a0, a1);
    s0 = (s32) ((u32) s0 + 0x1U);
L_0035B868:;
    v0 = (*(volatile s32 *) (u32) (gp + -21424));
L_0035B86C:;
    v1 = (s32) ((u32) gp + 0xffffac54U);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    (*(volatile u32 *) (u32) (v0 + 604)) = (u32) s0;
    v0 = (*(volatile s32 *) (u32) (gp + -21424));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (s32) ((u32) v0 + 0x8U); v0 = func_002D5870(a0);
    if (v0 == 0) { v0 = s1; goto L_0035B9B4; }
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
    v0 = (s32) ((u32) gp + 0xffffac54U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (s32) ((u32) v0 + 0x8U); v0 = func_002D58A0(a0);
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
    s0 = v0;
    v0 = (s32) ((u32) gp + 0xffffac54U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v1 + 628));
    v0 = v0 & 0x1;
    if (v0 == 0) goto L_0035B9B0;
    a0 = (*(volatile s32 *) (u32) v1); v0 = func_002F9630(a0);
    s2 = v0;
    { s32 c_ = s2 <= 0; s3 = 0; if (c_) goto L_0035B938; }
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
L_0035B8FC:;
    v0 = (s32) ((u32) gp + 0xffffac54U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s3; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    a1 = s0 & 0xff; func_001D76B0(a0, a1);
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < s2;
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -21424)); goto L_0035B8FC; }
L_0035B938:;
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
    v0 = (s32) ((u32) gp + 0xffffac54U);
    a1 = 0;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s2 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a0 = s2; goto L_0035B96C; }
    s2 = (*(volatile s32 *) (u32) (v0 + 12));
    a0 = s2;
L_0035B96C:;
    a1 = s0 & 0xff; func_001ED8F0(a0, a1);
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
    v0 = (s32) ((u32) gp + 0xffffac54U);
    a1 = 1;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s2 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a1 = s0 & 0xff; goto L_0035B9A8; }
    s2 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = s0 & 0xff;
L_0035B9A8:;
    a0 = s2; func_001DF420(a0, a1);
L_0035B9B0:;
    v0 = s1;
L_0035B9B4:;
    return v0;
}
