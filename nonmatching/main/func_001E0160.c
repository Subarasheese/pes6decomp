/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6TextureCache_Invalidate(s32);
void func_001453E0(s32);
s32 func_001DD4E0(s32, s32);
s32 func_001E0540(s32, s32, s32, s32);
s32 func_001E06D0(s32, s32, s32, s32, s32, s32, s32, s32);
void open(s32, s32);

s32 func_001E0160(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 hi1 = 0, lo1 = 0;
    s32 gp = 0x3ef370;
    s32 hi = 0, lo = 0;

    v0 = (s32) 0xee0000U;
    v0 = v0 | 0x8080;
    s3 = a0;
    s2 = a1;
    v0 = (u64) s2 < (u64) v0;
    s1 = a2;
    { s32 c_ = v0 != 0; s0 = a3; if (c_) goto L_001E01B0; }
    at = (s32) 0xee0000U;
    at = at | 0x82b9;
    at = (u64) s2 < (u64) at;
    if (at == 0) goto L_001E01B0;
    s1 = 0;
L_001E01B0:;
    a0 = s3;
    a1 = s2;
    a2 = s1;
    a3 = s0; v0 = func_001E0540(a0, a1, a2, a3);
    if (v0 == 0) { a0 = s3; goto L_001E0250; }
    a2 = (*(volatile s32 *) (u32) v0);
    v1 = (*(volatile u8 *) (u32) (v0 + 55));
    a1 = (*(volatile s32 *) (u32) (a2 + 8));
    at = 0 < v1;
    { s32 c_ = at == 0; a3 = 0; if (c_) goto L_001E0240; }
L_001E01E4:;
    v1 = (*(volatile u8 *) (u32) (a1 + 10));
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a3; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    a4 = 0;
    v1 = (*(volatile u8 *) (u32) (v0 + 54));
    a0 = (s32) ((u32) a0 << 6);
    at = 0 < v1;
    { s32 c_ = at == 0; a0 = (s32) ((u32) v0 + (u32) a0); if (c_) goto L_001E0228; }
L_001E0208:;
    v1 = (*(volatile u16 *) (u32) (a0 + 52));
    a4 = (s32) ((u32) a4 + 0x1U);
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u16 *) (u32) (a0 + 52)) = (u16) v1;
    v1 = (*(volatile u8 *) (u32) (v0 + 54));
    v1 = a4 < v1;
    { s32 c_ = v1 != 0; a0 = (s32) ((u32) a0 + 0x40U); if (c_) goto L_001E0208; }
L_001E0228:;
    v1 = (*(volatile u8 *) (u32) (v0 + 55));
    a3 = (s32) ((u32) a3 + 0x1U);
    v1 = a3 < v1;
    if (v1 != 0) goto L_001E01E4;
L_001E0240:;
    v1 = (*(volatile u16 *) (u32) (a2 + 40));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u16 *) (u32) (a2 + 40)) = (u16) v1; goto L_001E0444;
L_001E0250:;
    a1 = s2; v0 = func_001DD4E0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (gp + -23056));
    v1 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v1 + (u32) v0);
    a1 = (s32) ((u32) v0 << 4);
    v1 = s1 & 0xff;
    v0 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 2);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a1 = (s32) ((u32) a0 + (u32) v0);
    a2 = (*(volatile s32 *) (u32) (a0 + 40));
    v0 = (*(volatile s32 *) (u32) a0);
    v0 = (*(volatile s32 *) (u32) v0);
    { s32 c_ = a2 != 0; a1 = (s32) ((u32) a1 + 0x4U); if (c_) goto L_001E02E0; }
    a3 = (*(volatile u16 *) (u32) (v0 + 12));
    a2 = 256;
    if (a3 == a2) { a2 = 2; goto L_001E02CC; }
    a2 = 16;
    if (a3 == a2) { a3 = 1; goto L_001E02B8; }
    a2 = (*(volatile s32 *) (u32) a1); goto L_001E02E4;
L_001E02B8:;
    a2 = 128;
    (*(volatile u32 *) (u32) (a0 + 40)) = (u32) a3;
    (*(volatile u8 *) (u32) (a0 + 44)) = (u8) a2;
    (*(volatile u8 *) (u32) (a0 + 45)) = (u8) a2; goto L_001E02E0;
L_001E02CC:;
    a3 = 128;
    (*(volatile u32 *) (u32) (a0 + 40)) = (u32) a2;
    a2 = 64;
    (*(volatile u8 *) (u32) (a0 + 44)) = (u8) a3;
    (*(volatile u8 *) (u32) (a0 + 45)) = (u8) a2;
