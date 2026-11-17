/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00930240(s32);
void func_00A00960(s32, s32);
s32 func_00BC03A0(s32, s32, s32, s32);

void func_009D6E10(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;

    a2 = (*(volatile s32 *) (u32) (a0 + 4));
    a1 = (*(volatile u16 *) (u32) (a2 + 48));
    at = a1 < 1434;
    { s32 c_ = at == 0; s0 = a0; if (c_) goto L_009D6F0C; }
    v1 = 432;
    if (a1 == v1) goto L_009D6E68;
    v1 = 628;
    if (a1 == v1) goto L_009D6E50;
    f1.f = (*(volatile f32 *) (u32) (a2 + 56)); goto L_009D6EA0;
L_009D6E50:;
    a1 = 4096; func_00A00960(a0, a1);
    a0 = s0; func_00930240(a0);
    goto L_009D6F04;
L_009D6E68:;
    a2 = (*(volatile u8 *) (u32) (a2 + 45));
    a1 = 1;
    v0 = (*(volatile u16 *) (u32) (s0 + 56));
    v1 = -1;
    if (a2 != 0) a1 = v1;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = (*(volatile u16 *) (u32) (s0 + 38));
    v1 = v1 & 0xffff;
    v0 = (s32) ((u32) v0 - (u32) v1);
    (*(volatile u16 *) (u32) (s0 + 38)) = (u16) v0; func_00930240(a0);
    goto L_009D6F04;
    f1.f = (*(volatile f32 *) (u32) (a2 + 56));
L_009D6EA0:;
    f0.i = (s32) 0;
    fcc = f0.f == f1.f;
    if (fcc) goto L_009D6FE0;
    v1 = (s32) 0x41a80000U;
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_009D7018;
    a1 = (*(volatile s32 *) (u32) (s0 + 28));
    v1 = (s32) 0x51eb0000U;
    v1 = v1 | 0x851f;
    a0 = (s32) ((u32) a1 << 1);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (s32) ((u32) a0 << 5);
    a0 = (s32) ((u32) a0 + (u32) a1);
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a0 = (s32) ((u32) a0 >> 31);
    v1 = hi;
    v1 = (s32) v1 >> 5;
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) (s0 + 28)) = (u32) v1;
L_009D6F04:;
    goto L_009D7074;
L_009D6F0C:;
    a0 = a1; v0 = func_00BC03A0(a0, a1, a2, a3);
    v1 = 66;
    if (v0 == v1) goto L_009D6F6C;
    v1 = 68;
    if (v0 == v1) goto L_009D6F50;
    v1 = 67;
    if (v0 == v1) goto L_009D6F40;
    a1 = (*(volatile s32 *) (u32) (s0 + 28)); goto L_009D6FAC;
L_009D6F40:;
    a0 = s0; func_00930240(a0);
    goto L_009D6F04;
L_009D6F50:;
    a0 = s0;
    a1 = 4096; func_00A00960(a0, a1);
    a0 = s0; func_00930240(a0);
    goto L_009D6F04;
L_009D6F6C:;
    a1 = (*(volatile s32 *) (u32) (s0 + 4));
    a0 = 1;
    v0 = (*(volatile u16 *) (u32) (s0 + 56));
    v1 = -1;
    a1 = (*(volatile u8 *) (u32) (a1 + 45));
    if (a1 != 0) a0 = v1;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = (*(volatile u16 *) (u32) (s0 + 38));
    v1 = v1 & 0xffff;
    a0 = s0;
    v0 = (s32) ((u32) v0 - (u32) v1);
    (*(volatile u16 *) (u32) (s0 + 38)) = (u16) v0; func_00930240(a0);
    goto L_009D6F04;
    a1 = (*(volatile s32 *) (u32) (s0 + 28));
L_009D6FAC:;
    v1 = (s32) 0x51eb0000U;
    v1 = v1 | 0x851f;
    a0 = (s32) ((u32) a1 << 1);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (s32) ((u32) a0 << 5);
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a0 = (s32) ((u32) a0 >> 31);
    v1 = hi;
    v1 = (s32) v1 >> 5;
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) (s0 + 28)) = (u32) v1; goto L_009D6F04;
L_009D6FE0:;
    a1 = (*(volatile s32 *) (u32) (s0 + 28));
    v1 = (s32) 0x51eb0000U;
    v1 = v1 | 0x851f;
    a0 = (s32) ((u32) a1 << 1);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (s32) ((u32) a0 << 5);
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a0 = (s32) ((u32) a0 >> 31);
    v1 = hi;
    v1 = (s32) v1 >> 5;
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) (s0 + 28)) = (u32) v1; goto L_009D6F04;
L_009D7018:;
    a1 = (*(volatile u16 *) (u32) (s0 + 56)); func_00A00960(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    v1 = (s32) 0x41a80000U;
    f0.i = (s32) v1;
    f1.f = (*(volatile f32 *) (u32) (a0 + 56));
    fcc = f1.f < f0.f;
    if (fcc) goto L_009D7070;
    a1 = (*(volatile s32 *) (u32) (s0 + 28));
    v1 = (s32) 0x66660000U;
    v1 = v1 | 0x6667;
    a0 = (s32) ((u32) a1 << 3);
    a0 = (s32) ((u32) a0 + (u32) a1);
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a0 = (s32) ((u32) a0 >> 31);
    v1 = hi;
    v1 = (s32) v1 >> 2;
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) (s0 + 28)) = (u32) v1; goto L_009D6F04;
L_009D7070:;
L_009D7074:;
    return;
}
