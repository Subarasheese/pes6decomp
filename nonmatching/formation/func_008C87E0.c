/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001F08B0(s32);
s32 func_008B2C50(void);
s32 func_008BA640(s32, s32, s32, s32);
void func_008E2840(s32, s32, s32, s32, f32);

void func_008C87E0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    s2 = a0;
    s0 = (*(volatile s32 *) (u32) a0);
    { s32 c_ = s0 == 0; s1 = 0; if (c_) goto L_008C8958; }
L_008C8808:;
    v1 = (*(volatile s32 *) (u32) s2);
L_008C880C:;
    v0 = 3;
    a0 = (*(volatile u16 *) (u32) s0);
    v1 = (*(volatile s32 *) (u32) v1);
    s0 = (s32) ((u32) s0 + 0x4U);
    { s32 c_ = a0 == v0; a1 = (s32) ((u32) v1 >> 16); if (c_) goto L_008C8950; }
    v0 = 2;
    if (a0 == v0) goto L_008C88A0;
    v0 = 1;
    if (a0 == v0) { a0 = (*(volatile s32 *) (u32) s0); goto L_008C8858; }
    if (a0 == 0) goto L_008C8850;
    v1 = (*(volatile s32 *) (u32) s2); goto L_008C880C;
L_008C8850:;
    v0 = s1; goto L_008C895C;
L_008C8858:;
    v0 = func_001F08B0(a0);
    s3 = v0; v0 = func_008B2C50();
    a2 = (*(volatile u8 *) (u32) (s2 + 13));
    a1 = s3;
    a0 = v0; v0 = func_008BA640(a0, a1, a2, a3);
    v1 = (s32) ((u32) v0 + 0xffffffffU);
    s0 = (s32) ((u32) s0 + 0x4U);
    v0 = (*(volatile u8 *) (u32) (s2 + 14));
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v0 = lo;
    v0 = (s32) ((u32) v0 + 0x1U);
    v0 = v0 & 0xff;
    v0 = (s32) ((u32) s1 + (u32) v0);
    s1 = v0 & 0xff; goto L_008C8808;
L_008C88A0:;
    a0 = (s32) ((u32) sp + 0x50U); func_008E2840(a0, a1, a2, a3, f12.f);
    f1.f = (*(volatile f32 *) (u32) (sp + 92));
    v0 = (s32) 0x41800000U;
    f2.i = (s32) v0;
    v0 = (s32) 0x4f000000U;
    f1.f = f1.f / f2.f;
    f0.i = (s32) v0;
    fcc = f0.f <= f1.f;
    if (fcc) { f0.f = f1.f - f0.f; goto L_008C88E4; }
    f0.i = (s32) f1.f;
    v1 = f0.i;
    v1 = v1 & 0xff; goto L_008C88FC;
L_008C88E4:;
    v0 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    v1 = f0.i;
    v1 = v1 | v0;
    v1 = v1 & 0xff;
L_008C88FC:;
    (*(volatile u8 *) (u32) (s2 + 14)) = (u8) v1;
    v0 = (s32) 0x4f000000U;
    f1.f = (*(volatile f32 *) (u32) (sp + 88));
    f0.i = (s32) v0;
    fcc = f0.f <= f1.f;
    if (fcc) { f0.f = f1.f - f0.f; goto L_008C892C; }
    f0.i = (s32) f1.f;
    v1 = f0.i;
    v1 = v1 & 0xff; goto L_008C8944;
L_008C892C:;
    v0 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    v1 = f0.i;
    v1 = v1 | v0;
    v1 = v1 & 0xff;
L_008C8944:;
    (*(volatile u8 *) (u32) (s2 + 13)) = (u8) v1; goto L_008C8808;
L_008C8950:;
    s0 = (*(volatile s32 *) (u32) s0); goto L_008C8808;
L_008C8958:;
    v0 = 0;
L_008C895C:;
    return;
}
