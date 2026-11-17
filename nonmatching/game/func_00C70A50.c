/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EF900(s32, s32);
void func_002F9F20(s32, s32, s32, s32, s32, s32);
void func_00C711D0(s32, s32);
void func_00C71510(s32, s32);
s32 func_00C8B210(void);

void func_00C70A50(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    s32 hi = 0, lo = 0;

    v0 = func_00C8B210();
    v1 = (u64) 0 < (u64) v0;
    v0 = (s32) 0xcd0000U;
    a0 = v1 ^ 0x1;
    v1 = (*(volatile u8 *) (u32) (v0 + -17120));
    v0 = (s32) 0xcd0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -17118));
    v0 = v1 & v0;
    s1 = v0 & a0;
    if (s1 == 0) goto L_00C70AC8;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 7692));
    if (v0 != 0) goto L_00C70AC8;
    v0 = (s32) 0xcd0000U;
    v0 = (*(volatile u16 *) (u32) (v0 + -17132));
    at = v0 < 2;
    if (at == 0) goto L_00C70AC8;
    s1 = 2;
L_00C70AC8:;
    v0 = func_00C8B210();
    v1 = (s32) 0xcd0000U;
    a0 = (u64) 0 < (u64) v0;
    a1 = (*(volatile u8 *) (u32) (v1 + -17123));
    a2 = a0 ^ 0x1;
    a0 = (s32) 0xcd0000U;
    a0 = (*(volatile u8 *) (u32) (a0 + -17121));
    v1 = (s32) 0xcd0000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -17119));
    a0 = a1 & a0;
    { s32 c_ = s1 != v1; s0 = a0 & a2; if (c_) goto L_00C70B0C; }
    v1 = (s32) 0xcd0000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -17122));
    if (s0 == v1) { ; goto L_00C70FB4; }
L_00C70B0C:;
    v1 = (s32) 0xcd0000U;
    v0 = (s32) 0xcd0000U;
    (*(volatile u8 *) (u32) (v1 + -17119)) = (u8) s1;
    { s32 c_ = s1 != 0; (*(volatile u8 *) (u32) (v0 + -17122)) = (u8) s0; if (c_) goto L_00C70C30; }
    if (s0 != 0) { v0 = 2; goto L_00C70C34; }
    s0 = (s32) 0xcd0000U;
    s1 = 0;
    s0 = (s32) ((u32) s0 + 0xffffcf98U);
L_00C70B34:;
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = 0; func_001EF900(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 6;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00C70B34; }
    v0 = (s32) 0xcd0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -12368));
    a1 = 0; func_001EF900(a0, a1);
    s3 = (s32) 0xcd0000U;
    s5 = 0;
    s3 = (s32) ((u32) s3 + 0xffffbcd0U);
    s2 = 75;
L_00C70B70:;
    v1 = (*(volatile u16 *) (u32) (s3 + 52));
    v0 = (s32) 0x66660000U;
    v0 = v0 | 0x6667;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v0 = hi;
    v1 = (s32) ((u32) v1 >> 31);
    v0 = (s32) v0 >> 2;
    v0 = (s32) ((u32) v0 + (u32) v1);
    if (v0 == 0) { s0 = 1; goto L_00C70B9C; }
    s0 = 2;
L_00C70B9C:;
    v0 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) s2 << 2);
    v0 = (s32) ((u32) v0 + 0xffffce30U);
    s4 = 0;
    v0 = (s32) ((u32) v0 + (u32) v1);
    { s32 c_ = s0 <= 0; s1 = (s32) ((u32) v0 + 0x1cU); if (c_) goto L_00C70BD8; }
L_00C70BB8:;
    a0 = (*(volatile s32 *) (u32) s1);
    a1 = 0; func_001EF900(a0, a1);
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = s4 < s0;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00C70BB8; }
L_00C70BD8:;
    s5 = (s32) ((u32) s5 + 0x1U);
    v0 = s5 < 2;
    s3 = (s32) ((u32) s3 + 0x4U);
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x2U); if (c_) goto L_00C70B70; }
    s0 = (s32) 0xcd0000U;
    s1 = 0;
    s0 = (s32) ((u32) s0 + 0xffffcf88U);
