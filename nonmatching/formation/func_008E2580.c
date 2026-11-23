/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s32);
void func_008B3B20(s32, s32, s32, s32);
void func_008B66C0(s32, s32, s32, s32);
void func_008B6E60(s32, s32, s32, s32);
void func_008B9A90(s32, s32, s32, s32);
void func_008BE4D0(s32, s32);
void func_008C9DB0(s32, s32, f32, f32);
void func_008CAA10(s32, s32, s32, s32, f32, f32);
void func_008CACD0(s32, s32, s32, s32);
void func_008CCE20(s32, s32, s32, s32, f32, f32);
void func_008CCE50(s32, s32, s32, s32);
void func_008CCEA0(s32, s32, s32, s32, f32, f32);
void func_008CCF30(s32, s32, s32, s32);
void func_008CCF80(s32, s32, s32, s32, f32, f32);
s32 func_008CD7E0(s32, s32, s32, s32);
void func_008D3980(s32, s32, s32, s32);
s32 func_008D3B00(s32, s32, s32, s32);
void func_008E5110(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_008E2580(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };

    a2 = 2;
    { s32 c_ = a1 == a2; s1 = a0; if (c_) goto L_008E27FC; }
    v1 = 1;
    if (a1 == v1) { v0 = (*(volatile u8 *) (u32) (s1 + 22)); goto L_008E25F0; }
    if (a1 == 0) { a0 = (s32) ((u32) s1 + 0xb0cU); goto L_008E25B8; }
    v0 = 0; goto L_008E2808;
L_008E25B8:;
    a1 = 10; func_008C9DB0(a0, a1, f12.f, f13.f);
    a1 = (s32) 0x8f0000U;
    a0 = (s32) ((u32) s1 + 0x1ca8U);
    a1 = (s32) ((u32) a1 + 0xffffdde0U);
    a2 = 10; func_008D3980(a0, a1, a2, a3);
    a0 = s1; func_008B6E60(a0, a1, a2, a3);
    a0 = s1;
    a1 = 31; func_008B66C0(a0, a1, a2, a3);
    goto L_008E2804;
L_008E25F0:;
    if (v0 == a2) { a1 = (*(volatile u8 *) (u32) (s1 + 25)); goto L_008E26EC; }
    if (v0 == v1) { a1 = (*(volatile u8 *) (u32) (s1 + 25)); goto L_008E2634; }
    if (v0 == 0) { a0 = (s32) ((u32) s1 + 0xb0cU); goto L_008E2610; }
    goto L_008E2804;
L_008E2610:;
    func_008CAA10(a0, a1, a2, a3, f12.f, f13.f);
    a1 = (*(volatile u8 *) (u32) (s1 + 7337));
    a0 = (s32) ((u32) s1 + 0xb0cU); func_008CCE50(a0, a1, a2, a3);
    v0 = (*(volatile u8 *) (u32) (s1 + 22));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (s1 + 22)) = (u8) v0;
    a1 = (*(volatile u8 *) (u32) (s1 + 25));
L_008E2634:;
    a0 = (s32) ((u32) s1 + 0x1ca8U); v0 = func_008D3B00(a0, a1, a2, a3);
    v1 = 3;
    if (v0 == v1) { a1 = (*(volatile u8 *) (u32) (s1 + 7337)); goto L_008E26D0; }
    v1 = 2;
    if (v0 == v1) { v0 = (*(volatile u8 *) (u32) (s1 + 7337)); goto L_008E2668; }
    v1 = 1;
    if (v0 == v1) { v0 = 39; goto L_008E2808; }
    a0 = (s32) ((u32) s1 + 0xb0cU); goto L_008E26DC;
L_008E2668:;
    at = v0 < 5;
    if (at == 0) { a0 = (*(volatile s32 *) (u32) (s1 + 7516)); goto L_008E26A8; }
    a0 = s1;
    a1 = 16;
    a2 = 0; func_008B3B20(a0, a1, a2, a3);
    a0 = (s32) ((u32) s1 + 0xb0cU); func_008CCF80(a0, a1, a2, a3, f12.f, f13.f);
    a0 = (s32) ((u32) s1 + 0x129cU);
    a1 = 0; func_008E5110(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (*(volatile u8 *) (u32) (s1 + 22));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (s1 + 22)) = (u8) v0; goto L_008E26D8;