L_001E02E0:;
    a2 = (*(volatile s32 *) (u32) a1);
L_001E02E4:;
    if (a2 == 0) { a3 = (*(volatile u16 *) (u32) (v0 + 12)); goto L_001E033C; }
L_001E02EC:;
    a2 = s2;
L_001E02F0:;
    a3 = s1;
    a4 = s0; v0 = func_001E06D0(a0, a1, a2, a3, a4, a5, a6, a7);
    s0 = v0;
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    a0 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile s32 *) (u32) (a0 + 8));
    a1 = (s32) ((u32) a0 + (u32) v0); open(a0, a1);
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 12)); func_001453E0(a0);
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 12)); Pes6TextureCache_Invalidate(a0);
    v0 = s0; goto L_001E0444;
L_001E033C:;
    a2 = 256;
    if (a3 == a2) goto L_001E03D4;
    a2 = 16;
    if (a3 == a2) goto L_001E035C;
    a2 = s2; goto L_001E02F0;
L_001E035C:;
    a2 = (s32) 0x3d0000U;
    a4 = (s32) ((u32) v1 << 1);
    a2 = (s32) ((u32) a2 + 0x28b8U);
    a3 = (*(volatile u8 *) (u32) (v0 + 2));
    a2 = (s32) ((u32) a2 + (u32) a4);
    v1 = (s32) 0x3d0000U;
    a2 = (*(volatile u8 *) (u32) a2);
    v1 = (s32) ((u32) v1 + 0x28b9U);
    v1 = (s32) ((u32) v1 + (u32) a4);
    v1 = (*(volatile u8 *) (u32) v1);
    a3 = (s32) ((u32) a3 + 0x2U);
    a2 = (s32) ((u32) a3 + (u32) a2);
    a2 = (s32) a2 >> 1;
    (*(volatile u8 *) (u32) (a1 + 8)) = (u8) a2;
    v0 = (*(volatile u8 *) (u32) (v0 + 3));
    v0 = (s32) ((u32) v0 + 0x2U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u8 *) (u32) (a1 + 9)) = (u8) v0;
    v1 = (*(volatile u8 *) (u32) (a0 + 44));
    v0 = (*(volatile u8 *) (u32) (a1 + 8));
    v1 = (s32) v1 >> 1;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v0 = lo;
    (*(volatile u8 *) (u32) (a1 + 10)) = (u8) v0;
    v1 = (*(volatile u8 *) (u32) (a0 + 45));
    v0 = (*(volatile u8 *) (u32) (a1 + 9));
    if ((s32) v0 != 0) { s32 q_ = (s32) ((s32) v1 / (s32) v0); hi1 = (s32) ((s32) v1 % (s32) v0); lo1 = q_; }
    v0 = lo1;
    (*(volatile u8 *) (u32) (a1 + 11)) = (u8) v0; goto L_001E02EC;
L_001E03D4:;
    a2 = (s32) 0x3d0000U;
    a4 = (s32) ((u32) v1 << 1);
    a2 = (s32) ((u32) a2 + 0x28b8U);
    a3 = (*(volatile u8 *) (u32) (v0 + 2));
    a2 = (s32) ((u32) a2 + (u32) a4);
    v1 = (s32) 0x3d0000U;
    a2 = (*(volatile u8 *) (u32) a2);
    v1 = (s32) ((u32) v1 + 0x28b9U);
    v1 = (s32) ((u32) v1 + (u32) a4);
    v1 = (*(volatile u8 *) (u32) v1);
    a3 = (s32) ((u32) a3 + 0x2U);
    a2 = (s32) ((u32) a3 + (u32) a2);
    (*(volatile u8 *) (u32) (a1 + 8)) = (u8) a2;
    v0 = (*(volatile u8 *) (u32) (v0 + 3));
    v0 = (s32) ((u32) v0 + 0x2U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u8 *) (u32) (a1 + 9)) = (u8) v0;
    v1 = (*(volatile u8 *) (u32) (a0 + 44));
    v0 = (*(volatile u8 *) (u32) (a1 + 8));
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v0 = lo;
    (*(volatile u8 *) (u32) (a1 + 10)) = (u8) v0;
    v1 = (*(volatile u8 *) (u32) (a0 + 45));
    v0 = (*(volatile u8 *) (u32) (a1 + 9));
    if ((s32) v0 != 0) { s32 q_ = (s32) ((s32) v1 / (s32) v0); hi1 = (s32) ((s32) v1 % (s32) v0); lo1 = q_; }
    v0 = lo1;
    (*(volatile u8 *) (u32) (a1 + 11)) = (u8) v0; goto L_001E02EC;
L_001E0444:;
    return v0;
}
