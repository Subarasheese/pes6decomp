/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_009975E0(s32);
s32 func_009B3070(s32, s32);
s32 func_009B30B0(s32, s32);
void func_00A15540(s32);
void func_00AA9F90(s32, s32, s32, s32, s32, s32, f32, f32);
s32 func_00AFBAB0(s32);

void func_00AABA00(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 hi = 0, lo = 0;

    v0 = (s32) 0x590000U;
    s4 = a0;
    s3 = a1;
    v1 = (*(volatile u8 *) (u32) a0);
    v0 = (*(volatile u8 *) (u32) (v0 + 7756));
    { s32 c_ = v1 != v0; s2 = a2; if (c_) goto L_00AABA5C; }
    v1 = (*(volatile u8 *) (u32) (s4 + 22));
    v0 = 2;
    if (v1 != v0) { a2 = (*(volatile s32 *) (u32) (s4 + 28)); goto L_00AABA54; }
    a2 = (*(volatile s32 *) (u32) (s4 + 88));
    s1 = 256; goto L_00AABB74;
L_00AABA54:;
    s1 = 160; goto L_00AABB74;
L_00AABA5C:;
    if (v0 == 0) { v0 = (*(volatile s32 *) (u32) (gp + -32252)); goto L_00AABBAC; }
    s1 = 32;
    v1 = (*(volatile u8 *) (u32) (s4 + 19));
L_00AABA6C:;
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e4fU);
    a0 = (*(volatile u8 *) (u32) s4);
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (a0 == v0) { s0 = 2; goto L_00AABC3C; }
L_00AABA8C:;
    v1 = (*(volatile s32 *) (u32) (s4 + 4));
    v0 = 916;
    v1 = (*(volatile u16 *) (u32) (v1 + 48));
    if (v1 == v0) { s1 = 0; goto L_00AABAA8; }
    v1 = (*(volatile u8 *) (u32) (s4 + 22)); goto L_00AABAB0;
L_00AABAA8:;
    a2 = 1024; goto L_00AABB74;
L_00AABAB0:;
    v0 = 16;
    if (v1 == v0) { a0 = (*(volatile u16 *) (u32) (s4 + 40)); goto L_00AABAF0; }
    v0 = 7;
    if (v1 == v0) { v0 = (*(volatile s32 *) (u32) (gp + -32252)); goto L_00AABAD0; }
    a0 = s4; goto L_00AABB30;
L_00AABAD0:;
    a1 = (*(volatile u16 *) (u32) (v0 + 88));
    a0 = (*(volatile u16 *) (u32) (s4 + 40)); v0 = func_009B30B0(a0, a1);
    v1 = v0 & 0xffff;
    v0 = 6912;
    v1 = (s32) ((u32) v1 << 2);
    a2 = (s32) ((u32) v0 - (u32) v1); goto L_00AABB74;
L_00AABAF0:;
    a1 = (*(volatile u16 *) (u32) (s4 + 268)); v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    v0 = v0 < 16;
    if (v0 != 0) goto L_00AABB2C;
    a0 = (*(volatile u16 *) (u32) (s4 + 40));
    a1 = (*(volatile u16 *) (u32) (s4 + 268));
    s1 = 16; v0 = func_009B30B0(a0, a1);
    v1 = v0 & 0xffff;
    v0 = 4352;
    v1 = (s32) ((u32) v1 << 3);
    a2 = (s32) ((u32) v0 - (u32) v1); goto L_00AABB74;
L_00AABB2C:;
    a0 = s4;
L_00AABB30:;
    v0 = func_009975E0(a0);
    if (v0 == 0) { a0 = (*(volatile u16 *) (u32) (s4 + 38)); goto L_00AABC8C; }
    a0 = (*(volatile s32 *) (u32) (s4 + 88));
    v0 = (s32) 0x51eb0000U;
    v0 = v0 | 0x851f;
    v1 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 5);
    v1 = (s32) ((u32) v1 + (u32) a0);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v1 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 5;
    a2 = (s32) ((u32) v0 + (u32) v1);
L_00AABB74:;
    a4 = s1;
    a5 = s3;
    a0 = s4;
    a1 = s4;
    a3 = 0; func_00AA9F90(a0, a1, a2, a3, a4, a5, f12.f, f13.f);
    if (s2 != 0) goto L_00AABCAC;
    a0 = (*(volatile u8 *) (u32) (s4 + 22));
    v1 = 7;
    if (a0 == v1) goto L_00AABCAC;
L_00AABBA4:;
    goto L_00AABCC0;
L_00AABBAC:;
    a1 = (*(volatile u16 *) (u32) (v0 + 88));
    a0 = (*(volatile u16 *) (u32) (s4 + 40)); v0 = func_009B30B0(a0, a1);
    v1 = (*(volatile u8 *) (u32) (s4 + 22));
    a0 = v0 & 0xffff;
    v0 = 157;
    if (v1 == v0) goto L_00AABBD4;
    v0 = a0 & 0xffff; goto L_00AABC04;
L_00AABBD4:;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) s4);
    v0 = (*(volatile u8 *) (u32) (v0 + 7705));
    if (v1 != v0) goto L_00AABC00;
    v0 = a0 & 0xffff;
    at = v0 < 33;
    if (at == 0) goto L_00AABC00;
    s1 = 256; goto L_00AABC14;
L_00AABC00:;
    v0 = a0 & 0xffff;
L_00AABC04:;
    v0 = v0 < 96;
    if (v0 != 0) { a1 = 64; goto L_00AABC1C; }
    s1 = 64;
L_00AABC14:;
    v1 = (*(volatile u8 *) (u32) (s4 + 19)); goto L_00AABA6C;
L_00AABC1C:;
    v0 = func_009B3070(a0, a1);
    v1 = v0 & 0xffff;
    v0 = 64;
    v0 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) v0 << 1);
    s1 = (s32) ((u32) v0 + 0x40U); goto L_00AABC14;
L_00AABC3C:;
    v0 = func_00AFBAB0(a0);
    v1 = (*(volatile u8 *) (u32) s4);
    a1 = v0 & 0xff;
    a0 = (*(volatile u8 *) (u32) (s4 + 18));
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1f44U);
    a2 = (s32) ((u32) v1 - (u32) a1);
    v1 = (s32) ((u32) a0 << 5);
    a1 = (s32) ((u32) a2 << 3);
    a0 = (s32) ((u32) v1 + (u32) a0);
    a1 = (s32) ((u32) a1 + (u32) a2);
    v1 = (s32) ((u32) a0 << 2);
    a1 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) a1 + (u32) v0);
    (*(volatile u8 *) (u32) v0) = (u8) s0; goto L_00AABA8C;
L_00AABC8C:;
    a1 = (*(volatile u16 *) (u32) (s4 + 268));
    s1 = 16; v0 = func_009B30B0(a0, a1);
    v1 = v0 & 0xffff;
    v0 = 4352;
    v1 = (s32) ((u32) v1 << 3);
    a2 = (s32) ((u32) v0 - (u32) v1); goto L_00AABB74;
L_00AABCAC:;
    a0 = s4;
    a1 = s4; func_00A15540(a0);
    goto L_00AABBA4;
L_00AABCC0:;
    return;
}
