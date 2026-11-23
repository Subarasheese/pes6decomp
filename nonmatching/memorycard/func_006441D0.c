/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002E9430(void);
s32 func_0063E160(s32, s32);
s32 func_0063E1E0(s32);
void func_00650F50(s32, s32, s32, s32);

s32 func_006441D0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s32 hi1 = 0, lo1 = 0;
    s32 gp = 0x3ef370;
    s32 hi = 0, lo = 0;
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    v0 = 13;
    s4 = a0;
    s3 = 0;
    s2 = 0;
    { s32 c_ = s4 == v0; s1 = 0; if (c_) goto L_00644220; }
    v0 = 14;
    if (s4 == v0) { v0 = 0; goto L_0064436C; }
    at = s4 < 17;
    if (at != 0) goto L_0064422C;
L_00644220:;
    v0 = 0;
    goto L_0064436C;
L_0064422C:;
    v0 = (s32) 0x660000U;
    v1 = (s32) 0x20000000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -10088));
    v0 = v0 & v1;
    if (v0 == 0) { v0 = 16; goto L_00644268; }
    v0 = func_002E9430();
    s3 = v0;
    v1 = 36;
    if (s3 == v1) goto L_00644264;
    goto L_0064436C;
L_00644264:;
    v0 = 16;
L_00644268:;
    if (s4 != v0) { v0 = (*(volatile u8 *) (u32) (gp + -21776)); goto L_00644278; }
    v0 = 0; goto L_0064436C;
L_00644278:;
    v1 = 255;
    if (v0 == v1) { s0 = 0; goto L_0064428C; }
    goto L_0064436C;
L_0064428C:;
    a0 = s0; v0 = func_0063E1E0(a0);
    v0 = v0 & 0xff;
    a0 = s0;
    s5 = v0 & 0x7f;
    a1 = 0; v0 = func_0063E160(a0, a1);
    v1 = s5 & 0xff;
    if (v1 != s4) goto L_00644358;
    a1 = v0;
    a0 = (s32) ((u32) sp + 0x78U); func_00650F50(a0, a1, a2, a3);
    v0 = (*(volatile u16 *) (u32) (sp + 120));
    a5 = 10000;
    a1 = (*(volatile u8 *) (u32) (sp + 122));
    v1 = (*(volatile u8 *) (u32) (sp + 124));
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a5; lo = (s32) m_; hi = (s32) (m_ >> 32); a4 = lo; }
    a0 = (*(volatile u8 *) (u32) (sp + 125));
    a2 = (*(volatile u8 *) (u32) (sp + 123));
    v0 = (s32) ((u32) a1 << 2);
    a3 = (s32) ((u32) v0 + (u32) a1);
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a5; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); a1 = lo1; }
    v0 = (*(volatile u8 *) (u32) (sp + 126));
    v1 = (s32) ((u32) a3 << 2);
    a3 = (s32) ((u32) a3 + (u32) v1);
    v1 = (s32) ((u32) a0 << 2);
    a0 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) a3 << 2);
    a3 = (s32) ((u32) a4 + (u32) v1);
    v1 = (s32) ((u32) a0 << 2);
    a2 = (s32) ((u32) a2 + (u32) a3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    at = (u64) s2 < (u64) a2;
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) a1 + (u32) v1);
    { s32 c_ = at == 0; v0 = (s32) ((u32) v0 + (u32) v1); if (c_) goto L_00644338; }
    s2 = a2;
    s1 = v0;
    s3 = s0; goto L_00644358;
L_00644338:;
    if (s2 != a2) goto L_00644358;
    at = (u64) s1 < (u64) v0;
    if (at == 0) goto L_00644358;
    s1 = v0;
    s3 = s0;
L_00644358:;
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 35;
    if (v0 != 0) goto L_0064428C;
    v0 = s3;
L_0064436C:;
    return v0;
}
