/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_0013DB10(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    s32 fcc = 0;

    f0.i = (s32) f12.f;
    v1 = (s32) 0x500000U;
    a1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffd1ccU);
    v1 = (s32) ((u32) v1 + (u32) a1);
    a2 = f0.i;
    { s32 c_ = a0 < 0; (*(volatile u32 *) (u32) v1) = (u32) a2; if (c_) goto L_0013DBF8; }
    at = a0 < 2;
    { s32 c_ = at != 0; a3 = 1; if (c_) goto L_0013DB68; }
    a1 = (s32) 0x500000U;
    a1 = (s32) ((u32) a1 + 0xffffd184U);
L_0013DB44:;
    f0.f = (*(volatile f32 *) (u32) (a1 + 76));
    f0.f = (f32) f0.i;
    fcc = f0.f <= f12.f;
    if (!fcc) { (*(volatile u32 *) (u32) (a1 + 76)) = (u32) a2; goto L_0013DB58; }
L_0013DB58:;
    a3 = (s32) ((u32) a3 + 0x1U);
    v1 = a3 < a0;
    { s32 c_ = v1 != 0; a1 = (s32) ((u32) a1 + 0x4U); if (c_) goto L_0013DB44; }
L_0013DB68:;
    a1 = (s32) ((u32) a0 + 0x1U);
    at = a1 < 3;
    if (at == 0) goto L_0013DBB0;
    v1 = (s32) 0x500000U;
    a0 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) v1 + 0xffffd180U);
    v1 = (s32) ((u32) v1 + (u32) a0);
L_0013DB88:;
    f0.f = (*(volatile f32 *) (u32) (v1 + 76));
    f0.f = (f32) f0.i;
    fcc = f0.f < f12.f;
    if (fcc) goto L_0013DBF0;
L_0013DBA0:;
    a1 = (s32) ((u32) a1 + 0x1U);
    at = a1 < 3;
    { s32 c_ = at != 0; v1 = (s32) ((u32) v1 + 0x4U); if (c_) goto L_0013DB88; }
L_0013DBB0:;
    v1 = (s32) 0x500000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + -11832));
    f1.f = (*(volatile f32 *) (u32) (gp + -32592));
    f0.f = (f32) f0.i;
    fcc = f0.f <= f1.f;
    if (!fcc) goto L_0013DC88;
L_0013DBCC:;
    v1 = (s32) 0x500000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + -11832));
    f1.f = (*(volatile f32 *) (u32) (gp + -32588));
    f0.f = (f32) f0.i;
    fcc = f0.f <= f1.f;
    if (!fcc) goto L_0013DCA0;
L_0013DBE8:;
    goto L_0013DCBC;
L_0013DBF0:;
    (*(volatile u32 *) (u32) (v1 + 76)) = (u32) a2; goto L_0013DBA0;
L_0013DBF8:;
    at = a0 < -1;
    { s32 c_ = at == 0; v1 = -1; if (c_) goto L_0013DC30; }
    a1 = (s32) 0x500000U;
    a1 = (s32) ((u32) a1 + 0xffffd17cU);
L_0013DC0C:;
    f0.f = (*(volatile f32 *) (u32) (a1 + 76));
    f0.f = (f32) f0.i;
    fcc = f0.f <= f12.f;
    if (!fcc) { (*(volatile u32 *) (u32) (a1 + 76)) = (u32) a2; goto L_0013DC20; }
L_0013DC20:;
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    at = a0 < v1;
    { s32 c_ = at != 0; a1 = (s32) ((u32) a1 + 0xfffffffcU); if (c_) goto L_0013DC0C; }
L_0013DC30:;
    a1 = (s32) ((u32) a0 + 0xffffffffU);
    v1 = a1 < -4;
    if (v1 != 0) goto L_0013DBB0;
    v1 = (s32) 0x500000U;
    a0 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) v1 + 0xffffd180U);
    v1 = (s32) ((u32) v1 + (u32) a0);
L_0013DC50:;
    f0.f = (*(volatile f32 *) (u32) (v1 + 76));
    f0.f = (f32) f0.i;
    fcc = f0.f < f12.f;
    if (fcc) goto L_0013DC80;
L_0013DC68:;
    a1 = (s32) ((u32) a1 + 0xffffffffU);
    at = a1 < -4;
    { s32 c_ = at == 0; v1 = (s32) ((u32) v1 + 0xfffffffcU); if (c_) goto L_0013DC50; }
    goto L_0013DBB0;
L_0013DC80:;
    (*(volatile u32 *) (u32) (v1 + 76)) = (u32) a2; goto L_0013DC68;
L_0013DC88:;
    v1 = (s32) 0x500000U;
    f0.f = f1.f / f0.f;
    (*(volatile f32 *) (u32) (v1 + -11816)) = f0.f; goto L_0013DBCC;
L_0013DCA0:;
    f0.f = f1.f / f0.f;
    v1 = (s32) 0x500000U;
    (*(volatile f32 *) (u32) (v1 + -11812)) = f0.f; goto L_0013DBE8;
L_0013DCBC:;
    return;
}
