/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00207D10(s64);
s64 func_00207D80(s64, s64);
void func_00209A00(s64, s64, s64);
s64 func_009B33A0(s64, s64, s64);
void func_00B2ACF0(s64, s64, s64, s64);
s64 func_00B35BF0(s64);
s64 func_00B35C60(s64);
void func_00B36400(s64, s64);
s64 func_00B36450(void);
void func_00B364D0(s64);
void func_00B9E2B0(s64, f32, f32);

void func_00BE09D0(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12, f32 fa13) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s64 hi = 0, lo = 0;

    v0 = (s32) 0xcc0000U;
    v1 = 46;
    s5 = a0;
    a3 = (*(volatile s32 *) (u32) a0);
    a1 = (*(volatile s32 *) (u32) (a3 + 4));
    s2 = (*(volatile u8 *) (u32) (a1 + 45));
    a1 = (*(volatile s32 *) (u32) (a1 + 4));
    a2 = (*(volatile u8 *) (u32) (a1 + 1));
    a1 = (*(volatile u8 *) (u32) (a1 + 2));
    (*(volatile u8 *) (u32) (a3 + 78)) = (u8) 0;
    s1 = (s32) ((u32) a1 << 1);
    a1 = (*(volatile u8 *) (u32) (v0 + -13615));
    { s32 c_ = a1 == v1; s0 = (s32) ((u32) a2 << 1); if (c_) goto L_00BE0A6C; }
    v0 = 41;
    if (a1 == v0) goto L_00BE0A58;
    v0 = 40;
    if (a1 == v0) goto L_00BE0A4C;
    v0 = (*(volatile s32 *) (u32) s5); goto L_00BE0A80;
L_00BE0A4C:;
    s4 = (s64) ((u64) 0 + (u64) (s64) 1434);
    s3 = 74; goto L_00BE0A7C;
L_00BE0A58:;
    s4 = (s64) ((u64) 0 + (u64) (s64) 1436); v0 = func_00B35BF0(a0);
    s2 = v0 & 0xff;
    s3 = 54; goto L_00BE0A7C;
L_00BE0A6C:;
    s4 = (s64) ((u64) 0 + (u64) (s64) 1437); v0 = func_00B35C60(a0);
    s2 = v0 & 0xff;
    s3 = 76;
L_00BE0A7C:;
    v0 = (*(volatile s32 *) (u32) s5);
L_00BE0A80:;
    a0 = (*(volatile s32 *) (u32) (v0 + 4)); v0 = func_00207D10(a0);
    if (v0 != 0) goto L_00BE0BC4;
    v1 = (*(volatile s32 *) (u32) s5);
    v0 = 1346;
    v1 = (*(volatile s32 *) (u32) (v1 + 4));
    v1 = (*(volatile u16 *) (u32) (v1 + 48));
    if (v1 != v0) goto L_00BE0BC4;
    a0 = s5; func_00B2ACF0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) s5);
    f1.f = (*(volatile f32 *) (u32) (a0 + 108));
    f0.f = (*(volatile f32 *) (u32) (a0 + 112));
    f1.i = (s32) f1.f;
    f0.i = (s32) f0.f;
    a1 = f1.i;
    a2 = f0.i;
    v0 = func_009B33A0(a0, a1, a2);
    at = (s32) 0x190000U;
    s6 = v0;
    at = at | 0x1;
    at = (u64) s6 < (u64) at;
    if (at != 0) goto L_00BE0BE0;
    v0 = (*(volatile s32 *) (u32) s5);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a1 = s1; v0 = func_00207D80(a0, a1);
    if (v0 == 0) goto L_00BE0B18;
    v0 = (*(volatile s32 *) (u32) s5);
    a2 = s0 & 0xffff;
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a1 = 1346; func_00209A00(a0, a1, a2);
L_00BE0B18:;
    v0 = func_00B36450();
    if (v0 == 0) goto L_00BE0BE0;
    at = (s32) 0x510000U;
    at = (u64) s6 < (u64) at;
    if (at == 0) goto L_00BE0BE0;
    v1 = (*(volatile s32 *) (u32) s5);
    v0 = s2 & 0xff;
    a0 = (*(volatile s32 *) (u32) (v1 + 4));
    v1 = (*(volatile u8 *) (u32) (a0 + 45));
    if (v1 == v0) goto L_00BE0B78;
    { s32 c_ = s1 == 0; v1 = (s32) ((u32) s1 - (u32) s0); if (c_) goto L_00BE0B78; }
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 1; if (c_) goto L_00BE0B68; }
    v0 = (s32) ((u32) v1 + 0x1U);
    v0 = (s32) v0 >> 1;
L_00BE0B68:;
    v0 = (s32) ((u32) s3 + (u32) v0);
    if ((s32) s1 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) s1); hi = (s32) ((s32) v0 % (s32) s1); lo = q_; }
    v0 = hi;
    s3 = (s32) ((u32) s0 + (u32) v0);
L_00BE0B78:;
    a1 = s3; v0 = func_00207D80(a0, a1);
    if (v0 == 0) goto L_00BE0BE0;
    a0 = 2; func_00B364D0(a0);
    v0 = (*(volatile s32 *) (u32) s5);
    a1 = s4;
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a2 = 0; func_00209A00(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) s5);
    a0 = 92;
    v1 = (*(volatile s32 *) (u32) (v1 + 4));
    (*(volatile u8 *) (u32) (v1 + 45)) = (u8) s2;
    v1 = (*(volatile s32 *) (u32) s5);
    (*(volatile u16 *) (u32) (v1 + 24)) = (u16) a0;
L_00BE0BBC:;
    goto L_00BE0BE4;
L_00BE0BC4:;
    a0 = 1;
    a1 = a0; func_00B36400(a0, a1);
    a0 = s5; func_00B9E2B0(a0, f12.f, f13.f);
    goto L_00BE0BBC;
L_00BE0BE0:;
L_00BE0BE4:;
    return;
}
