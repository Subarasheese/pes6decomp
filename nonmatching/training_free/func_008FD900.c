/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_008FD190(s32, s32);
s32 func_008FD210(s32, s32, s32, s32);
s32 func_0099D470(s32, s32, s32, s32);
void D_008FD900(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5);

void func_008FD900(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 hi = 0, lo = 0;

    v1 = (s32) 0x3b0000U;
    a1 = (s32) 0x3b0000U;
    a3 = 11;
    a5 = (*(volatile s32 *) (u32) (v1 + -5680));
    s0 = a0;
    a0 = (s32) 0x3b0000U;
    a4 = (*(volatile s8 *) (u32) (a5 + 6));
    v1 = (s32) 0x3b0000U;
    a2 = (*(volatile s8 *) (u32) a5);
    a3 = (s32) ((u32) a3 - (u32) a4);
    a2 = (s32) ((u32) a2 - (u32) a4);
    (*(volatile u8 *) (u32) a5) = (u8) a2;
    a2 = (*(volatile s32 *) (u32) (a1 + -5680));
    a1 = (*(volatile s8 *) (u32) a2);
    a1 = (s32) ((u32) a1 + (u32) s0);
    a1 = (s32) ((u32) a3 + (u32) a1);
    if ((s32) a3 != 0) { s64 q_ = (s32) ((s32) a1 / (s32) a3); hi = (s32) ((s32) a1 % (s32) a3); lo = q_; }
    a1 = hi;
    (*(volatile u8 *) (u32) a2) = (u8) a1;
    a2 = (*(volatile s32 *) (u32) (a0 + -5680));
    a1 = (*(volatile s8 *) (u32) a2);
    a0 = (*(volatile s8 *) (u32) (a2 + 6));
    a0 = (s32) ((u32) a1 + (u32) a0);
    (*(volatile u8 *) (u32) a2) = (u8) a0;
    v1 = (*(volatile s32 *) (u32) (v1 + -5680));
    a5 = (*(volatile s8 *) (u32) v1);
    { s32 c_ = a5 < 0; a1 = (*(volatile s8 *) (u32) (v1 + 1)); if (c_) goto L_008FD98C; }
    a0 = a5 < 11;
    if (a0 != 0) { a0 = 139; goto L_008FD994; }
L_008FD98C:;
    a0 = 0; goto L_008FD9E8;
L_008FD994:;
    a3 = (s32) 0x590000U;
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); a4 = lo; }
    a3 = (s32) ((u32) a3 + 0x1a97U);
    a0 = (s32) ((u32) a1 << 4);
    a2 = (s32) ((u32) a0 - (u32) a1);
    a1 = (s32) ((u32) a2 << 3);
    a0 = (s32) 0x590000U;
    a1 = (s32) ((u32) a1 - (u32) a2);
    a0 = (s32) ((u32) a0 + 0x2a54U);
    a2 = (s32) ((u32) a3 + (u32) a4);
    a1 = (s32) ((u32) a1 << 8);
    a2 = (s32) ((u32) a5 + (u32) a2);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a2 = (*(volatile u8 *) (u32) a2);
    a1 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) a1 - (u32) a2);
    a1 = (s32) ((u32) a2 << 3);
    a1 = (s32) ((u32) a1 - (u32) a2);
    a1 = (s32) ((u32) a1 << 3);
    a0 = (s32) ((u32) a1 + (u32) a0);
    a0 = (*(volatile u8 *) (u32) a0);
L_008FD9E8:;
    if (a0 != 0) goto L_008FDACC;
    a4 = (*(volatile s8 *) (u32) (v1 + 6));
    a3 = 11;
    a2 = (*(volatile s8 *) (u32) v1);
    a1 = (s32) 0x3b0000U;
    a0 = (s32) 0x3b0000U;
    v0 = (s32) 0x3b0000U;
    a3 = (s32) ((u32) a3 - (u32) a4);
    a2 = (s32) ((u32) a2 - (u32) a4);
    (*(volatile u8 *) (u32) v1) = (u8) a2;
    a1 = (*(volatile s32 *) (u32) (a1 + -5680));
    v1 = (*(volatile s8 *) (u32) a1);
    v1 = (s32) ((u32) v1 + (u32) s0);
    v1 = (s32) ((u32) a3 + (u32) v1);
    if ((s32) a3 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) a3); hi = (s32) ((s32) v1 % (s32) a3); lo = q_; }
    v1 = hi;
    (*(volatile u8 *) (u32) a1) = (u8) v1;
    a1 = (*(volatile s32 *) (u32) (a0 + -5680));
    a0 = (*(volatile s8 *) (u32) a1);
    v1 = (*(volatile s8 *) (u32) (a1 + 6));
    v1 = (s32) ((u32) a0 + (u32) v1);
    (*(volatile u8 *) (u32) a1) = (u8) v1;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    a1 = (*(volatile s8 *) (u32) v0);
    a0 = (*(volatile s8 *) (u32) (v0 + 1)); v0 = func_008FD190(a0, a1);
    if (v0 != 0) goto L_008FDA64;
    a0 = s0; D_008FD900(a0, a1, a2, a3, a4, a5);
