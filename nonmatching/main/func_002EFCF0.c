/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001F3D80(s32, s32, s32);
void func_002E1580(s32, s32);
void func_002E18C0(s32, s32);
void func_002E1A30(s32, s32, s32, s32);
void func_002E1C50(s32, s32);

void func_002EFCF0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s64 frame[28];
    s32 sp = (s32) (u32) frame;

    s0 = a0;
    if (s0 == 0) { ; goto L_002EFF84; }
    at = a1 < 3;
    if (at != 0) goto L_002EFD1C;
    v1 = 2; goto L_002EFD2C;
L_002EFD1C:;
    if (a1 >= 0) { v1 = a1; goto L_002EFD2C; }
    v1 = 0; goto L_002EFD2C;
L_002EFD2C:;
    (*(volatile u8 *) (u32) (s0 + 2)) = (u8) v1;
    v1 = 1;
    if (a1 == v1) { a0 = (s32) ((u32) s0 + 0x6cU); goto L_002EFD5C; }
    if (a1 == 0) { a0 = (s32) ((u32) s0 + 0x6cU); goto L_002EFD4C; }
    goto L_002EFD6C;
L_002EFD4C:;
    a1 = 24; func_002E1A30(a0, a1, a2, a3);
    goto L_002EFD74;
L_002EFD5C:;
    a1 = 25; func_002E1A30(a0, a1, a2, a3);
    goto L_002EFD74;
L_002EFD6C:;
    goto L_002EFF80;
L_002EFD74:;
    a2 = (s32) 0x3b0000U;
    a1 = (s32) ((u32) sp + 0xa0U);
    a2 = (s32) ((u32) a2 + 0x40c0U);
    a0 = 32;
L_002EFD84:;
    v1 = (*(volatile s8 *) (u32) a2);
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    v0 = (*(volatile s8 *) (u32) (a2 + 1));
    (*(volatile u8 *) (u32) a1) = (u8) v1;
    (*(volatile u8 *) (u32) (a1 + 1)) = (u8) v0;
    a2 = (s32) ((u32) a2 + 0x2U);
    { s32 c_ = a0 > 0; a1 = (s32) ((u32) a1 + 0x2U); if (c_) goto L_002EFD84; }
    a2 = (s32) 0x3b0000U;
    a1 = (s32) ((u32) sp + 0x60U);
    a2 = (s32) ((u32) a2 + 0x4100U);
    a0 = 32;
L_002EFDB4:;
    v1 = (*(volatile s8 *) (u32) a2);
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    v0 = (*(volatile s8 *) (u32) (a2 + 1));
    (*(volatile u8 *) (u32) a1) = (u8) v1;
    (*(volatile u8 *) (u32) (a1 + 1)) = (u8) v0;
    a2 = (s32) ((u32) a2 + 0x2U);
    { s32 c_ = a0 > 0; a1 = (s32) ((u32) a1 + 0x2U); if (c_) goto L_002EFDB4; }
    v1 = (*(volatile u8 *) (u32) (s0 + 2));
    v0 = 1;
    if (v1 == v0) { a0 = (s32) ((u32) s0 + 0x6cU); goto L_002EFE04; }
    if (v1 == 0) { a0 = (s32) ((u32) s0 + 0x6cU); goto L_002EFDF4; }
    goto L_002EFE0C;
L_002EFDF4:;
    a1 = (s32) ((u32) sp + 0xa0U); func_002E1580(a0, a1);
    goto L_002EFE0C;
L_002EFE04:;
    a1 = (s32) ((u32) sp + 0x60U); func_002E1580(a0, a1);
