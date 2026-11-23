/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_008FB4D0(s32);
s32 func_008FC038(s32, s32, s32, s32, s32, s32, s32, s32);
void func_008FCC48(s32, s32, s32, s32, s32, s32, s32, s32);

void func_008FB788(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13, f32 fa14, f32 fa15, f32 fa16, f32 fa17, f32 fa18, f32 fa19) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f16 = { fa16 };
    volatile union { f32 f; s32 i; } f17 = { fa17 };
    volatile union { f32 f; s32 i; } f18 = { fa18 };
    volatile union { f32 f; s32 i; } f19 = { fa19 };
    s32 hi = 0, lo = 0;
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    v0 = -1;
    s2 = a0;
    s0 = 0;
    { s32 c_ = a2 == v0; s1 = (*(volatile s32 *) (u32) (s2 + 64)); if (c_) goto L_008FB7C0; }
    v0 = a1 < a2;
    { s32 c_ = v0 == 0; a0 = s1; if (c_) goto L_008FB7FC; }
L_008FB7C0:;
    v0 = (*(volatile s32 *) (u32) (s1 + 8));
    { s32 c_ = v0 != 0; a0 = s1; if (c_) goto L_008FB7D8; }
    (*(volatile u32 *) (u32) (s2 + 8)) = (u32) 0;
    v0 = 1;
    (*(volatile u32 *) (u32) (s1 + 8)) = (u32) v0;
L_008FB7D8:;
    a1 = 0; v0 = func_008FB4D0(a0);
    { s32 c_ = v0 == 0; v1 = 0; if (c_) goto L_008FB7F4; }
    a0 = s1; v0 = func_008FC038(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = (u64) 0 < (u64) v0;
L_008FB7F4:;
    s3 = v1; goto L_008FB864;
L_008FB7FC:;
    a1 = 0; v0 = func_008FB4D0(a0);
    v1 = 1;
    s3 = v0;
    { s32 c_ = s2 == 0; (*(volatile u32 *) (u32) sp) = (u32) v1; if (c_) goto L_008FB860; }
    a2 = (*(volatile s32 *) (u32) (s2 + 64));
    { s32 c_ = a2 == 0; s0 = 1; if (c_) goto L_008FB864; }
    a3 = (*(volatile s32 *) (u32) (a2 + 24));
    if (a3 == 0) { v0 = (*(volatile s32 *) (u32) (s1 + 2168)); goto L_008FB868; }
    v0 = (*(volatile s32 *) (u32) (a2 + 32));
    s0 = gp;
    gp = v0;
    v1 = (*(volatile s32 *) (u32) sp);
    v0 = 12;
    a0 = s2;
    a1 = sp;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); a4 = lo; }
    v1 = (s32) ((u32) a4 + (u32) a2);
    { u32 t_ = (u32) a3; a2 = (*(volatile s32 *) (u32) (v1 + 16)); v0 = ((s64 (*)(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32, f32, f32, f32, f32, f32, f32)) t_)(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f); }
    v1 = gp;
    gp = s0;
L_008FB860:;
    s0 = 1;
L_008FB864:;
    v0 = (*(volatile s32 *) (u32) (s1 + 2168));
L_008FB868:;
    { s32 c_ = v0 != 0; v0 = 0; if (c_) goto L_008FB8DC; }
    a1 = (*(volatile s32 *) (u32) (s1 + 296));
    a0 = s1;
    a2 = (*(volatile s32 *) (u32) (s1 + 4)); func_008FCC48(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = (*(volatile s32 *) (u32) (s1 + 388));
    v0 = 3;
    if (v1 == v0) { v1 = (*(volatile s32 *) (u32) (s1 + 192)); goto L_008FB8A8; }
    if (s0 != 0) { v1 = (*(volatile s32 *) (u32) (s1 + 192)); goto L_008FB8A8; }
    v0 = (*(volatile s32 *) (u32) (s1 + 304));
    v0 = (u64) v0 < (u64) (s64) 1;
    (*(volatile u32 *) (u32) (s1 + 304)) = (u32) v0;
    v1 = (*(volatile s32 *) (u32) (s1 + 192));
L_008FB8A8:;
    v0 = (*(volatile s32 *) (u32) (s1 + 296));
    v0 = (s32) ((u32) v0 - (u32) v1);
    (*(volatile u32 *) (u32) (s2 + 8)) = (u32) v0;
    v1 = (*(volatile s32 *) (u32) (s1 + 304));
    { s32 c_ = v1 != 0; v0 = s3; if (c_) goto L_008FB8DC; }
    v0 = (*(volatile s32 *) (u32) (s1 + 296));
    v1 = (*(volatile s32 *) (u32) (s1 + 4));
    v0 = (s32) ((u32) v0 + 0x1U);
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (s1 + 296)) = (u32) v0;
    (*(volatile u32 *) (u32) (s1 + 4)) = (u32) v1;
    v0 = s3;
L_008FB8DC:;
    return;
}
