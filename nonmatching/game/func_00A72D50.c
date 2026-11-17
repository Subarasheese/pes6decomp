/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00288670(s32, s32);
s32 func_00A13E50(s32, s32);
s32 func_00A1FE80(s32, s32);
s32 func_00AB4850(s32, s32, s32, s32);
s32 func_00BBB8C0(s32);

void func_00A72D50(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;

    v0 = (s32) 0x45bc0000U;
    f0.i = (s32) v0;
    s3 = a2;
    s1 = a0;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    f1.f = (*(volatile f32 *) (u32) (v1 + 48));
    fcc = f1.f <= f0.f;
    { s32 c_ = fcc; s0 = a1; if (c_) goto L_00A72DE0; }
    f2.i = f1.i ^ (s32) 0x80000000U;
    v1 = (s32) 0x433c0000U;
    f1.i = (s32) v1;
    a0 = (s32) 0x40000000U;
    f0.i = (s32) a0;
    v0 = (*(volatile s32 *) (u32) (s1 + 4));
    f1.f = f2.f / f1.f;
    v1 = 232;
    a0 = (*(volatile u16 *) (u32) (v0 + 48));
    f0.f = f1.f / f0.f;
    f0.i = (s32) f0.f;
    v0 = f0.i;
    if (a0 == v1) { a0 = v0; goto L_00A72DD0; }
L_00A72DC8:;
    goto L_00A731C0;
L_00A72DD0:;
    a1 = 48; v0 = func_00A1FE80(a0, a1);
    goto L_00A72DC8;
L_00A72DE0:;
    a2 = (*(volatile u8 *) (u32) (s1 + 18));
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s1 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    a1 = 50;
    v0 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a2 << 3);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a2 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 117));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    s2 = v0;
    at = s2 < 51;
    if (at != 0) goto L_00A72E9C;
    at = s2 < 80;
    if (at == 0) { v0 = (s32) 0x66660000U; goto L_00A72E7C; }
    v1 = (s32) ((u32) s2 << 1);
    v0 = (s32) 0x66660000U;
    v1 = (s32) ((u32) v1 + (u32) s2);
    v0 = v0 | 0x6667;
    v1 = (s32) ((u32) v1 << 2);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v1 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 2;
    s2 = (s32) ((u32) v0 + (u32) v1); goto L_00A72E9C;
L_00A72E7C:;
    v1 = (s32) ((u32) s2 << 4);
    v0 = v0 | 0x6667;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v1 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 2;
    s2 = (s32) ((u32) v0 + (u32) v1);
L_00A72E9C:;
    a2 = (*(volatile u8 *) (u32) (s1 + 18));
    a1 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (s1 + 4));
    a1 = (s32) ((u32) a1 + 0x2980U);
    a0 = (*(volatile u8 *) (u32) (s1 + 17));
    v1 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) v1 - (u32) a2);
    v0 = (*(volatile u8 *) (u32) (v0 + 45));
    v1 = (s32) ((u32) a0 << 4);
    a0 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) a2 << 3);
    a2 = (s32) ((u32) v1 - (u32) a2);
    v1 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) v1 - (u32) a0);
    a0 = (s32) ((u32) a2 << 8);
    v1 = (s32) ((u32) v1 << 3);
    a0 = (s32) ((u32) a1 + (u32) a0);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) (v1 + 104));
    v1 = v1 & 0x1;
    v1 = v1 & 0x1;
    if (v0 != v1) { a0 = s1; goto L_00A73100; }
    v0 = (s32) ((u32) s2 << 4);
    v0 = (s32) ((u32) v0 - (u32) s2);
    v1 = (s32) ((u32) v0 << 1);
L_00A72F04:;
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 5; if (c_) goto L_00A72F14; }
    v0 = (s32) ((u32) v1 + 0x1fU);
    v0 = (s32) v0 >> 5;
L_00A72F14:;
    a2 = (*(volatile u8 *) (u32) (s1 + 18));
    s2 = (s32) ((u32) s3 + (u32) v0);
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s1 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    a1 = 30;
    v0 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a2 << 3);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a2 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 116));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    v1 = 99;
    a0 = (s32) ((u32) v1 - (u32) v0); v0 = func_00BBB8C0(a0);
    s3 = (s32) ((u32) s2 - (u32) v0);
    at = s3 < 128;
    if (at == 0) goto L_00A72F88;
    s3 = 128;
L_00A72F88:;
    if ((s32) s3 != 0) { s64 q_ = (s32) ((s32) s0 / (s32) s3); hi = (s32) ((s32) s0 % (s32) s3); lo = q_; }
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (s32) 0xc4bc0000U;
    f0.i = (s32) v0;
    f1.f = (*(volatile f32 *) (u32) (v1 + 48));
    fcc = f1.f < f0.f;
    s2 = lo;
    if (fcc) { a0 = 20; goto L_00A73124; }
    at = s0 < 2048;
    if (at == 0) { v1 = (*(volatile s32 *) (u32) (s1 + 4)); goto L_00A72FD4; }
    v1 = (*(volatile s32 *) (u32) (s1 + 4));
    v0 = 232;
    v1 = (*(volatile u16 *) (u32) (v1 + 48));
    if (v1 == v0) { a0 = s2; goto L_00A7319C; }
