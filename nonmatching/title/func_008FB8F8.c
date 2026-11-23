/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_008FAA78(s32, s32, s32, s32);
s32 func_008FB4D0(s32);
s32 func_008FC038(s32, s32, s32, s32, s32, s32, s32, s32);
void func_008FCB88(s32, s32, s32, s32, s32, s32, s32, s32);
void func_008FCC48(s32, s32, s32, s32, s32, s32, s32, s32);

void func_008FB8F8(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13, f32 fa14, f32 fa15, f32 fa16, f32 fa17, f32 fa18, f32 fa19) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
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
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    v0 = -1;
    s3 = 0;
    s1 = a0;
    s0 = (*(volatile s32 *) (u32) (s1 + 64));
    { s32 c_ = a2 == v0; (*(volatile u32 *) (u32) (s0 + 304)) = (u32) 0; if (c_) goto L_008FB938; }
    v0 = a1 < a2;
    if (v0 == 0) { v0 = (*(volatile s32 *) (u32) (s0 + 8)); goto L_008FB940; }
L_008FB938:;
    s3 = 1;
    v0 = (*(volatile s32 *) (u32) (s0 + 8));
L_008FB940:;
    { s32 c_ = v0 != 0; a0 = s0; if (c_) goto L_008FB954; }
    (*(volatile u32 *) (u32) (s1 + 8)) = (u32) 0;
    v0 = 1;
    (*(volatile u32 *) (u32) (s0 + 8)) = (u32) v0;
L_008FB954:;
    a1 = 0; v0 = func_008FB4D0(a0);
    if (v0 == 0) { v0 = (*(volatile s32 *) (u32) (s0 + 2168)); goto L_008FB978; }
    if (s3 == 0) { v0 = (*(volatile s32 *) (u32) (s0 + 2168)); goto L_008FB978; }
    a0 = s0; v0 = func_008FC038(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (*(volatile s32 *) (u32) (s0 + 2168));
L_008FB978:;
    { s32 c_ = v0 != 0; v0 = 0; if (c_) goto L_008FBA9C; }
    s2 = 1;
    a0 = s0;
    (*(volatile u32 *) (u32) (s0 + 304)) = (u32) s2; v0 = func_008FAA78(a0, a1, a2, a3);
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) (s0 + 232)); goto L_008FB9AC; }
    a0 = s1; func_008FCB88(a0, a1, a2, a3, a4, a5, a6, a7);
    (*(volatile u32 *) (u32) s0) = (u32) s2;
    v0 = 0; goto L_008FBA9C;
L_008FB9AC:;
    v1 = 2;
    a0 = (*(volatile s32 *) (u32) (s0 + 388));
    v0 = v0 ^ 0x1;
    if (v0 != 0) v1 = s2;
    { s32 c_ = a0 != v1; v0 = -1; if (c_) goto L_008FBA9C; }
    a0 = s0;
    a1 = 1; v0 = func_008FB4D0(a0);
    v1 = 0;
    if (v0 != 0) v1 = s2;
    { s32 c_ = v1 == 0; s4 = 0; if (c_) goto L_008FB9F4; }
    if (s3 == 0) { v0 = (*(volatile s32 *) (u32) (s0 + 2168)); goto L_008FB9F8; }
    a0 = s0; v0 = func_008FC038(a0, a1, a2, a3, a4, a5, a6, a7);
    if (v0 != 0) s4 = s2;
L_008FB9F4:;
    v0 = (*(volatile s32 *) (u32) (s0 + 2168));
L_008FB9F8:;
    { s32 c_ = v0 != 0; v0 = 0; if (c_) goto L_008FBA9C; }
    a1 = (*(volatile s32 *) (u32) (s0 + 296));
    a0 = s0;
    a2 = (*(volatile s32 *) (u32) (s0 + 4)); func_008FCC48(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (*(volatile s32 *) (u32) (s0 + 296));
    v1 = (*(volatile s32 *) (u32) (s0 + 192));
    (*(volatile u32 *) (u32) (s0 + 304)) = (u32) 0;
    v0 = (s32) ((u32) v0 - (u32) v1);
    (*(volatile u32 *) (u32) (s1 + 8)) = (u32) v0;
    v1 = (*(volatile s32 *) (u32) (s0 + 296));
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    v1 = (s32) ((u32) v1 + 0x1U);
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (s0 + 296)) = (u32) v1;
    { s32 c_ = s3 != 0; (*(volatile u32 *) (u32) (s0 + 4)) = (u32) v0; if (c_) goto L_008FBA98; }
    v0 = 1;
    { s32 c_ = s1 == 0; (*(volatile u32 *) (u32) sp) = (u32) v0; if (c_) goto L_008FBA98; }
    a2 = (*(volatile s32 *) (u32) (s1 + 64));
    { s32 c_ = a2 == 0; v0 = s4; if (c_) goto L_008FBA9C; }
    a3 = (*(volatile s32 *) (u32) (a2 + 24));
    if (a3 == 0) goto L_008FBAA0;
    v0 = (*(volatile s32 *) (u32) (a2 + 32));
    s0 = gp;
    gp = v0;
    v1 = (*(volatile s32 *) (u32) sp);
    v0 = 12;
    a0 = s1;
    a1 = sp;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); a4 = lo; }
    v1 = (s32) ((u32) a4 + (u32) a2);
    { u32 t_ = (u32) a3; a2 = (*(volatile s32 *) (u32) (v1 + 16)); v0 = ((s64 (*)(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32, f32, f32, f32, f32, f32, f32)) t_)(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f); }
    v1 = gp;
    gp = s0;
L_008FBA98:;
    v0 = s4;
L_008FBA9C:;
L_008FBAA0:;
    return;
}
