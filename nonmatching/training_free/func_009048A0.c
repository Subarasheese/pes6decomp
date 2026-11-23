/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00AFBAB0(s64, s64, s64, s64);
s64 func_00BDB8B0(s64, s64, s64, s64);

s64 func_009048A0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;

    s3 = a0;
    s0 = a1;
    v0 = s0 & 0xff;
    v0 = v0 < 16;
    { s32 c_ = v0 != 0; s1 = 0; if (c_) goto L_009048DC; }
    s0 = s0 & 0xf;
    s1 = 1;
L_009048DC:;
    a0 = (*(volatile u8 *) (u32) s3);
    s2 = 0; v0 = func_00AFBAB0(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = 255;
    if (v1 == v0) { v1 = 1; goto L_00904910; }
    a0 = (*(volatile u8 *) (u32) s3); v0 = func_00AFBAB0(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v1 = hi;
L_00904910:;
    v0 = (s32) ((u32) v1 << 3);
    s0 = s0 & 0xff;
    v1 = (s32) ((u32) v0 + (u32) v1);
    s3 = 0;
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    s4 = (s32) ((u32) v0 + (u32) v1);
L_00904930:;
    a0 = s4; v0 = func_00BDB8B0(a0, a1, a2, a3);
    if (v0 == 0) goto L_00904AB0;
    v0 = (*(volatile u8 *) (u32) (s4 + 477));
    v1 = 6;
    if (v0 == v1) goto L_00904A48;
    v1 = 2;
    if (v0 == v1) goto L_00904A48;
    v1 = 1;
    if (v0 == v1) goto L_00904A48;
    v1 = 32;
    if (v0 == v1) goto L_00904A48;
    v1 = 18;
    if (v0 == v1) goto L_00904A48;
    v1 = 20;
    if (v0 == v1) goto L_00904A48;
    v1 = 28;
    if (v0 == v1) goto L_00904A48;
    v1 = 19;
    if (v0 == v1) goto L_00904A48;
    v1 = 26;
    if (v0 == v1) goto L_00904A48;
    v1 = 25;
    if (v0 == v1) goto L_00904A48;
    v1 = 24;
    if (v0 == v1) goto L_00904A48;
    v1 = 23;
    if (v0 == v1) goto L_00904A48;
    v1 = 22;
    if (v0 == v1) goto L_00904A48;
    v1 = 17;
    if (v0 == v1) goto L_00904A48;
    v1 = 16;
    if (v0 == v1) goto L_00904A48;
    v1 = 15;
    if (v0 == v1) goto L_00904A48;
    v1 = 13;
    if (v0 == v1) goto L_00904A48;
    v1 = 11;
    if (v0 == v1) goto L_00904A40;
    v1 = 10;
    if (v0 == v1) goto L_00904A40;
    v1 = 9;
    if (v0 == v1) goto L_00904A40;
    goto L_00904A50;
L_00904A40:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_00904A58;
L_00904A48:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 2); goto L_00904A58;
L_00904A50:;
    v0 = 0;
L_00904A58:;
    v0 = v0 & 0xff;
    if (s0 != v0) goto L_00904AB0;
    if (s1 == 0) goto L_00904AA8;
    a0 = (*(volatile s16 *) (u32) (s4 + 20));
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s4 + 19));
    v0 = (s32) ((u32) v0 + 0x1e00U);
    f0.f = (*(volatile f32 *) (u32) (s4 + 224));
    f1.i = (s32) a0;
    v1 = (s32) ((u32) v1 << 2);
    f2.f = (f32) f1.i;
    v0 = (s32) ((u32) v0 + (u32) v1);
    f1.f = (*(volatile f32 *) (u32) (v0 + 136));
    f0.f = f0.f * f2.f;
    f1.f = f1.f * f2.f;
    fcc = f0.f < f1.f;
    if (fcc) goto L_00904AB0;
L_00904AA8:;
    s2 = (s32) ((u32) s2 + 0x1U);
L_00904AB0:;
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < 11;
    { s32 c_ = v0 != 0; s4 = (s32) ((u32) s4 + 0x240U); if (c_) goto L_00904930; }
    v0 = s2 & 0xff;
    return v0;
}