L_00C70BF8:;
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = 0; func_001EF900(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 4;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00C70BF8; }
    v0 = (s32) 0xcd0000U;
    v0 = (s32) ((u32) v0 + 0xffffcf74U);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 0; func_001EF900(a0, a1);
    goto L_00C70FB0;
L_00C70C30:;
    v0 = 2;
L_00C70C34:;
    if (s1 == v0) goto L_00C70D08;
    v0 = 1;
    if (s1 == v0) goto L_00C70C98;
    if (s1 == 0) goto L_00C70C58;
    goto L_00C70D70;
L_00C70C58:;
    s1 = (s32) 0xcd0000U;
    s2 = 0;
    s1 = (s32) ((u32) s1 + 0xffffcf98U);
L_00C70C64:;
    a0 = (*(volatile s32 *) (u32) s1);
    a1 = 0; func_001EF900(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 6;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00C70C64; }
    v0 = (s32) 0xcd0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -12368));
    a1 = 0; func_001EF900(a0, a1);
    goto L_00C70D70;
L_00C70C98:;
    s1 = (s32) 0xcd0000U;
    s2 = 0;
    s1 = (s32) ((u32) s1 + 0xffffcf98U);
L_00C70CA4:;
    a0 = (*(volatile s32 *) (u32) s1);
    a1 = 1; func_001EF900(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 6;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00C70CA4; }
    v0 = (s32) 0xcd0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -12368));
    a1 = 0; func_001EF900(a0, a1);
    s2 = (s32) 0xcd0000U;
    s3 = 0;
    s2 = (s32) ((u32) s2 + 0xffffbcd0U);
L_00C70CDC:;
    s1 = (*(volatile u16 *) (u32) (s2 + 60));
    a0 = s3;
    a1 = s1; func_00C71510(a0, a1);
    s3 = (s32) ((u32) s3 + 0x1U);
    (*(volatile u16 *) (u32) (s2 + 62)) = (u16) s1;
    v0 = s3 < 3;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x4U); if (c_) goto L_00C70CDC; }
    goto L_00C70D70;
L_00C70D08:;
    s1 = (s32) 0xcd0000U;
    s2 = 0;
    s1 = (s32) ((u32) s1 + 0xffffcf98U);
L_00C70D14:;
    a0 = (*(volatile s32 *) (u32) s1);
    a1 = 0; func_001EF900(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 6;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00C70D14; }
    v0 = (s32) 0xcd0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -12368));
    a1 = 1; func_001EF900(a0, a1);
    s2 = (s32) 0xcd0000U;
    s3 = 0;
    s2 = (s32) ((u32) s2 + 0xffffbcd0U);
L_00C70D4C:;
    s1 = (*(volatile u16 *) (u32) (s2 + 60));
    a0 = s3;
    a1 = s1; func_00C71510(a0, a1);
    s3 = (s32) ((u32) s3 + 0x1U);
    (*(volatile u16 *) (u32) (s2 + 62)) = (u16) s1;
    v0 = s3 < 3;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x4U); if (c_) goto L_00C70D4C; }
L_00C70D70:;
    if (s0 == 0) goto L_00C70EE4;
    s3 = (s32) 0xcd0000U;
    s5 = 0;
    s3 = (s32) ((u32) s3 + 0xffffbcd0U);
    s2 = 75;
L_00C70D88:;
    v1 = (*(volatile u16 *) (u32) (s3 + 52));
    v0 = (s32) 0x66660000U;
    v0 = v0 | 0x6667;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v0 = hi;
    v1 = (s32) ((u32) v1 >> 31);
    v0 = (s32) v0 >> 2;
    v0 = (s32) ((u32) v0 + (u32) v1);
    if (v0 == 0) { s0 = 1; goto L_00C70DB4; }
    s0 = 2;
L_00C70DB4:;
    v0 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) s2 << 2);
    v0 = (s32) ((u32) v0 + 0xffffce30U);
    s4 = 0;
    v0 = (s32) ((u32) v0 + (u32) v1);
    { s32 c_ = s0 <= 0; s1 = (s32) ((u32) v0 + 0x1cU); if (c_) goto L_00C70DF0; }