L_002EFE0C:;
    v0 = (s32) 0x3b0000U;
    v1 = (s32) 0x3b0000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + 16384));
    a1 = (s32) ((u32) sp + 0x50U);
    f0.f = (*(volatile f32 *) (u32) (v1 + 16388));
    v0 = (s32) 0x3b0000U;
    f2.f = (*(volatile f32 *) (u32) (v0 + 16392));
    v1 = (s32) 0x3b0000U;
    (*(volatile f32 *) (u32) (sp + 32)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 36)) = f0.f;
    v0 = (s32) 0x3b0000U;
    f1.f = (*(volatile f32 *) (u32) (v1 + 16396));
    f0.f = (*(volatile f32 *) (u32) (v0 + 16400));
    (*(volatile f32 *) (u32) (sp + 40)) = f2.f;
    (*(volatile f32 *) (u32) (sp + 44)) = f1.f;
    v1 = (s32) 0x3b0000U;
    v0 = (s32) 0x3b0000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + 16404));
    (*(volatile f32 *) (u32) (sp + 48)) = f0.f;
    v0 = (s32) 0x3b0000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 16408));
    (*(volatile f32 *) (u32) (sp + 52)) = f1.f;
    v0 = (s32) 0x3b0000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + 16412));
    (*(volatile f32 *) (u32) (sp + 56)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (v1 + 16416));
    (*(volatile f32 *) (u32) (sp + 60)) = f1.f;
    v0 = (s32) 0x3b0000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + 16420));
    (*(volatile f32 *) (u32) (sp + 64)) = f0.f;
    v1 = (s32) 0x3b0000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + 16424));
    (*(volatile f32 *) (u32) (sp + 68)) = f1.f;
    v0 = (s32) 0x3b0000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + 16428));
    (*(volatile f32 *) (u32) (sp + 72)) = f0.f;
    (*(volatile f32 *) (u32) (sp + 76)) = f1.f;
    v0 = (s32) 0x41600000U;
    f1.f = (*(volatile f32 *) (u32) (s0 + 64));
    f0.i = (s32) v0;
    (*(volatile f32 *) (u32) (sp + 40)) = f1.f;
    f2.f = (*(volatile f32 *) (u32) (s0 + 68));
    f1.f = f1.f - f0.f;
    f0.f = f2.f - f0.f;
    (*(volatile f32 *) (u32) (sp + 44)) = f2.f;
    (*(volatile f32 *) (u32) (sp + 56)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 72)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 60)) = f0.f;
    (*(volatile f32 *) (u32) (sp + 76)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s0 + 56));
    (*(volatile f32 *) (u32) (sp + 80)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s0 + 60));
    (*(volatile f32 *) (u32) (sp + 84)) = f0.f;
    (*(volatile u32 *) (u32) (sp + 88)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 92)) = (u32) 0;
    a0 = (*(volatile s32 *) (u32) (s0 + 96));
    a2 = 0; func_001F3D80(a0, a1, a2);
    (*(volatile u32 *) (u32) (sp + 80)) = (u32) 0;
    v0 = (s32) 0x3d0000U;
    (*(volatile u32 *) (u32) (sp + 84)) = (u32) 0;
    v0 = (s32) ((u32) v0 + 0x2a60U);
    f0.f = (*(volatile f32 *) (u32) (s0 + 64));
    a1 = (s32) ((u32) sp + 0x50U);
    (*(volatile f32 *) (u32) (sp + 88)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s0 + 68));
    (*(volatile f32 *) (u32) (sp + 92)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (s0 + 100));
    v1 = (*(volatile u8 *) (u32) (a0 + 72));
    v1 = (s32) ((u32) v1 << 3);
    a2 = (s32) ((u32) v0 + (u32) v1); func_001F3D80(a0, a1, a2);
    v1 = (*(volatile u8 *) (u32) (s0 + 2));
    v0 = 1;
    if (v1 == v0) { v0 = (s32) ((u32) v1 << 4); goto L_002EFF60; }
    if (v1 == 0) { a0 = (s32) ((u32) s0 + 0x6cU); goto L_002EFF50; }
    a0 = (s32) ((u32) s0 + 0x6cU); goto L_002EFF78;
L_002EFF50:;
    a1 = (s32) ((u32) sp + 0x50U); func_002E18C0(a0, a1);
    goto L_002EFF80;
L_002EFF60:;
    a0 = (s32) ((u32) s0 + 0x6cU);
    v0 = (s32) ((u32) v0 + (u32) sp);
    a1 = (s32) ((u32) v0 + 0x20U); func_002E18C0(a0, a1);
    goto L_002EFF80;
L_002EFF78:;
    a1 = 0; func_002E1C50(a0, a1);
L_002EFF80:;
L_002EFF84:;
    return;
}
