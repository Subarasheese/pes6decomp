/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Random_Below(s32);
void func_001BB080(s32);
s32 func_001BB370(s32);
s32 func_001BB390(s32, s32);
s32 func_001BB4D0(s32);

void func_00953C50(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s64 frame[22];
    s32 sp = (s32) (u32) frame;

    a0 = (s32) 0x960000U;
    v1 = (s32) 0x960000U;
    s6 = (s32) 0x970000U;
    s5 = (s32) 0x970000U;
    s5 = (s32) ((u32) s5 + 0xffffcfe0U);
    s3 = 0;
    s2 = (s32) 0x970000U;
    s1 = (s32) 0x970000U;
    f0.f = (*(volatile f32 *) (u32) (a0 + 8944));
    s0 = (s32) ((u32) sp + 0xa0U);
    f2.f = (*(volatile f32 *) (u32) (v1 + 8948));
    s2 = (s32) ((u32) s2 + 0xffff9700U);
    s6 = (s32) ((u32) s6 + 0xffff9750U);
    s1 = (s32) ((u32) s1 + 0xffff9710U);
    a0 = (s32) 0x960000U;
    (*(volatile f32 *) (u32) (sp + 160)) = f0.f;
    v1 = (s32) 0x960000U;
    f1.f = (*(volatile f32 *) (u32) (a0 + 8952));
    (*(volatile f32 *) (u32) (sp + 164)) = f2.f;
    f0.f = (*(volatile f32 *) (u32) (v1 + 8956));
    (*(volatile f32 *) (u32) (sp + 168)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 172)) = f0.f;
L_00953CD0:;
    v1 = (*(volatile s32 *) (u32) s0);
    { s32 c_ = v1 <= 0; s4 = 0; if (c_) goto L_00953E30; }
L_00953CE0:;
    v1 = (*(volatile s32 *) (u32) s2);
    if (v1 == 0) goto L_00953E18;
    a0 = (*(volatile s32 *) (u32) s5); v0 = func_001BB4D0(a0);
    (*(volatile u32 *) (u32) (gp + -18212)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) s2);
    v0 = (s32) ((u32) v0 + 0x1U);
    a0 = v0 & 0xffff; v0 = Pes6Random_Below(a0);
    a0 = (*(volatile s32 *) (u32) (gp + -18212));
    a1 = v0 & 0xffff; v0 = func_001BB390(a0, a1);
    (*(volatile u32 *) (u32) (gp + -18212)) = (u32) v0;
    a0 = v0; v0 = func_001BB370(a0);
    v1 = (s32) 0x960000U;
    a4 = (s32) 0x970000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + 8976));
    a1 = (*(volatile u16 *) (u32) v0);
    s7 = v0;
    a3 = (s32) ((u32) sp + 0x90U);
    a5 = 0;
    a4 = (s32) ((u32) a4 + 0xffff9750U);
    v1 = (s32) 0x960000U;
    f2.f = (*(volatile f32 *) (u32) (v1 + 8980));
    (*(volatile f32 *) (u32) (sp + 144)) = f0.f;
    v1 = (s32) 0x960000U;
    f1.f = (*(volatile f32 *) (u32) (v1 + 8984));
    (*(volatile f32 *) (u32) (sp + 148)) = f2.f;
    v1 = (s32) 0x960000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + 8988));
    (*(volatile f32 *) (u32) (sp + 152)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 156)) = f0.f;
L_00953D68:;
    a0 = (*(volatile s32 *) (u32) a3);
    { s32 c_ = a0 <= 0; a6 = 0; if (c_) goto L_00953DA0; }
    a2 = a4;
L_00953D78:;
    v1 = (*(volatile u16 *) (u32) a2);
    if (a1 != v1) goto L_00953D90;
    a0 = 1; goto L_00953DB8;
L_00953D90:;
    a6 = (s32) ((u32) a6 + 0x1U);
    v1 = a6 < a0;
    { s32 c_ = v1 != 0; a2 = (s32) ((u32) a2 + 0x2U); if (c_) goto L_00953D78; }
L_00953DA0:;
    a5 = (s32) ((u32) a5 + 0x1U);
    v1 = a5 < 4;
    a4 = (s32) ((u32) a4 + 0x12U);
    { s32 c_ = v1 != 0; a3 = (s32) ((u32) a3 + 0x4U); if (c_) goto L_00953D68; }
    a0 = 0;
L_00953DB8:;
    v1 = 1;
    if (a0 != v1) goto L_00953DE0;
    (*(volatile u16 *) (u32) s7) = (u16) 0;
    s4 = (s32) ((u32) s4 + 0xffffffffU);
    v0 = (*(volatile s32 *) (u32) s2);
    a0 = (*(volatile s32 *) (u32) (gp + -18212));
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    (*(volatile u32 *) (u32) s2) = (u32) v0; func_001BB080(a0);
L_00953DE0:;
    a2 = (*(volatile u16 *) (u32) s7);
    if (a2 == 0) goto L_00953E18;
    v1 = (*(volatile s32 *) (u32) s1);
    v0 = (*(volatile s32 *) (u32) s2);
    a0 = (*(volatile s32 *) (u32) (gp + -18212));
    a1 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) v1 + 0x1U);
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    (*(volatile u32 *) (u32) s1) = (u32) v1;
    v1 = (s32) ((u32) s6 + (u32) a1);
    (*(volatile u32 *) (u32) s2) = (u32) v0;
    (*(volatile u16 *) (u32) v1) = (u16) a2; func_001BB080(a0);
L_00953E18:;
    v1 = (*(volatile s32 *) (u32) s0);
    s4 = (s32) ((u32) s4 + 0x1U);
    v1 = s4 < v1;
    if (v1 != 0) goto L_00953CE0;
L_00953E30:;
    s3 = (s32) ((u32) s3 + 0x1U);
    v1 = s3 < 4;
    s2 = (s32) ((u32) s2 + 0x4U);
    s5 = (s32) ((u32) s5 + 0x4U);
    s6 = (s32) ((u32) s6 + 0x12U);
    s1 = (s32) ((u32) s1 + 0x4U);
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00953CD0; }
    return;
}
