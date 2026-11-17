/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_009042C0(s64, s64, s64, s64);
void func_00912530(s64, s64, s64, s64);
void func_00914430(s64, s64, s64, s64);
s64 func_009176C0(s64, s64, s64, s64);
void func_009840C0(s64, s64, s64, s64, f32, f32, f32, f32);
void func_009842D0(s64, s64, s64, s64, f32, f32);
s64 func_0098F7E0(s64);
s64 func_009B3070(s64, s64);
s64 func_00A09950(s64);
void func_00C6A440(s64, s64, s64, s64);

void func_0098D930(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s32 fcc = 0;
    f32 acc = 0;

    v0 = 10;
    v1 = (*(volatile s32 *) (u32) (gp + -31080));
    v1 = (*(volatile s32 *) (u32) (v1 + 4));
    { s32 c_ = v1 == v0; s0 = a0; if (c_) goto L_0098DBD4; }
L_0098D958:;
    v1 = (*(volatile u8 *) (u32) (s0 + 18));
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e67U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 == 0) { a0 = s0; goto L_0098DC0C; }
L_0098D974:;
    v1 = (*(volatile u8 *) (u32) (s0 + 19));
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e4fU);
    a0 = (*(volatile u8 *) (u32) s0);
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (a0 != v0) { v0 = 0; goto L_0098D99C; }
    v0 = (s64) ((u64) 0 + (u64) (s64) 1);
L_0098D99C:;
    if (v0 != 0) { a0 = s0; goto L_0098DC24; }
    v0 = (*(volatile u8 *) (u32) (s0 + 478));
    if (v0 == 0) { v0 = 1; goto L_0098DC34; }
L_0098D9B0:;
    v1 = (*(volatile u8 *) (u32) (s0 + 478));
    v0 = 2;
    if (v1 == v0) { v1 = (s32) 0x44c00000U; goto L_0098DAB4; }
    v0 = 1;
    if (v1 == v0) { a0 = s0; goto L_0098D9D4; }
    a0 = s0; goto L_0098DB4C;
L_0098D9D4:;
    a1 = 0; func_00912530(a0, a1, a2, a3);
    v0 = (s32) 0xcb0000U;
    v1 = (*(volatile u8 *) (u32) (s0 + 19));
    f20.f = (*(volatile f32 *) (u32) (v0 + 21284));
    a1 = 22;
    v0 = v1 ^ 0x1;
    a0 = v0 & 0xff; f0.f = func_009042C0(a0, a1, a2, a3);
    f1.f = f20.f * f0.f;
    f0.f = (*(volatile f32 *) (u32) (s0 + 224));
    f0.f = f0.f * f20.f;
    fcc = f0.f <= f1.f;
    if (!fcc) { v0 = 2; goto L_0098DC40; }
L_0098DA10:;
    a0 = s0; v0 = func_009176C0(a0, a1, a2, a3);
    if (v0 == 0) { a0 = s0; goto L_0098DC48; }
    v1 = (*(volatile s32 *) (u32) (gp + -31080));
    v0 = 10;
    v1 = (*(volatile s32 *) (u32) (v1 + 4));
    if (v1 == v0) { a0 = s0; goto L_0098DC58; }
L_0098DA34:;
    v1 = (*(volatile u8 *) (u32) (s0 + 18));
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e67U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 == 0) { a0 = s0; goto L_0098DC90; }
L_0098DA50:;
    v1 = (*(volatile u8 *) (u32) (s0 + 19));
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e4fU);
    a0 = (*(volatile u8 *) (u32) s0);
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (a0 != v0) { v0 = 0; goto L_0098DA78; }
    v0 = (s64) ((u64) 0 + (u64) (s64) 1);
L_0098DA78:;
    if (v0 == 0) goto L_0098DB48;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) 0xcb0000U;
    f3.f = (*(volatile f32 *) (u32) (v1 + 21284));
    f0.f = (*(volatile f32 *) (u32) (v0 + 21276));
    f2.f = (*(volatile f32 *) (u32) (s0 + 224));
    f1.f = f0.f * f3.f;
    f0.f = f2.f * f3.f;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_0098DB48;
    v0 = (s32) 0xcb0000U;
    (*(volatile f32 *) (u32) (v0 + 21276)) = f2.f; goto L_0098DB48;
