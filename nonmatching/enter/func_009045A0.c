/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002A8830(s32);
void func_0090A410(s32, s32, s32, f32, f32);
s32 func_009177C0(s32);

void func_009045A0(s32 a0, s32 a1, s32 a2, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };

    v0 = (s32) 0x930000U;
    v1 = (s32) 0x10000U;
    s1 = a0;
    a0 = (*(volatile s32 *) (u32) (v0 + -4080));
    v0 = v1 | 0xfc;
    if (a0 == v0) { v1 = s1 & 0xff; goto L_00904658; }
    v0 = v1 | 0xf9;
    if (a0 == v0) { v1 = s1 & 0xff; goto L_00904600; }
    v0 = v1 | 0xf8;
    if (a0 == v0) { s0 = 41; goto L_009046A8; }
    v0 = v1 | 0xf7;
    if (a0 == v0) { s0 = 40; goto L_009046A8; }
    v0 = v1 | 0xf6;
    s0 = 39; goto L_009046A8;
L_00904600:;
    v0 = (s32) 0x930000U;
    v0 = (s32) ((u32) v0 + 0xfffff0b4U);
    v1 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s8 *) (u32) v0); v0 = func_009177C0(a0);
    v1 = (*(volatile s32 *) (u32) (v0 + 4));
    v1 = (*(volatile u16 *) (u32) (v1 + 48));
    v0 = 1438;
    if (v1 == v0) { s0 = 42; goto L_009046A8; }
    v0 = 1436;
    if (v1 == v0) { s0 = 43; goto L_009046A8; }
    v0 = 1435;
    if (v1 == v0) { s0 = 45; goto L_009046A8; }
    v0 = 1434;
    if (v1 == v0) { s0 = 44; goto L_009046A8; }
    goto L_009046A8;
L_00904658:;
    v0 = (s32) 0x930000U;
    v0 = (s32) ((u32) v0 + 0xfffff0b4U);
    v1 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s8 *) (u32) v0); v0 = func_009177C0(a0);
    v1 = (*(volatile s32 *) (u32) (v0 + 4));
    v1 = (*(volatile u16 *) (u32) (v1 + 48));
    v0 = 1436;
    if (v1 == v0) { s0 = 49; goto L_009046A8; }
    v0 = 1435;
    if (v1 == v0) { s0 = 48; goto L_009046A8; }
    v0 = 1439;
    if (v1 == v0) { s0 = 47; goto L_009046A8; }
    v0 = 1437;
    if (v1 == v0) { s0 = 46; goto L_009046A8; }
L_009046A8:;
    v0 = (s32) 0x930000U;
    v1 = s1 & 0xff;
    a0 = (*(volatile s16 *) (u32) (v0 + -3846));
    v1 = (s32) ((u32) v1 << 3);
    f0.i = (s32) a0;
    v0 = (s32) 0x930000U;
    v0 = (s32) ((u32) v0 + 0xfffff0b4U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s8 *) (u32) v0);
    f20.f = (f32) f0.i; v0 = func_009177C0(a0);
    a2 = (*(volatile s8 *) (u32) v0);
    a0 = s0 & 0xff;
    f12.i = f20.i;
    a1 = 255; func_0090A410(a0, a1, a2, f12.f, f13.f);
    v1 = (s32) 0x930000U;
    a0 = 41;
    a1 = (*(volatile s16 *) (u32) (v1 + -3498));
    if (a1 == a0) goto L_009047EC;
    v1 = 39;
    if (a1 == v1) goto L_009047CC;
    v1 = 47;
    if (a1 == v1) goto L_009047A8;
    v1 = 46;
    if (a1 == v1) goto L_00904788;
    v1 = 48;
    if (a1 == v1) goto L_00904764;
    v1 = 43;
    if (a1 == v1) goto L_00904740;
    goto L_00904808;
L_00904740:;
    v1 = (s32) 0x930000U;
    a0 = 1;
    v1 = (*(volatile s16 *) (u32) (v1 + -3496));
    if (v1 != a0) goto L_00904804;
    a0 = 2; func_002A8830(a0);
    goto L_00904804;
L_00904764:;
    v1 = (s32) 0x930000U;
    a0 = 2;
    v1 = (*(volatile s16 *) (u32) (v1 + -3496));
    if (v1 != a0) goto L_00904804;
    func_002A8830(a0);
    goto L_00904804;
L_00904788:;
    v1 = (s32) 0x930000U;
    v1 = (*(volatile s16 *) (u32) (v1 + -3496));
    if (v1 != 0) goto L_00904804;
    a0 = 2; func_002A8830(a0);
    goto L_00904804;
L_009047A8:;
    v1 = (s32) 0x930000U;
    a0 = 1;
    v1 = (*(volatile s16 *) (u32) (v1 + -3496));
    if (v1 != a0) goto L_00904804;
    a0 = 2; func_002A8830(a0);
    goto L_00904804;
L_009047CC:;
    v1 = (s32) 0x930000U;
    v1 = (*(volatile s16 *) (u32) (v1 + -3496));
    if (v1 != 0) goto L_00904804;
    a0 = 2; func_002A8830(a0);
    goto L_00904804;
L_009047EC:;
    v1 = (s32) 0x930000U;
    v1 = (*(volatile s16 *) (u32) (v1 + -3496));
    if (v1 != 0) goto L_00904804;
    a0 = 2; func_002A8830(a0);
L_00904804:;
L_00904808:;
    return;
}
