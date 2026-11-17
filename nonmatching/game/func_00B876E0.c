/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001CD9E0(void);
s32 func_00B2A420(s32);
void func_00B364D0(s32);
s32 func_00B3C280(s32);
void func_00BD3BA0(s32, s32, s32);
void func_00BD4040(s32, s32);
s32 func_00BF6270(void);

void func_00B876E0(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { 0 };
    s32 fcc = 0;
    f32 acc = 0;

    s3 = a0;
    v0 = func_00BF6270();
    a0 = v0; v0 = func_00B2A420(a0);
    s2 = v0;
    if (s3 == s2) { a0 = s3; goto L_00B8773C; }
    a0 = (*(volatile s32 *) (u32) (s3 + 4));
    v1 = 1;
    a0 = (*(volatile u8 *) (u32) (a0 + 81));
    if (a0 == v1) { a0 = s2; goto L_00B877AC; }
    v1 = (*(volatile s32 *) (u32) s3);
    a0 = 127;
    (*(volatile u16 *) (u32) (v1 + 24)) = (u16) a0;
L_00B87734:;
    goto L_00B878D4;
L_00B8773C:;
    v0 = func_00B3C280(a0);
    s0 = v0 & 0xff;
    a0 = 0; func_00B364D0(a0);
    a0 = s3;
    a1 = 4; func_00BD4040(a0, a1);
    a0 = s3;
    a1 = 4;
    a2 = 1; func_00BD3BA0(a0, a1, a2);
    v1 = s0 & 0xff;
    v1 = v1 & 0x7;
    if (v1 == 0) { a0 = s3; goto L_00B87798; }
    v1 = (*(volatile s32 *) (u32) s3);
L_00B87780:;
    a1 = 1;
    a0 = 22;
    (*(volatile u8 *) (u32) (v1 + 78)) = (u8) a1;
    v1 = (*(volatile s32 *) (u32) s3);
    (*(volatile u16 *) (u32) (v1 + 24)) = (u16) a0; goto L_00B87734;
L_00B87798:;
    a1 = 5;
    a2 = 1; func_00BD3BA0(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) s3); goto L_00B87780;
L_00B877AC:;
    v0 = func_00B3C280(a0);
    s1 = v0 & 0xff;
    v1 = (*(volatile s32 *) (u32) s3);
    v0 = (*(volatile s32 *) (u32) s2);
    f1.f = (*(volatile f32 *) (u32) (v1 + 232));
    f0.f = (*(volatile f32 *) (u32) (v0 + 232));
    f3.f = (*(volatile f32 *) (u32) (v1 + 224));
    f2.f = (*(volatile f32 *) (u32) (v0 + 224));
    f0.f = f1.f - f0.f;
    f2.f = f3.f - f2.f;
    acc = f0.f * f0.f;
    f12.f = acc + f2.f * f2.f; f0.f = func_001CD9E0();
    f0.i = (s32) f0.f;
    v0 = f0.i;
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_00B87804; }
    f0.i = (s32) v0;
    f3.f = (f32) f0.i; goto L_00B8781C;
L_00B87804:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f3.f = (f32) f0.i;
    f3.f = f3.f + f3.f;
L_00B8781C:;
    v0 = (s32) 0x590000U;
    v1 = (s32) 0x45c80000U;
    f2.f = (*(volatile f32 *) (u32) (v0 + 7148));
    f1.i = (s32) v1;
    f2.f = f3.f * f2.f;
    v0 = (s32) 0x4f000000U;
    f1.f = f2.f / f1.f;
    f0.i = (s32) v0;
    fcc = f0.f <= f1.f;
    if (fcc) { f0.f = f1.f - f0.f; goto L_00B87860; }
    f0.i = (s32) f1.f;
    s0 = f0.i;
    goto L_00B87874;
L_00B87860:;
    v0 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    s0 = f0.i;
    s0 = s0 | v0;
L_00B87874:;
    v0 = (s32) 0xcc0000U;
    a0 = s3;
    (*(volatile u8 *) (u32) (v0 + -13534)) = (u8) 0;
    a1 = 5; func_00BD4040(a0, a1);
    a0 = s1 & 0xff;
    v1 = 2;
    if (a0 == v1) goto L_00B878C4;
    a2 = 1;
    if (a0 == a2) goto L_00B878C4;
    at = (u64) s0 < (u64) (s64) 121;
    if (at != 0) goto L_00B878C4;
    v0 = (*(volatile s32 *) (u32) (s2 + 4));
    a0 = s3;
    a1 = 6;
    (*(volatile u16 *) (u32) (v0 + 6)) = (u16) 0; func_00BD3BA0(a0, a1, a2);
L_00B878C4:;
    v1 = (*(volatile s32 *) (u32) s3);
    a0 = 24;
    (*(volatile u16 *) (u32) (v1 + 24)) = (u16) a0; goto L_00B87734;
L_00B878D4:;
    return;
}