L_0098DAB4:;
    v0 = (s32) 0xcb0000U;
    f21.i = (s32) v1;
    a1 = 22;
    f20.f = (*(volatile f32 *) (u32) (v0 + 21284));
    v1 = (*(volatile u8 *) (u32) (s0 + 19));
    v0 = v1 ^ 0x1;
    a0 = v0 & 0xff; f0.f = func_009042C0(a0, a1, a2, a3);
    f1.i = (s32) 0;
    a0 = (s32) 0xcb0000U;
    v0 = (s32) 0xcb0000U;
    v1 = (s32) 0xcb0000U;
    acc = f1.f + f0.f;
    a1 = 22;
    f0.f = acc - f21.f * f20.f;
    (*(volatile f32 *) (u32) (a0 + 21276)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s0 + 232));
    f20.f = (*(volatile f32 *) (u32) (v0 + 21284));
    (*(volatile f32 *) (u32) (v1 + 21280)) = f0.f;
    v0 = (*(volatile u8 *) (u32) (s0 + 19));
    v0 = v0 ^ 0x1;
    a0 = v0 & 0xff; f0.f = func_009042C0(a0, a1, a2, a3);
    f1.f = f20.f * f0.f;
    f0.f = (*(volatile f32 *) (u32) (s0 + 224));
    f0.f = f0.f * f20.f;
    fcc = f0.f < f1.f;
    if (fcc) { v0 = 1; goto L_0098DCA8; }
L_0098DB28:;
    a0 = s0; v0 = func_009176C0(a0, a1, a2, a3);
    if (v0 != 0) goto L_0098DB48;
    a0 = s0; func_00C6A440(a0, a1, a2, a3);
    goto L_0098DCB4;
L_0098DB48:;
    a0 = s0;
L_0098DB4C:;
    a1 = 1024;
    a2 = (s32) ((u32) s0 + 0x1e8U); func_00914430(a0, a1, a2, a3);
    v0 = (s32) 0x590000U;
    v1 = 1;
    a0 = (*(volatile u8 *) (u32) (v0 + 7972));
    if (a0 == v1) goto L_0098DB98;
    v0 = 3;
    if (a0 == v0) goto L_0098DB98;
    v0 = 6;
    if (a0 == v0) goto L_0098DB98;
    v0 = 2;
    if (a0 == v0) goto L_0098DB98;
    v0 = (s32) 0xcb0000U; goto L_0098DBB8;
L_0098DB98:;
    v0 = (s32) 0xcb0000U;
    f12.f = (*(volatile f32 *) (u32) (v0 + 21276));
    v0 = (s32) 0xcb0000U;
    f13.f = (*(volatile f32 *) (u32) (v0 + 21280));
    a0 = s0; func_009840C0(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    goto L_0098DBCC;
L_0098DBB8:;
    f12.f = (*(volatile f32 *) (u32) (v0 + 21276));
    v0 = (s32) 0xcb0000U;
    f13.f = (*(volatile f32 *) (u32) (v0 + 21280));
    a0 = s0; func_009842D0(a0, a1, a2, a3, f12.f, f13.f);
L_0098DBCC:;
    goto L_0098DCB0;
L_0098DBD4:;
    v0 = func_0098F7E0(a0);
    if (v0 == 0) goto L_0098D958;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    a1 = (*(volatile u16 *) (u32) (v0 + 88));
    a0 = (*(volatile u16 *) (u32) (s0 + 280)); v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 12288;
    if (at == 0) goto L_0098D958;
    v0 = 0; goto L_0098D99C;
L_0098DC0C:;
    v0 = func_00A09950(a0);
    if (v0 != 0) goto L_0098D974;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_0098D99C;
L_0098DC24:;
    func_00C6A440(a0, a1, a2, a3);
    goto L_0098DCB0;
L_0098DC34:;
    (*(volatile u8 *) (u32) (s0 + 478)) = (u8) v0;
    (*(volatile u32 *) (u32) (s0 + 488)) = (u32) 0; goto L_0098D9B0;
L_0098DC40:;
    (*(volatile u8 *) (u32) (s0 + 478)) = (u8) v0; goto L_0098DA10;
L_0098DC48:;
    func_00C6A440(a0, a1, a2, a3);
    goto L_0098DCB0;
L_0098DC58:;
    v0 = func_0098F7E0(a0);
    if (v0 == 0) goto L_0098DA34;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    a1 = (*(volatile u16 *) (u32) (v0 + 88));
    a0 = (*(volatile u16 *) (u32) (s0 + 280)); v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 12288;
    if (at == 0) goto L_0098DA34;
    v0 = 0; goto L_0098DA78;
L_0098DC90:;
    v0 = func_00A09950(a0);
    if (v0 != 0) goto L_0098DA50;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_0098DA78;
L_0098DCA8:;
    (*(volatile u8 *) (u32) (s0 + 478)) = (u8) v0; goto L_0098DB28;
L_0098DCB0:;
L_0098DCB4:;
    return;
}
