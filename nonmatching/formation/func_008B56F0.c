/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_008B2D70(s32, s32, s32, s32);
void func_008B2DB0(s32, s32, s32, s32, s32, s32, s32, s32, f32);
void func_008B66C0(s32, s32, s32, s32);
s32 func_008B6EC0(s32, s32, s32, s32, f32, f32);
s32 func_008BC400(s32);
void func_008C9CB0(s32, s32);
void func_008C9DB0(s32, s32, f32, f32);
void func_008D31A0(s32, s32, s32);
void func_008D32C0(s32, s32, s32, s32);
void func_008D32D0(s32, s32, s32, s32);
void func_008D3980(s32, s32, s32, s32);
s32 func_008D3B00(s32, s32, s32, s32);
void func_008E5110(s32, s32, s32, s32, s32, s32, s32, s32);

void func_008B56F0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 hi = 0, lo = 0;

    v0 = 2;
    { s32 c_ = a1 == v0; s0 = a0; if (c_) goto L_008B59B0; }
    v0 = 1;
    if (a1 == v0) goto L_008B5788;
    if (a1 == 0) goto L_008B5724;
    v0 = 0; goto L_008B59D4;
L_008B5724:;
    a1 = (s32) 0x8f0000U;
    a0 = (s32) ((u32) s0 + 0x1ca8U);
    a1 = (s32) ((u32) a1 + 0xffffcaa0U);
    a2 = 10; func_008D3980(a0, a1, a2, a3);
    v0 = (*(volatile u8 *) (u32) (s0 + 11));
    v0 = (s32) ((u32) v0 + (u32) s0);
    a1 = (*(volatile u8 *) (u32) (v0 + 12));
    a0 = (s32) ((u32) s0 + 0x1ca8U); func_008D32D0(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 + 0x1ca8U);
    a1 = 2;
    a2 = 0; func_008D31A0(a0, a1, a2);
    a0 = (s32) ((u32) s0 + 0xb0cU);
    a1 = 0; func_008C9DB0(a0, a1, f12.f, f13.f);
    a0 = (s32) ((u32) s0 + 0x129cU);
    a1 = 1; func_008E5110(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = s0;
    a1 = 14; func_008B66C0(a0, a1, a2, a3);
    goto L_008B59D0;
L_008B5788:;
    v0 = func_008B6EC0(a0, a1, a2, a3, f12.f, f13.f);
    if (v0 == 0) { v0 = 0; goto L_008B5854; }
    a0 = (s32) ((u32) s0 + 0xb0cU);
    a1 = 0; func_008C9DB0(a0, a1, f12.f, f13.f);
    a0 = s0; func_008B2D70(a0, a1, a2, a3);
    v0 = (s32) 0x8f0000U;
    v1 = 3;
    v0 = (*(volatile s8 *) (u32) (v0 + -7790));
    if (v0 != v1) { v1 = (*(volatile u8 *) (u32) (s0 + 7337)); goto L_008B57F0; }
    a0 = (*(volatile u8 *) (u32) s0);
    v1 = 12836;
    v0 = (s32) 0x8f0000U;
    a1 = 0;
    v0 = (s32) ((u32) v0 + 0xffffe750U);
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) ((u32) v0 + 0xb0cU); func_008C9CB0(a0, a1);
    v0 = 1; goto L_008B5848;
    v1 = (*(volatile u8 *) (u32) (s0 + 7337));
L_008B57F0:;
    v0 = 2;
    if (v1 != v0) { a0 = (s32) ((u32) s0 + 0xb0cU); goto L_008B5828; }
    a0 = (s32) ((u32) s0 + 0xb0cU);
    a1 = 5; func_008C9DB0(a0, a1, f12.f, f13.f);
    a0 = s0; func_008B2DB0(a0, a1, a2, a3, a4, a5, a6, a7, f12.f);
    a0 = s0;
    a1 = 0; func_008B66C0(a0, a1, a2, a3);
    goto L_008B5844;
    a0 = (s32) ((u32) s0 + 0xb0cU);
L_008B5828:;
    a1 = 0; func_008C9DB0(a0, a1, f12.f, f13.f);
    a0 = s0; func_008B2D70(a0, a1, a2, a3);
    a0 = s0;
    a1 = 14; func_008B66C0(a0, a1, a2, a3);
L_008B5844:;
    v0 = 1;
L_008B5848:;
    goto L_008B5854;
    v0 = 0;
