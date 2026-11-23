/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D76B0(s64, s64);
s64 func_001D7B80(s64);
void func_001D7D60(s64, s64);
void func_001D7D80(s64, s64, s64, s64);
void func_001DF420(s64, s64);
void func_001DF4F0(s64, s64);
void func_001ED8F0(s64, s64);
void func_001EDAE0(s64, s64);
s64 func_001EDC80(s64, s64);
void func_001EEDA0(s64, s64);
s64 func_002F9630(s64);
s64 func_002F96F0(s64, s64);
void func_0035CD40(f32);
void func_0035D990(s64, s64, s64, s64, f32);

void func_0035C5C0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, f32 fa12) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };

    v0 = (s32) ((u32) gp + 0xffffac54U);
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v1 + 628));
    v0 = v0 & 0x1;
    if (v0 == 0) { v1 = (*(volatile s32 *) (u32) (gp + -21424)); goto L_0035C6E0; }
    a0 = (*(volatile s32 *) (u32) v1); v0 = func_002F9630(a0);
    s0 = v0;
    { s32 c_ = s0 <= 0; s1 = 0; if (c_) goto L_0035C650; }
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
L_0035C614:;
    v0 = (s32) ((u32) gp + 0xffffac54U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s1; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    a1 = 1; func_001D7D60(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < s0;
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -21424)); goto L_0035C614; }
L_0035C650:;
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
    v0 = (s32) ((u32) gp + 0xffffac54U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v1 + 628));
    v0 = (s64) ((u64) v0 << 62);
    v0 = (s64) ((u64) v0 >> 63);
    if (v0 == 0) { v1 = (*(volatile s32 *) (u32) (gp + -21424)); goto L_0035C6A4; }
    a0 = (*(volatile s32 *) (u32) (v1 + 4));
    a1 = 0;
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a0 = s0; goto L_0035C698; }
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
    a0 = s0;
L_0035C698:;
    a1 = 1; func_001EDAE0(a0, a1);
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
L_0035C6A4:;
    v0 = (s32) ((u32) gp + 0xffffac54U);
    a1 = 1;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a0 = s0; goto L_0035C6D4; }
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
    a0 = s0;
L_0035C6D4:;
    a1 = 1; func_001DF4F0(a0, a1);
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
L_0035C6E0:;
    v0 = (s32) ((u32) gp + 0xffffac54U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v1 + 628));
    v0 = v0 & 0x1;
    if (v0 == 0) { v1 = (*(volatile s32 *) (u32) (gp + -21424)); goto L_0035C7CC; }
    a0 = (*(volatile s32 *) (u32) v1); v0 = func_002F9630(a0);
    s0 = v0;
    { s32 c_ = s0 <= 0; s1 = 0; if (c_) goto L_0035C750; }
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
L_0035C718:;
    v0 = (s32) ((u32) gp + 0xffffac54U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s1; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    a1 = 255; func_001D76B0(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < s0;
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -21424)); goto L_0035C718; }
L_0035C750:;
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
    v0 = (s32) ((u32) gp + 0xffffac54U);
    a1 = 0;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a0 = s0; goto L_0035C784; }
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
    a0 = s0;
L_0035C784:;
    a1 = 255; func_001ED8F0(a0, a1);
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
    v0 = (s32) ((u32) gp + 0xffffac54U);
    a1 = 1;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a0 = s0; goto L_0035C7C0; }
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
    a0 = s0;
L_0035C7C0:;
    a1 = 255; func_001DF420(a0, a1);
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
L_0035C7CC:;
    v0 = (s32) ((u32) gp + 0xffffac54U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 0; v0 = func_002F96F0(a0, a1);
    s0 = v0;
    a0 = s0; v0 = func_001D7B80(a0);
    v0 = (s64) ((u64) v0 << 48);
    a0 = s0;
    v0 = v0 >> 48;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    a1 = (s64) ((u64) v0 << 48);
    a1 = a1 >> 48; func_001D7D80(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -21424));
    v0 = (s32) 0x3f800000U;
    a3 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) gp + 0xffffac54U);
    f12.i = (s32) v0;
    a3 = (s32) ((u32) a3 + 0x7cf0U);
    a1 = (s32) ((u32) a0 << 2);
    v0 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) v1 + (u32) a1);
    v0 = (s32) ((u32) v0 + 0x7ba8U);
    v1 = (*(volatile s32 *) (u32) v1);
    a0 = 3;
    a5 = (*(volatile s32 *) (u32) (v1 + 608));
    a4 = (*(volatile s32 *) (u32) (v1 + 632));
    a1 = (s32) ((u32) a5 << 3);
    v1 = (s32) ((u32) a5 << 1);
    a4 = (s32) ((u32) a4 << 7);
    v1 = (s32) ((u32) v1 + (u32) a5);
    a3 = (s32) ((u32) a3 + (u32) a4);
    v1 = (s32) ((u32) v1 << 2);
    a1 = (s32) ((u32) a1 + (u32) a3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) a1);
    a3 = (*(volatile s32 *) (u32) v0);
    a1 = (*(volatile s32 *) (u32) (v1 + 8));
    a2 = 2; func_0035D990(a0, a1, a2, a3, f12.f);
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
    v0 = (s32) ((u32) gp + 0xffffac54U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    s0 = (*(volatile s32 *) (u32) (v0 + 856));
    { s32 c_ = s0 <= 0; s3 = 0; if (c_) goto L_0035C8F8; }
    s1 = 0;
L_0035C8A0:;
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
    v0 = (s32) ((u32) gp + 0xffffac54U);
    a1 = 0;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s2 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_0035C8D0;
    s2 = (*(volatile s32 *) (u32) (v0 + 12));
L_0035C8D0:;
    a0 = s2;
    a1 = (s32) ((u32) s1 + 0x3U); v0 = func_001EDC80(a0, a1);
    a0 = v0;
    a1 = 255; func_001EEDA0(a0, a1);
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < s0;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x3U); if (c_) goto L_0035C8A0; }
L_0035C8F8:;
    v0 = (s32) 0x3f800000U;
    f12.i = (s32) v0;
    func_0035CD40(f12.f);
    v0 = 1;
    return;
}
