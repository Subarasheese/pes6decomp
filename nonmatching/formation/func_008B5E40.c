/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D7D80(s64, s64, s64, s64);
void func_008B66C0(s64, s64, s64, s64);
s64 func_008B6EC0(s64, s64, s64, s64, f32, f32);
s64 func_008BC3B0(void);
s64 func_008BC400(s64);
void func_008C9DB0(s64, s64, f32, f32);
void func_008D32D0(s64, s64, s64, s64);
void func_008D3980(s64, s64, s64, s64);
s64 func_008D3B00(s64, s64, s64, s64);
void func_008E5110(s64, s64, s64, s64, s64, s64, s64, s64);

s64 func_008B5E40(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7, f32 fa12, f32 fa13) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };

    v0 = 2;
    { s32 c_ = a1 == v0; s0 = a0; if (c_) goto L_008B604C; }
    v0 = 1;
    if (a1 == v0) goto L_008B5F18;
    if (a1 == 0) goto L_008B5E74;
    v0 = 0; goto L_008B6070;
L_008B5E74:;
    v0 = func_008BC3B0();
    if (v0 == 0) goto L_008B5E9C;
    v0 = (*(volatile u8 *) (u32) s0);
    if (v0 == 0) goto L_008B5E9C;
    a1 = (s32) 0x8f0000U;
    a1 = (s32) ((u32) a1 + 0xffffca88U); goto L_008B5EA4;
L_008B5E9C:;
    a1 = (s32) 0x8f0000U;
    a1 = (s32) ((u32) a1 + 0xffffca78U);
L_008B5EA4:;
    a0 = (s32) ((u32) s0 + 0x1ca8U);
    a2 = 10; func_008D3980(a0, a1, a2, a3);
    v0 = (*(volatile u8 *) (u32) (s0 + 11));
    v0 = (s32) ((u32) v0 + (u32) s0);
    a1 = (*(volatile u8 *) (u32) (v0 + 12));
    a0 = (s32) ((u32) s0 + 0x1ca8U); func_008D32D0(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 + 0xb0cU);
    a1 = 0; func_008C9DB0(a0, a1, f12.f, f13.f);
    a0 = (s32) ((u32) s0 + 0x129cU);
    a1 = 1; func_008E5110(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = s0;
    a1 = 14; func_008B66C0(a0, a1, a2, a3);
    v0 = (s32) 0x8f0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -7780));
    if (a0 == 0) goto L_008B606C;
    v0 = (s32) 0x8f0000U;
    v0 = (*(volatile s8 *) (u32) (v0 + -7790));
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    a1 = (s64) ((u64) v0 << 48);
    a1 = a1 >> 48; func_001D7D80(a0, a1, a2, a3);
    goto L_008B606C;
L_008B5F18:;
    v0 = func_008B6EC0(a0, a1, a2, a3, f12.f, f13.f);
    if (v0 != 0) goto L_008B606C;
    a1 = (*(volatile u8 *) (u32) (s0 + 25));
    a0 = (s32) ((u32) s0 + 0x1ca8U); v0 = func_008D3B00(a0, a1, a2, a3);
    v1 = 2;
    if (v0 == v1) { v1 = (*(volatile u8 *) (u32) (s0 + 7337)); goto L_008B5F70; }
    v1 = 1;
    if (v0 == v1) { v0 = (*(volatile u8 *) (u32) (s0 + 7337)); goto L_008B5F54; }
    goto L_008B606C;
L_008B5F54:;
    if (v0 == 0) goto L_008B606C;
    a0 = (s32) ((u32) s0 + 0x1ca8U);
    a1 = 0; func_008D32D0(a0, a1, a2, a3);
    goto L_008B606C;
L_008B5F70:;
    v0 = (*(volatile u8 *) (u32) (s0 + 11));
    at = (u64) v1 < (u64) (s64) 8;
    v0 = (s32) ((u32) v0 + (u32) s0);
    { s32 c_ = at == 0; (*(volatile u8 *) (u32) (v0 + 12)) = (u8) v1; if (c_) goto L_008B606C; }
    v0 = (s32) ((u32) v1 << 2);
    v1 = (s32) 0x8f0000U;
    v1 = (s32) ((u32) v1 + 0xffffcad0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x8b5fa0U) goto L_008B5FA0; if (t_ == 0x8b5fdcU) goto L_008B5FDC; if (t_ == 0x8b6004U) goto L_008B6004; if (t_ == 0x8b6014U) goto L_008B6014; if (t_ == 0x8b601cU) goto L_008B601C; if (t_ == 0x8b6024U) goto L_008B6024; if (t_ == 0x8b602cU) goto L_008B602C; if (t_ == 0x8b6034U) goto L_008B6034; }
L_008B5FA0:;
    v0 = (*(volatile u8 *) (u32) (s0 + 33));
    if (v0 == 0) { v1 = (*(volatile u8 *) (u32) (s0 + 11)); goto L_008B5FC8; }
    a0 = (s32) ((u32) s0 + 0x208U); v0 = func_008BC400(a0);
    if (v0 != 0) goto L_008B5FC4;
    v0 = 35; goto L_008B5FD4;
L_008B5FC4:;
    v1 = (*(volatile u8 *) (u32) (s0 + 11));
L_008B5FC8:;
    v0 = 31;
    v1 = (s32) ((u32) v1 + (u32) s0);
    (*(volatile u8 *) (u32) (v1 + 12)) = (u8) 0;
L_008B5FD4:;
    goto L_008B6074;
L_008B5FDC:;
    v0 = func_008BC3B0();
    if (v0 == 0) { v0 = 1; goto L_008B6070; }
    v0 = (*(volatile u8 *) (u32) s0);
    if (v0 == 0) { v0 = 2; goto L_008B5FFC; }
    v0 = 3;
L_008B5FFC:;
    goto L_008B6070;
L_008B6004:;
    v1 = 1;
    v0 = 5;
    (*(volatile u8 *) (u32) (s0 + 42)) = (u8) v1; goto L_008B6070;
L_008B6014:;
    v0 = 6; goto L_008B6070;
L_008B601C:;
    v0 = 7; goto L_008B6070;
L_008B6024:;
    v0 = 15; goto L_008B6070;
L_008B602C:;
    v0 = 28; goto L_008B6070;
L_008B6034:;
    v1 = (*(volatile u8 *) (u32) (s0 + 11));
    a0 = 3;
    v0 = 36;
    v1 = (s32) ((u32) v1 + (u32) s0);
    (*(volatile u8 *) (u32) (v1 + 12)) = (u8) a0; goto L_008B6070;
L_008B604C:;
    a1 = 0; func_008B66C0(a0, a1, a2, a3);
    v0 = (s32) 0x8f0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -7780));
    if (a0 == 0) goto L_008B606C;
    a1 = 3; func_001D7D80(a0, a1, a2, a3);
L_008B606C:;
    v0 = 0;
L_008B6070:;
L_008B6074:;
    return v0;
}