L_008B5854:;
    if (v0 != 0) goto L_008B59D0;
    a1 = (*(volatile u8 *) (u32) (s0 + 25));
    a0 = (s32) ((u32) s0 + 0x1ca8U); v0 = func_008D3B00(a0, a1, a2, a3);
    a3 = 3;
    if (v0 == a3) { v1 = (*(volatile u8 *) (u32) (s0 + 7337)); goto L_008B5954; }
    a1 = 1;
    if (v0 == a1) { v0 = (*(volatile u8 *) (u32) (s0 + 7337)); goto L_008B593C; }
    a2 = 2;
    if (v0 == a2) { v1 = (*(volatile u8 *) (u32) (s0 + 11)); goto L_008B5898; }
    goto L_008B59D0;
    v1 = (*(volatile u8 *) (u32) (s0 + 11));
L_008B5898:;
    v0 = 4;
    a0 = (*(volatile u8 *) (u32) (s0 + 7337));
    v1 = (s32) ((u32) v1 + (u32) s0);
    { s32 c_ = a0 == v0; (*(volatile u8 *) (u32) (v1 + 12)) = (u8) a0; if (c_) goto L_008B5930; }
    if (a0 == a3) { v0 = 15; goto L_008B59D4; }
    if (a0 == a2) { a0 = (s32) ((u32) s0 + 0x1ca8U); goto L_008B5914; }
    if (a0 == a1) goto L_008B59D4;
    if (a0 == 0) { v0 = (*(volatile u8 *) (u32) (s0 + 33)); goto L_008B58D8; }
    goto L_008B59D0;
    v0 = (*(volatile u8 *) (u32) (s0 + 33));
L_008B58D8:;
    if (v0 == 0) { v1 = (*(volatile u8 *) (u32) (s0 + 11)); goto L_008B58FC; }
    a0 = (s32) ((u32) s0 + 0x208U); v0 = func_008BC400(a0);
    if (v0 != 0) goto L_008B58F8;
    v0 = 35; goto L_008B5908;
L_008B58F8:;
    v1 = (*(volatile u8 *) (u32) (s0 + 11));
L_008B58FC:;
    v0 = 31;
    v1 = (s32) ((u32) v1 + (u32) s0);
    (*(volatile u8 *) (u32) (v1 + 12)) = (u8) 0;
L_008B5908:;
    goto L_008B59D4;
    a0 = (s32) ((u32) s0 + 0x1ca8U);
L_008B5914:;
    func_008D32C0(a0, a1, a2, a3);
    goto L_008B59D0;
    v0 = 15;
    goto L_008B59D4;
L_008B5930:;
    v0 = 28; goto L_008B59D4;
    v0 = (*(volatile u8 *) (u32) (s0 + 7337));
L_008B593C:;
    if (v0 == 0) goto L_008B59D0;
    a0 = (s32) ((u32) s0 + 0x1ca8U);
    a1 = 0; func_008D32D0(a0, a1, a2, a3);
    v1 = (*(volatile u8 *) (u32) (s0 + 7337));
L_008B5954:;
    v0 = 2;
    if (v1 != v0) { a0 = (s32) ((u32) s0 + 0xb0cU); goto L_008B598C; }
    a0 = (s32) ((u32) s0 + 0xb0cU);
    a1 = 5; func_008C9DB0(a0, a1, f12.f, f13.f);
    a0 = s0; func_008B2DB0(a0, a1, a2, a3, a4, a5, a6, a7, f12.f);
    a0 = s0;
    a1 = 0; func_008B66C0(a0, a1, a2, a3);
    goto L_008B59D0;
    a0 = (s32) ((u32) s0 + 0xb0cU);
L_008B598C:;
    a1 = 0; func_008C9DB0(a0, a1, f12.f, f13.f);
    a0 = s0; func_008B2D70(a0, a1, a2, a3);
    a0 = s0;
    a1 = 14; func_008B66C0(a0, a1, a2, a3);
    goto L_008B59D0;
L_008B59B0:;
    a0 = (s32) ((u32) s0 + 0xb0cU);
    a1 = 0; func_008C9DB0(a0, a1, f12.f, f13.f);
    a0 = s0; func_008B2D70(a0, a1, a2, a3);
    a0 = s0;
    a1 = 0; func_008B66C0(a0, a1, a2, a3);
L_008B59D0:;
    v0 = 0;
L_008B59D4:;
    return;
}
