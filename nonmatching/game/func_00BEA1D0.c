/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_009E1D30(s32, s32);
void func_009ED080(s32, s32, s32, s32, f32, f32, f32, f32);
void func_009EF5F0(s32, s32, s32, s32, f32, f32, f32, f32);
void func_009F0D30(s32, s32, s32, s32, f32, f32, f32, f32);
void func_009F27C0(s32, s32, s32, s32, f32, f32, f32, f32);
void func_009F3EC0(s32, s32, s32, f32, f32, f32, f32);
void func_00B79040(s32);
void func_00B942B0(s32, s32, s32, s32, f32, f32, f32, f32);

void func_00BEA1D0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s32 at = 0, v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };

    a0 = 1; func_00B79040(a0);
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 9983));
    at = (u64) v0 < (u64) (s64) 6;
    if (at == 0) goto L_00BEA26C;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x2640U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xbea210U) goto L_00BEA210; if (t_ == 0xbea220U) goto L_00BEA220; if (t_ == 0xbea230U) goto L_00BEA230; if (t_ == 0xbea240U) goto L_00BEA240; if (t_ == 0xbea250U) goto L_00BEA250; if (t_ == 0xbea264U) goto L_00BEA264; }
L_00BEA210:;
    func_009F3EC0(a0, a1, a2, f12.f, f13.f, f14.f, f15.f);
    goto L_00BEA26C;
L_00BEA220:;
    func_009EF5F0(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    goto L_00BEA26C;
L_00BEA230:;
    func_009F0D30(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    goto L_00BEA26C;
L_00BEA240:;
    func_009F27C0(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    goto L_00BEA26C;
L_00BEA250:;
    v0 = (s32) 0xcc0000U;
    a0 = (*(volatile u8 *) (u32) (v0 + -13214)); func_009ED080(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    goto L_00BEA26C;
L_00BEA264:;
    func_00B942B0(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
L_00BEA26C:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 9983));
    if (v0 == 0) goto L_00BEA284;
    a0 = 2; goto L_00BEA2BC;
L_00BEA284:;
    v0 = (s32) 0xcc0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -13214));
    if (v0 != 0) goto L_00BEA2B8;
    a0 = 2;
    a1 = 15; func_009E1D30(a0, a1);
    a0 = 1;
L_00BEA2A4:;
    v1 = (s32) 0xcc0000U;
    (*(volatile u8 *) (u32) (v1 + -13214)) = (u8) a0;
    v1 = (s32) 0xcc0000U;
    (*(volatile u8 *) (u32) (v1 + -13215)) = (u8) 0; goto L_00BEA2CC;
L_00BEA2B8:;
    a0 = 2;
L_00BEA2BC:;
    a1 = 16; func_009E1D30(a0, a1);
    a0 = 1; goto L_00BEA2A4;
L_00BEA2CC:;
    return;
}