L_008E26A8:;
    a1 = 1; func_008B9A90(a0, a1, a2, a3);
    a0 = (s32) ((u32) s1 + 0x208U);
    a1 = 1; func_008BE4D0(a0, a1);
    a0 = (s32) ((u32) s1 + 0xb0cU);
    a1 = (s32) ((u32) s1 + 0x208U); func_008CCE20(a0, a1, a2, a3, f12.f, f13.f);
    goto L_008E26D8;
L_008E26D0:;
    a0 = (s32) ((u32) s1 + 0xb0cU); func_008CCE50(a0, a1, a2, a3);
L_008E26D8:;
    a0 = (s32) ((u32) s1 + 0xb0cU);
L_008E26DC:;
    func_008CAA10(a0, a1, a2, a3, f12.f, f13.f);
    goto L_008E2804;
L_008E26EC:;
    a0 = (s32) ((u32) s1 + 0xb0cU); v0 = func_008CD7E0(a0, a1, a2, a3);
    s0 = v0;
    v0 = 2;
    if (s0 == v0) { v0 = (s32) 0x84020000U; goto L_008E276C; }
    v0 = 1;
    if (s0 == v0) { v0 = (s32) 0x84000000U; goto L_008E275C; }
    v0 = 5;
    if (s0 == v0) { v0 = (s32) 0x8c000000U; goto L_008E274C; }
    v0 = 3;
    if (s0 == v0) { a0 = (s32) ((u32) s1 + 0xb0cU); goto L_008E2730; }
    v0 = 3; goto L_008E2778;
L_008E2730:;
    func_008CCEA0(a0, a1, a2, a3, f12.f, f13.f);
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0xf802; SD_call(a0);
    goto L_008E2774;
L_008E274C:;
    a0 = v0 | 0x8005; SD_call(a0);
    goto L_008E2774;
L_008E275C:;
    a0 = v0 | 0x8401; SD_call(a0);
    goto L_008E2774;
L_008E276C:;
    a0 = v0 | 0x8400; SD_call(a0);
L_008E2774:;
    v0 = 3;
L_008E2778:;
    if (s0 == v0) goto L_008E2804;
    v0 = 1;
    if (s0 == v0) { a0 = (s32) ((u32) s1 + 0x129cU); goto L_008E27D0; }
    v0 = 2;
    if (s0 == v0) { v0 = (*(volatile u8 *) (u32) (s1 + 2832)); goto L_008E27A0; }
    goto L_008E2804;
L_008E27A0:;
    a0 = (*(volatile u8 *) (u32) (s1 + 2831));
    v0 = (s32) ((u32) v0 + (u32) s1);
    at = a0 < 5;
    { s32 c_ = at != 0; v1 = (*(volatile u8 *) (u32) (v0 + 2414)); if (c_) goto L_008E27B8; }
    a0 = 4;
L_008E27B8:;
    v0 = (s32) ((u32) a0 + (u32) s1);
    a1 = (s32) ((u32) s1 + 0x208U);
    a0 = (s32) ((u32) s1 + 0xb0cU);
    (*(volatile u8 *) (u32) (v0 + 2519)) = (u8) v1; func_008CCE20(a0, a1, a2, a3, f12.f, f13.f);
    a0 = (s32) ((u32) s1 + 0x129cU);
L_008E27D0:;
    a1 = 1; func_008E5110(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (s32) ((u32) s1 + 0xb0cU); func_008CCF30(a0, a1, a2, a3);
    a0 = (s32) ((u32) s1 + 0xb0cU); func_008CACD0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s1 + 7516));
    a1 = 1; func_008B9A90(a0, a1, a2, a3);
    (*(volatile u8 *) (u32) (s1 + 22)) = (u8) 0; goto L_008E2804;
L_008E27FC:;
    a1 = 0; func_008B66C0(a0, a1, a2, a3);
L_008E2804:;
    v0 = 0;
L_008E2808:;
    return v0;
}
