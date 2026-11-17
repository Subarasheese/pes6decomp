/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_002F8210(s64, s64, s64, s64);
s64 func_002F82B0(s64, s64, s64, s64);

s64 func_002CE1E0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    s64 frame[54];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0x3b0000U;
    v1 = (s32) 0x3b0000U;
    s4 = a0;
    s3 = a1;
    a1 = (s32) 0x3b0000U;
    s2 = a3;
    f1.f = (*(volatile f32 *) (u32) (v0 + -3200));
    s1 = a4;
    a1 = (s32) ((u32) a1 + 0xfffff3b0U);
    a0 = (s32) ((u32) sp + 0x60U);
    v0 = (s32) 0x3b0000U;
    f2.f = (*(volatile f32 *) (u32) (v0 + -3196));
    (*(volatile f32 *) (u32) (sp + 384)) = f1.f;
    v0 = (s32) 0x3b0000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + -3192));
    (*(volatile f32 *) (u32) (sp + 388)) = f2.f;
    v0 = (s32) 0x3b0000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + -3188));
    (*(volatile f32 *) (u32) (sp + 392)) = f0.f;
    v0 = (s32) 0x3b0000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + -3184));
    (*(volatile f32 *) (u32) (sp + 396)) = f1.f;
    v0 = (s32) 0x3b0000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + -3180));
    (*(volatile f32 *) (u32) (sp + 400)) = f0.f;
    v0 = (s32) 0x3b0000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + -3176));
    (*(volatile f32 *) (u32) (sp + 404)) = f1.f;
    f1.f = (*(volatile f32 *) (u32) (v1 + -3172));
    (*(volatile f32 *) (u32) (sp + 408)) = f0.f;
    v0 = (s32) 0x3b0000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + -3168));
    (*(volatile f32 *) (u32) (sp + 412)) = f1.f;
    v1 = 69;
    (*(volatile f32 *) (u32) (sp + 416)) = f0.f;
L_002CE288:;
    v0 = (*(volatile s32 *) (u32) a1);
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    (*(volatile u32 *) (u32) a0) = (u32) v0;
    a1 = (s32) ((u32) a1 + 0x4U);
    a0 = (s32) ((u32) a0 + 0x4U);
    if (v1 > 0) goto L_002CE288;
    if (s4 != 0) { a1 = a2; goto L_002CE2B4; }
    v0 = 0; goto L_002CE450;
L_002CE2B4:;
    a0 = s3; v0 = func_002F82B0(a0, a1, a2, a3);
    s0 = v0;
    if (s0 != 0) { a0 = s3; goto L_002CE2D0; }
    v0 = 0; goto L_002CE450;
L_002CE2D0:;
    v0 = func_002F8210(a0, a1, a2, a3);
    if (v0 != 0) goto L_002CE3B0;
    v0 = 4;
    if (s2 == v0) goto L_002CE370;
    v0 = 3;
    if (s2 == v0) goto L_002CE330;
    v0 = 2;
    if (s2 == v0) { a0 = (*(volatile u8 *) (u32) (s0 + 44)); goto L_002CE30C; }
    goto L_002CE3D8;
L_002CE30C:;
    a1 = (s32) ((u32) sp + 0x180U);
    v0 = -1;
L_002CE314:;
    v1 = (*(volatile s32 *) (u32) a1);
    if (a0 == v1) goto L_002CE3D8;
    if (v1 != v0) { a1 = (s32) ((u32) a1 + 0x4U); goto L_002CE314; }
    v0 = 0; goto L_002CE450;
L_002CE330:;
    v0 = (s32) ((u32) s1 << 1);
    v0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile u8 *) (u32) (s0 + 45));
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v0 - (u32) s1);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) sp);
    a1 = (s32) ((u32) v0 + 0x60U);
    v0 = -1;
L_002CE354:;
    v1 = (*(volatile s32 *) (u32) a1);
    if (a0 == v1) goto L_002CE3D8;
    if (v1 != v0) { a1 = (s32) ((u32) a1 + 0x4U); goto L_002CE354; }
    v0 = 0; goto L_002CE450;
L_002CE370:;
    v0 = (s32) ((u32) s1 << 1);
    v0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile u8 *) (u32) (s0 + 46));
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v0 - (u32) s1);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) sp);
    a1 = (s32) ((u32) v0 + 0x60U);
    v0 = -1;
L_002CE394:;
    v1 = (*(volatile s32 *) (u32) a1);
    if (a0 == v1) goto L_002CE3D8;
    if (v1 != v0) { a1 = (s32) ((u32) a1 + 0x4U); goto L_002CE394; }
    v0 = 0; goto L_002CE450;
L_002CE3B0:;
    v0 = 5;
    if (s2 == v0) goto L_002CE3D8;
    v0 = 3;
    if (s2 == v0) { s2 = 0; goto L_002CE3D8; }
    if (s2 == 0) { s2 = v0; goto L_002CE3D8; }
    v0 = 0; goto L_002CE450;
L_002CE3D8:;
    if (s0 == 0) { v0 = 1; goto L_002CE450; }
    if (s4 == 0) goto L_002CE44C;
    v0 = (s32) ((u32) s2 << 1);
    v1 = (s32) ((u32) s0 + (u32) v0);
    v0 = (*(volatile u8 *) (u32) v1);
    v0 = v0 & 0x1f;
    v0 = (s32) ((u32) v0 << 3);
    (*(volatile u8 *) (u32) s4) = (u8) v0;
    v0 = (*(volatile u16 *) (u32) v1);
    v0 = (s64) ((u64) v0 << 54);
    v0 = (s64) ((u64) v0 >> 59);
    v0 = (s32) ((u32) v0 << 3);
    (*(volatile u8 *) (u32) (s4 + 1)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (v1 + 1));
    v0 = (s64) ((u64) v0 << 57);
    v0 = (s64) ((u64) v0 >> 59);
    v0 = (s32) ((u32) v0 << 3);
    (*(volatile u8 *) (u32) (s4 + 2)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (v1 + 1));
    v0 = (s64) ((u64) v0 << 56);
    v0 = (s64) ((u64) v0 >> 63);
    if (v0 == 0) { v0 = 0; goto L_002CE440; }
    v0 = 128;
L_002CE440:;
    (*(volatile u8 *) (u32) (s4 + 3)) = (u8) v0;
    v0 = 255;
    (*(volatile u8 *) (u32) (s4 + 3)) = (u8) v0;
L_002CE44C:;
    v0 = 1;
L_002CE450:;
    return v0;
}