L_00C70DD0:;
    a0 = (*(volatile s32 *) (u32) s1);
    a1 = 1; func_001EF900(a0, a1);
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = s4 < s0;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00C70DD0; }
L_00C70DF0:;
    s5 = (s32) ((u32) s5 + 0x1U);
    v0 = s5 < 2;
    s3 = (s32) ((u32) s3 + 0x4U);
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x2U); if (c_) goto L_00C70D88; }
    s0 = (s32) 0xcd0000U;
    s1 = 0;
    s0 = (s32) ((u32) s0 + 0xffffcf88U);
L_00C70E10:;
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = 1; func_001EF900(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 4;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00C70E10; }
    v0 = (s32) 0xcd0000U;
    v0 = (s32) ((u32) v0 + 0xffffcf74U);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 1; func_001EF900(a0, a1);
    s1 = (s32) 0xcd0000U;
    s2 = 0;
    s1 = (s32) ((u32) s1 + 0xffffbcd0U);
L_00C70E4C:;
    s0 = (*(volatile u16 *) (u32) (s1 + 52));
    a0 = s2;
    a1 = s0; func_00C711D0(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    (*(volatile u16 *) (u32) (s1 + 54)) = (u16) s0;
    v0 = s2 < 2;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00C70E4C; }
    v0 = (s32) 0xcd0000U;
    s0 = (s32) 0xcd0000U;
    v0 = (*(volatile u16 *) (u32) (v0 + -17132));
    s0 = (s32) ((u32) s0 + 0xffffcf88U);
    s5 = 0;
    s2 = 0;
    s6 = v0 & 0x1;
L_00C70E8C:;
    v0 = (s32) ((u32) s2 << 2);
    s3 = s5 ^ s6;
    s4 = 0;
    s1 = (s32) ((u32) s0 + (u32) v0);
L_00C70EA0:;
    a0 = (*(volatile s32 *) (u32) s1);
    a1 = s3;
    a2 = 1;
    a3 = 0;
    a4 = 0;
    a5 = 0; func_002F9F20(a0, a1, a2, a3, a4, a5);
    s4 = (s32) ((u32) s4 + 0x1U);
    v1 = s4 < 2;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00C70EA0; }
    s5 = (s32) ((u32) s5 + 0x1U);
    v1 = s5 < 2;
    { s32 c_ = v1 != 0; s2 = (s32) ((u32) s2 + 0x2U); if (c_) goto L_00C70E8C; }
    goto L_00C70FB0;
L_00C70EE4:;
    s3 = (s32) 0xcd0000U;
    s5 = 0;
    s3 = (s32) ((u32) s3 + 0xffffbcd0U);
    s2 = 75;
L_00C70EF4:;
    v1 = (*(volatile u16 *) (u32) (s3 + 52));
    v0 = (s32) 0x66660000U;
    v0 = v0 | 0x6667;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v0 = hi;
    v1 = (s32) ((u32) v1 >> 31);
    v0 = (s32) v0 >> 2;
    v0 = (s32) ((u32) v0 + (u32) v1);
    if (v0 == 0) { s0 = 1; goto L_00C70F20; }
    s0 = 2;
L_00C70F20:;
    v0 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) s2 << 2);
    v0 = (s32) ((u32) v0 + 0xffffce30U);
    s4 = 0;
    v0 = (s32) ((u32) v0 + (u32) v1);
    { s32 c_ = s0 <= 0; s1 = (s32) ((u32) v0 + 0x1cU); if (c_) goto L_00C70F60; }
L_00C70F40:;
    a0 = (*(volatile s32 *) (u32) s1);
    a1 = 0; func_001EF900(a0, a1);
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = s4 < s0;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00C70F40; }
L_00C70F60:;
    s5 = (s32) ((u32) s5 + 0x1U);
    v0 = s5 < 2;
    s3 = (s32) ((u32) s3 + 0x4U);
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x2U); if (c_) goto L_00C70EF4; }
    s0 = (s32) 0xcd0000U;
    s1 = 0;
    s0 = (s32) ((u32) s0 + 0xffffcf88U);
L_00C70F80:;
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = 0; func_001EF900(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 4;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00C70F80; }
    v0 = (s32) 0xcd0000U;
    v0 = (s32) ((u32) v0 + 0xffffcf74U);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 0; func_001EF900(a0, a1);
L_00C70FB0:;
L_00C70FB4:;
    return;
}
