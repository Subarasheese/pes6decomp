/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0099D2C0(s32, s32, s32, s32);
void func_0099D490(s32, s32, s32, s32);
s32 func_00B29B50(s32, s32, s32, s32);

s32 func_008FCFD0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 hi = 0, lo = 0;

    v0 = (s32) 0x590000U;
    s3 = a0;
    v1 = (*(volatile u8 *) (u32) (v0 + 7757));
    v0 = 255;
    { s32 c_ = v1 == v0; s2 = a1; if (c_) goto L_008FD014; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
    v1 = (s32) ((u32) a0 << 3); goto L_008FD01C;
L_008FD014:;
    a0 = 1;
    v1 = (s32) ((u32) a0 << 3);
L_008FD01C:;
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s0 = (s32) ((u32) v0 + (u32) v1);
    { s32 c_ = s2 < 0; s1 = (*(volatile u8 *) (u32) (s0 + 18)); if (c_) goto L_008FD044; }
    v0 = s2 < 11;
    if (v0 != 0) { v0 = 139; goto L_008FD04C; }
L_008FD044:;
    v0 = 0; goto L_008FD0A0;
L_008FD04C:;
    a1 = (s32) 0x590000U;
    { s64 m_ = (s64) (s32) s1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); a2 = lo; }
    a1 = (s32) ((u32) a1 + 0x1a97U);
    v0 = (s32) ((u32) s1 << 4);
    a0 = (s32) ((u32) v0 - (u32) s1);
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 - (u32) a0);
    v0 = (s32) ((u32) v0 + 0x2a54U);
    v1 = (s32) ((u32) v1 << 8);
    a0 = (s32) ((u32) a1 + (u32) a2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (s32) ((u32) s2 + (u32) a0);
    a0 = (*(volatile u8 *) (u32) v1);
    v1 = (s32) ((u32) a0 << 4);
    a0 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile u8 *) (u32) v0);
L_008FD0A0:;
    if (v0 != 0) { a0 = s2 & 0xff; goto L_008FD0B0; }
    v0 = 0; goto L_008FD168;
L_008FD0B0:;
    a1 = s3; func_0099D490(a0, a1, a2, a3);
    if (s3 == 0) { a0 = s0; goto L_008FD0C8; }
    v0 = 1; goto L_008FD168;
L_008FD0C8:;
    v0 = func_0099D2C0(a0, a1, a2, a3);
    s0 = v0 & 0xff;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v0 + 7972));
    v0 = 2;
    if (v1 == v0) { v0 = 1; goto L_008FD168; }
    v0 = 4;
    if (v1 == v0) { at = s0 < 5; goto L_008FD12C; }
    v0 = 3;
    if (v1 == v0) goto L_008FD128;
    v0 = 1;
    v0 = (s32) 0x590000U;
    v1 = 5;
    v0 = (*(volatile u8 *) (u32) (v0 + 7177));
    if (v0 != v1) goto L_008FD128;
    v0 = func_00B29B50(a0, a1, a2, a3);
    if (v0 != 0) goto L_008FD164;
L_008FD128:;
    at = s0 < 5;
L_008FD12C:;
    if (at == 0) goto L_008FD164;
    v0 = 139;
    v1 = (s32) 0x590000U;
    { s64 m_ = (s64) (s32) s1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    v1 = (s32) ((u32) v1 + 0x1a97U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) s2 + (u32) v1);
    v0 = (s32) ((u32) v0 + 0x1a90U);
    v1 = (*(volatile u8 *) (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) ((u32) s0 + (u32) v0);
    (*(volatile u8 *) (u32) v0) = (u8) v1;
L_008FD164:;
    v0 = 1;
L_008FD168:;
    return v0;
}
