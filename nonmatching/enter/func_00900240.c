/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Heap_Alloc(s32, s32, s32, s32);
s32 func_009001C0(s32, s32, s32, s32);

s32 func_00900240(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s32 fcc = 0;

    v1 = (s32) 0x930000U;
    v0 = (s32) 0x930000U;
    v1 = (s32) ((u32) v1 + 0xffffc660U);
    s4 = (s32) 0x930000U;
    s4 = (s32) ((u32) s4 + 0xfffff0acU);
    a0 = (*(volatile s32 *) (u32) (v0 + -3892));
    a0 = (s32) ((u32) a0 << 2);
    v0 = 8;
    v1 = (s32) ((u32) v1 + (u32) a0);
    s2 = (*(volatile s32 *) (u32) v1);
    v1 = (*(volatile s32 *) (u32) s2);
    { s32 c_ = v1 == v0; s3 = 0; if (c_) goto L_00900378; }
L_00900290:;
    a0 = 1;
    a1 = 12; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    s1 = v0;
    v0 = s3 & 0xff;
    v0 = (s32) ((u32) v0 << 4);
    s0 = (s32) ((u32) s2 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) s0); v0 = func_009001C0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) s1) = (u32) v0;
    v1 = (*(volatile u8 *) (u32) (s0 + 4));
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (s1 + 4)) = (u8) v1;
    v0 = (*(volatile u8 *) (u32) (v0 + 7140));
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_009002DC; }
    f0.i = (s32) v0;
    f2.f = (f32) f0.i; goto L_009002F4;
L_009002DC:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f2.f = (f32) f0.i;
    f2.f = f2.f + f2.f;
L_009002F4:;
    f1.f = (*(volatile f32 *) (u32) (s0 + 8));
    v0 = (s32) 0x4f000000U;
    f0.i = (s32) v0;
    f1.f = f2.f * f1.f;
    fcc = f0.f <= f1.f;
    if (fcc) { f0.f = f1.f - f0.f; goto L_00900324; }
    f0.i = (s32) f1.f;
    v1 = f0.i;
    v1 = v1 & 0xff; goto L_0090033C;
L_00900324:;
    v0 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    v1 = f0.i;
    v1 = v1 | v0;
    v1 = v1 & 0xff;
L_0090033C:;
    (*(volatile u8 *) (u32) (s1 + 5)) = (u8) v1;
    v0 = (s32) ((u32) s3 + 0x1U);
    a0 = (*(volatile u8 *) (u32) (s0 + 12));
    s3 = v0 & 0xff;
    v1 = (s32) ((u32) s3 << 4);
    v0 = 8;
    v1 = (s32) ((u32) s2 + (u32) v1);
    (*(volatile u8 *) (u32) (s1 + 6)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (s0 + 13));
    (*(volatile u8 *) (u32) (s1 + 7)) = (u8) a0;
    (*(volatile u32 *) (u32) (s1 + 8)) = (u32) 0;
    (*(volatile u32 *) (u32) s4) = (u32) s1;
    v1 = (*(volatile s32 *) (u32) v1);
    { s32 c_ = v1 != v0; s4 = (s32) ((u32) s1 + 0x8U); if (c_) goto L_00900290; }
L_00900378:;
    a0 = (s32) 0x900000U;
    v0 = (s32) 0x930000U;
    a0 = (s32) ((u32) a0 + 0xfffffe30U);
    v1 = (s32) 0x930000U;
    (*(volatile u8 *) (u32) (v0 + -3920)) = (u8) 0;
    (*(volatile u32 *) (u32) (v1 + -3928)) = (u32) a0;
    v0 = 1;
    return v0;
}
