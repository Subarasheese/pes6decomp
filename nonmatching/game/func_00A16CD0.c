/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00997EF0(s64);
s64 func_009B30B0(s64, s64);
s64 func_009B33A0(s64, s64, s64);

s64 func_00A16CD0(s64 a0, s64 a1, s64 a2) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;

    v0 = (s32) 0x590000U;
    v1 = 255;
    s2 = a0;
    a0 = (*(volatile u8 *) (u32) (v0 + 7705));
    if (a0 == v1) { v0 = 1; goto L_00A16D44; }
    { s32 c_ = a0 == v1; a1 = (*(volatile u8 *) (u32) (s2 + 19)); if (c_) goto L_00A16D18; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v0); hi = (s32) ((s32) a0 % (s32) v0); lo = q_; }
    a0 = hi; goto L_00A16D1C;
L_00A16D18:;
    a0 = 1;
L_00A16D1C:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 19));
    if (a1 != v0) { v0 = 1; goto L_00A16D44; }
    v0 = 0;
L_00A16D44:;
    if (v0 != 0) goto L_00A16D64;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7756));
    if (v0 == 0) goto L_00A16D64;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_00A16E2C;
L_00A16D64:;
    v1 = (*(volatile u8 *) (u32) (s2 + 19));
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1efdU);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 != 0) goto L_00A16F80;
    v0 = (s32) 0x590000U;
    a0 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + 0x1f16U);
    v1 = (*(volatile u8 *) (u32) s2);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v1 == v0) goto L_00A16F78;
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1f17U);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v1 == v0) goto L_00A16F78;
    v0 = 0;
L_00A16DBC:;
    if (v0 != 0) goto L_00A16F80;
    a0 = s2; v0 = func_00997EF0(a0);
    if (v0 != 0) goto L_00A16F80;
    a0 = (*(volatile u8 *) (u32) (s2 + 19));
    v0 = (*(volatile s32 *) (u32) (gp + -31080));
    v1 = a0 ^ 0x1;
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 != 0) goto L_00A16F80;
    v0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 << 1);
    v0 = (s32) ((u32) v0 + 0x1e4fU);
    v1 = (*(volatile u8 *) (u32) s2);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v1 == v0) goto L_00A16F80;
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e50U);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v1 == v0) goto L_00A16F80;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1);
L_00A16E2C:;
    if (v0 != 0) { v0 = 0; goto L_00A1714C; }
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7756));
    { s32 c_ = v0 == 0; s1 = (*(volatile u16 *) (u32) (s2 + 268)); if (c_) goto L_00A17074; }
    a2 = v0 & 0xff;
    v0 = (*(volatile u8 *) (u32) s2);
    if (v0 == a2) goto L_00A16EC0;
    v0 = (s32) 0x590000U;
    v1 = 255;
    a0 = (*(volatile u8 *) (u32) (v0 + 7705));
    if (a0 == v1) { v0 = 1; goto L_00A16EB0; }
    { s32 c_ = a0 == v1; a1 = (*(volatile u8 *) (u32) (s2 + 19)); if (c_) goto L_00A16E84; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v0); hi = (s32) ((s32) a0 % (s32) v0); lo = q_; }
    a0 = hi; goto L_00A16E88;
L_00A16E84:;
    a0 = 1;
L_00A16E88:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 19));
    if (a1 != v0) { v0 = 1; goto L_00A16EB0; }
    v0 = 0;
L_00A16EB0:;
    if (v0 != 0) goto L_00A16EC0;
    v0 = 0; goto L_00A1714C;
L_00A16EC0:;
    v0 = 255;
    if (a2 == v0) { a0 = 1; goto L_00A16ED8; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a2 / (s32) v0); hi = (s32) ((s32) a2 % (s32) v0); lo = q_; }
    a0 = hi;
