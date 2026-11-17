/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00272370(s32, s32, s32, s32);
void func_002BB8F0(void);
void func_002BC2B0(void);
s32 func_009E1C90(s32);
s32 func_00BBB8C0(s32);
s32 func_00BF6270(void);
s32 func_00C97580(s32, s32, s32, s32, f32, f32, f32, f32);

void func_00C96520(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    s32 hi = 0, lo = 0;

    v0 = func_00BF6270();
    v1 = 255;
    if (v0 == v1) { v1 = 1; goto L_00C96554; }
    v0 = func_00BF6270();
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) v1); hi = (s32) ((s32) v0 % (s32) v1); lo = q_; }
    v1 = hi;
L_00C96554:;
    v0 = (s32) ((u32) v1 << 3);
    s1 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + (u32) v1);
    s1 = (s32) ((u32) s1 + 0xffffe5b0U);
    v0 = (s32) ((u32) v0 << 6);
    a0 = 3;
    s0 = (s32) ((u32) s1 + (u32) v0); v0 = func_009E1C90(a0);
    v1 = v0 & 0xff;
    a0 = 3;
    if (v1 != a0) { ; goto L_00C969A8; }
    v0 = (s32) 0xcc0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -13514));
    at = (u64) v0 < (u64) (s64) 10;
    if (at == 0) goto L_00C96980;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x51d0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xc965b4U) goto L_00C965B4; if (t_ == 0xc96824U) goto L_00C96824; if (t_ == 0xc96834U) goto L_00C96834; if (t_ == 0xc968b4U) goto L_00C968B4; if (t_ == 0xc9690cU) goto L_00C9690C; if (t_ == 0xc96958U) goto L_00C96958; if (t_ == 0xc96980U) goto L_00C96980; }
L_00C965B4:;
    v0 = (s32) 0xcc0000U;
    v1 = 27;
    a0 = (*(volatile u8 *) (u32) (v0 + -13513));
    if (a0 == v1) { a0 = 2; goto L_00C965D8; }
    v0 = 9;
    if (a0 != v0) goto L_00C965F8;
    a0 = 2;
L_00C965D8:;
    v0 = func_00BBB8C0(a0);
    if (v0 != 0) goto L_00C965F8;
    v1 = 8;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 10048)) = (u8) v1; goto L_00C96980;
L_00C965F8:;
    v0 = func_00C97580(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    v1 = 1;
    if (v0 != v1) goto L_00C96734;
    a0 = 10; v0 = func_00BBB8C0(a0);
    at = v0 < 8;
    if (at == 0) goto L_00C96734;
    a2 = (*(volatile u8 *) (u32) (s0 + 18));
    a1 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (s0 + 17));
    a1 = (s32) ((u32) a1 + 0x2a55U);
    v0 = 2;
    v1 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) v1 - (u32) a2);
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
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 == v0) goto L_00C96734;
    v0 = (s32) 0xcc0000U;
    a1 = (*(volatile u16 *) (u32) (v0 + -13516));
    v0 = a1 & 0x80;
    if (v0 != 0) goto L_00C96734;
    v0 = (s32) 0xcc0000U;
    v1 = 18;
    a0 = (*(volatile u8 *) (u32) (v0 + -13513));
    if (a0 == v1) { v0 = a1 & 0x400; goto L_00C96704; }
    v0 = 27;
    if (a0 == v0) goto L_00C96700;
    v0 = 26;
    if (a0 == v0) goto L_00C96700;
    v0 = 17;
    if (a0 == v0) goto L_00C96700;
    v0 = 16;
    if (a0 == v0) goto L_00C96700;
    v0 = 15;
    if (a0 == v0) goto L_00C96700;
    v0 = 14;
    if (a0 == v0) goto L_00C96700;
    v0 = 13;
    if (a0 == v0) goto L_00C96700;
    v0 = 12;
    if (a0 == v0) goto L_00C96700;
    v1 = 4; goto L_00C96728;
L_00C96700:;
    v0 = a1 & 0x400;
L_00C96704:;
    if (v0 == 0) { v1 = 21; goto L_00C9671C; }
    v1 = 4;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 10048)) = (u8) v1; goto L_00C96980;
L_00C9671C:;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 10048)) = (u8) v1; goto L_00C96980;
L_00C96728:;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 10048)) = (u8) v1; goto L_00C96980;
L_00C96734:;
    v0 = (s32) 0xcc0000U;
    v0 = (*(volatile u16 *) (u32) (v0 + -13516));
    v0 = v0 & 0x400;
    if (v0 == 0) { a0 = 10; goto L_00C96758; }
    v1 = 4;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 10048)) = (u8) v1; goto L_00C96980;
