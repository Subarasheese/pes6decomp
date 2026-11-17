/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00AFBA70(s64);
s64 func_00AFBAB0(s64);
s64 func_00BDB8B0(s64);

s64 func_00C5E460(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;
    s64 frame[20];
    s64 sp = (s32) (u32) frame;

    s6 = 0;
    s5 = a0;
    s1 = 0;
    a0 = (*(volatile u8 *) (u32) a0);
    (*(volatile u8 *) (u32) (sp + 156)) = (u8) 0;
    (*(volatile u8 *) (u32) (sp + 157)) = (u8) 0;
    (*(volatile u8 *) (u32) (sp + 158)) = (u8) 0; v0 = func_00AFBA70(a0);
    v1 = v0 & 0xff;
    v0 = 255;
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v1 == v0) { a0 = 1; goto L_00C5E4CC; }
    a0 = (*(volatile u8 *) (u32) s5); v0 = func_00AFBA70(a0);
    v0 = v0 & 0xff;
    a0 = (s32) ((u32) v0 + 0x1U);
L_00C5E4CC:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s7 = 0;
    s4 = (s32) ((u32) v0 + (u32) v1);
L_00C5E4E8:;
    a0 = s4; v0 = func_00BDB8B0(a0);
    if (v0 == 0) goto L_00C5E608;
    v1 = (*(volatile u8 *) (u32) (s4 + 19));
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e00U);
    f0.f = (*(volatile f32 *) (u32) (s4 + 224));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    f1.f = (*(volatile f32 *) (u32) (v0 + 128));
    f0.f = f0.f - f1.f;
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x45400000U;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (!fcc) goto L_00C5E608;
    v0 = s6 & 0xff;
    at = v0 < 3;
    if (at == 0) goto L_00C5E61C;
    a0 = (*(volatile u8 *) (u32) s5);
    s0 = (s64) ((u64) 0 + (u64) (s64) 1); v0 = func_00AFBAB0(a0);
    v1 = v0 & 0xff;
    v0 = 255;
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v1 == v0) { a0 = 1; goto L_00C5E574; }
    a0 = (*(volatile u8 *) (u32) s5); v0 = func_00AFBAB0(a0);
    v0 = v0 & 0xff;
    a0 = (s32) ((u32) v0 + 0x1U);
L_00C5E574:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s2 = 0;
    s3 = (s32) ((u32) v0 + (u32) v1);
L_00C5E590:;
    a0 = s3; v0 = func_00BDB8B0(a0);
    if (v0 == 0) goto L_00C5E5D0;
    if (s5 == s3) goto L_00C5E5D0;
    v1 = (*(volatile u8 *) (u32) (s3 + 477));
    v0 = 27;
    if (v1 != v0) goto L_00C5E5D0;
    v1 = (*(volatile s32 *) (u32) (s3 + 480));
    v0 = (*(volatile u8 *) (u32) s4);
    if (v1 != v0) goto L_00C5E5D0;
    s0 = 0; goto L_00C5E5E8;
L_00C5E5D0:;
    v0 = (s32) ((u32) s2 + 0x1U);
    s2 = v0 & 0xff;
    v0 = s2 < 10;
    { s32 c_ = v0 != 0; s3 = (s32) ((u32) s3 + 0x240U); if (c_) goto L_00C5E590; }
L_00C5E5E8:;
    if (s0 == 0) goto L_00C5E608;
    a0 = (*(volatile u8 *) (u32) s4);
    v0 = s6 & 0xff;
    v1 = (s32) ((u32) v0 + (u32) sp);
    v0 = (s32) ((u32) s6 + 0x1U);
    s6 = v0 & 0xff;
    (*(volatile u8 *) (u32) (v1 + 156)) = (u8) a0;
L_00C5E608:;
    v0 = (s32) ((u32) s7 + 0x1U);
    s7 = v0 & 0xff;
    v0 = s7 < 10;
    { s32 c_ = v0 != 0; s4 = (s32) ((u32) s4 + 0x240U); if (c_) goto L_00C5E4E8; }
L_00C5E61C:;
    a0 = (*(volatile u8 *) (u32) s5); v0 = func_00AFBAB0(a0);
    v1 = v0 & 0xff;
    v0 = 255;
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v1 == v0) { a0 = 1; goto L_00C5E648; }
    a0 = (*(volatile u8 *) (u32) s5); v0 = func_00AFBAB0(a0);
    v0 = v0 & 0xff;
    a0 = (s32) ((u32) v0 + 0x1U);
L_00C5E648:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s2 = 0;
    s0 = (s32) ((u32) v0 + (u32) v1);
L_00C5E664:;
    a0 = s0; v0 = func_00BDB8B0(a0);
    if (v0 != 0) { v0 = s1 & 0xff; goto L_00C5E728; }
L_00C5E678:;
    v0 = (s32) ((u32) s2 + 0x1U);
    s2 = v0 & 0xff;
    v0 = s2 < 10;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x240U); if (c_) goto L_00C5E664; }
L_00C5E690:;
    v0 = 0;
    a5 = 0;
    v1 = (s32) 0x44800000U;
    a0 = (s32) 0x590000U;
    f0.i = (s32) v1;
    a4 = 255;
    a1 = 1;
    a3 = 23;
    a0 = (s32) ((u32) a0 + 0xffffe5b0U);
L_00C5E6B4:;
    v1 = a5 & 0xff;
    v1 = (s32) ((u32) v1 + (u32) sp);
    v1 = (*(volatile u8 *) (u32) (v1 + 156));
    if (v1 == 0) goto L_00C5E70C;
    if (v1 == a4) { a2 = a1; goto L_00C5E6D8; }
    if ((s32) a3 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) a3); hi = (s32) ((s32) v1 % (s32) a3); lo = q_; }
    a2 = hi;
L_00C5E6D8:;
    v1 = (s32) ((u32) a2 << 3);
    v1 = (s32) ((u32) v1 + (u32) a2);
    v1 = (s32) ((u32) v1 << 6);
    v1 = (s32) ((u32) a0 + (u32) v1);
    f2.f = (*(volatile f32 *) (u32) (s5 + 232));
    f1.f = (*(volatile f32 *) (u32) (v1 + 232));
    f1.f = f2.f - f1.f;
    f1.i = f1.i & 0x7FFFFFFF;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00C5E70C;
    v0 = (*(volatile u8 *) (u32) v1); goto L_00C5E720;
L_00C5E70C:;
    v1 = (s32) ((u32) a5 + 0x1U);
    a5 = v1 & 0xff;
    v1 = a5 < 3;
    if (v1 != 0) goto L_00C5E6B4;
L_00C5E720:;
    goto L_00C5E750;
L_00C5E728:;
    at = v0 < 3;
    if (at == 0) goto L_00C5E690;
    v1 = (*(volatile u8 *) (u32) (s0 + 477));
    v0 = 27;
    if (v1 != v0) goto L_00C5E678;
    v0 = (s32) ((u32) s1 + 0x1U);
    s1 = v0 & 0xff; goto L_00C5E678;
L_00C5E750:;
    return v0;
}
