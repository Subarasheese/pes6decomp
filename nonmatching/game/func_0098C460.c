/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00288670(s32, s32);
void func_0090BA50(s32, s32, s32, s32);
s32 func_00910D80(s32, s32, s32, s32);
void func_00912460(s32, s32, s32, s32);
void func_00912530(s32, s32, s32, s32);
s32 func_00914390(s32, s32, s32, s32);
void func_009143D0(s32, s32, s32, s32);
void func_009840C0(s32, s32, s32, s32, f32, f32, f32, f32);
void func_009842D0(s32, s32, s32, s32, f32, f32);
void func_0098AC30(s32, s32, s32, s32, f32, f32);
s32 func_0098C060(s32, s32, s32, s32, f32);
s32 func_0098CA50(s32, s32);
s32 func_00A07B40(void);

void func_0098C460(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    s32 hi = 0, lo = 0;

    s1 = a0;
    a3 = (*(volatile s32 *) (u32) (a0 + 488));
    at = 0 < a3;
    { s32 c_ = at == 0; s0 = 0; if (c_) goto L_0098C510; }
    at = a3 < 23;
    if (at == 0) goto L_0098C510;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    a0 = 1;
    v1 = (*(volatile u16 *) (u32) (v1 + 132));
    if (v1 == a0) goto L_0098C510;
    v1 = 255;
    if (a3 == v1) goto L_0098C4C0;
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) a3 / (s32) v1); hi = (s32) ((s32) a3 % (s32) v1); lo = q_; }
    a0 = hi;
L_0098C4C0:;
    v1 = (s32) ((u32) a0 << 3);
    a1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    a1 = (s32) ((u32) a1 + 0xffffe5b0U);
    a0 = (*(volatile u8 *) (u32) (s1 + 19));
    a2 = (s32) ((u32) v1 << 6);
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1e4fU);
    a0 = a0 ^ 0x1;
    a0 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a0 = (*(volatile u8 *) (u32) v1);
    { s32 c_ = a3 == a0; a1 = (s32) ((u32) a1 + (u32) a2); if (c_) goto L_0098C858; }
L_0098C4F8:;
    if (a3 == a0) goto L_0098C510;
L_0098C500:;
    a0 = s1;
    a1 = 3;
    a2 = 0; func_009143D0(a0, a1, a2, a3);
L_0098C510:;
    a0 = (*(volatile u8 *) (u32) (s1 + 19));
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1e4fU);
    a1 = (*(volatile u8 *) (u32) s1);
    a0 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    if (a1 == v1) goto L_0098C86C;
    a0 = (*(volatile u8 *) (u32) (s1 + 22));
L_0098C538:;
    v1 = 26;
    if (a0 != v1) { (*(volatile u16 *) (u32) (s1 + 462)) = (u16) 0; goto L_0098C558; }
L_0098C544:;
    a0 = s1;
    a1 = 1; func_0098AC30(a0, a1, a2, a3, f12.f, f13.f);
    goto L_0098CA3C;
L_0098C558:;
    (*(volatile u16 *) (u32) (s1 + 464)) = (u16) 0;
    a2 = (*(volatile u8 *) (u32) (s1 + 478));
    if (a2 == 0) { s0 = 1; goto L_0098C568; }
L_0098C568:;
    a1 = (*(volatile u8 *) (u32) (s1 + 470));
    v1 = 2;
    if (a1 == v1) { v1 = 7; goto L_0098C5D4; }
    v1 = 3;
    if (a1 == v1) { v1 = 6; goto L_0098C5C4; }
    a0 = 1;
    if (a1 == a0) { v1 = 5; goto L_0098C5B4; }
    v1 = 4;
    if (a1 == v1) { v1 = 10; goto L_0098C5A4; }
    goto L_0098C5E0;
L_0098C5A4:;
    if (a2 == v1) goto L_0098C5E0;
    s0 = a0; goto L_0098C5E0;
L_0098C5B4:;
    if (a2 == v1) goto L_0098C5E0;
    s0 = a0; goto L_0098C5E0;
L_0098C5C4:;
    if (a2 == v1) goto L_0098C5E0;
    s0 = 1; goto L_0098C5E0;
L_0098C5D4:;
    if (a2 == v1) goto L_0098C5E0;
    s0 = 1;
L_0098C5E0:;
    if (s0 != 0) { (*(volatile u32 *) (u32) (s1 + 492)) = (u32) 0; goto L_0098C884; }
L_0098C5E8:;
    v1 = (*(volatile u8 *) (u32) (s1 + 478));
L_0098C5EC:;
    a0 = 3;
    if (v1 == a0) goto L_0098C7EC;
    a0 = 2;
    if (v1 == a0) goto L_0098C7D0;
    v0 = 6;
    if (v1 == v0) goto L_0098C668;
    v0 = 1;
    if (v1 == v0) goto L_0098C668;
    v0 = 7;
    if (v1 == v0) goto L_0098C668;
    v0 = 10;
    if (v1 == v0) goto L_0098C648;
    v0 = 5;
    if (v1 == v0) goto L_0098C648;
    goto L_0098C808;
