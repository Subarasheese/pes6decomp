/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001F08B0(s32);
void func_008B3050(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32);
void func_008C9A00(s32, s32, s32, s32);
void func_008C9A40(s32, s32, s32, s32);
void func_008C9B50(s32, s32, s32, s32);
void func_008C9DB0(s32, s32, f32, f32);
s32 func_008CB0C0(s32);
void func_008CB0E0(s32, f32, f32);
s32 func_008CD6A0(s32, s32, s32, s32);
void func_008DF480(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_008E7010(s32, s32, s32, s32);

s32 func_008DF290(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };

    v0 = 2;
    { s32 c_ = a1 == v0; s0 = a0; if (c_) goto L_008DF44C; }
    v0 = 1;
    if (a1 == v0) { a1 = (*(volatile u8 *) (u32) (s0 + 25)); goto L_008DF31C; }
    if (a1 == 0) { a0 = (s32) ((u32) s0 + 0xb0cU); goto L_008DF2C4; }
    v0 = 0; goto L_008DF468;
L_008DF2C4:;
    a1 = 7; func_008C9DB0(a0, a1, f12.f, f13.f);
    v0 = (s32) 0x3c0000U;
    a0 = v0 | 0x7; v0 = func_001F08B0(a0);
    a1 = v0;
    a0 = (s32) ((u32) s0 + 0xb0cU); func_008C9B50(a0, a1, a2, a3);
    v1 = 1;
    v0 = (s32) 0x8e0000U;
    v0 = (s32) ((u32) v0 + 0xfffff5d0U);
    (*(volatile u8 *) (u32) (s0 + 2864)) = (u8) v1;
    (*(volatile u32 *) (u32) (s0 + 2928)) = (u32) v0;
    a0 = (s32) ((u32) s0 + 0xb0cU);
    (*(volatile u32 *) (u32) (s0 + 2932)) = (u32) s0; func_008C9A40(a0, a1, a2, a3);
    a1 = (*(volatile u8 *) (u32) (s0 + 2870));
    a0 = s0;
    a2 = 0; func_008DF480(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_008DF464;
L_008DF31C:;
    a0 = (s32) ((u32) s0 + 0xb0cU); v0 = func_008CD6A0(a0, a1, a2, a3);
    v1 = 3;
    if (v0 == v1) goto L_008DF464;
    v0 = (*(volatile u8 *) (u32) (s0 + 28));
    if (v0 == 0) { a1 = (*(volatile u8 *) (u32) (s0 + 25)); goto L_008DF348; }
    a0 = (s32) ((u32) s0 + 0xb0cU); func_008CB0E0(a0, f12.f, f13.f);
    a1 = (*(volatile u8 *) (u32) (s0 + 25));
L_008DF348:;
    a0 = (s32) ((u32) s0 + 0xb34U); v0 = func_008E7010(a0, a1, a2, a3);
    v1 = 3;
    if (v0 == v1) { a1 = (*(volatile u8 *) (u32) (s0 + 2870)); goto L_008DF438; }
    v1 = 1;
    if (v0 == v1) { (*(volatile u8 *) (u32) (s0 + 2864)) = (u8) 0; goto L_008DF41C; }
    v1 = 2;
    if (v0 == v1) { v1 = (*(volatile u8 *) (u32) (s0 + 2870)); goto L_008DF37C; }
    goto L_008DF464;
L_008DF37C:;
    v0 = 21;
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) s0);
    v1 = (*(volatile s32 *) (u32) (v1 + 2888));
    if (v1 != v0) { (*(volatile u8 *) (u32) (s0 + 2864)) = (u8) 0; goto L_008DF408; }
    a0 = (s32) ((u32) s0 + 0xb0cU); v0 = func_008CB0C0(a0);
    a0 = (*(volatile u8 *) (u32) (s0 + 2374));
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 3);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) v1 + (u32) s0);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (s32) ((u32) v0 + 0xa13U);
    v0 = (*(volatile u8 *) (u32) (v0 + 2579));
    v0 = v0 < 2;
    if (v0 != 0) goto L_008DF404;
    v0 = 1;
    a0 = s0;
    (*(volatile u8 *) (u32) v1) = (u8) v0;
    a1 = (s32) ((u32) s0 + 0x208U); func_008B3050(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    a0 = (s32) ((u32) s0 + 0xb0cU); func_008CB0E0(a0, f12.f, f13.f);
    a0 = (s32) ((u32) s0 + 0xb0cU); func_008C9A00(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 + 0xb0cU); func_008C9A40(a0, a1, a2, a3);
    v0 = 0; goto L_008DF468;
L_008DF404:;
    (*(volatile u8 *) (u32) (s0 + 2864)) = (u8) 0;
L_008DF408:;
    v0 = (*(volatile u8 *) (u32) (s0 + 2870));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) s0);
    v0 = (*(volatile s32 *) (u32) (v0 + 2888)); goto L_008DF468;
L_008DF41C:;
    v1 = (s32) ((u32) gp + 0xffff85c8U);
    a0 = (*(volatile u8 *) (u32) s0);
    v0 = 39;
    a1 = (*(volatile u8 *) (u32) (s0 + 2870));
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u8 *) (u32) v1) = (u8) a1; goto L_008DF468;
L_008DF438:;
    a0 = s0;
    a2 = 0; func_008DF480(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_008DF464;
L_008DF44C:;
    a0 = (s32) ((u32) s0 + 0xb0cU); func_008C9A00(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 2928)) = (u32) 0;
    (*(volatile u32 *) (u32) (s0 + 2932)) = (u32) 0;
    (*(volatile u32 *) (u32) (s0 + 2944)) = (u32) 0;
    (*(volatile u32 *) (u32) (s0 + 2948)) = (u32) 0;
L_008DF464:;
    v0 = 0;
L_008DF468:;
    return v0;
}
