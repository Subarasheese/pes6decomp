/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00103E48(s32, s32);
s32 func_00129C60(s32, s32, s32, s32, f32, f32, f32);
s32 func_00132AE0(void);
s32 Pes6Lighting_Update(f32, f32, f32);
s32 func_00132F60(void);
s32 func_001342D0(s32, s32, s32);
s32 func_00134300(s32, s32, s32);

s32 func_00132A20(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13, f32 fa14) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };
    union { f32 f; s32 i; } f14 = { fa14 };
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    v0 = func_00129C60(a0, a1, a2, a3, f12.f, f13.f, f14.f);
    a1 = v0;
    a0 = (s32) ((u32) sp + 0x30U); v0 = func_00103E48(a0, a1);
    s0 = (s32) 0x400000U;
    s1 = 0;
    s0 = (s32) ((u32) s0 + 0xffffb790U);
L_00132A4C:;
    v0 = (*(volatile s32 *) (u32) s0);
    at = (u64) v0 < (u64) (s64) 7;
    if (at == 0) goto L_00132A78;
    v1 = (s32) 0x3c0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x6840U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x132a78U) goto L_00132A78; if (t_ == 0x132aa8U) goto L_00132AA8; }
L_00132A78:;
    s1 = (s32) ((u32) s1 + 0x1U);
L_00132A7C:;
    v0 = s1 < 3;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0xb0U); if (c_) goto L_00132A4C; }
    v0 = func_00132F60();
    v0 = Pes6Lighting_Update(f12.f, f13.f, f14.f);
    v0 = func_00132AE0();
    goto L_00132AD0;
L_00132AA8:;
    a0 = (s32) ((u32) s0 + 0x30U);
    a1 = (s32) ((u32) sp + 0x30U);
    a2 = (s32) ((u32) s0 + 0x20U); v0 = func_00134300(a0, a1, a2);
    a0 = (s32) ((u32) s0 + 0x50U);
    a1 = (s32) ((u32) sp + 0x30U);
    a2 = (s32) ((u32) s0 + 0x40U); v0 = func_001342D0(a0, a1, a2);
    s1 = (s32) ((u32) s1 + 0x1U); goto L_00132A7C;
L_00132AD0:;
    return v0;
}
