/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001CD9E0(void);
void func_009B36C0(s32, s32, s32, s32, s32, f32);

s32 func_00B07480(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    f32 acc = 0;

    s4 = a0;
    s3 = a1;
    s2 = a3;
    s1 = a4;
    s0 = a2 & 0xffff;
    a4 = 0;
    a2 = s0; func_009B36C0(a0, a1, a2, a3, a4, f12.f);
    v0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    a0 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.f = (*(volatile f32 *) (u32) (v0 + 7796));
    s1 = (s32) ((u32) s1 << 2);
    f2.f = (*(volatile f32 *) (u32) (v1 + 7788));
    v0 = (s32) ((u32) s1 + (u32) a0);
    f1.f = (*(volatile f32 *) (u32) (v0 + 2940));
    f3.f = (*(volatile f32 *) (u32) (v0 + 1148));
    f0.f = f1.f - f0.f;
    f2.f = f3.f - f2.f;
    acc = f0.f * f0.f;
    f12.f = acc + f2.f * f2.f; f0.f = func_001CD9E0();
    f0.i = (s32) f0.f;
    a2 = s0;
    a0 = s4;
    a1 = s3;
    a3 = s2;
    s0 = f0.i;
    a4 = 1; func_009B36C0(a0, a1, a2, a3, a4, f12.f);
    v0 = (s32) 0x590000U;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    f2.f = (*(volatile f32 *) (u32) (v0 + 7788));
    v0 = (s32) 0x590000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 7796));
    v0 = (s32) ((u32) s1 + (u32) v1);
    f1.f = (*(volatile f32 *) (u32) (v0 + 2940));
    f3.f = (*(volatile f32 *) (u32) (v0 + 1148));
    f0.f = f1.f - f0.f;
    f2.f = f3.f - f2.f;
    acc = f0.f * f0.f;
    f12.f = acc + f2.f * f2.f; f0.f = func_001CD9E0();
    f0.i = (s32) f0.f;
    a0 = f0.i;
    v1 = (s32) ((u32) s0 - (u32) a0);
    if (v1 <= 0) { v1 = (s32) ((u32) 0 - (u32) v1); goto L_00B07560; }
L_00B07560:;
    v0 = (s32) 0x590000U;
    at = a0 < s0;
    { s32 c_ = at == 0; (*(volatile u32 *) (u32) (v0 + 8804)) = (u32) v1; if (c_) goto L_00B07578; }
    v0 = 1; goto L_00B0757C;
L_00B07578:;
    v0 = 0;
L_00B0757C:;
    return v0;
}