L_00A16ED8:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    a0 = (*(volatile u8 *) (u32) (s2 + 19));
    a1 = (s32) ((u32) v1 << 6);
    v1 = (s32) 0x590000U;
    s0 = (s32) ((u32) v0 + (u32) a1);
    v1 = (s32) ((u32) v1 + 0x1e4fU);
    v0 = 255;
    a0 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 == v0) { a0 = 1; goto L_00A16F20; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00A16F20:;
    v0 = (s32) ((u32) a0 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    v0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 << 6);
    v0 = (*(volatile u8 *) (u32) (v0 + 7956));
    { s32 c_ = v0 != 0; v1 = (s32) ((u32) v1 + (u32) a0); if (c_) goto L_00A16F88; }
    if (s2 == v1) goto L_00A16F88;
    v0 = (*(volatile s32 *) (u32) (v1 + 272));
    v1 = (*(volatile s32 *) (u32) (s2 + 272));
    at = (u64) v1 < (u64) v0;
    if (at == 0) goto L_00A16F88;
    v0 = (*(volatile s32 *) (u32) (s0 + 272));
    at = (u64) v1 < (u64) v0;
    if (at == 0) goto L_00A16F88;
    v0 = 1; goto L_00A1714C;
L_00A16F78:;
    v0 = 1; goto L_00A16DBC;
L_00A16F80:;
    v0 = 0; goto L_00A16E2C;
L_00A16F88:;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (*(volatile u8 *) (u32) (v0 + 9958));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    f1.f = (*(volatile f32 *) (u32) (v0 + 1148));
    f0.f = (*(volatile f32 *) (u32) (v0 + 2940));
    f1.i = (s32) f1.f;
    f0.i = (s32) f0.f;
    a1 = f1.i;
    a2 = f0.i;
    a0 = s2; v0 = func_009B33A0(a0, a1, a2);
    at = (s32) 0x20000U;
    at = at | 0x4000;
    at = (u64) v0 < (u64) at;
    if (at == 0) { v0 = (*(volatile u8 *) (u32) s2); goto L_00A16FD8; }
    v0 = 1; goto L_00A1714C;
L_00A16FD8:;
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) s0);
    a0 = (*(volatile u16 *) (u32) (v0 + 296));
    a1 = (*(volatile u16 *) (u32) (s2 + 40)); v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 65;
    if (at == 0) goto L_00A1706C;
    v1 = (*(volatile u8 *) (u32) (s2 + 22));
    v0 = 23;
    if (v1 != v0) goto L_00A1702C;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    a1 = (*(volatile u16 *) (u32) (v0 + 92));
    a0 = s1; v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 81;
    if (at != 0) goto L_00A1706C;
L_00A1702C:;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v0 + 9958));
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    f1.f = (*(volatile f32 *) (u32) (v0 + 1148));
    f0.f = (*(volatile f32 *) (u32) (v0 + 2940));
    f1.i = (s32) f1.f;
    f0.i = (s32) f0.f;
    a1 = f1.i;
    a2 = f0.i;
    a0 = s2; v0 = func_009B33A0(a0, a1, a2);
    v1 = (s32) 0x10000U;
    v0 = (u64) v0 < (u64) v1; goto L_00A1714C;
L_00A1706C:;
    v0 = 0; goto L_00A1714C;
L_00A17074:;
    v0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 9964));
    { s32 c_ = v0 < 0; f1.f = (*(volatile f32 *) (u32) (v1 + 9944)); if (c_) goto L_00A17094; }
    f0.i = (s32) v0;
    f0.f = (f32) f0.i; goto L_00A170B0;
L_00A17094:;
    v1 = (s32) ((u32) v0 >> 1);
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f0.f + f0.f;
L_00A170B0:;
    fcc = f1.f <= f0.f;
    if (fcc) { v0 = 0; goto L_00A1714C; }
    a0 = (*(volatile u8 *) (u32) (s2 + 19));
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1e4fU);
    v0 = 255;
    a0 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 == v0) { a0 = 1; goto L_00A170EC; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00A170EC:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    v1 = (s32) ((u32) v0 + (u32) v1);
    if (s2 == v1) goto L_00A17124;
    v0 = (*(volatile s32 *) (u32) (v1 + 276));
    at = (u64) v0 < (u64) (s64) 513;
    if (at == 0) goto L_00A17124;
    v0 = 0; goto L_00A1714C;
L_00A17124:;
    v0 = (*(volatile u8 *) (u32) v1);
    at = (s32) 0x40000U;
    at = at | 0x1;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) s2);
    v0 = (*(volatile s32 *) (u32) (v0 + 344));
    at = (u64) v0 < (u64) at;
    if (at == 0) goto L_00A1702C;
    v0 = 0;
L_00A1714C:;
    return v0;
}
