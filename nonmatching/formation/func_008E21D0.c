/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_008B3B20(s32, s32, s32, s32);
void func_008B3FD0(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32);
void func_008C9DB0(s32, s32, f32, f32);
void func_008CB190(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32);
s32 func_008CDAF0(s32, s32, s32, s32, f32, f32);
void func_008E5110(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_008E21D0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };

    v0 = 2;
    { s32 c_ = a1 == v0; s0 = a0; if (c_) goto L_008E228C; }
    v0 = 1;
    if (a1 == v0) { a1 = (*(volatile u8 *) (u32) (s0 + 25)); goto L_008E222C; }
    if (a1 == 0) { a1 = 0; goto L_008E2204; }
    v0 = 0; goto L_008E2290;
L_008E2204:;
    a2 = 0; func_008B3B20(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 + 0xb0cU);
    a1 = 11; func_008C9DB0(a0, a1, f12.f, f13.f);
    a0 = (s32) ((u32) s0 + 0x129cU);
    a1 = 0; func_008E5110(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_008E228C;
L_008E222C:;
    a0 = (s32) ((u32) s0 + 0xb0cU); v0 = func_008CDAF0(a0, a1, a2, a3, f12.f, f13.f);
    v1 = 3;
    if (v0 == v1) goto L_008E228C;
    v1 = 1;
    if (v0 == v1) { v0 = 39; goto L_008E2290; }
    v1 = 2;
    if (v0 == v1) { v0 = (*(volatile u8 *) (u32) (s0 + 2832)); goto L_008E2260; }
    goto L_008E228C;
L_008E2260:;
    a0 = (s32) ((u32) s0 + 0xb0cU);
    a1 = (s32) ((u32) s0 + 0x208U);
    v0 = (s32) ((u32) v0 + (u32) s0);
    v0 = (*(volatile u8 *) (u32) (v0 + 2414));
    (*(volatile u8 *) (u32) (s0 + 2524)) = (u8) v0; func_008CB190(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    a0 = s0; func_008B3FD0(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    v0 = 39;
    goto L_008E2290;
L_008E228C:;
    v0 = 0;
L_008E2290:;
    return v0;
}
