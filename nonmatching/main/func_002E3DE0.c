/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001F3D80(s32, s32, s32);

void func_002E3DE0(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x41800000U;
    a2 = 0;
    f0.f = (*(volatile f32 *) (u32) a1);
    s0 = a0;
    (*(volatile f32 *) (u32) (a0 + 4)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (a1 + 4));
    (*(volatile f32 *) (u32) (a0 + 8)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (a1 + 8));
    (*(volatile f32 *) (u32) (a0 + 12)) = f0.f;
    (*(volatile u32 *) (u32) (a0 + 16)) = (u32) v0;
    f3.f = (*(volatile f32 *) (u32) (a0 + 4));
    f2.f = (*(volatile f32 *) (u32) (a0 + 8));
    f1.f = (*(volatile f32 *) (u32) (a0 + 12));
    f0.f = (*(volatile f32 *) (u32) (a0 + 16));
    (*(volatile f32 *) (u32) (sp + 48)) = f3.f;
    (*(volatile f32 *) (u32) (sp + 52)) = f2.f;
    (*(volatile f32 *) (u32) (sp + 56)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 60)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (a0 + 24));
    a1 = (s32) ((u32) sp + 0x30U); func_001F3D80(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) s0);
    v0 = 18;
    if (v1 == v0) { v0 = (s32) 0x41600000U; goto L_002E3FC8; }
    v0 = 8;
    if (v1 == v0) goto L_002E3FC4;
    v0 = 17;
    if (v1 == v0) { f2.f = (*(volatile f32 *) (u32) (s0 + 12)); goto L_002E3F10; }
    v0 = 16;
    if (v1 == v0) goto L_002E3F0C;
    v0 = 7;
    if (v1 == v0) goto L_002E3F0C;
    v0 = 6;
    if (v1 == v0) goto L_002E3F0C;
    v0 = 13;
    if (v1 == v0) { (*(volatile u32 *) (u32) (sp + 48)) = (u32) 0; goto L_002E3ECC; }
    v0 = 12;
    if (v1 == v0) goto L_002E3EC8;
    v0 = 3;
    if (v1 == v0) goto L_002E3EC8;
    v0 = 2;
    if (v1 == v0) goto L_002E3EC8;
    v0 = v1 < 10; goto L_002E404C;
L_002E3EC8:;
    (*(volatile u32 *) (u32) (sp + 48)) = (u32) 0;
L_002E3ECC:;
    s1 = 0;
    (*(volatile u32 *) (u32) (sp + 52)) = (u32) 0;
    f0.f = (*(volatile f32 *) (u32) (s0 + 12));
    (*(volatile f32 *) (u32) (sp + 56)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s0 + 16));
    (*(volatile f32 *) (u32) (sp + 60)) = f0.f;
L_002E3EE4:;
    a0 = (*(volatile s32 *) (u32) (s0 + 36));
    a1 = (s32) ((u32) sp + 0x30U);
    a2 = 0; func_001F3D80(a0, a1, a2);
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < 2;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_002E3EE4; }
    goto L_002E4110;
L_002E3F0C:;
    f2.f = (*(volatile f32 *) (u32) (s0 + 12));
L_002E3F10:;
    v1 = (s32) 0x41600000U;
    f0.i = (s32) v1;
    v0 = (s32) 0x41800000U;
    f1.i = (s32) 0;
    f0.f = f2.f - f0.f;
    (*(volatile u32 *) (u32) (sp + 56)) = (u32) v1;
    (*(volatile u32 *) (u32) (sp + 60)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 52)) = (u32) 0;
    (*(volatile f32 *) (u32) (sp + 48)) = f0.f;
    v0 = (*(volatile s32 *) (u32) s0);
    v0 = v0 < 10;
    if (v0 != 0) { a0 = (*(volatile s32 *) (u32) (s0 + 28)); goto L_002E3F60; }
    v0 = (s32) 0x3f800000U;
    f0.i = (s32) v0;
    f0.f = f1.f + f0.f;
    (*(volatile f32 *) (u32) (sp + 52)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (s0 + 28));
