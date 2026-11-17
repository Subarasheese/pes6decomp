/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00152130(s32, s32, s32, s32, s32);
void func_00272620(void);
void func_002727C0(s32, s32, s32, s32);
void func_0027B6D0(s32, s32);
void func_00297DF0(s32, s32, s32, s32, f32, f32);
s32 func_00299FE0(s32);
void func_009B4450(s32);
s32 func_009E1C90(s32);
void func_009E1CB0(s32, s32, s32, s32);
void func_00AD0A20(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32);
void func_00BEB1D0(s32, s32, s32, s32);
void func_00BEB480(s32, s32, s32, s32, f32, f32, f32, f32);
void func_00BEB690(s32, s32, s32, s32, s32, s32);
void func_00BEB7D0(void);
void func_00BEBC50(s32, s32, s32, s32, s32);
s32 func_00C01090(s32);

void func_00BEBE00(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    s32 hi = 0, lo = 0;

    a0 = 3;
    v0 = func_009E1C90(a0);
    v0 = v0 & 0xff;
    at = (u64) v0 < (u64) (s64) 7;
    if (at == 0) goto L_00BEBFE4;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x2690U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xbebe44U) goto L_00BEBE44; if (t_ == 0xbebea8U) goto L_00BEBEA8; if (t_ == 0xbebeb8U) goto L_00BEBEB8; if (t_ == 0xbebec8U) goto L_00BEBEC8; if (t_ == 0xbebed8U) goto L_00BEBED8; if (t_ == 0xbebee8U) goto L_00BEBEE8; if (t_ == 0xbebfdcU) goto L_00BEBFDC; }
L_00BEBE44:;
    v0 = (s32) 0x590000U;
    a0 = 22;
    (*(volatile u32 *) (u32) (v0 + 7700)) = (u32) 0;
    v0 = (s32) 0xcc0000U;
    (*(volatile u8 *) (u32) (gp + -19396)) = (u8) 0;
    (*(volatile u32 *) (u32) (v0 + -10896)) = (u32) 0; v0 = func_00C01090(a0);
    if (v0 == 0) { a0 = 23; goto L_00BEBFF8; }
L_00BEBE68:;
    v0 = 1;
L_00BEBE6C:;
    v1 = v0 & 0xff;
    v0 = 1;
    if (v1 != v0) { v0 = 4; goto L_00BEBE84; }
    (*(volatile u8 *) (u32) (gp + -19396)) = (u8) 0; goto L_00BEBE88;
L_00BEBE84:;
    (*(volatile u8 *) (u32) (gp + -19396)) = (u8) v0;
L_00BEBE88:;
    func_00272620();
    a0 = 14; func_002727C0(a0, a1, a2, a3);
    a0 = 3; func_009E1CB0(a0, a1, a2, a3);
    a0 = 0; goto L_00BEBFE8;
L_00BEBEA8:;
    func_00BEBC50(a0, a1, a2, a3, a4);
    goto L_00BEBFE4;
L_00BEBEB8:;
    func_00BEB7D0();
    goto L_00BEBFE4;
L_00BEBEC8:;
    func_00BEB690(a0, a1, a2, a3, a4, a5);
    goto L_00BEBFE4;
L_00BEBED8:;
    func_00BEB480(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    goto L_00BEBFE4;
L_00BEBEE8:;
    v0 = (s32) 0x590000U;
    v1 = 60;
    v0 = (*(volatile u8 *) (u32) (v0 + 7140));
    a0 = 1;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v0 = lo;
    v0 = (s32) ((u32) v0 << 5);
    a1 = v0 & 0xff; v0 = func_00152130(a0, a1, a2, a3, a4);
    v1 = 1;
    if (v0 != v1) goto L_00BEBF20;
    a0 = 3; func_009E1CB0(a0, a1, a2, a3);
L_00BEBF20:;
    func_00AD0A20(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f);
    v0 = (s32) 0xcc0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -10896));
    if (v0 == 0) goto L_00BEBF98;
    a0 = 0; v0 = func_00299FE0(a0);
    a4 = (*(volatile s32 *) (u32) v0);
    v1 = (s32) 0xcc0000U;
    a3 = (*(volatile s32 *) (u32) (v1 + -10896));
    a2 = (s32) 0xcc0000U;
    a0 = (s32) 0xcc0000U;
    a4 = (*(volatile s32 *) (u32) (a4 + 16));
    v1 = (s32) 0xcc0000U;
    f0.f = (*(volatile f32 *) (u32) (a4 + 272));
    (*(volatile f32 *) (u32) (a3 + 272)) = f0.f;
    a3 = (*(volatile s32 *) (u32) v0);
    a2 = (*(volatile s32 *) (u32) (a2 + -10896));
    a3 = (*(volatile s32 *) (u32) (a3 + 16));
    f0.f = (*(volatile f32 *) (u32) (a3 + 276));
    (*(volatile f32 *) (u32) (a2 + 276)) = f0.f;
    a2 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile s32 *) (u32) (a0 + -10896));
    a0 = (*(volatile s32 *) (u32) (a2 + 16));
    f0.f = (*(volatile f32 *) (u32) (a0 + 280));
    (*(volatile f32 *) (u32) (v0 + 280)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (v1 + -10896));
    a1 = 0; func_0027B6D0(a0, a1);
L_00BEBF98:;
    v0 = (s32) 0xcc0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -10896));
    if (v0 == 0) goto L_00BEBFE4;
    a0 = 0; v0 = func_00299FE0(a0);
    s0 = v0;
    s1 = 0;
L_00BEBFB8:;
    a0 = s0; func_00297DF0(a0, a1, a2, a3, f12.f, f13.f);
    v0 = (s32) ((u32) s1 + 0x1U);
    s1 = v0 & 0xff;
    v0 = s1 < 4;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x3cU); if (c_) goto L_00BEBFB8; }
    goto L_00BEBFE4;
L_00BEBFDC:;
    func_00BEB1D0(a0, a1, a2, a3);
L_00BEBFE4:;
    a0 = 0;
L_00BEBFE8:;
    func_009B4450(a0);
    goto L_00BEC030;
L_00BEBFF8:;
    v0 = func_00C01090(a0);
    if (v0 != 0) goto L_00BEBE68;
    a0 = 26; v0 = func_00C01090(a0);
    if (v0 != 0) goto L_00BEBE68;
    a0 = 27; v0 = func_00C01090(a0);
    if (v0 != 0) goto L_00BEBE68;
    v0 = 0; goto L_00BEBE6C;
L_00BEC030:;
    return;
}
