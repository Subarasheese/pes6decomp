/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_002AE670(s64);
s64 func_009B33A0(s64, s64, s64);
void func_009B3500(s64, s64, s64, s64);
s64 func_009F42B0(s64, s64);

s64 func_00C46E20(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s32 fcc = 0;
    s64 frame[18];
    s64 sp = (s32) (u32) frame;

    v1 = 5;
    s4 = a0;
    s3 = a1;
    a1 = (s32) 0xcb0000U;
    a1 = (s32) ((u32) a1 + 0xffff8110U);
    a0 = (s32) ((u32) sp + 0x80U);
L_00C46E5C:;
    v0 = (*(volatile s16 *) (u32) a1);
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    (*(volatile u16 *) (u32) a0) = (u16) v0;
    a1 = (s32) ((u32) a1 + 0x2U);
    a0 = (s32) ((u32) a0 + 0x2U);
    if (v1 > 0) goto L_00C46E5C;
    s2 = 0;
    s1 = 255;
    s0 = (s32) ((u32) sp + 0x80U);
L_00C46E84:;
    a1 = (*(volatile u16 *) (u32) s0);
    a0 = s4;
    a2 = 0; func_009B3500(a0, a1, a2, a3);
    v0 = (s32) 0x590000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 7792));
    f0.i = (s32) f0.f;
    v0 = f0.i;
    v1 = (s32) ((u32) v0 - (u32) s3);
    if (v1 <= 0) { v1 = (s32) ((u32) 0 - (u32) v1); goto L_00C46EB4; }
L_00C46EB4:;
    v0 = 255;
    if (s1 == v0) goto L_00C46ECC;
    at = v1 < s5;
    if (at == 0) goto L_00C46ED4;
L_00C46ECC:;
    s5 = v1;
    s1 = s2;
L_00C46ED4:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 5;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x2U); if (c_) goto L_00C46E84; }
    v0 = (s32) ((u32) s1 << 1);
    v0 = (s32) ((u32) v0 + (u32) sp);
    s1 = (*(volatile u16 *) (u32) (v0 + 128));
    a0 = 18; v0 = func_002AE670(a0);
    v1 = (s32) ((u32) v0 << 2);
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (s32) ((u32) v1 + (u32) v0);
    f0.f = (*(volatile f32 *) (u32) (v0 + 1148));
    f0.i = (s32) f0.f;
    s0 = f0.i;
    a0 = 18; v0 = func_002AE670(a0);
    v1 = (s32) ((u32) v0 << 2);
    a1 = s0;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (s32) ((u32) v1 + (u32) v0);
    f0.f = (*(volatile f32 *) (u32) (v0 + 2940));
    f0.i = (s32) f0.f;
    a2 = f0.i;
    a0 = s4; v0 = func_009B33A0(a0, a1, a2);
    s0 = v0;
    v1 = s1 & 0xffff;
    v0 = 618;
    if (v1 == v0) { a0 = 18; goto L_00C46F5C; }
L_00C46F50:;
    (*(volatile u16 *) (u32) (s4 + 56)) = (u16) 0;
    v0 = s1; goto L_00C46FB4;
L_00C46F5C:;
    v0 = func_002AE670(a0);
    v1 = (s32) ((u32) v0 << 2);
    a0 = s4;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (s32) ((u32) v1 + (u32) v0);
    f20.f = (*(volatile f32 *) (u32) (v0 + 2044));
    a1 = -496; v0 = func_009F42B0(a0, a1);
    f0.i = (s32) v0;
    f0.f = (f32) f0.i;
    fcc = f20.f <= f0.f;
    if (fcc) goto L_00C46F50;
    at = (s32) 0x90000U;
    at = at | 0x1;
    at = s0 < at;
    if (at != 0) goto L_00C46F50;
    s1 = (s64) ((u64) 0 + (u64) (s64) 619); goto L_00C46F50;
L_00C46FB4:;
    return v0;
}
