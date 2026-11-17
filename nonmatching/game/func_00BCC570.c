/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00292D50(void);

s32 func_00BCC570(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 hi = 0, lo = 0;

    v1 = (s32) 0x590000U;
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1ef8U);
    s2 = a0;
    a0 = (*(volatile u8 *) (u32) (v0 + 7107));
    s0 = 0;
    v0 = (s32) ((u32) v1 + (u32) s2);
    v0 = (*(volatile u8 *) (u32) v0);
    s1 = (s32) ((u32) a0 - (u32) v0); v0 = func_00292D50();
    v0 = v0 & 0xff;
    at = v0 < 12;
    { s32 c_ = at != 0; v1 = 11; if (c_) goto L_00BCC648; }
    a0 = 139;
    a3 = (s32) 0x590000U;
    { s64 m_ = (s64) (s32) s2 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); a4 = lo; }
    a3 = (s32) ((u32) a3 + 0x1a90U);
    a0 = (s32) ((u32) s2 << 4);
    a3 = (s32) ((u32) a3 + (u32) a4);
    a2 = (s32) ((u32) a0 - (u32) s2);
    a3 = (s32) ((u32) a3 + 0xbU);
    a1 = (s32) ((u32) a2 << 3);
    a0 = (s32) 0x590000U;
    a1 = (s32) ((u32) a1 - (u32) a2);
    a0 = (s32) ((u32) a0 + 0x2980U);
    a1 = (s32) ((u32) a1 << 8);
    a2 = (s32) ((u32) a0 + (u32) a1);
L_00BCC5F4:;
    a1 = (*(volatile u8 *) (u32) (a3 + 7));
    a0 = (s32) ((u32) a1 << 4);
    a1 = (s32) ((u32) a0 - (u32) a1);
    a0 = (s32) ((u32) a1 << 3);
    a0 = (s32) ((u32) a0 - (u32) a1);
    a0 = (s32) ((u32) a0 << 3);
    a1 = (s32) ((u32) a2 + (u32) a0);
    a0 = (*(volatile u8 *) (u32) (a1 + 212));
    if (a0 == 0) goto L_00BCC638;
    a0 = (*(volatile u8 *) (u32) (a1 + 20));
    if (a0 != 0) goto L_00BCC638;
    a0 = (*(volatile u8 *) (u32) (a1 + 215));
    if (a0 != 0) goto L_00BCC638;
    s0 = (s32) ((u32) s0 + 0x1U);
L_00BCC638:;
    v1 = (s32) ((u32) v1 + 0x1U);
    a0 = v1 < v0;
    { s32 c_ = a0 != 0; a3 = (s32) ((u32) a3 + 0x1U); if (c_) goto L_00BCC5F4; }
L_00BCC648:;
    at = s0 < s1;
    if (at == 0) s0 = s1;
    v0 = s0;
    return v0;
}
