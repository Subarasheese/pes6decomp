/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Sprite_SetPositionZ(s32, f32);
void func_001D7580(s32, s32);
f32 func_001D79A0(s32, s32);
void func_001D7D80(s32, s32, s32, s32);
s32 func_008C1490(s32, s32, s32, s32, f32);
s32 func_008C5210(s32);
void func_008C5A20(s32, s32, s32, s32, f32, f32);

void func_008C55C0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };

    s4 = a0;
    s3 = a1;
    s2 = a2;
    s1 = a3;
    v1 = (*(volatile s32 *) (u32) (a0 + 16));
    s0 = 0;
    { s32 c_ = v1 != 0; a0 = 0; if (c_) goto L_008C5720; }
    v1 = (*(volatile s32 *) (u32) (s4 + 20));
    if (v1 == 0) { at = (u64) s3 < (u64) (s64) 14; goto L_008C5614; }
    goto L_008C5724;
    at = (u64) s3 < (u64) (s64) 14;
L_008C5614:;
    if (at == 0) { a1 = s1; goto L_008C5674; }
    v1 = (s32) 0x8f0000U;
    v0 = (s32) ((u32) s3 << 2);
    v1 = (s32) ((u32) v1 + 0xffffce10U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x8c5638U) goto L_008C5638; if (t_ == 0x8c5644U) goto L_008C5644; if (t_ == 0x8c5650U) goto L_008C5650; if (t_ == 0x8c565cU) goto L_008C565C; if (t_ == 0x8c5668U) goto L_008C5668; if (t_ == 0x8c5670U) goto L_008C5670; }
L_008C5638:;
    a0 = 1;
    s0 = 2; goto L_008C5670;
L_008C5644:;
    a0 = 15;
    s0 = 16; goto L_008C5670;
L_008C5650:;
    a0 = 20;
    s0 = 21; goto L_008C5670;
L_008C565C:;
    a0 = 36;
    s0 = 37; goto L_008C5670;
L_008C5668:;
    a0 = 29;
    s0 = 30;
L_008C5670:;
    a1 = s1;
L_008C5674:;
    v0 = func_008C1490(a0, a1, a2, a3, f12.f);
    a0 = s0;
    (*(volatile u32 *) (u32) (s4 + 16)) = (u32) v0;
    a1 = s1; v0 = func_008C1490(a0, a1, a2, a3, f12.f);
    s0 = v0;
    a0 = s2 & 0xff;
    (*(volatile u32 *) (u32) (s4 + 20)) = (u32) s0; v0 = func_008C5210(a0);
    a0 = s0;
    a1 = v0; func_001D7580(a0, a1);
    a1 = s3;
    a2 = s2;
    a0 = s4; func_008C5A20(a0, a1, a2, a3, f12.f, f13.f);
    v1 = (*(volatile s32 *) (u32) (s4 + 24));
    if (v1 != 0) goto L_008C5720;
    a0 = 58;
    a1 = s1; v0 = func_008C1490(a0, a1, a2, a3, f12.f);
    s0 = v0;
    a1 = 268;
    a0 = s0;
    (*(volatile u32 *) (u32) (s4 + 24)) = (u32) s0; f0.f = func_001D79A0(a0, a1);
    f2.f = (*(volatile f32 *) (u32) (s1 + 12));
    a0 = s0;
    f1.f = (*(volatile f32 *) (u32) (s1 + 8));
    f1.f = f2.f + f1.f;
    f12.f = f1.f - f0.f; Pes6Sprite_SetPositionZ(a0, f12.f);
    a0 = (*(volatile s8 *) (u32) s4);
    v1 = 11;
    if (a0 == v1) { a0 = s0; goto L_008C5718; }
    goto L_008C5720;
    a0 = s0;
L_008C5718:;
    a1 = 1; func_001D7D80(a0, a1, a2, a3);
L_008C5720:;
L_008C5724:;
    return;
}
