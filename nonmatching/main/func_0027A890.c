/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_00129AD0(f32, f32, f32);
s32 func_0017E140(void);
f32 func_00186A30(f32, f32);
f32 func_001AA480(void);
void func_002871C0(s32);

void func_0027A890(s32 a0, s32 a1, s32 a2, f32 fa12, f32 fa13, f32 fa14) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s64 frame[6];
    s32 sp = (s32) (u32) frame;

    v0 = func_0017E140();
    if (v0 == 0) goto L_0027A9E4;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    v1 = (*(volatile s32 *) (u32) v1);
    if (v1 == 0) goto L_0027A9E4;
    a0 = (s32) ((u32) sp + 0x20U); func_002871C0(a0);
    v0 = (*(volatile u8 *) (u32) (gp + -32516));
    if (v0 == 0) goto L_0027A8E0;
    f13.f = (*(volatile f32 *) (u32) (sp + 40));
    f12.f = (*(volatile f32 *) (u32) (sp + 32)); f0.f = func_00186A30(f12.f, f13.f);
    f20.i = f0.i; goto L_0027A8E4;
L_0027A8E0:;
    f20.i = (s32) 0;
L_0027A8E4:;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (*(volatile s32 *) (u32) v0);
    (*(volatile f32 *) (u32) (v0 + 272)) = f20.f; f0.f = func_001AA480();
    v0 = (s32) 0x3f800000U;
    f14.i = (s32) v0;
    f12.i = f20.i;
    f13.i = f0.i; f0.f = func_00129AD0(f12.f, f13.f, f14.f);
    a1 = (*(volatile s32 *) (u32) (gp + -32252));
    v1 = (s32) 0x3e4c0000U;
    a0 = v1 | 0xcccd;
    f1.i = (s32) a0;
    v1 = (s32) 0x590000U;
    f4.i = f1.i ^ (s32) 0x80000000U;
    a0 = 32767;
    a1 = (*(volatile s32 *) (u32) a1);
    (*(volatile f32 *) (u32) (a1 + 276)) = f0.f;
    a2 = (*(volatile s32 *) (u32) (gp + -23196));
    a1 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.f = (*(volatile f32 *) (u32) (a2 + 148));
    a1 = (*(volatile s32 *) (u32) a1);
    (*(volatile f32 *) (u32) (a1 + 280)) = f0.f;
    a1 = (*(volatile s32 *) (u32) (gp + -32252));
    a1 = (*(volatile s32 *) (u32) a1);
    (*(volatile u32 *) (u32) (a1 + 284)) = (u32) 0;
    f0.f = (*(volatile f32 *) (u32) (sp + 40));
    a1 = (*(volatile s32 *) (u32) (gp + -32252));
    f2.f = (*(volatile f32 *) (u32) (sp + 32));
    f3.f = (*(volatile f32 *) (u32) (sp + 36));
    f0.f = f0.f * f1.f;
    a1 = (*(volatile s32 *) (u32) a1);
    f2.f = f2.f * f4.f;
    f1.f = f3.f * f1.f;
    (*(volatile f32 *) (u32) (a1 + 208)) = f2.f;
    (*(volatile f32 *) (u32) (a1 + 212)) = f1.f;
    (*(volatile f32 *) (u32) (a1 + 216)) = f0.f;
    v1 = (*(volatile s32 *) (u32) (v1 + 7992));
    if (v1 != a0) { v1 = (*(volatile s32 *) (u32) (gp + -32252)); goto L_0027A994; }
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    v1 = (*(volatile s32 *) (u32) (v1 + 8));
    (*(volatile u8 *) (u32) v1) = (u8) 0; goto L_0027A9A0;
L_0027A994:;
    a0 = 1;
    v1 = (*(volatile s32 *) (u32) (v1 + 8));
    (*(volatile u8 *) (u32) v1) = (u8) a0;
L_0027A9A0:;
    v1 = (s32) 0x590000U;
    a0 = (*(volatile s32 *) (u32) (gp + -32252));
    f2.f = (*(volatile f32 *) (u32) (v1 + 7996));
    v1 = (s32) 0x590000U;
    f1.f = (*(volatile f32 *) (u32) (v1 + 7992));
    f2.f = (f32) f2.i;
    v1 = (s32) 0x3e4c0000U;
    f1.f = (f32) f1.i;
    v1 = v1 | 0xcccd;
    f0.i = (s32) v1;
    f1.f = f1.f * f4.f;
    v1 = (*(volatile s32 *) (u32) (a0 + 8));
    f0.f = f2.f * f0.f;
    (*(volatile f32 *) (u32) (v1 + 208)) = f1.f;
    (*(volatile u32 *) (u32) (v1 + 212)) = (u32) 0;
    (*(volatile f32 *) (u32) (v1 + 216)) = f0.f;
L_0027A9E4:;
    return;
}
