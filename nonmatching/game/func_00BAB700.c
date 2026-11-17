/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_009B33A0(s64, s64, s64);
s64 func_009E1C90(s64);

s64 func_00BAB700(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    u64 qh_v1 = 0;
    u64 qh_a0 = 0;
    u64 qh_a3 = 0;
    s64 hi1 = 0, lo1 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;

    v0 = (s32) 0x590000U;
    v1 = 255;
    a0 = (*(volatile u8 *) (u32) (v0 + 7757));
    { s32 c_ = a0 == v1; s1 = 0; if (c_) goto L_00BAB73C; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v0); hi = (s32) ((s32) a0 % (s32) v0); lo = q_; }
    a0 = hi; goto L_00BAB740;
L_00BAB73C:;
    a0 = 1;
L_00BAB740:;
    v0 = (s32) ((u32) a0 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = (s32) ((u32) a0 << 6);
    v0 = 3;
    s2 = (s32) ((u32) v1 + (u32) a0);
    a1 = (*(volatile s32 *) (u32) (s2 + 4));
    a0 = (*(volatile s32 *) (u32) (a1 + 4));
    v1 = (*(volatile u8 *) (u32) (a0 + 13));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 57);
    if (v1 == v0) goto L_00BAB78C;
    v0 = 4;
    if (v1 == v0) goto L_00BAB78C;
    v0 = (s32) 0xcc0000U; goto L_00BAB7DC;
L_00BAB78C:;
    v0 = (*(volatile u16 *) (u32) (a0 + 8));
    v1 = (s32) ((u32) v0 << 1);
    if (v1 == 0) goto L_00BAB85C;
    v0 = (s32) ((u32) v1 + 0xfffffff6U);
    f0.i = (s32) v0;
    f1.f = (*(volatile f32 *) (u32) (a1 + 56));
    f0.f = (f32) f0.i;
    fcc = f1.f < f0.f;
    if (!fcc) { v0 = 255; goto L_00BAB938; }
    v0 = (s32) ((u32) v1 + 0xffffffecU);
    f0.i = (s32) v0;
    f0.f = (f32) f0.i;
    fcc = f1.f < f0.f;
    if (fcc) goto L_00BAB7F0;
    s1 = 1; goto L_00BAB7F0;
L_00BAB7DC:;
    v0 = (*(volatile u8 *) (u32) (v0 + -16839));
    if (v0 != 0) goto L_00BAB7F0;
    v0 = 255; goto L_00BAB938;
L_00BAB7F0:;
    a0 = 1;
    s0 = 0; v0 = func_009E1C90(a0);
    v1 = v0 & 0xff;
    v0 = 1;
    if (v1 == v0) goto L_00BAB81C;
    v1 = (*(volatile s32 *) (u32) (s2 + 144));
    v0 = 2;
    if (v1 != v0) goto L_00BAB844;
L_00BAB81C:;
    v1 = (*(volatile s32 *) (u32) (s2 + 28));
    v0 = (s32) 0x66660000U;
    v0 = v0 | 0x6667;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v1 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 4;
    v0 = (s32) ((u32) v0 + (u32) v1);
    s0 = (s32) ((u32) v0 + 0xc0U);
L_00BAB844:;
    if (s0 > 0) { a1 = (s64) ((u64) s0 << 32); goto L_00BAB8AC; }
L_00BAB84C:;
    if (s1 != 0) goto L_00BAB924;
    v0 = 0; goto L_00BAB938;
L_00BAB85C:;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (*(volatile u8 *) (u32) (v0 + 9948));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    f1.f = (*(volatile f32 *) (u32) (v0 + 1148));
    f0.f = (*(volatile f32 *) (u32) (v0 + 2940));
    f1.i = (s32) f1.f;
    f0.i = (s32) f0.f;
    a1 = f1.i;
    a2 = f0.i;
    a0 = s2; v0 = func_009B33A0(a0, a1, a2);
    v0 = (s64) ((u64) v0 << 32);
    v0 = (s64) ((u64) v0 >> 32);
    at = (u64) v0 < (u64) (s64) 25601;
    if (at == 0) goto L_00BAB7F0;
    s1 = 1; goto L_00BAB7F0;
L_00BAB8AC:;
    a1 = a1 >> 32;
    { s64 m_ = (s64) (u64) (u32) a1 * (s64) (u64) (u32) a1; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    v1 = hi;
    v0 = a1 >> 32;
    { u64 s_ = (u64) v1, t_ = (u64) a0; a3 = (s64) ((t_ & 0xFFFFFFFFU) | (s_ << 32)); qh_a3 = (t_ >> 32) | ((s_ >> 32) << 32); }
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a1; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); a2 = lo1; }
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); a1 = lo; }
    v0 = (s32) 0x590000U;
    a1 = (s64) ((u64) a2 + (u64) a1);
    v1 = (*(volatile u8 *) (u32) (v0 + 9948));
    a1 = (s64) ((u64) a1 << 32);
    s0 = (s64) ((u64) a1 + (u64) a3);
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
    v0 = (s64) ((u64) v0 << 32);
    v0 = (s64) ((u64) v0 >> 32);
    at = (u64) s0 < (u64) v0;
    if (at != 0) goto L_00BAB84C;
    s1 = 1; goto L_00BAB84C;
L_00BAB924:;
    v0 = (s32) 0xcc0000U;
    v1 = (s32) 0xcc0000U;
    (*(volatile u8 *) (u32) (v0 + -16844)) = (u8) 0;
    v0 = 1;
    (*(volatile u8 *) (u32) (v1 + -16841)) = (u8) 0;
L_00BAB938:;
    return v0;
}
