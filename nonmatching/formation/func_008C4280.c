/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s32);
void func_008B3050(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32);
void func_008B3400(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32);
void func_008B3B20(s32, s32, s32, s32);
void func_008B3FD0(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32);
void func_008B66C0(s32, s32, s32, s32);
void func_008C9DB0(s32, s32, f32, f32);
void func_008CACD0(s32, s32, s32, s32);
s32 func_008CB0C0(s32);
void func_008CB0E0(s32, f32, f32);
s32 func_008CB960(s32, s32, s32, s32, f32, f32);
void func_008E5110(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_008C4280(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };

    v0 = 2;
    { s32 c_ = a1 == v0; s0 = a0; if (c_) goto L_008C43F4; }
    a2 = 1;
    if (a1 == a2) { a1 = (*(volatile u8 *) (u32) (s0 + 25)); goto L_008C42E8; }
    if (a1 == 0) { a1 = 0; goto L_008C42B4; }
    v0 = 0; goto L_008C4400;
L_008C42B4:;
    a2 = 0; func_008B3B20(a0, a1, a2, a3);
    a0 = s0;
    a1 = 4; func_008B66C0(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 + 0xb0cU);
    a1 = 20; func_008C9DB0(a0, a1, f12.f, f13.f);
    a0 = (s32) ((u32) s0 + 0x129cU);
    a1 = 2; func_008E5110(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_008C43FC;
L_008C42E8:;
    a0 = (s32) ((u32) s0 + 0xb0cU); v0 = func_008CB960(a0, a1, a2, a3, f12.f, f13.f);
    v1 = 3;
    if (v0 == v1) goto L_008C43FC;
    v1 = 2;
    if (v0 == v1) { a0 = (s32) ((u32) s0 + 0xb0cU); goto L_008C432C; }
    v1 = 1;
    if (v0 == v1) { a0 = (s32) ((u32) s0 + 0xb0cU); goto L_008C431C; }
    goto L_008C43FC;
L_008C431C:;
    func_008CACD0(a0, a1, a2, a3);
    v0 = 39; goto L_008C4400;
L_008C432C:;
    v0 = func_008CB0C0(a0);
    if (v0 == 0) { v0 = (s32) 0x84020000U; goto L_008C43A8; }
    a0 = (s32) ((u32) s0 + 0xb0cU); v0 = func_008CB0C0(a0);
    v0 = (s32) ((u32) v0 + (u32) s0);
    v0 = (*(volatile u8 *) (u32) (v0 + 2375));
    if (v0 == 0) goto L_008C43A4;
    v1 = 0;
    a0 = 1;
    v0 = (s32) ((u32) s0 + (u32) a0);
L_008C4360:;
    v0 = (*(volatile u8 *) (u32) (v0 + 2375));
    if (v0 == 0) goto L_008C4370;
    v1 = (s32) ((u32) v1 + 0x1U);
L_008C4370:;
    a0 = (s32) ((u32) a0 + 0x1U);
    v0 = a0 < 11;
    if (v0 != 0) { v0 = (s32) ((u32) s0 + (u32) a0); goto L_008C4360; }
    v0 = (*(volatile u8 *) (u32) (s0 + 34));
    at = v0 < v1;
    if (at != 0) goto L_008C43A4;
    v0 = (s32) 0x8c000000U;
    a0 = v0 | 0x8005; SD_call(a0);
    goto L_008C43FC;
L_008C43A4:;
    v0 = (s32) 0x84020000U;
L_008C43A8:;
    a0 = v0 | 0x8400; SD_call(a0);
    a0 = (s32) ((u32) s0 + 0xb0cU); v0 = func_008CB0C0(a0);
    v1 = (s32) ((u32) v0 + (u32) s0);
    a0 = s0;
    v0 = (*(volatile u8 *) (u32) (v1 + 2375));
    a1 = (s32) ((u32) s0 + 0x208U);
    v0 = v0 ^ 0x1;
    (*(volatile u8 *) (u32) (v1 + 2375)) = (u8) v0; func_008B3050(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    a0 = s0; func_008B3400(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    a0 = s0; func_008B3FD0(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    a0 = (s32) ((u32) s0 + 0xb0cU); func_008CB0E0(a0, f12.f, f13.f);
    goto L_008C43FC;
L_008C43F4:;
    a1 = 0; func_008B66C0(a0, a1, a2, a3);
L_008C43FC:;
    v0 = 0;
L_008C4400:;
    return v0;
}
