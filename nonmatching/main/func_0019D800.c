/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00103F50(s32, s32, s32, s32, f32);
s32 func_00103FF8(s32, s32, s32, s32, f32);
s32 func_001040A0(s32, s32, s32, s32, f32);
s32 func_00153FE0(s32, s32);

s32 func_0019D800(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    union { f32 f; s32 i; } f12 = { fa12 };
    s64 frame[28];
    s32 sp = (s32) (u32) frame;

    v1 = (s32) 0x520000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 728));
    if (v1 != 0) goto L_0019D970;
    v0 = (s32) 0x520000U;
    v1 = (s32) 0x10000U;
    a0 = (*(volatile s16 *) (u32) (v0 + -78));
    a1 = v1 | 0x28b0; v0 = func_00153FE0(a0, a1);
    a0 = (s32) 0x520000U;
    a1 = (s32) 0x370000U;
    (*(volatile u32 *) (u32) (a0 + 728)) = (u32) v0;
    v1 = (s32) 0x520000U;
    (*(volatile u32 *) (u32) v0) = (u32) 0;
    a0 = (s32) 0x3e320000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 728));
    v0 = a0 | 0xb8c2;
    f12.i = (s32) v0;
    a0 = (s32) ((u32) sp + 0xa0U);
    a1 = (s32) ((u32) a1 + 0x5b30U);
    s0 = (s32) ((u32) v1 + 0x10U); v0 = func_00103FF8(a0, a1, a2, a3, f12.f);
    v0 = (s32) 0x3dfa0000U;
    a0 = (s32) ((u32) sp + 0xa0U);
    v0 = v0 | 0x35dd;
    f12.i = (s32) v0;
    a1 = a0; v0 = func_001040A0(a0, a1, a2, a3, f12.f);
    v0 = (s32) 0x3e7a0000U;
    a0 = s0;
    v0 = v0 | 0x35dd;
    f12.i = (s32) v0;
    a1 = (s32) ((u32) sp + 0xa0U); v0 = func_00103F50(a0, a1, a2, a3, f12.f);
    v0 = (s32) 0x520000U;
    a1 = (s32) 0x370000U;
    a2 = (*(volatile s32 *) (u32) (v0 + 728));
    v1 = (s32) 0x3e060000U;
    a0 = (s32) ((u32) sp + 0x60U);
    a1 = (s32) ((u32) a1 + 0x5b30U);
    v0 = v1 | 0xa92;
    f12.i = (s32) v0;
    s0 = (s32) ((u32) a2 + 0x50U); v0 = func_00103FF8(a0, a1, a2, a3, f12.f);
    v0 = (s32) 0x3dbb0000U;
    a0 = (s32) ((u32) sp + 0x60U);
    v0 = v0 | 0xa866;
    f12.i = (s32) v0;
    a1 = a0; v0 = func_001040A0(a0, a1, a2, a3, f12.f);
    v0 = (s32) 0xbe3b0000U;
    a0 = s0;
    v0 = v0 | 0xa866;
    f12.i = (s32) v0;
    a1 = (s32) ((u32) sp + 0x60U); v0 = func_00103F50(a0, a1, a2, a3, f12.f);
    v0 = (s32) 0x520000U;
    a1 = (s32) 0x370000U;
    a2 = (*(volatile s32 *) (u32) (v0 + 728));
    v1 = (s32) 0xbdb20000U;
    a0 = (s32) ((u32) sp + 0x20U);
    a1 = (s32) ((u32) a1 + 0x5b30U);
    v0 = v1 | 0xb8c2;
    f12.i = (s32) v0;
    s0 = (s32) ((u32) a2 + 0x90U); v0 = func_00103FF8(a0, a1, a2, a3, f12.f);
    v0 = (s32) 0x3d7a0000U;
    a0 = (s32) ((u32) sp + 0x20U);
    v0 = v0 | 0x35dd;
    f12.i = (s32) v0;
    a1 = a0; v0 = func_001040A0(a0, a1, a2, a3, f12.f);
    v0 = (s32) 0x3dfa0000U;
    a0 = s0;
    v0 = v0 | 0x35dd;
    f12.i = (s32) v0;
    a1 = (s32) ((u32) sp + 0x20U); v0 = func_00103F50(a0, a1, a2, a3, f12.f);
    v1 = (s32) 0x520000U;
    a2 = 20;
    a1 = (*(volatile s32 *) (u32) (v1 + 728));
    a0 = (s32) 0x520000U;
    (*(volatile u16 *) (u32) (a1 + 208)) = (u16) a2;
    v1 = (s32) 0x520000U;
    a1 = (*(volatile s32 *) (u32) (a0 + 728));
    a0 = (s32) ((u32) a1 + 0x3e4cU);
    (*(volatile u32 *) (u32) (a1 + 216)) = (u32) a0;
    v1 = (*(volatile s32 *) (u32) (v1 + 728));
    (*(volatile u32 *) (u32) (v1 + 220)) = (u32) 0;
L_0019D970:;
    return v0;
}
