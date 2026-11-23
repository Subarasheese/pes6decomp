/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D7D80(s64, s64, s64, s64);
void func_008B2D70(s64, s64, s64, s64);
void func_008B2DB0(s64, s64, s64, s64, s64, s64, s64, s64, f32);
void func_008B66C0(s64, s64, s64, s64);
s64 func_008B6EC0(s64, s64, s64, s64, f32, f32);
void func_008C9CB0(s64, s64);
void func_008C9DB0(s64, s64, f32, f32);
void func_008D31A0(s64, s64, s64);
void func_008D32C0(s64, s64, s64, s64);
void func_008D32D0(s64, s64, s64, s64);
void func_008D3980(s64, s64, s64, s64);
s64 func_008D3B00(s64, s64, s64, s64);
void func_008E5110(s64, s64, s64, s64, s64, s64, s64, s64);

void func_008B59F0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7, f32 fa12, f32 fa13) {
    s64 v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s64 hi = 0, lo = 0;

    v0 = 2;
    { s32 c_ = a1 == v0; s0 = a0; if (c_) goto L_008B5C38; }
    v0 = 1;
    if (a1 == v0) goto L_008B5AA4;
    if (a1 == 0) goto L_008B5A24;
    v0 = 0; goto L_008B5C68;
L_008B5A24:;
    a1 = (s32) 0x8f0000U;
    a0 = (s32) ((u32) s0 + 0x1ca8U);
    a1 = (s32) ((u32) a1 + 0xffffca98U);
    a2 = 10; func_008D3980(a0, a1, a2, a3);
    v0 = (*(volatile u8 *) (u32) (s0 + 11));
    v0 = (s32) ((u32) v0 + (u32) s0);
    a1 = (*(volatile u8 *) (u32) (v0 + 12));
    a0 = (s32) ((u32) s0 + 0x1ca8U); func_008D32D0(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 + 0x1ca8U);
    a1 = 1;
    a2 = 0; func_008D31A0(a0, a1, a2);
    a0 = (s32) ((u32) s0 + 0xb0cU);
    a1 = 0; func_008C9DB0(a0, a1, f12.f, f13.f);
    a0 = (s32) ((u32) s0 + 0x129cU);
    a1 = 1; func_008E5110(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (s32) 0x8f0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -7780));
    if (a0 == 0) goto L_008B5C64;
    v0 = (s32) 0x8f0000U;
    v0 = (*(volatile s8 *) (u32) (v0 + -7790));
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    a1 = (s64) ((u64) v0 << 48);
    a1 = a1 >> 48; func_001D7D80(a0, a1, a2, a3);
    goto L_008B5C64;
L_008B5AA4:;
    v0 = func_008B6EC0(a0, a1, a2, a3, f12.f, f13.f);
    if (v0 == 0) { v0 = 0; goto L_008B5B5C; }
    a0 = (s32) ((u32) s0 + 0xb0cU);
    a1 = 0; func_008C9DB0(a0, a1, f12.f, f13.f);
    a0 = s0; func_008B2D70(a0, a1, a2, a3);
    v0 = (s32) 0x8f0000U;
    v1 = 3;
    v0 = (*(volatile s8 *) (u32) (v0 + -7790));
    if (v0 != v1) { v1 = (*(volatile u8 *) (u32) (s0 + 7337)); goto L_008B5B08; }
    a0 = (*(volatile u8 *) (u32) s0);
    v1 = 12836;
    v0 = (s32) 0x8f0000U;
    a1 = 0;
    v0 = (s32) ((u32) v0 + 0xffffe750U);
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) ((u32) v0 + 0xb0cU); func_008C9CB0(a0, a1);
    v0 = 1; goto L_008B5B5C;
L_008B5B08:;
    v0 = 1;
    if (v1 != v0) { a0 = (s32) ((u32) s0 + 0xb0cU); goto L_008B5B3C; }
    a0 = (s32) ((u32) s0 + 0xb0cU);
    a1 = 5; func_008C9DB0(a0, a1, f12.f, f13.f);
    a0 = s0; func_008B2DB0(a0, a1, a2, a3, a4, a5, a6, a7, f12.f);
    a0 = s0;
    a1 = 0; func_008B66C0(a0, a1, a2, a3);
    goto L_008B5B58;
L_008B5B3C:;
    a1 = 0; func_008C9DB0(a0, a1, f12.f, f13.f);
    a0 = s0; func_008B2D70(a0, a1, a2, a3);
    a0 = s0;
    a1 = 14; func_008B66C0(a0, a1, a2, a3);
L_008B5B58:;
    v0 = 1;
L_008B5B5C:;
    if (v0 != 0) goto L_008B5C64;
    a1 = (*(volatile u8 *) (u32) (s0 + 25));
    a0 = (s32) ((u32) s0 + 0x1ca8U); v0 = func_008D3B00(a0, a1, a2, a3);
    v1 = 3;
    if (v0 == v1) { v1 = (*(volatile u8 *) (u32) (s0 + 7337)); goto L_008B5BE0; }
    a0 = 2;
    if (v0 == a0) { v0 = (*(volatile u8 *) (u32) (s0 + 11)); goto L_008B5B9C; }
    v1 = 1;
    if (v0 == v1) goto L_008B5C64;
    goto L_008B5C64;
L_008B5B9C:;
    v1 = (*(volatile u8 *) (u32) (s0 + 7337));
    v0 = (s32) ((u32) v0 + (u32) s0);
    { s32 c_ = v1 == a0; (*(volatile u8 *) (u32) (v0 + 12)) = (u8) v1; if (c_) goto L_008B5BD8; }
    a1 = 1;
    if (v1 == a1) { a0 = (s32) ((u32) s0 + 0x1ca8U); goto L_008B5BC8; }
    if (v1 == 0) { v0 = 4; goto L_008B5C68; }
    goto L_008B5C64;
L_008B5BC8:;
    func_008D32C0(a0, a1, a2, a3);
    goto L_008B5C64;
L_008B5BD8:;
    v0 = 15; goto L_008B5C68;
L_008B5BE0:;
    v0 = 1;
    if (v1 != v0) { a0 = (s32) ((u32) s0 + 0xb0cU); goto L_008B5C14; }
    a0 = (s32) ((u32) s0 + 0xb0cU);
    a1 = 5; func_008C9DB0(a0, a1, f12.f, f13.f);
    a0 = s0; func_008B2DB0(a0, a1, a2, a3, a4, a5, a6, a7, f12.f);
    a0 = s0;
    a1 = 0; func_008B66C0(a0, a1, a2, a3);
    goto L_008B5C64;
L_008B5C14:;
    a1 = 0; func_008C9DB0(a0, a1, f12.f, f13.f);
    a0 = s0; func_008B2D70(a0, a1, a2, a3);
    a0 = s0;
    a1 = 14; func_008B66C0(a0, a1, a2, a3);
    goto L_008B5C64;
L_008B5C38:;
    a0 = (s32) ((u32) s0 + 0xb0cU);
    a1 = 0; func_008C9DB0(a0, a1, f12.f, f13.f);
    a0 = s0; func_008B2D70(a0, a1, a2, a3);
    v0 = (s32) 0x8f0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -7780));
    if (a0 == 0) goto L_008B5C64;
    a1 = 3; func_001D7D80(a0, a1, a2, a3);
L_008B5C64:;
    v0 = 0;
L_008B5C68:;
    return;
}
