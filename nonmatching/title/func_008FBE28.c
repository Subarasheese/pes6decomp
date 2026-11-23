/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_008FBE28(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13, f32 fa14, f32 fa15, f32 fa16, f32 fa17, f32 fa18, f32 fa19) {
    s32 v0 = 0, v1 = 0, s0 = 0;
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
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    v0 = 1;
    { s32 c_ = a0 == 0; (*(volatile u32 *) (u32) sp) = (u32) v0; if (c_) goto L_008FBE88; }
    a2 = (*(volatile s32 *) (u32) (a0 + 64));
    if (a2 == 0) goto L_008FBE90;
    a3 = (*(volatile s32 *) (u32) (a2 + 24));
    if (a3 == 0) goto L_008FBE94;
    v0 = (*(volatile s32 *) (u32) (a2 + 32));
    s0 = gp;
    gp = v0;
    v1 = (*(volatile s32 *) (u32) sp);
    v0 = 12;
    a1 = sp;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); a4 = lo; }
    v1 = (s32) ((u32) a4 + (u32) a2);
    { u32 t_ = (u32) a3; a2 = (*(volatile s32 *) (u32) (v1 + 16)); v0 = ((s64 (*)(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32, f32, f32, f32, f32, f32, f32)) t_)(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f); }
    v1 = gp;
    gp = s0;
L_008FBE88:;
    v0 = 1;
L_008FBE90:;
L_008FBE94:;
    return;
}
