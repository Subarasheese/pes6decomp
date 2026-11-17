/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0017B0F0(s32, s32);
s32 func_0017BE90(s32, s32, s32, s32);
s32 func_0017C2C0(s32, s32, s32, s32);
s32 func_0017C3B0(s32, s32, s32, s32);
s32 func_0017C500(s32, s32, s32, s32, s32);
s32 func_0017C740(s32, s32, s32, s32, f32, f32);
s32 func_0017C8E0(s32, s32, s32, s32, s32, f32);
s32 func_001AAF30(s32, s32, s32);
s32 func_001AAF40(s32, s32);
s32 func_001AB820(s32, s32, s32, s32);
s32 func_001AFD70(s32);

s32 func_001AB650(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s32 gp = 0x3ef370;
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };

    v0 = 2;
    a2 = (*(volatile s32 *) (u32) (a0 + 12));
    a1 = (*(volatile s32 *) (u32) (gp + -32112));
    v1 = (*(volatile u8 *) (u32) (a0 + 1));
    a2 = (s32) ((u32) a2 << 2);
    a1 = (s32) ((u32) a1 + (u32) a2);
    s2 = (*(volatile s32 *) (u32) a1);
    { s32 c_ = v1 == v0; s1 = a0; if (c_) goto L_001AB7C0; }
    a0 = (*(volatile s32 *) (u32) (s1 + 16));
    if (a0 == 0) goto L_001AB6A4;
    v0 = func_0017C3B0(a0, a1, a2, a3);
L_001AB6A4:;
    a1 = (*(volatile u8 *) (u32) (s2 + 1));
    a2 = (*(volatile u8 *) (u32) (s2 + 2));
    a3 = (*(volatile u8 *) (u32) (s2 + 3));
    a4 = (*(volatile u8 *) (u32) (s2 + 4));
    a0 = (*(volatile u8 *) (u32) s2); v0 = func_0017C500(a0, a1, a2, a3, a4);
    (*(volatile u32 *) (u32) (s1 + 16)) = (u32) v0;
    a1 = 1;
    s0 = (*(volatile s32 *) (u32) (s1 + 16));
    a0 = s0; v0 = func_0017B0F0(a0, a1);
    v1 = 1;
    v0 = 2;
    (*(volatile u8 *) (u32) s0) = (u8) v1;
    (*(volatile u8 *) (u32) (s1 + 1)) = (u8) v0;
L_001AB6E0:;
    v0 = (s32) ((u32) s1 + 0x80U);
    v1 = (s32) 0x520000U;
    (*(volatile u32 *) (u32) (s0 + 240)) = (u32) v0;
    v1 = (s32) ((u32) v1 + 0x640U);
    a0 = (*(volatile u8 *) (u32) s1);
    v0 = (*(volatile s8 *) (u32) (s0 + 4));
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = 0 < v0;
    s3 = (*(volatile s32 *) (u32) v1);
    { s32 c_ = v0 != 0; s4 = 0; if (c_) goto L_001AB7D0; }
    v0 = (*(volatile s8 *) (u32) (s0 + 3));
L_001AB714:;
    if (v0 == 0) goto L_001AB788;
    a1 = (*(volatile s32 *) (u32) (s2 + 16));
    s3 = (*(volatile s32 *) (u32) (gp + -23212));
    a0 = s0; v0 = func_0017C8E0(a0, a1, a2, a3, a4, f12.f);
    v0 = (*(volatile u16 *) (u32) (s3 + 24));
    f12.i = (s32) 0;
    a0 = s0;
    a1 = (s32) ((u32) s3 + (u32) v0); v0 = func_0017C740(a0, a1, a2, a3, f12.f, f13.f);
    v0 = (*(volatile s8 *) (u32) (s0 + 4));
    at = 0 < v0;
    { s32 c_ = at == 0; s3 = 0; if (c_) goto L_001AB788; }
    s4 = 0;
L_001AB754:;
    v1 = (*(volatile s32 *) (u32) (s0 + 20));
    v0 = (*(volatile s32 *) (u32) (s0 + 12));
    v1 = (s32) ((u32) v1 + (u32) s4);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a1 = (*(volatile s32 *) (u32) (v1 + 4));
    a2 = (*(volatile s32 *) (u32) v1);
    a3 = (s32) ((u32) s1 + 0x80U); v0 = func_0017C2C0(a0, a1, a2, a3);
    v0 = (*(volatile s8 *) (u32) (s0 + 4));
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < v0;
    { s32 c_ = v0 != 0; s4 = (s32) ((u32) s4 + 0x8U); if (c_) goto L_001AB754; }
L_001AB788:;
    a0 = s1;
    a1 = 0;
    a2 = 0; v0 = func_001AAF30(a0, a1, a2);
    a0 = s1;
    a1 = 0; v0 = func_001AAF40(a0, a1);
    a0 = s1; v0 = func_001AFD70(a0);
    v0 = (*(volatile s32 *) (u32) (s2 + 8));
    { u32 t_ = (u32) v0; a0 = s1; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    goto L_001AB7FC;
L_001AB7C0:;
    v0 = func_001AB820(a0, a1, a2, a3);
    s0 = (*(volatile s32 *) (u32) (s1 + 16)); goto L_001AB6E0;
L_001AB7D0:;
    a2 = (*(volatile s32 *) (u32) (s3 + 12));
    a0 = s0;
    a1 = s4; v0 = func_0017BE90(a0, a1, a2, a3);
    v0 = (*(volatile s8 *) (u32) (s0 + 4));
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = s4 < v0;
    { s32 c_ = v0 != 0; s3 = (s32) ((u32) s3 + 0x4U); if (c_) goto L_001AB7D0; }
    v0 = (*(volatile s8 *) (u32) (s0 + 3)); goto L_001AB714;
L_001AB7FC:;
    return v0;
}