L_0098C648:;
    v1 = (*(volatile u8 *) (u32) (s1 + 470));
    v0 = 4;
    if (v1 == v0) goto L_0098C668;
    v0 = 1;
    if (v1 == v0) goto L_0098C668;
    (*(volatile u8 *) (u32) (s1 + 478)) = (u8) v0;
L_0098C668:;
    v1 = (*(volatile u8 *) (u32) (s1 + 472));
    v0 = 3;
    { s32 c_ = v1 == v0; s0 = 0; if (c_) goto L_0098C6A0; }
    v0 = 2;
    if (v1 == v0) goto L_0098C6A0;
    v0 = 1;
    if (v1 == v0) goto L_0098C6A4;
    if (v1 == 0) goto L_0098C6A4;
    v1 = (*(volatile u8 *) (u32) (s1 + 478)); goto L_0098C6A8;
L_0098C6A0:;
    s0 = 1;
L_0098C6A4:;
    v1 = (*(volatile u8 *) (u32) (s1 + 478));
L_0098C6A8:;
    v0 = 7;
    if (v1 == v0) goto L_0098C6E0;
    v0 = 10;
    if (v1 == v0) goto L_0098C6E0;
    v0 = 5;
    if (v1 == v0) goto L_0098C6E0;
    v0 = 6;
    if (v1 == v0) goto L_0098C6E0;
    v0 = (*(volatile s32 *) (u32) (s1 + 488)); goto L_0098C6E8;
L_0098C6E0:;
    s0 = 1;
    v0 = (*(volatile s32 *) (u32) (s1 + 488));
L_0098C6E8:;
    if (v0 == 0) { a0 = s1; goto L_0098C978; }
    a0 = s1; v0 = func_0098CA50(a0, a1);
    if (v0 != 0) { v1 = (*(volatile u8 *) (u32) (s1 + 469)); goto L_0098C988; }
L_0098C700:;
    v1 = (*(volatile s32 *) (u32) (s1 + 488));
L_0098C704:;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_0098C71C; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_0098C71C:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a0 = s1;
    a1 = 3;
    s2 = (s32) ((u32) v0 + (u32) v1); v0 = func_00914390(a0, a1, a2, a3);
    if (v0 != 0) goto L_0098C9D8;
    v0 = (*(volatile u8 *) (u32) (s1 + 469));
    if (v0 == 0) { a0 = s1; goto L_0098C9B8; }
    a0 = s2; v0 = func_00910D80(a0, a1, a2, a3);
    if (v0 != 0) { a0 = s1; goto L_0098C9C8; }
    v0 = (*(volatile u8 *) (u32) (s2 + 468));
    a1 = 1;
    if (v0 == a1) goto L_0098C794;
    if (v0 == 0) { a0 = s1; goto L_0098C784; }
    a0 = s1; goto L_0098C9DC;
L_0098C784:;
    func_0098AC30(a0, a1, a2, a3, f12.f, f13.f);
    goto L_0098CA38;
L_0098C794:;
    if (s0 != 0) goto L_0098C9D8;
    v0 = (*(volatile u8 *) (u32) (s1 + 16));
    at = v0 < 8;
    if (at == 0) goto L_0098C9D8;
    v0 = func_00A07B40();
    if (v0 == 0) goto L_0098C9D8;
    a0 = s1;
    a1 = 1; func_0098AC30(a0, a1, a2, a3, f12.f, f13.f);
    goto L_0098CA38;
L_0098C7D0:;
    v1 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 7972));
    if (v1 == a0) { a0 = s1; goto L_0098C9F8; }
    v1 = 1;
    (*(volatile u8 *) (u32) (s1 + 478)) = (u8) v1; goto L_0098CA38;
L_0098C7EC:;
    v1 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 7972));
    if (v1 == a0) { a0 = s1; goto L_0098CA1C; }
    v1 = 1;
    (*(volatile u8 *) (u32) (s1 + 478)) = (u8) v1; goto L_0098CA38;
