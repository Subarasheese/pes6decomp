/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_002C7280(s64, s64);

s64 func_002C6550(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 hi = 0, lo = 0;

    v0 = (s32) 0x1fe0000U;
    a3 = 1;
    v0 = v0 | 0x88df;
    s1 = a0;
    s0 = a2;
    a2 = (s32) ((u32) a3 << (s0 & 31));
    v0 = a2 & v0;
    { s32 c_ = v0 != 0; v1 = 0; if (c_) goto L_002C6790; }
    v0 = (s32) ((u32) a1 + 0xfffffff8U);
    at = (u64) v0 < (u64) (s64) 33;
    if (at == 0) goto L_002C65F8;
    a1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 << 2);
    a1 = (s32) ((u32) a1 + 0xffffa570U);
    v0 = (s32) ((u32) v0 + (u32) a1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x2c65b0U) goto L_002C65B0; if (t_ == 0x2c65c4U) goto L_002C65C4; if (t_ == 0x2c65ccU) goto L_002C65CC; if (t_ == 0x2c65e0U) goto L_002C65E0; if (t_ == 0x2c65f8U) goto L_002C65F8; }
L_002C65B0:;
    a1 = a3; v0 = func_002C7280(a0, a1);
    if (v0 != 0) goto L_002C6798;
    v1 = 1;
L_002C65C4:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_002C65E4;
L_002C65CC:;
    a1 = 2; v0 = func_002C7280(a0, a1);
    if (v0 != 0) goto L_002C67A0;
    v1 = 1;
L_002C65E0:;
    v0 = 0;
L_002C65E4:;
    a0 = v0 & 0xff;
    v0 = (*(volatile u8 *) (u32) s1);
    a4 = a0 ^ 0x1;
    a3 = v0 & 0x1; goto L_002C6600;
L_002C65F8:;
    v0 = 100; goto L_002C67A4;
L_002C6600:;
    if (a3 == a4) goto L_002C6610;
    a0 = 7; goto L_002C661C;
L_002C6610:;
    v0 = (*(volatile u8 *) (u32) (s1 + 29));
    v0 = (s64) ((u64) v0 << 58);
    a0 = (s64) ((u64) v0 >> 61);
L_002C661C:;
    v0 = (s32) ((u32) a0 << 2);
    a2 = 7;
    a1 = (s32) ((u32) v0 + (u32) a0);
    a0 = (s32) ((u32) a1 << 2);
    v0 = (s32) 0x92490000U;
    a0 = (s32) ((u32) a1 + (u32) a0);
    v0 = v0 | 0x2493;
    a1 = (s32) ((u32) a0 << 2);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a0 = (s32) ((u32) a1 >> 31);
    v0 = hi;
    v0 = (s32) ((u32) v0 + (u32) a1);
    v0 = (s32) v0 >> 2;
    { s32 c_ = a3 == a4; v0 = (s32) ((u32) v0 + (u32) a0); if (c_) goto L_002C6664; }
    a1 = (s32) ((u32) a2 << 2); goto L_002C6674;
L_002C6664:;
    a0 = (*(volatile u8 *) (u32) (s1 + 28));
    a0 = (s64) ((u64) a0 << 58);
    a2 = (s64) ((u64) a0 >> 61);
    a1 = (s32) ((u32) a2 << 2);
L_002C6674:;
    a0 = (s32) 0x92490000U;
    a2 = (s32) ((u32) a1 + (u32) a2);
    a0 = a0 | 0x2493;
    a1 = (s32) ((u32) a2 << 2);
    a1 = (s32) ((u32) a2 + (u32) a1);
    a3 = (s32) ((u32) a1 << 2);
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) a3; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a2 = (s32) ((u32) a3 >> 31);
    a1 = hi;
    a0 = (s32) ((u32) s0 + 0xfffffffbU);
    at = (u64) a0 < (u64) (s64) 12;
    a1 = (s32) ((u32) a1 + (u32) a3);
    a1 = (s32) a1 >> 2;
    { s32 c_ = at == 0; a2 = (s32) ((u32) a1 + (u32) a2); if (c_) goto L_002C674C; }
    a1 = (s32) 0x3e0000U;
    a0 = (s32) ((u32) a0 << 2);
    a1 = (s32) ((u32) a1 + 0xffffa540U);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (*(volatile s32 *) (u32) a0);
    { u32 t_ = (u32) a0; ; if (t_ == 0x2c65b0U) goto L_002C65B0; if (t_ == 0x2c65c4U) goto L_002C65C4; if (t_ == 0x2c65ccU) goto L_002C65CC; if (t_ == 0x2c65e0U) goto L_002C65E0; if (t_ == 0x2c65f8U) goto L_002C65F8; if (t_ == 0x2c66d0U) goto L_002C66D0; if (t_ == 0x2c670cU) goto L_002C670C; if (t_ == 0x2c674cU) goto L_002C674C; }
L_002C66D0:;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a2; lo = (s32) m_; hi = (s32) (m_ >> 32); a1 = lo; }
    a0 = (s32) ((u32) a1 << 2);
    v0 = (s32) 0x68db0000U;
    a1 = (s32) ((u32) a0 + (u32) a1);
    v0 = v0 | 0x8bad;
    a0 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) a1 + (u32) a0);
    a0 = (s32) ((u32) a0 << 2);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a0 = (s32) ((u32) a0 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 12;
    v0 = (s32) ((u32) v0 + (u32) a0); goto L_002C6754;
L_002C670C:;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a2; lo = (s32) m_; hi = (s32) (m_ >> 32); a1 = lo; }
    a0 = (s32) ((u32) a1 << 2);
    v0 = (s32) 0x68db0000U;
    a1 = (s32) ((u32) a0 + (u32) a1);
    v0 = v0 | 0x8bad;
    a0 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) a1 + (u32) a0);
    a0 = (s32) ((u32) a0 << 1);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a0 = (s32) ((u32) a0 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 12;
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0x32U); goto L_002C6754;
L_002C674C:;
    v0 = 100; goto L_002C67A4;
L_002C6754:;
    if (v1 != 0) goto L_002C67A4;
    a0 = 100;
    v1 = (s32) 0x66660000U;
    v1 = v1 | 0x6667;
    v0 = (s32) ((u32) a0 - (u32) v0);
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v0 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 1;
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) a0 - (u32) v0);
    goto L_002C67A8;
L_002C6790:;
    v0 = 100; goto L_002C67A4;
L_002C6798:;
    v0 = 100; goto L_002C67A4;
L_002C67A0:;
    v0 = 100;
L_002C67A4:;
L_002C67A8:;
    return v0;
}
