/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_008B3B20(s32, s32, s32, s32);
void func_008B66C0(s32, s32, s32, s32);
void func_008C9DB0(s32, s32, f32, f32);
void func_008CB190(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32);
void func_008CD2A0(s32, s32, s32, s32, f32, f32);
void func_008CD370(s32, s32, s32, s32, f32, f32);
s32 func_008CD9A0(s32, s32, s32, s32);
s32 func_008CDAF0(s32, s32, s32, s32, f32, f32);
void func_008E5110(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_008E22A0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };

    v0 = 2;
    { s32 c_ = a1 == v0; s0 = a0; if (c_) goto L_008E245C; }
    v1 = 1;
    if (a1 == v1) { v0 = (*(volatile u8 *) (u32) (s0 + 22)); goto L_008E2308; }
    if (a1 == 0) { a1 = 16; goto L_008E22D4; }
    v0 = 0; goto L_008E2468;
L_008E22D4:;
    a2 = 0; func_008B3B20(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 + 0xb0cU);
    a1 = 13; func_008C9DB0(a0, a1, f12.f, f13.f);
    a0 = (s32) ((u32) s0 + 0x129cU);
    a1 = 0; func_008E5110(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = s0;
    a1 = 33; func_008B66C0(a0, a1, a2, a3);
    goto L_008E2464;
L_008E2308:;
    if (v0 == v1) { a1 = (*(volatile u8 *) (u32) (s0 + 25)); goto L_008E2390; }
    if (v0 == 0) { a1 = (*(volatile u8 *) (u32) (s0 + 25)); goto L_008E2320; }
    goto L_008E2464;
L_008E2320:;
    a0 = (s32) ((u32) s0 + 0xb0cU); v0 = func_008CD9A0(a0, a1, a2, a3);
    a1 = 2;
    if (v0 == a1) { v1 = (*(volatile u8 *) (u32) (s0 + 2832)); goto L_008E2348; }
    v1 = 1;
    if (v0 == v1) { v0 = 39; goto L_008E2468; }
    goto L_008E2464;
L_008E2348:;
    v0 = (*(volatile u8 *) (u32) (s0 + 2386));
    v1 = (s32) ((u32) v1 + (u32) s0);
    v1 = (*(volatile u8 *) (u32) (v1 + 2414));
    if (v1 != v0) { v0 = 1; goto L_008E2370; }
    a0 = (s32) ((u32) s0 + 0xb0cU);
    (*(volatile u8 *) (u32) (s0 + 42)) = (u8) 0; func_008CD370(a0, a1, a2, a3, f12.f, f13.f);
    v0 = (*(volatile u8 *) (u32) (s0 + 22)); goto L_008E2384;
L_008E2370:;
    a0 = (s32) ((u32) s0 + 0xb0cU);
    (*(volatile u8 *) (u32) (s0 + 42)) = (u8) v0;
    a1 = 3; func_008CD370(a0, a1, a2, a3, f12.f, f13.f);
    v0 = (*(volatile u8 *) (u32) (s0 + 22));
L_008E2384:;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (s0 + 22)) = (u8) v0; goto L_008E2464;
L_008E2390:;
    a0 = (s32) ((u32) s0 + 0xb0cU); v0 = func_008CDAF0(a0, a1, a2, a3, f12.f, f13.f);
    v1 = 1;
    if (v0 == v1) { a1 = (*(volatile u8 *) (u32) (s0 + 42)); goto L_008E2444; }
    v1 = 2;
    if (v0 == v1) { v0 = (*(volatile u8 *) (u32) (s0 + 42)); goto L_008E23B8; }
    goto L_008E2464;
L_008E23B8:;
    if (v0 != 0) { v0 = (*(volatile u8 *) (u32) (s0 + 2832)); goto L_008E23E4; }
    v0 = (*(volatile u8 *) (u32) (s0 + 2832));
    v1 = (*(volatile u8 *) (u32) (s0 + 2387));
    v0 = (s32) ((u32) v0 + (u32) s0);
    v0 = (*(volatile u8 *) (u32) (v0 + 2414));
    if (v1 != v0) { v1 = (*(volatile u8 *) (u32) (s0 + 2832)); goto L_008E2404; }
    v0 = (*(volatile u8 *) (u32) (s0 + 2386));
    (*(volatile u8 *) (u32) (s0 + 2387)) = (u8) v0; goto L_008E2400;
L_008E23E4:;
    v1 = (*(volatile u8 *) (u32) (s0 + 2386));
    v0 = (s32) ((u32) v0 + (u32) s0);
    v0 = (*(volatile u8 *) (u32) (v0 + 2414));
    if (v1 != v0) goto L_008E2400;
    v0 = (*(volatile u8 *) (u32) (s0 + 2387));
    (*(volatile u8 *) (u32) (s0 + 2386)) = (u8) v0;
L_008E2400:;
    v1 = (*(volatile u8 *) (u32) (s0 + 2832));
L_008E2404:;
    v0 = (*(volatile u8 *) (u32) (s0 + 42));
    v1 = (s32) ((u32) v1 + (u32) s0);
    v1 = (*(volatile u8 *) (u32) (v1 + 2414));
    v0 = (s32) ((u32) v0 + (u32) s0);
    (*(volatile u8 *) (u32) (v0 + 2386)) = (u8) v1;
    v0 = (*(volatile u8 *) (u32) (s0 + 2389));
    at = v0 < 5;
    if (at == 0) { a0 = (s32) ((u32) s0 + 0xb0cU); goto L_008E2438; }
    v1 = (*(volatile u8 *) (u32) (s0 + 2386));
    v0 = (s32) ((u32) v0 + (u32) s0);
    (*(volatile u8 *) (u32) (v0 + 2519)) = (u8) v1;
    a0 = (s32) ((u32) s0 + 0xb0cU);
L_008E2438:;
    a1 = (s32) ((u32) s0 + 0x208U); func_008CB190(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    a1 = (*(volatile u8 *) (u32) (s0 + 42));
L_008E2444:;
    a0 = (s32) ((u32) s0 + 0xb0cU); func_008CD2A0(a0, a1, a2, a3, f12.f, f13.f);
    v0 = (*(volatile u8 *) (u32) (s0 + 22));
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    (*(volatile u8 *) (u32) (s0 + 22)) = (u8) v0; goto L_008E2464;
L_008E245C:;
    a1 = 0; func_008B66C0(a0, a1, a2, a3);
L_008E2464:;
    v0 = 0;
L_008E2468:;
    return v0;
}