L_00A72FCC:;
    v0 = 0; goto L_00A731BC;
L_00A72FD4:;
    v0 = 606;
    v1 = (*(volatile u16 *) (u32) (v1 + 48));
    if (v1 == v0) { a0 = s2; goto L_00A730C8; }
    v0 = 640;
    if (v1 == v0) goto L_00A730A4;
    v0 = 639;
    if (v1 == v0) goto L_00A730A4;
    v0 = 586;
    if (v1 == v0) goto L_00A73090;
    v0 = 211;
    if (v1 == v0) goto L_00A73090;
    v0 = 223;
    if (v1 == v0) goto L_00A7307C;
    v0 = 212;
    if (v1 == v0) goto L_00A7307C;
    v0 = 208;
    if (v1 == v0) goto L_00A7307C;
    v0 = 207;
    if (v1 == v0) goto L_00A7307C;
    v0 = 687;
    if (v1 == v0) goto L_00A7307C;
    v0 = 226;
    if (v1 == v0) goto L_00A7307C;
    v0 = 230;
    if (v1 == v0) goto L_00A7307C;
    v0 = 224;
    if (v1 == v0) goto L_00A7307C;
    at = s2 < 33; goto L_00A730D8;
L_00A7307C:;
    at = s2 < 29;
    if (at != 0) goto L_00A730E4;
    s2 = 28; goto L_00A730E4;
L_00A73090:;
    at = s2 < 27;
    if (at != 0) goto L_00A730E4;
    s2 = 26; goto L_00A730E4;
L_00A730A4:;
    { s32 c_ = s2 >= 0; v0 = (s32) s2 >> 1; if (c_) goto L_00A730B4; }
    v0 = (s32) ((u32) s2 + 0x1U);
    v0 = (s32) v0 >> 1;
L_00A730B4:;
    at = v0 < 33;
    { s32 c_ = at != 0; s2 = v0; if (c_) goto L_00A730E4; }
    s2 = 32; goto L_00A730E4;
L_00A730C8:;
    a1 = 24; v0 = func_00A13E50(a0, a1);
    s2 = v0; goto L_00A730E4;
L_00A730D8:;
    if (at != 0) goto L_00A730E4;
    s2 = 32;
L_00A730E4:;
    v1 = (*(volatile s32 *) (u32) (s1 + 4));
    v0 = 232;
    v1 = (*(volatile u16 *) (u32) (v1 + 48));
    if (v1 == v0) { a0 = s2; goto L_00A731AC; }
L_00A730F8:;
    v0 = s2; goto L_00A731BC;
L_00A73100:;
    a1 = 16; v0 = func_00AB4850(a0, a1, a2, a3);
    v1 = (s32) ((u32) s2 << 2);
    v1 = (s32) ((u32) v1 + (u32) s2);
    v1 = (s32) ((u32) v1 << 6);
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v1 = lo;
    goto L_00A72F04;
L_00A73124:;
    v0 = func_00BBB8C0(a0);
    a1 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (s32) ((u32) v0 + 0x32U);
    f0.i = (s32) v0;
    a0 = (s32) 0x46920000U;
    a0 = a0 | 0xe000;
    v1 = (*(volatile s32 *) (u32) (s1 + 4));
    f3.f = (f32) f0.i;
    v0 = 232;
    v1 = (*(volatile u16 *) (u32) (v1 + 48));
    f2.f = (*(volatile f32 *) (u32) (a1 + 48));
    f0.i = (s32) s2;
    f1.i = (s32) a0;
    f0.f = (f32) f0.i;
    f2.i = f2.i ^ (s32) 0x80000000U;
    f2.f = f2.f * f3.f;
    f1.f = f2.f / f1.f;
    f0.f = f0.f + f1.f;
    f0.i = (s32) f0.f;
    s2 = f0.i;
    if (v1 == v0) { a0 = s2; goto L_00A7318C; }
L_00A73184:;
    v0 = s2; goto L_00A731BC;
L_00A7318C:;
    a1 = 48; v0 = func_00A1FE80(a0, a1);
    s2 = v0; goto L_00A73184;
L_00A7319C:;
    a1 = 48; v0 = func_00A1FE80(a0, a1);
    goto L_00A72FCC;
L_00A731AC:;
    a1 = 48; v0 = func_00A1FE80(a0, a1);
    s2 = v0; goto L_00A730F8;
L_00A731BC:;
L_00A731C0:;
    return;
}
