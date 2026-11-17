/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Sprite_SetPositionZ(s32, f32);
s32 func_001D5A10(s32);
s32 func_001D76B0(s32, s32);
s32 func_001D7840(s32, s32);
s32 func_001D7C20(s32, s32, s32, s32);
s32 func_001D7D60(s32, s32);
s32 func_001D7D80(s32, s32, s32, s32);
s32 func_001D7E40(s32, s32, s32, s32);
s32 func_001D7F90(s32, s32, s32, s32);

s32 func_001BFB70(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    union { f32 f; s32 i; } f12 = { fa12 };

    v0 = (s32) 0x10000U;
    s5 = a0;
    a0 = v0 | 0x40;
    v0 = func_001D5A10(a0);
    s1 = (s32) 0x3a0000U;
    s4 = v0;
    s3 = 0;
    s1 = (s32) ((u32) s1 + 0xffff8640U);
    s0 = s5;
L_001BFBB4:;
    a0 = s4; v0 = func_001D7F90(a0, a1, a2, a3);
    a1 = (*(volatile s32 *) (u32) (s1 + 4));
    s2 = v0;
    a0 = s2; v0 = func_001D7E40(a0, a1, a2, a3);
    a0 = s2;
    a1 = 0; v0 = func_001D7D80(a0, a1, a2, a3);
    a0 = s2;
    a1 = 1; v0 = func_001D7D60(a0, a1);
    a0 = s2;
    a1 = 1; v0 = func_001D7C20(a0, a1, a2, a3);
    v0 = (s32) 0xc77f0000U;
    v0 = v0 | 0xff00;
    f12.i = (s32) v0;
    a0 = s2; v0 = Pes6Sprite_SetPositionZ(a0, f12.f);
    a0 = s2;
    a1 = 1; v0 = func_001D7840(a0, a1);
    s3 = (s32) ((u32) s3 + 0x1U);
    (*(volatile u32 *) (u32) (s0 + 8)) = (u32) s2;
    v0 = (u64) s3 < (u64) (s64) 4;
    s1 = (s32) ((u32) s1 + 0x8U);
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_001BFBB4; }
    a0 = (*(volatile s32 *) (u32) (s5 + 20));
    a1 = 0; v0 = func_001D7C20(a0, a1, a2, a3);
    v0 = (s32) 0x10000U;
    v0 = v0 | 0x40;
    (*(volatile u32 *) (u32) (s5 + 4)) = (u32) v0;
    (*(volatile u32 *) (u32) (s5 + 32)) = (u32) 0;
    (*(volatile u8 *) (u32) (s5 + 36)) = (u8) 0;
    v0 = (*(volatile s32 *) (u32) (s5 + 40));
    if (v0 == 0) { a0 = (*(volatile s32 *) (u32) (s5 + 12)); goto L_001BFC74; }
    a0 = (*(volatile s32 *) (u32) (s5 + 8));
    a1 = 0; v0 = func_001D7D60(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s5 + 12));
    a1 = 0; v0 = func_001D7D60(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s5 + 16)); goto L_001BFCAC;
L_001BFC74:;
    a1 = 2; v0 = func_001D7C20(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s5 + 12));
    a1 = 0; v0 = func_001D76B0(a0, a1);
    v0 = (s32) 0x3a0000U;
    v1 = 1;
    v0 = (*(volatile s32 *) (u32) (v0 + -31136));
    if (v0 == v1) goto L_001BFCA8;
    a0 = (*(volatile s32 *) (u32) (s5 + 12));
    a1 = 0; v0 = func_001D7D60(a0, a1);
L_001BFCA8:;
    a0 = (*(volatile s32 *) (u32) (s5 + 16));
L_001BFCAC:;
    a1 = 0; v0 = func_001D7D60(a0, a1);
    (*(volatile u32 *) (u32) (s5 + 40)) = (u32) 0;
    return v0;
}
