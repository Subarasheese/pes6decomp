/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_009A1D50(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 hi = 0, lo = 0;

    v0 = 139;
    a3 = (s32) 0x590000U;
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); a4 = lo; }
    a2 = (s32) 0x590000U;
    a3 = (s32) ((u32) a3 + 0x1ae2U);
    a2 = (s32) ((u32) a2 + 0x1ae3U);
    a5 = (s32) ((u32) a1 << 3);
    a6 = 0;
    v0 = (s32) 0x590000U;
    a3 = (s32) ((u32) a3 + (u32) a4);
    v0 = (s32) ((u32) v0 + 0x1a90U);
    a2 = (s32) ((u32) a2 + (u32) a4);
    a4 = (s32) ((u32) v0 + (u32) a4);
    a3 = (s32) ((u32) a5 + (u32) a3);
    v0 = (s32) ((u32) a5 + (u32) a2);
    a5 = (*(volatile u8 *) (u32) a3);
    v0 = (*(volatile u8 *) (u32) v0);
L_009A1D94:;
    a2 = (*(volatile u8 *) (u32) (a4 + 7));
    if (a5 != a2) goto L_009A1DA8;
    a1 = a6;
L_009A1DA8:;
    if (v0 != a2) goto L_009A1DB8;
    v1 = a6;
L_009A1DB8:;
    a6 = (s32) ((u32) a6 + 0x1U);
    a2 = a6 < 32;
    { s32 c_ = a2 != 0; a4 = (s32) ((u32) a4 + 0x1U); if (c_) goto L_009A1D94; }
    a2 = 255;
    if (a5 == a2) { v0 = 0; goto L_009A1E94; }
    if (v0 == a2) { v0 = 0; goto L_009A1E94; }
    a2 = (s32) ((u32) a0 << 4);
    a3 = (s32) 0x590000U;
    a4 = (s32) ((u32) a2 - (u32) a0);
    a3 = (s32) ((u32) a3 + 0x2a57U);
    a0 = (s32) ((u32) a5 << 4);
    a2 = (s32) ((u32) a0 - (u32) a5);
    a0 = (s32) ((u32) a4 << 3);
    a4 = (s32) ((u32) a0 - (u32) a4);
    a0 = (s32) ((u32) a2 << 3);
    a4 = (s32) ((u32) a4 << 8);
    a0 = (s32) ((u32) a0 - (u32) a2);
    a2 = (s32) ((u32) a3 + (u32) a4);
    a0 = (s32) ((u32) a0 << 3);
    a0 = (s32) ((u32) a0 + (u32) a2);
    a0 = (*(volatile u8 *) (u32) a0);
    if (a0 != 0) { v0 = 0; goto L_009A1E94; }
    at = v1 < 11;
    if (at == 0) { v0 = 0; goto L_009A1E94; }
    v1 = a1 < 11;
    if (v1 != 0) { v0 = 0; goto L_009A1E94; }
    a0 = (s32) ((u32) v0 << 4);
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x2a56U);
    a0 = (s32) ((u32) a0 - (u32) v0);
    v0 = (s32) ((u32) v1 + (u32) a4);
    v1 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 != 0) goto L_009A1E90;
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x2a55U);
    v0 = (s32) ((u32) v0 + (u32) a4);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile u8 *) (u32) v0);
    at = v0 < 2;
    if (at == 0) goto L_009A1E90;
    v0 = 1; goto L_009A1E94;
L_009A1E90:;
    v0 = 0;
L_009A1E94:;
    return v0;
}