L_00C96758:;
    v0 = func_00BBB8C0(a0);
    at = v0 < 6;
    if (at == 0) { v1 = 21; goto L_00C96818; }
    f3.f = (*(volatile f32 *) (u32) (s0 + 224));
    at = (s32) 0x240000U;
    f2.f = (*(volatile f32 *) (u32) (s1 + 224));
    at = at | 0x1;
    f0.f = (*(volatile f32 *) (u32) (s1 + 232));
    f1.f = (*(volatile f32 *) (u32) (s0 + 232));
    f2.f = f3.f - f2.f;
    f0.f = f1.f - f0.f;
    f1.i = (s32) f2.f;
    v0 = f1.i;
    f0.i = (s32) f0.f;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    v0 = f0.i;
    { s64 m_ = (s64) (((u64) (u32) hi << 32) | (u32) lo) + (s64) (u64) (u32) v0 * (s64) (u64) (u32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    at = v0 < at;
    if (at == 0) goto L_00C96814;
    a2 = (*(volatile u8 *) (u32) (s0 + 18));
    a1 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (s0 + 17));
    a1 = (s32) ((u32) a1 + 0x2a55U);
    v0 = 2;
    v1 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) v1 - (u32) a2);
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
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 == v0) goto L_00C96814;
    v1 = 1;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 10048)) = (u8) v1; goto L_00C96980;
L_00C96814:;
    v1 = 21;
L_00C96818:;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 10048)) = (u8) v1; goto L_00C96980;
L_00C96824:;
    v1 = 21;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 10048)) = (u8) v1; goto L_00C96980;
L_00C96834:;
    v0 = (s32) 0xcc0000U;
    v1 = 21;
    a1 = (*(volatile u8 *) (u32) (v0 + -13513));
    if (a1 != v1) { v0 = 22; goto L_00C96874; }
    v0 = func_00BBB8C0(a0);
    if (v0 != 0) { v1 = 12; goto L_00C96868; }
    v1 = 10;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 10048)) = (u8) v1; goto L_00C96980;
L_00C96868:;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 10048)) = (u8) v1; goto L_00C96980;
L_00C96874:;
    if (a1 != v0) { v1 = 12; goto L_00C968A8; }
    v0 = func_00BBB8C0(a0);
    if (v0 != 0) { v1 = 12; goto L_00C9689C; }
    v1 = 10;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 10048)) = (u8) v1; goto L_00C96980;
L_00C9689C:;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 10048)) = (u8) v1; goto L_00C96980;
L_00C968A8:;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 10048)) = (u8) v1; goto L_00C96980;
L_00C968B4:;
    v0 = (s32) 0xcc0000U;
    v1 = 31;
    v0 = (*(volatile u8 *) (u32) (v0 + -13513));
    if (v0 == v1) { v1 = 20; goto L_00C968F0; }
    a0 = 2; v0 = func_00BBB8C0(a0);
    if (v0 != 0) { v1 = 17; goto L_00C96900; }
    v0 = (s32) 0xcc0000U;
    v0 = (*(volatile u16 *) (u32) (v0 + -13516));
    v0 = v0 & 0x400;
    if (v0 != 0) goto L_00C968FC;
    v1 = 20;
L_00C968F0:;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 10048)) = (u8) v1; goto L_00C96980;
L_00C968FC:;
    v1 = 17;
L_00C96900:;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 10048)) = (u8) v1; goto L_00C96980;
L_00C9690C:;
    v0 = func_00BBB8C0(a0);
    v1 = 2;
    if (v0 == v1) { v1 = 16; goto L_00C9694C; }
    v1 = 1;
    if (v0 == v1) goto L_00C96948;
    if (v0 == 0) { v1 = 13; goto L_00C9693C; }
    goto L_00C96948;
L_00C9693C:;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 10048)) = (u8) v1; goto L_00C96980;
L_00C96948:;
    v1 = 16;
L_00C9694C:;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 10048)) = (u8) v1; goto L_00C96980;
L_00C96958:;
    a0 = 2; v0 = func_00BBB8C0(a0);
    if (v0 != 0) { v1 = 9; goto L_00C96978; }
    v1 = 23;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 10048)) = (u8) v1; goto L_00C96980;
L_00C96978:;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 10048)) = (u8) v1;
L_00C96980:;
    func_002BC2B0();
    v0 = (s32) 0x41200000U;
    f12.i = (s32) v0;
    func_002BB8F0();
    a0 = 1;
    (*(volatile u16 *) (u32) (gp + -19116)) = (u16) 0; func_00272370(a0, a1, a2, a3);
L_00C969A8:;
    return;
}
