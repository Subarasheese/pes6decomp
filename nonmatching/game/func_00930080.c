/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00208310(s32);
s32 func_00208330(s32);
s32 func_009F4DC0(s32, f32);
s32 func_00A08020(s32, s32, s32, s32);

s32 func_00930080(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s32 fcc = 0;

    s2 = a1;
    s1 = a2;
    a0 = s2;
    f21.i = f12.i;
    f20.i = f13.i; v0 = func_00208330(a0);
    v1 = s2 & 0xffff;
    at = v1 < 1434;
    { s32 c_ = at == 0; s0 = v0; if (c_) goto L_00930194; }
    v0 = 382;
    if (v1 == v0) goto L_00930134;
    v0 = 753;
    if (v1 == v0) goto L_00930134;
    v0 = 8;
    if (v1 == v0) goto L_00930134;
    v0 = 728;
    if (v1 == v0) goto L_00930134;
    v0 = 915;
    if (v1 == v0) goto L_00930134;
    v0 = 706;
    if (v1 == v0) goto L_00930134;
    v0 = 460;
    if (v1 == v0) { v0 = (s32) ((u32) v1 << 2); goto L_00930120; }
    a0 = s2 & 0xffff; goto L_00930140;
L_00930120:;
    v1 = (*(volatile s32 *) (u32) (gp + -32420));
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) (v0 + 12248));
    s1 = (s32) ((u32) v0 + 0xfffffffeU); goto L_00930150;
L_00930134:;
    if (s1 != 0) goto L_00930150;
    a0 = s2 & 0xffff;
L_00930140:;
    v0 = func_00208310(a0);
    v0 = (*(volatile u16 *) (u32) (v0 + 8));
    s1 = (s32) ((u32) v0 << 1);
L_00930150:;
    a0 = s2; v0 = func_00A08020(a0, a1, a2, a3);
    if (v0 != 0) goto L_00930194;
    f0.i = (s32) s1;
    v1 = 256;
    v0 = (s32) 0x590000U;
    f0.f = (f32) f0.i;
    (*(volatile u32 *) (u32) (v0 + 8800)) = (u32) v1;
    f0.f = f0.f - f21.f;
    f0.i = (s32) f0.f;
    a0 = f0.i;
    f12.i = f20.i; v0 = func_009F4DC0(a0, f12.f);
    v0 = (s32) ((u32) v0 << 8);
    v0 = (s32) ((u32) v0 + 0x100U); goto L_00930220;
L_00930194:;
    f0.i = (s32) s1;
    v1 = (s32) 0x40000000U;
    v0 = 0;
    a1 = 0;
    f1.f = (f32) f0.i;
    f0.i = (s32) v1;
    f0.f = f20.f / f0.f;
    f1.f = f1.f + f0.f;
    fcc = f21.f <= f1.f;
    if (!fcc) goto L_00930218;
L_009301C8:;
    f0.i = (s32) f21.f;
    a0 = f0.i;
    { s32 c_ = a0 >= 0; v1 = (s32) a0 >> 1; if (c_) goto L_009301E4; }
    v1 = (s32) ((u32) a0 + 0x1U);
    v1 = (s32) v1 >> 1;
L_009301E4:;
    v1 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) s0 + (u32) v1);
    v1 = (*(volatile u8 *) (u32) (v1 + 1));
    v1 = (s32) ((u32) v1 + 0x1U);
    at = a1 < v1;
    { s32 c_ = at == 0; v0 = (s32) ((u32) v0 + (u32) v1); if (c_) goto L_00930208; }
    a1 = v1;
L_00930208:;
    f21.f = f21.f + f20.f;
    fcc = f21.f <= f1.f;
    if (fcc) goto L_009301C8;
L_00930218:;
    v1 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v1 + 8800)) = (u32) a1;
L_00930220:;
    return v0;
}
