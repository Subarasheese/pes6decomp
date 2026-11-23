/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EF900(s32, s32);
void func_0023CE60(s32, s32, s32, s32);
void func_0023CE70(s32, s32, s32, s32);

void func_008CA810(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    s32 fcc = 0;
    f32 acc = 0;
    s64 frame[20];
    s32 sp = (s32) (u32) frame;

    s2 = a0;
    s1 = a1;
    { s32 c_ = s2 == 0; s0 = a2; if (c_) goto L_008CAAE4; }
    at = s0 < 2;
    if (at == 0) { ; goto L_008CAAE8; }
    a0 = s1 & 0xffff;
    v0 = 286;
    if (a0 == v0) { (*(volatile u32 *) (u32) (sp + 128)) = (u32) 0; goto L_008CA9D4; }
    v0 = 283;
    if (a0 == v0) goto L_008CA9D0;
    v0 = 281;
    if (a0 == v0) goto L_008CA9D0;
    v0 = 0xffff;
    if (a0 == v0) goto L_008CA9D0;
    v0 = (s32) 0x590000U;
    v1 = 4;
    v0 = (*(volatile u8 *) (u32) (v0 + 7177));
    if (v0 != v1) { a0 = (s32) ((u32) sp + 0x98U); goto L_008CA8C8; }
    v0 = a0 < 254;
    if (v0 != 0) { a0 = (s32) ((u32) sp + 0x98U); goto L_008CA8B8; }
    at = a0 < 270;
    if (at == 0) goto L_008CA8B4;
    a0 = (s32) ((u32) sp + 0x98U); func_0023CE70(a0, a1, a2, a3);
    v0 = (*(volatile s8 *) (u32) (sp + 154)); goto L_008CA8D4;
L_008CA8B4:;
    a0 = (s32) ((u32) sp + 0x98U);
L_008CA8B8:;
    a1 = s1; func_0023CE60(a0, a1, a2, a3);
    goto L_008CA8D0;
L_008CA8C8:;
    func_0023CE70(a0, a1, a2, a3);
L_008CA8D0:;
    v0 = (*(volatile s8 *) (u32) (sp + 154));
L_008CA8D4:;
    a3 = 0;
    a1 = (*(volatile s8 *) (u32) (sp + 153));
    a2 = (s32) ((u32) sp + 0x80U);
    a0 = (*(volatile s8 *) (u32) (sp + 156));
    f0.i = (s32) v0;
    v1 = (*(volatile s8 *) (u32) (sp + 155));
    f0.f = (f32) f0.i;
    v0 = (*(volatile s8 *) (u32) (sp + 152));
    (*(volatile f32 *) (u32) (sp + 128)) = f0.f;
    f0.i = (s32) a1;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (sp + 132)) = f0.f;
    f0.i = (s32) a0;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (sp + 136)) = f0.f;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    v1 = (s32) 0x41100000U;
    (*(volatile f32 *) (u32) (sp + 140)) = f0.f;
    f0.i = (s32) v0;
    f0.f = (f32) f0.i;
    v0 = (s32) 0x41200000U;
    f3.i = (s32) v0;
    v0 = (s32) 0x42960000U;
    f2.i = (s32) v0;
    (*(volatile f32 *) (u32) (sp + 144)) = f0.f;
    v0 = (s32) 0x3f800000U;
    f0.i = (s32) v0;
    v0 = (s32) 0x41c00000U;
    f4.i = (s32) v0;
L_008CA95C:;
    f1.f = (*(volatile f32 *) (u32) a2);
    fcc = f4.f <= f1.f;
    if (!fcc) goto L_008CA978;
    f1.f = f1.f - f4.f;
    (*(volatile f32 *) (u32) a2) = f1.f; goto L_008CA980;
L_008CA978:;
    (*(volatile u32 *) (u32) a2) = (u32) 0;
L_008CA980:;
    f1.f = (*(volatile f32 *) (u32) a2);
    fcc = f1.f < f3.f;
    if (!fcc) goto L_008CA998;
    (*(volatile u32 *) (u32) a2) = (u32) v1;
