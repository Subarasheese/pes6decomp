/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Random_Below(s32);
void func_001BB080(s32);
s32 func_001BB370(s32);
s32 func_001BB390(s32, s32);
s32 func_001BB4D0(s32);

void func_00953A20(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    a0 = (s32) 0x960000U;
    v1 = (s32) 0x960000U;
    s4 = 0;
    s3 = (s32) ((u32) sp + 0x70U);
    s2 = (s32) 0x970000U;
    s1 = (s32) 0x970000U;
    f0.f = (*(volatile f32 *) (u32) (a0 + 8960));
    s2 = (s32) ((u32) s2 + 0xffff9710U);
    f2.f = (*(volatile f32 *) (u32) (v1 + 8964));
    s1 = (s32) ((u32) s1 + 0xffff9750U);
    a0 = (s32) 0x960000U;
    (*(volatile f32 *) (u32) (sp + 112)) = f0.f;
    v1 = (s32) 0x960000U;
    f1.f = (*(volatile f32 *) (u32) (a0 + 8968));
    (*(volatile f32 *) (u32) (sp + 116)) = f2.f;
    f0.f = (*(volatile f32 *) (u32) (v1 + 8972));
    (*(volatile f32 *) (u32) (sp + 120)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 124)) = f0.f;
L_00953A84:;
    a0 = (*(volatile s32 *) (u32) s2);
    v1 = (*(volatile s32 *) (u32) s3);
    if (a0 == v1) goto L_00953C18;
L_00953A98:;
    a0 = 4; v0 = Pes6Random_Below(a0);
    a0 = v0 & 0xffff;
    v1 = (s32) 0x970000U;
    v1 = (s32) ((u32) v1 + 0xffff9700U);
    a0 = (s32) ((u32) a0 << 2);
    s0 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) s0);
    if (v1 == 0) goto L_00953BC8;
    v0 = (s32) 0x970000U;
    v0 = (s32) ((u32) v0 + 0xffffcfe0U);
    v0 = (s32) ((u32) v0 + (u32) a0);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_001BB4D0(a0);
    v1 = (*(volatile s32 *) (u32) s0);
    (*(volatile u32 *) (u32) (gp + -18212)) = (u32) v0;
    v0 = (s32) ((u32) v1 + 0x1U);
    a0 = v0 & 0xffff; v0 = Pes6Random_Below(a0);
    a0 = (*(volatile s32 *) (u32) (gp + -18212));
    a1 = v0 & 0xffff; v0 = func_001BB390(a0, a1);
    (*(volatile u32 *) (u32) (gp + -18212)) = (u32) v0;
    a0 = v0; v0 = func_001BB370(a0);
    a0 = (s32) 0x960000U;
    v1 = (s32) 0x960000U;
    f0.f = (*(volatile f32 *) (u32) (a0 + 8976));
    a4 = (s32) 0x970000U;
    f2.f = (*(volatile f32 *) (u32) (v1 + 8980));
    a1 = (*(volatile u16 *) (u32) v0);
    a3 = (s32) ((u32) sp + 0x60U);
    a5 = 0;
    a0 = (s32) 0x960000U;
    a4 = (s32) ((u32) a4 + 0xffff9750U);
    (*(volatile f32 *) (u32) (sp + 96)) = f0.f;
    v1 = (s32) 0x960000U;
    f1.f = (*(volatile f32 *) (u32) (a0 + 8984));
    (*(volatile f32 *) (u32) (sp + 100)) = f2.f;
    f0.f = (*(volatile f32 *) (u32) (v1 + 8988));
    (*(volatile f32 *) (u32) (sp + 104)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 108)) = f0.f;
L_00953B48:;
    a0 = (*(volatile s32 *) (u32) a3);
    { s32 c_ = a0 <= 0; a6 = 0; if (c_) goto L_00953B80; }
    a2 = a4;
L_00953B58:;
    v1 = (*(volatile u16 *) (u32) a2);
    if (a1 != v1) goto L_00953B70;
    v1 = 1; goto L_00953B98;
L_00953B70:;
    a6 = (s32) ((u32) a6 + 0x1U);
    v1 = a6 < a0;
    { s32 c_ = v1 != 0; a2 = (s32) ((u32) a2 + 0x2U); if (c_) goto L_00953B58; }
L_00953B80:;
    a5 = (s32) ((u32) a5 + 0x1U);
    v1 = a5 < 4;
    a4 = (s32) ((u32) a4 + 0x12U);
    { s32 c_ = v1 != 0; a3 = (s32) ((u32) a3 + 0x4U); if (c_) goto L_00953B48; }
    v1 = 0;
L_00953B98:;
    if (v1 != 0) goto L_00953BC8;
    a1 = (*(volatile u16 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (gp + -18212));
    v0 = (*(volatile s32 *) (u32) s2);
    v1 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) s2) = (u32) v0;
    v0 = (s32) ((u32) s1 + (u32) v1);
    (*(volatile u16 *) (u32) v0) = (u16) a1; func_001BB080(a0);
L_00953BC8:;
    a0 = (*(volatile s32 *) (u32) s2);
    v1 = (*(volatile s32 *) (u32) s3);
    if (a0 == v1) goto L_00953C18;
    v1 = (s32) 0x970000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -26880));
    if (v1 != 0) goto L_00953A98;
    v1 = (s32) 0x970000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -26876));
    if (v1 != 0) goto L_00953A98;
    v1 = (s32) 0x970000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -26872));
    if (v1 != 0) goto L_00953A98;
    v1 = (s32) 0x970000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -26868));
    if (v1 != 0) goto L_00953A98;
L_00953C18:;
    s4 = (s32) ((u32) s4 + 0x1U);
    v1 = s4 < 4;
    s3 = (s32) ((u32) s3 + 0x4U);
    s2 = (s32) ((u32) s2 + 0x4U);
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x12U); if (c_) goto L_00953A84; }
    return;
}
