/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0027A600(s32, s32);
s32 func_009B3070(s32, s32);
s32 func_009B3480(s32, s32, s32, s32, f32, f32);
void func_00BBA080(s32, s32, s32, s32);
s32 func_00BBB8C0(s32);
void func_00BBECD0(s32, s32, s32, s32, f32, f32, f32, f32);
void func_00BD7880(s32, s32, s32, s32, f32, f32, f32, f32);
void func_00BD7C40(s32, s32, s32, s32, f32, f32, f32, f32);
void func_00BD7E70(s32, s32, s32, s32, f32, f32, f32, f32);
void func_00BD8C50(s32, s32, s32, s32, f32, f32, f32, f32);
s32 func_00BD94C0(s32);
s32 func_00BF6270(void);

void func_00BD8AA0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };

    v1 = 255;
    v0 = (*(volatile s32 *) (u32) (a0 + 4));
    (*(volatile u8 *) (u32) (v0 + 76)) = (u8) v1;
    v0 = (*(volatile s32 *) (u32) a0);
    v0 = (*(volatile u8 *) (u32) (v0 + 16));
    { s32 c_ = v0 == 0; s0 = a0; if (c_) goto L_00BD8C10; }
    v0 = (s32) 0xcc0000U;
    v1 = 21;
    v0 = (*(volatile u8 *) (u32) (v0 + -13615));
    if (v0 == v1) { v0 = (*(volatile s32 *) (u32) s0); goto L_00BD8C20; }
L_00BD8AE0:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 9072));
    if (v0 == 0) goto L_00BD8B14;
    a0 = 10; v0 = func_00BBB8C0(a0);
    at = v0 < 6;
    if (at != 0) goto L_00BD8B14;
    a0 = s0; func_00BD8C50(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    goto L_00BD8C3C;
L_00BD8B14:;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    s1 = (*(volatile s32 *) (u32) s0);
    f12.f = (*(volatile f32 *) (u32) (v0 + 1148));
    f13.f = (*(volatile f32 *) (u32) (v0 + 2940));
    a0 = s1; v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    a1 = (*(volatile u16 *) (u32) (s1 + 38));
    a0 = v0; v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    v0 = v0 < 16384;
    if (v0 != 0) goto L_00BD8BAC;
    a0 = s0; v0 = func_00BD94C0(a0);
    v1 = v0 & 0xff;
    v0 = 1;
    if (v1 != v0) goto L_00BD8BAC;
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = 0; func_0027A600(a0, a1);
    v0 = (*(volatile s32 *) (u32) s0);
    (*(volatile u32 *) (u32) (v0 + 28)) = (u32) 0;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f12.f = (*(volatile f32 *) (u32) (v0 + 1148));
    f13.f = (*(volatile f32 *) (u32) (v0 + 2940));
    a0 = (*(volatile s32 *) (u32) s0); v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    a1 = (*(volatile s32 *) (u32) s0);
    v1 = 58;
    a0 = s0;
    (*(volatile u16 *) (u32) (a1 + 44)) = (u16) v0;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    (*(volatile u8 *) (u32) (v0 + 76)) = (u8) v1; func_00BBA080(a0, a1, a2, a3);
    goto L_00BD8C38;
L_00BD8BAC:;
    a0 = s0; v0 = func_00BD94C0(a0);
    a0 = v0 & 0xff;
    v1 = 2;
    if (a0 == v1) { a0 = s0; goto L_00BD8C00; }
    v1 = 1;
    if (a0 == v1) { a0 = s0; goto L_00BD8BF0; }
    if (a0 == 0) { a0 = s0; goto L_00BD8BE0; }
    goto L_00BD8C08;
L_00BD8BE0:;
    func_00BD7880(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    goto L_00BD8C08;
L_00BD8BF0:;
    func_00BD7E70(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    goto L_00BD8C08;
L_00BD8C00:;
    func_00BD7C40(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
L_00BD8C08:;
    goto L_00BD8C38;
L_00BD8C10:;
    func_00BBECD0(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    goto L_00BD8C38;
L_00BD8C20:;
    s1 = (*(volatile u8 *) (u32) v0); v0 = func_00BF6270();
    if (s1 != v0) goto L_00BD8AE0;
    a0 = s0; func_00BD8C50(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
L_00BD8C38:;
L_00BD8C3C:;
    return;
}
