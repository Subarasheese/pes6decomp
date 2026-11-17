/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_009B3500(s32, s32, s32, s32);
s32 func_00A9BA00(s32);
s32 func_00AA32C0(s32);

s32 func_00A3A160(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s32 fcc = 0;
    s64 frame[22];
    s32 sp = (s32) (u32) frame;

    s5 = a0;
    s4 = a1;
    s3 = a2;
    a2 = (s32) 0xca0000U;
    a2 = (s32) ((u32) a2 + 0xffffa538U);
    a1 = (s32) ((u32) sp + 0xa0U);
    a0 = 3;
L_00A3A1A4:;
    v1 = (*(volatile s16 *) (u32) a2);
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    v0 = (*(volatile s16 *) (u32) (a2 + 2));
    (*(volatile u16 *) (u32) a1) = (u16) v1;
    (*(volatile u16 *) (u32) (a1 + 2)) = (u16) v0;
    a2 = (s32) ((u32) a2 + 0x4U);
    { s32 c_ = a0 > 0; a1 = (s32) ((u32) a1 + 0x4U); if (c_) goto L_00A3A1A4; }
    a2 = (s32) 0xca0000U;
    a1 = (s32) ((u32) sp + 0x90U);
    a2 = (s32) ((u32) a2 + 0xffffa548U);
    a0 = 3;
L_00A3A1D4:;
    v1 = (*(volatile s16 *) (u32) a2);
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    v0 = (*(volatile s16 *) (u32) (a2 + 2));
    (*(volatile u16 *) (u32) a1) = (u16) v1;
    (*(volatile u16 *) (u32) (a1 + 2)) = (u16) v0;
    a2 = (s32) ((u32) a2 + 0x4U);
    { s32 c_ = a0 > 0; a1 = (s32) ((u32) a1 + 0x4U); if (c_) goto L_00A3A1D4; }
    a0 = s5; v0 = func_00A9BA00(a0);
    s7 = v0;
    a0 = s5; v0 = func_00AA32C0(a0);
    s2 = 0;
    s1 = 255;
L_00A3A210:;
    at = s4 < -63;
    if (at != 0) { at = (s32) 0x640000U; goto L_00A3A224; }
    s1 = 5; goto L_00A3A300;
L_00A3A224:;
    at = at | 0x1;
    at = s7 < at;
    if (at != 0) goto L_00A3A24C;
    if (s3 != 0) goto L_00A3A24C;
    v0 = (s32) ((u32) s2 << 1);
    v0 = (s32) ((u32) v0 + (u32) sp);
    s0 = (*(volatile u16 *) (u32) (v0 + 160)); goto L_00A3A25C;
L_00A3A24C:;
    v0 = (s32) ((u32) s2 << 1);
    s3 = 1;
    v0 = (s32) ((u32) v0 + (u32) sp);
    s0 = (*(volatile u16 *) (u32) (v0 + 144));
L_00A3A25C:;
    if (s3 != 0) goto L_00A3A290;
    v0 = s2 < 4;
    if (v0 != 0) goto L_00A3A290;
    a0 = s5; v0 = func_00A9BA00(a0);
    at = (s32) 0x1000000U;
    at = at | 0x1;
    at = v0 < at;
    if (at != 0) goto L_00A3A290;
    s2 = 5;
L_00A3A290:;
    a0 = s5;
    a1 = s0;
    a2 = 0; func_009B3500(a0, a1, a2, a3);
    v1 = s0 & 0xffff;
    v0 = 906;
    if (v1 == v0) { a0 = s5; goto L_00A3A324; }
L_00A3A2B0:;
    v0 = (s32) 0x590000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 7792));
    f0.i = (s32) f0.f;
    v0 = f0.i;
    v1 = (s32) ((u32) v0 - (u32) s4);
    if (v1 <= 0) { v1 = (s32) ((u32) 0 - (u32) v1); goto L_00A3A2D0; }
L_00A3A2D0:;
    v0 = 255;
    if (s1 == v0) goto L_00A3A2E8;
    at = v1 < s6;
    if (at == 0) goto L_00A3A2F0;
L_00A3A2E8:;
    s6 = v1;
    s1 = s2;
L_00A3A2F0:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 5;
    if (v0 != 0) goto L_00A3A210;
L_00A3A300:;
    if (s3 == 0) { v0 = (s32) ((u32) s1 << 1); goto L_00A3A318; }
    v0 = (s32) ((u32) s1 << 1);
    v0 = (s32) ((u32) v0 + (u32) sp);
    v0 = (*(volatile u16 *) (u32) (v0 + 144)); goto L_00A3A374;
L_00A3A318:;
    v0 = (s32) ((u32) v0 + (u32) sp);
    v0 = (*(volatile u16 *) (u32) (v0 + 160)); goto L_00A3A374;
L_00A3A324:;
    v0 = func_00A9BA00(a0);
    at = (s32) 0x400000U;
    at = at | 0x1;
    at = v0 < at;
    if (at != 0) goto L_00A3A2B0;
    f0.i = (s32) s4;
    v0 = (s32) 0x41e00000U;
    f1.i = (s32) v0;
    f2.f = (f32) f0.i;
    v0 = (s32) 0x590000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 7792));
    f0.f = f1.f + f0.f;
    fcc = f2.f <= f0.f;
    if (!fcc) goto L_00A3A2F0;
    goto L_00A3A2B0;
L_00A3A374:;
    return v0;
}