L_008CA998:;
    f1.f = (*(volatile f32 *) (u32) a2);
    f1.f = f1.f / f2.f;
    fcc = f0.f < f1.f;
    { s32 c_ = !fcc; (*(volatile f32 *) (u32) a2) = f1.f; if (c_) goto L_008CA9B8; }
    (*(volatile f32 *) (u32) a2) = f0.f;
L_008CA9B8:;
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = a3 < 5;
    { s32 c_ = v0 != 0; a2 = (s32) ((u32) a2 + 0x4U); if (c_) goto L_008CA95C; }
    v0 = (s32) ((u32) s0 << 1); goto L_008CA9E8;
L_008CA9D0:;
    (*(volatile u32 *) (u32) (sp + 128)) = (u32) 0;
L_008CA9D4:;
    (*(volatile u32 *) (u32) (sp + 132)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 136)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 140)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 144)) = (u32) 0;
    v0 = (s32) ((u32) s0 << 1);
L_008CA9E8:;
    v1 = 0;
    v0 = (s32) ((u32) v0 + (u32) s2);
    a3 = (s32) ((u32) sp + 0x80U);
    (*(volatile u16 *) (u32) (v0 + 474)) = (u16) s1;
    a2 = s2;
    v0 = (s32) ((u32) s0 << 2);
    a1 = (s32) ((u32) sp + 0x50U);
    v0 = (s32) ((u32) v0 + (u32) s0);
    v0 = (s32) ((u32) v0 << 3);
    s0 = (s32) ((u32) s2 + (u32) v0);
    v0 = (s32) 0x40a00000U;
    a0 = s0;
    f3.i = (s32) 0;
    f2.i = (s32) v0;
L_008CAA20:;
    f1.f = (*(volatile f32 *) (u32) (s2 + 12));
    v1 = (s32) ((u32) v1 + 0x1U);
    f0.f = (*(volatile f32 *) (u32) (a2 + 32));
    v0 = v1 < 5;
    f4.f = (*(volatile f32 *) (u32) a3);
    acc = f3.f + f1.f;
    f0.f = f0.f - f1.f;
    a3 = (s32) ((u32) a3 + 0x4U);
    f0.f = acc + f0.f * f4.f;
    (*(volatile f32 *) (u32) a1) = f0.f;
    f1.f = (*(volatile f32 *) (u32) (s2 + 16));
    f0.f = (*(volatile f32 *) (u32) (a2 + 36));
    acc = f3.f + f1.f;
    f0.f = f0.f - f1.f;
    a2 = (s32) ((u32) a2 + 0x10U);
    f0.f = acc + f0.f * f4.f;
    (*(volatile f32 *) (u32) (a1 + 4)) = f0.f;
    f1.f = (*(volatile f32 *) (u32) a1);
    f0.f = (*(volatile f32 *) (u32) (a1 + 4));
    (*(volatile f32 *) (u32) (a0 + 132)) = f1.f;
    (*(volatile f32 *) (u32) (a0 + 136)) = f0.f;
    a1 = (s32) ((u32) a1 + 0x8U);
    f1.f = (*(volatile f32 *) (u32) (a0 + 132));
    f0.f = (*(volatile f32 *) (u32) (a0 + 212));
    f0.f = f1.f - f0.f;
    f0.f = f0.f / f2.f;
    (*(volatile f32 *) (u32) (a0 + 292)) = f0.f;
    f1.f = (*(volatile f32 *) (u32) (a0 + 136));
    f0.f = (*(volatile f32 *) (u32) (a0 + 216));
    f0.f = f1.f - f0.f;
    f0.f = f0.f / f2.f;
    (*(volatile f32 *) (u32) (a0 + 296)) = f0.f;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x8U); if (c_) goto L_008CAA20; }
    s1 = 0;
L_008CAAB0:;
    s3 = 0;
    s2 = s0;
L_008CAAB8:;
    a0 = (*(volatile s32 *) (u32) (s2 + 384));
    a1 = 1; func_001EF900(a0, a1);
    s3 = (s32) ((u32) s3 + 0x1U);
    v1 = s3 < 2;
    { s32 c_ = v1 != 0; s2 = (s32) ((u32) s2 + 0x4U); if (c_) goto L_008CAAB8; }
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < 5;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x8U); if (c_) goto L_008CAAB0; }
L_008CAAE4:;
L_008CAAE8:;
    return;
}
