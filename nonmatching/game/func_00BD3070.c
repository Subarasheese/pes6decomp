/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_009B3070(s32, s32);
s32 func_00BBB8C0(s32);
s32 func_00BD3240(s32, s32);
s32 func_00BD3320(s32, s32);
s32 func_00BD33F0(s32);
s32 func_00BD34E0(s32);
s32 func_00BD3800(s32, s32);

s32 func_00BD3070(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;

    s2 = a0;
    v1 = (*(volatile s32 *) (u32) (a0 + 4));
    v0 = (*(volatile s32 *) (u32) v1);
    v0 = v0 & 0x40;
    { s32 c_ = v0 == 0; s0 = 0; if (c_) goto L_00BD30E0; }
    a2 = (*(volatile s32 *) (u32) s2);
    v0 = (*(volatile u8 *) (u32) (v1 + 12));
    a0 = (*(volatile u8 *) (u32) (a2 + 19));
    at = v0 < 4;
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 + (u32) a2);
    v1 = (*(volatile u8 *) (u32) (v1 + 436));
    v1 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) v1 + (u32) a2);
    a1 = (*(volatile u16 *) (u32) (v1 + 296));
    { s32 c_ = at == 0; a3 = 0; if (c_) goto L_00BD3180; }
L_00BD30D8:;
    s0 = a3 & 0xffff; goto L_00BD3178;
L_00BD30E0:;
    v1 = (*(volatile u8 *) (u32) (v1 + 83));
    v0 = 4;
    if (v1 == v0) goto L_00BD314C;
    v0 = 2;
    if (v1 == v0) goto L_00BD313C;
    v0 = 3;
    if (v1 == v0) goto L_00BD312C;
    v0 = 1;
    if (v1 == v0) goto L_00BD311C;
    goto L_00BD3158;
L_00BD311C:;
    v0 = func_00BD34E0(a0);
    s0 = v0 & 0xffff; goto L_00BD3158;
L_00BD312C:;
    v0 = func_00BD33F0(a0);
    s0 = v0 & 0xffff; goto L_00BD3158;
L_00BD313C:;
    v0 = func_00BD3320(a0, a1);
    s0 = v0 & 0xffff; goto L_00BD3158;
L_00BD314C:;
    v0 = func_00BD3240(a0, a1);
    s0 = v0 & 0xffff;
L_00BD3158:;
    if (s0 == 0) goto L_00BD3178;
    a0 = s2;
    a1 = s0; v0 = func_00BD3800(a0, a1);
    if (v0 != 0) goto L_00BD3178;
    s0 = 0;
L_00BD3178:;
    v0 = s0; goto L_00BD321C;
L_00BD3180:;
    a0 = (*(volatile u16 *) (u32) (a2 + 40)); v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_00BD31A0; }
    f0.i = (s32) v0;
    f1.f = (f32) f0.i; goto L_00BD31B8;
L_00BD31A0:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f1.f = (f32) f0.i;
    f1.f = f1.f + f1.f;
L_00BD31B8:;
    v0 = (s32) 0x469c0000U;
    v0 = v0 | 0x71c7;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) { s0 = (s32) ((u32) gp + 0xffff86d8U); goto L_00BD31E0; }
    s0 = (s32) ((u32) gp + 0xffff86d4U);
    s1 = 1; goto L_00BD31E4;
L_00BD31E0:;
    s1 = 2;
L_00BD31E4:;
    a0 = s1; v0 = func_00BBB8C0(a0);
    v0 = (s32) ((u32) v0 << 1);
    at = s1 < 2;
    v0 = (s32) ((u32) s0 + (u32) v0);
    { s32 c_ = at != 0; a3 = (*(volatile u16 *) (u32) v0); if (c_) goto L_00BD30D8; }
    v0 = (*(volatile s32 *) (u32) (s2 + 4));
    v1 = a3 & 0xffff;
    v0 = (*(volatile u16 *) (u32) (v0 + 8));
    if (v1 == v0) goto L_00BD31E4;
    goto L_00BD30D8;
L_00BD321C:;
    return v0;
}