L_0098C808:;
    v0 = func_00A07B40();
    if (v0 != 0) goto L_0098C838;
    v0 = (s32) 0xcb0000U;
    f12.f = (*(volatile f32 *) (u32) (v0 + 21276));
    v0 = (s32) 0xcb0000U;
    f13.f = (*(volatile f32 *) (u32) (v0 + 21280));
    a0 = s1; func_009840C0(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    goto L_0098C850;
L_0098C838:;
    v0 = (s32) 0xcb0000U;
    f12.f = (*(volatile f32 *) (u32) (v0 + 21276));
    v0 = (s32) 0xcb0000U;
    f13.f = (*(volatile f32 *) (u32) (v0 + 21280));
    a0 = s1; func_009842D0(a0, a1, a2, a3, f12.f, f13.f);
L_0098C850:;
    goto L_0098CA38;
L_0098C858:;
    v1 = (*(volatile u8 *) (u32) (a1 + 468));
    if (v1 == 0) goto L_0098C500;
    goto L_0098C4F8;
L_0098C86C:;
    v0 = func_00A07B40();
    if (v0 != 0) goto L_0098C544;
    a0 = (*(volatile u8 *) (u32) (s1 + 22)); goto L_0098C538;
L_0098C884:;
    a0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (s1 + 496)) = (u32) 0;
    a0 = (s32) ((u32) a0 + 0x2980U);
    a2 = (*(volatile u8 *) (u32) (s1 + 18));
    a1 = 20;
    v1 = (*(volatile u8 *) (u32) (s1 + 17));
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
    v0 = (*(volatile u8 *) (u32) (v0 + 107));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    { s32 c_ = v0 >= 0; v1 = (s32) v0 >> 1; if (c_) goto L_0098C8E8; }
    v1 = (s32) ((u32) v0 + 0x1U);
    v1 = (s32) v1 >> 1;
L_0098C8E8:;
    v1 = (s32) ((u32) v1 + 0x28U);
    (*(volatile u32 *) (u32) (s1 + 500)) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (s1 + 500));
    at = v1 < 101;
    if (at == 0) { v1 = 100; goto L_0098C970; }
L_0098C900:;
    v1 = (s32) 0x590000U;
    a2 = 2;
    v1 = (*(volatile u8 *) (u32) (v1 + 7972));
    if (v1 == a2) { (*(volatile u8 *) (u32) (s1 + 478)) = (u8) a2; goto L_0098CA38; }
    a1 = 1;
    (*(volatile u8 *) (u32) (s1 + 478)) = (u8) a1;
    a0 = (*(volatile u8 *) (u32) (s1 + 470));
    if (a0 == a2) { v1 = 7; goto L_0098C968; }
    v1 = 3;
    if (a0 == v1) { v1 = 6; goto L_0098C960; }
    if (a0 == a1) { v1 = 5; goto L_0098C958; }
    v1 = 4;
    if (a0 == v1) { v1 = 10; goto L_0098C950; }
    v1 = (*(volatile u8 *) (u32) (s1 + 478)); goto L_0098C5EC;
L_0098C950:;
    (*(volatile u8 *) (u32) (s1 + 478)) = (u8) v1; goto L_0098C5E8;
L_0098C958:;
    (*(volatile u8 *) (u32) (s1 + 478)) = (u8) v1; goto L_0098C5E8;
L_0098C960:;
    (*(volatile u8 *) (u32) (s1 + 478)) = (u8) v1; goto L_0098C5E8;
L_0098C968:;
    (*(volatile u8 *) (u32) (s1 + 478)) = (u8) v1; goto L_0098C5E8;
L_0098C970:;
    (*(volatile u32 *) (u32) (s1 + 500)) = (u32) v1; goto L_0098C900;
L_0098C978:;
    a1 = 1; func_0098AC30(a0, a1, a2, a3, f12.f, f13.f);
    goto L_0098CA38;
L_0098C988:;
    v0 = 2;
    (*(volatile u32 *) (u32) (s1 + 488)) = (u32) v1;
    v1 = (*(volatile u8 *) (u32) (s1 + 470));
    if (v1 == v0) { a1 = (*(volatile u8 *) (u32) (s1 + 469)); goto L_0098C9A4; }
    v1 = (*(volatile s32 *) (u32) (s1 + 488)); goto L_0098C704;
L_0098C9A4:;
    a0 = s1;
    a2 = 0; func_0090BA50(a0, a1, a2, a3);
    goto L_0098C700;
L_0098C9B8:;
    a1 = 1; func_0098AC30(a0, a1, a2, a3, f12.f, f13.f);
    goto L_0098CA38;
L_0098C9C8:;
    a1 = 1; func_0098AC30(a0, a1, a2, a3, f12.f, f13.f);
    goto L_0098CA38;
L_0098C9D8:;
    a0 = s1;
L_0098C9DC:;
    a1 = 0; func_00912530(a0, a1, a2, a3);
    a1 = (*(volatile u8 *) (u32) (s1 + 488));
    a0 = s1; func_00912460(a0, a1, a2, a3);
    goto L_0098C808;
L_0098C9F8:;
    v0 = func_0098C060(a0, a1, a2, a3, f12.f);
    if (v0 != 0) goto L_0098C808;
    a0 = s1;
    a1 = 1; func_0098AC30(a0, a1, a2, a3, f12.f, f13.f);
    goto L_0098CA38;
L_0098CA1C:;
    v0 = func_0098C060(a0, a1, a2, a3, f12.f);
    if (v0 != 0) goto L_0098C808;
    a0 = s1;
    a1 = 1; func_0098AC30(a0, a1, a2, a3, f12.f, f13.f);
L_0098CA38:;
L_0098CA3C:;
    return;
}
