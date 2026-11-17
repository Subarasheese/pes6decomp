/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00AFBAB0(s32);
s32 func_00B29C50(void);
s32 func_00BF6890(s32);
void func_00C01540(s32, s32, s32, s32, s32);

s32 func_00BFB0D0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s32 hi = 0, lo = 0;

    s4 = 12;
    s2 = 6;
    s1 = 46;
    s0 = 23;
    s5 = s0; v0 = func_00BF6890(a0);
    if (v0 == 0) goto L_00BFB1BC;
    v0 = (s32) 0x590000U;
    s1 = s2;
    s0 = (*(volatile u8 *) (u32) (v0 + 7767));
    v0 = 255;
    { s32 c_ = s0 == v0; s4 = -1; if (c_) goto L_00BFB13C; }
    v0 = s5;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) s0 / (s32) v0); hi = (s32) ((s32) s0 % (s32) v0); lo = q_; }
    a0 = hi; goto L_00BFB140;
L_00BFB13C:;
    a0 = 1;
L_00BFB140:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a0 = s0 & 0xff;
    s2 = (s32) ((u32) v0 + (u32) v1); v0 = func_00AFBAB0(a0);
    a1 = v0 & 0xff;
    v1 = (s32) ((u32) a1 + 0xbU);
    at = a1 < v1;
    if (at == 0) goto L_00BFB1B0;
    v0 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) s2 + (u32) v0);
L_00BFB17C:;
    if (a1 == s0) goto L_00BFB1A0;
    v0 = (*(volatile s32 *) (u32) (a0 + 344));
    at = (u64) v0 < (u64) s4;
    if (at == 0) goto L_00BFB1A0;
    s4 = v0;
    s3 = a1 & 0xff;
L_00BFB1A0:;
    a1 = (s32) ((u32) a1 + 0x1U);
    v0 = a1 < v1;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x4U); if (c_) goto L_00BFB17C; }
L_00BFB1B0:;
    s5 = s3 & 0xff;
    s4 = 12;
    s2 = 6;
L_00BFB1BC:;
    v0 = (s32) 0x590000U;
    v1 = 5;
    v0 = (*(volatile u8 *) (u32) (v0 + 7177));
    if (v0 == v1) goto L_00BFB1FC;
    at = s1 < 46;
L_00BFB1D4:;
    if (at == 0) goto L_00BFB1F4;
    a1 = s0;
    a2 = s5;
    a3 = s4;
    a4 = s2;
    a0 = s1; func_00C01540(a0, a1, a2, a3, a4);
L_00BFB1F4:;
    v0 = s1; goto L_00BFB214;
L_00BFB1FC:;
    v0 = func_00B29C50();
    if (v0 == 0) goto L_00BFB1F4;
    at = s1 < 46; goto L_00BFB1D4;
L_00BFB214:;
    return v0;
}