L_002E3F60:;
    a1 = (s32) ((u32) sp + 0x30U);
    a2 = 0; func_001F3D80(a0, a1, a2);
    v0 = (s32) 0x41600000U;
    (*(volatile u32 *) (u32) (sp + 52)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 48)) = (u32) v0;
    s1 = 0;
    f1.f = (*(volatile f32 *) (u32) (s0 + 12));
    v0 = (s32) 0x41e00000U;
    f0.i = (s32) v0;
    f0.f = f1.f - f0.f;
    (*(volatile f32 *) (u32) (sp + 56)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s0 + 16));
    (*(volatile f32 *) (u32) (sp + 60)) = f0.f;
L_002E3F9C:;
    a0 = (*(volatile s32 *) (u32) (s0 + 36));
    a1 = (s32) ((u32) sp + 0x30U);
    a2 = 0; func_001F3D80(a0, a1, a2);
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < 2;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_002E3F9C; }
    goto L_002E4110;
L_002E3FC4:;
    v0 = (s32) 0x41600000U;
L_002E3FC8:;
    (*(volatile u32 *) (u32) (sp + 48)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 56)) = (u32) v0;
    f1.i = (s32) 0;
    v0 = (s32) 0x41800000U;
    (*(volatile u32 *) (u32) (sp + 52)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 60)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) s0);
    v0 = v0 < 10;
    if (v0 != 0) { a0 = (*(volatile s32 *) (u32) (s0 + 28)); goto L_002E4008; }
    v0 = (s32) 0x3f800000U;
    f0.i = (s32) v0;
    f0.f = f1.f + f0.f;
    (*(volatile f32 *) (u32) (sp + 52)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (s0 + 28));
L_002E4008:;
    a1 = (s32) ((u32) sp + 0x30U);
    a2 = 0; func_001F3D80(a0, a1, a2);
    f1.f = (*(volatile f32 *) (u32) (s0 + 12));
    v1 = (s32) 0x41600000U;
    f0.i = (s32) v1;
    f0.f = f1.f - f0.f;
    (*(volatile f32 *) (u32) (sp + 48)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (s0 + 32));
    if (a0 == 0) goto L_002E4110;
    a1 = (s32) ((u32) sp + 0x30U);
    a2 = 0; func_001F3D80(a0, a1, a2);
    goto L_002E4110;
L_002E404C:;
    a0 = (s32) 0x41600000U;
    v1 = (s32) 0x41800000U;
    (*(volatile u32 *) (u32) (sp + 48)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 52)) = (u32) 0;
    f1.i = (s32) 0;
    (*(volatile u32 *) (u32) (sp + 56)) = (u32) a0;
    { s32 c_ = v0 != 0; (*(volatile u32 *) (u32) (sp + 60)) = (u32) v1; if (c_) goto L_002E4080; }
    v0 = (s32) 0x3f800000U;
    f0.i = (s32) v0;
    f0.f = f1.f + f0.f;
    (*(volatile f32 *) (u32) (sp + 52)) = f0.f;
L_002E4080:;
    a0 = (*(volatile s32 *) (u32) (s0 + 28));
    a1 = (s32) ((u32) sp + 0x30U);
    a2 = 0; func_001F3D80(a0, a1, a2);
    f1.f = (*(volatile f32 *) (u32) (s0 + 12));
    v0 = (s32) 0x41600000U;
    f0.i = (s32) v0;
    f0.f = f1.f - f0.f;
    (*(volatile f32 *) (u32) (sp + 48)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (s0 + 32));
    if (a0 == 0) { v0 = (s32) 0x41600000U; goto L_002E40C4; }
    a1 = (s32) ((u32) sp + 0x30U);
    a2 = 0; func_001F3D80(a0, a1, a2);
    v0 = (s32) 0x41600000U;
L_002E40C4:;
    (*(volatile u32 *) (u32) (sp + 52)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 48)) = (u32) v0;
    s1 = 0;
    f1.f = (*(volatile f32 *) (u32) (s0 + 12));
    v0 = (s32) 0x41e00000U;
    f0.i = (s32) v0;
    f0.f = f1.f - f0.f;
    (*(volatile f32 *) (u32) (sp + 56)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s0 + 16));
    (*(volatile f32 *) (u32) (sp + 60)) = f0.f;
L_002E40F0:;
    a0 = (*(volatile s32 *) (u32) (s0 + 36));
    a1 = (s32) ((u32) sp + 0x30U);
    a2 = 0; func_001F3D80(a0, a1, a2);
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < 2;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_002E40F0; }
L_002E4110:;
    return;
}
