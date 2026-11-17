/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0098F4A0(s32);
s32 func_0098F750(s32);

s32 func_00C0A040(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;
    s32 hi = 0, lo = 0;

    a1 = (s32) 0xcb0000U;
    v1 = (s32) 0x5a0000U;
    v0 = (s32) 0x66660000U;
    a4 = (*(volatile u8 *) (u32) (a0 + 19));
    a1 = (s32) ((u32) a1 + 0x5370U);
    v1 = (s32) ((u32) v1 + 0x2169U);
    v0 = v0 | 0x6667;
    s0 = a0;
    a2 = (s32) ((u32) a1 + (u32) a4);
    a3 = (*(volatile u8 *) (u32) a2);
    a1 = (s32) ((u32) a4 << 4);
    a2 = (s32) ((u32) a1 - (u32) a4);
    a1 = (s32) ((u32) a2 << 2);
    a1 = (s32) ((u32) a1 - (u32) a2);
    a1 = (s32) ((u32) a1 << 3);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (*(volatile u8 *) (u32) v1);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v1 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 1;
    v0 = (s32) ((u32) v0 + (u32) v1);
    at = v0 < a3;
    if (at != 0) { v0 = 0; goto L_00C0A128; }
    v0 = (*(volatile s32 *) (u32) (gp + -31080));
    v0 = (s32) ((u32) v0 + (u32) a4);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 == 0) goto L_00C0A0D0;
    v0 = 0; goto L_00C0A128;
L_00C0A0D0:;
    v0 = func_0098F750(a0);
    if (v0 != 0) { v0 = 0; goto L_00C0A128; }
    v0 = (s32) 0xcb0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 21399));
    if (v0 == 0) goto L_00C0A124;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) s0);
    v0 = (*(volatile u8 *) (u32) (v0 + 7756));
    if (v0 != v1) { a0 = s0; goto L_00C0A10C; }
    v0 = 0; goto L_00C0A128;
L_00C0A10C:;
    v0 = func_0098F4A0(a0);
    if (v0 == 0) goto L_00C0A124;
    v0 = 0; goto L_00C0A128;
L_00C0A124:;
    v0 = 1;
L_00C0A128:;
    return v0;
}
