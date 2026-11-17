/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0097A6D0(s32, s32, f32);
s32 func_009E1C90(s32);
void func_00B44CE0(s32, s32, s32, s32, f32, f32, f32);
void func_00BA65E0(s32, s32, s32, s32, f32, f32, f32, f32);
s32 func_00BBB990(s32, s32);
s32 func_00BBB9C0(s32, s32);
void func_00BD4040(s32, s32);
s32 func_00BF6280(void);

void func_00B44790(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };

    v0 = 1166;
    s0 = a0;
    a0 = (*(volatile s32 *) (u32) a0);
    v1 = (*(volatile s32 *) (u32) (a0 + 4));
    v1 = (*(volatile u16 *) (u32) (v1 + 48));
    if (v1 == v0) goto L_00B44810;
    v0 = 908;
    if (v1 == v0) goto L_00B44810;
    v0 = 1161;
    if (v1 == v0) goto L_00B447E8;
    v0 = 447;
    if (v1 == v0) goto L_00B447E8;
    a1 = (*(volatile u16 *) (u32) (a0 + 38)); goto L_00B44880;
L_00B447E8:;
    a0 = 1; v0 = func_009E1C90(a0);
    a0 = v0 & 0xff;
    v1 = 12;
    if (a0 == v1) goto L_00B4489C;
L_00B44800:;
    v1 = (*(volatile s32 *) (u32) s0);
    a0 = 15;
    (*(volatile u16 *) (u32) (v1 + 24)) = (u16) a0; goto L_00B44894;
L_00B44810:;
    a0 = 1; v0 = func_009E1C90(a0);
    v1 = v0 & 0xff;
    v0 = 12;
    if (v1 == v0) goto L_00B44908;
L_00B44828:;
    v0 = (s32) 0xcc0000U;
    a1 = 1;
    v0 = (*(volatile u8 *) (u32) (v0 + -12831));
    if (v0 == a1) { a0 = s0; goto L_00B4484C; }
    a0 = (*(volatile s32 *) (u32) s0); func_00BA65E0(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    v0 = (*(volatile s32 *) (u32) (s0 + 4)); goto L_00B44858;
L_00B4484C:;
    func_00B44CE0(a0, a1, a2, a3, f12.f, f13.f, f14.f);
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
L_00B44858:;
    v1 = 255;
    (*(volatile u8 *) (u32) (v0 + 76)) = (u8) v1;
L_00B44860:;
    v0 = (*(volatile s32 *) (u32) s0);
    v1 = 4;
    a0 = s0;
    a1 = 1;
    (*(volatile u16 *) (u32) (v0 + 24)) = (u16) v1; func_00BD4040(a0, a1);
    goto L_00B44894;
L_00B44880:;
    func_0097A6D0(a0, a1, f12.f);
    v1 = (*(volatile s32 *) (u32) s0);
    a0 = 15;
    (*(volatile u16 *) (u32) (v1 + 24)) = (u16) a0;
L_00B44894:;
    goto L_00B44984;
L_00B4489C:;
    v0 = func_00BF6280();
    v1 = 2;
    if (v0 != v1) goto L_00B44800;
    v0 = (s32) 0xcc0000U;
    a1 = 1;
    v0 = (*(volatile u8 *) (u32) (v0 + -12831));
    if (v0 == a1) { a0 = s0; goto L_00B448D4; }
    a0 = (*(volatile s32 *) (u32) s0); func_00BA65E0(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    v0 = (*(volatile s32 *) (u32) (s0 + 4)); goto L_00B448E0;
L_00B448D4:;
    func_00B44CE0(a0, a1, a2, a3, f12.f, f13.f, f14.f);
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
L_00B448E0:;
    a2 = 255;
    v1 = 4;
    a0 = s0;
    a1 = 1;
    (*(volatile u8 *) (u32) (v0 + 76)) = (u8) a2;
    v0 = (*(volatile s32 *) (u32) s0);
    (*(volatile u16 *) (u32) (v0 + 24)) = (u16) v1; func_00BD4040(a0, a1);
    goto L_00B44894;
L_00B44908:;
    v0 = func_00BF6280();
    v1 = 2;
    if (v0 != v1) goto L_00B44828;
    v1 = (*(volatile s32 *) (u32) (s0 + 4));
    v0 = 25;
    a0 = (s32) ((u32) v1 + 0x4cU);
    v1 = (*(volatile u8 *) (u32) (v1 + 76));
    if (v1 == v0) { (*(volatile u8 *) (u32) a0) = (u8) 0; goto L_00B44938; }
    (*(volatile u8 *) (u32) a0) = (u8) v0;
L_00B44938:;
    s1 = (*(volatile s32 *) (u32) s0);
    a0 = (*(volatile u16 *) (u32) (s1 + 38));
    a1 = 2048; v0 = func_00BBB990(a0, a1);
    f1.i = (s32) v0;
    f0.f = (*(volatile f32 *) (u32) (s1 + 224));
    f1.f = (f32) f1.i;
    f0.f = f0.f + f1.f;
    (*(volatile f32 *) (u32) (s1 + 108)) = f0.f;
    s1 = (*(volatile s32 *) (u32) s0);
    a0 = (*(volatile u16 *) (u32) (s1 + 38));
    a1 = 2048; v0 = func_00BBB9C0(a0, a1);
    f1.i = (s32) v0;
    f0.f = (*(volatile f32 *) (u32) (s1 + 232));
    f1.f = (f32) f1.i;
    f0.f = f0.f + f1.f;
    (*(volatile f32 *) (u32) (s1 + 112)) = f0.f; goto L_00B44860;
L_00B44984:;
    return;
}
