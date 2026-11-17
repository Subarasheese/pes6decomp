/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00153FE0(s32, s32);
s32 func_001D3080(s32);
s32 func_001D3090(s32);

s32 func_0018DA20(void) {
    s32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f12 = { 0 };
    union { f32 f; s32 i; } f13 = { 0 };

    v0 = (s32) 0x520000U;
    a0 = (*(s16 *) (u32) (v0 + -78));
    a1 = 4800; v0 = func_00153FE0(a0, a1);
    v1 = (s32) 0x520000U;
    s4 = v0;
    { s32 c_ = s4 == 0; (*(u32 *) (u32) (v1 + 528)) = (u32) v0; if (c_) goto L_0018DB38; }
    s1 = 0;
L_0018DA60:;
    (*(u32 *) (u32) (s4 + 12)) = (u32) 0;
    v0 = 115;
    (*(u16 *) (u32) (s4 + 48)) = (u16) v0;
    s2 = (s32) ((u32) s4 + 0x40U);
    v0 = 12;
    s3 = (s32) ((u32) s4 + 0x30U);
    (*(u16 *) (u32) (s4 + 50)) = (u16) v0;
    s0 = 0;
    (*(u32 *) (u32) (s4 + 56)) = (u32) s2;
    (*(u32 *) (u32) (s4 + 60)) = (u32) 0;
L_0018DA88:;
    v1 = 240;
    (*(u8 *) (u32) (s2 + 12)) = (u8) v1;
    v0 = (s32) s0 >> 1;
    (*(u8 *) (u32) (s2 + 13)) = (u8) v1;
    { s32 c_ = s0 >= 0; (*(u8 *) (u32) (s2 + 14)) = (u8) v1; if (c_) goto L_0018DAA8; }
    v0 = (s32) ((u32) s0 + 0x1U);
    v0 = (s32) v0 >> 1;
L_0018DAA8:;
    v0 = v0 & 0x1;
    v1 = (s32) 0x3f000000U;
    f1.i = (s32) v0;
    f0.i = (s32) v1;
    f1.f = (f32) f1.i;
    v0 = s0 & 0x1;
    { s32 c_ = v0 == 0; f12.f = f0.f * f1.f; if (c_) goto L_0018DAE8; }
    v0 = (s32) 0x3e800000U;
    f13.i = (s32) v0;
    a0 = s2; v0 = func_001D3080(a0);
    goto L_0018DAF8;
L_0018DAE8:;
    f13.i = (s32) 0;
    a0 = s2; v0 = func_001D3080(a0);
L_0018DAF8:;
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 14;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x18U); if (c_) goto L_0018DA88; }
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 12;
    { s32 c_ = v0 != 0; s4 = (s32) ((u32) s4 + 0x190U); if (c_) goto L_0018DA60; }
    a0 = s3; v0 = func_001D3090(a0);
    a0 = (s32) ((u32) v0 << 1);
    v1 = (s32) 0x520000U;
    a0 = (s32) ((u32) a0 + (u32) v0);
    a0 = (s32) ((u32) a0 << 2);
    a0 = (s32) ((u32) a0 + 0x188U);
    (*(u32 *) (u32) (v1 + 536)) = (u32) a0;
L_0018DB38:;
    return v0;
}