L_008FDA64:;
    v1 = (s32) 0x3b0000U;
    a0 = 2;
    a2 = (*(volatile s32 *) (u32) (v1 + -5680));
    a1 = (*(volatile s8 *) (u32) (a2 + 3));
    if (a1 == a0) goto L_008FDACC;
    v1 = 1;
    if (a1 == v1) goto L_008FDACC;
    if (a1 == 0) { s1 = (*(volatile s8 *) (u32) a2); goto L_008FDA98; }
    goto L_008FDACC;
L_008FDA98:;
    a0 = 0; v0 = func_008FD210(a0, a1, a2, a3);
    if (s1 == v0) goto L_008FDACC;
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    s1 = (*(volatile s8 *) (u32) v0);
    a0 = 1; v0 = func_008FD210(a0, a1, a2, a3);
    if (s1 == v0) goto L_008FDACC;
    a0 = s0; D_008FD900(a0, a1, a2, a3, a4, a5);
L_008FDACC:;
    v1 = (s32) 0x3b0000U;
    a0 = 2;
    v1 = (*(volatile s32 *) (u32) (v1 + -5680));
    a1 = (*(volatile s8 *) (u32) (v1 + 3));
    if (a1 == a0) { ; goto L_008FDC3C; }
    v1 = 1;
    if (a1 == v1) goto L_008FDC38;
    if (a1 == 0) { a0 = 0; goto L_008FDB00; }
    goto L_008FDC38;
L_008FDB00:;
    v0 = func_0099D470(a0, a1, a2, a3);
    a0 = v0 & 0xff;
    v1 = 255;
    if (a0 != v1) { a0 = 0; goto L_008FDB20; }
    a0 = 0; goto L_008FDB2C;
L_008FDB20:;
    v0 = func_0099D470(a0, a1, a2, a3);
    a0 = v0 & 0xff;
L_008FDB2C:;
    v1 = (s32) 0x3b0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -5680));
    v1 = (*(volatile s8 *) (u32) v1);
    if (v1 == a0) goto L_008FDC38;
    a0 = 1; v0 = func_0099D470(a0, a1, a2, a3);
    v1 = (s32) 0x3b0000U;
    a0 = v0 & 0xff;
    a5 = (*(volatile s32 *) (u32) (v1 + -5680));
    a4 = (*(volatile s8 *) (u32) a5);
    if (a4 == a0) goto L_008FDC38;
    a3 = (*(volatile s8 *) (u32) (a5 + 6));
    a1 = 11;
    a0 = (s32) 0x3b0000U;
    v1 = (s32) 0x3b0000U;
    v0 = (s32) 0x3b0000U;
    a2 = (s32) ((u32) a1 - (u32) a3);
    a1 = (s32) ((u32) a4 - (u32) a3);
    (*(volatile u8 *) (u32) a5) = (u8) a1;
    a1 = (*(volatile s32 *) (u32) (a0 + -5680));
    a0 = (*(volatile s8 *) (u32) a1);
    a0 = (s32) ((u32) a0 + (u32) s0);
    a0 = (s32) ((u32) a2 + (u32) a0);
    if ((s32) a2 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) a2); hi = (s32) ((s32) a0 % (s32) a2); lo = q_; }
    a0 = hi;
    (*(volatile u8 *) (u32) a1) = (u8) a0;
    a1 = (*(volatile s32 *) (u32) (v1 + -5680));
    a0 = (*(volatile s8 *) (u32) a1);
    v1 = (*(volatile s8 *) (u32) (a1 + 6));
    v1 = (s32) ((u32) a0 + (u32) v1);
    (*(volatile u8 *) (u32) a1) = (u8) v1;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    a1 = (*(volatile s8 *) (u32) v0);
    a0 = (*(volatile s8 *) (u32) (v0 + 1)); v0 = func_008FD190(a0, a1);
    if (v0 != 0) goto L_008FDBD0;
    a0 = s0; D_008FD900(a0, a1, a2, a3, a4, a5);
L_008FDBD0:;
    v1 = (s32) 0x3b0000U;
    a0 = 2;
    a2 = (*(volatile s32 *) (u32) (v1 + -5680));
    a1 = (*(volatile s8 *) (u32) (a2 + 3));
    if (a1 == a0) goto L_008FDC38;
    v1 = 1;
    if (a1 == v1) goto L_008FDC38;
    if (a1 == 0) { s1 = (*(volatile s8 *) (u32) a2); goto L_008FDC04; }
    goto L_008FDC38;
L_008FDC04:;
    a0 = 0; v0 = func_008FD210(a0, a1, a2, a3);
    if (s1 == v0) goto L_008FDC38;
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    s1 = (*(volatile s8 *) (u32) v0);
    a0 = 1; v0 = func_008FD210(a0, a1, a2, a3);
    if (s1 == v0) goto L_008FDC38;
    a0 = s0; D_008FD900(a0, a1, a2, a3, a4, a5);
L_008FDC38:;
L_008FDC3C:;
    return;
}
