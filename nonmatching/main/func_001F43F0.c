/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001DD310(void);
void strncpy(s64, s64, s64);

s64 func_001F43F0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };

    s5 = a0;
    s4 = a1;
    s3 = a2;
    s2 = a3;
    { s32 c_ = s5 != s4; s1 = a4; if (c_) goto L_001F4430; }
    v0 = 0; goto L_001F454C;
L_001F4430:;
    v0 = func_001DD310();
    at = s5 < v0;
    if (at == 0) { v0 = 0; goto L_001F454C; }
    v0 = s4 < v0;
    if (v0 != 0) { v0 = 0; goto L_001F454C; }
    v1 = s2 & 0xff;
    v0 = 2;
    if (v1 != v0) goto L_001F446C;
    if (s1 != 0) goto L_001F446C;
    s2 = (s64) ((u64) 0 + (u64) (s64) 1);
L_001F446C:;
    v1 = (s32) 0x530000U;
    a0 = 0;
    v1 = (s32) ((u32) v1 + 0xffffb260U);
L_001F4478:;
    v0 = (*(volatile u8 *) (u32) (v1 + 20));
    if (v0 == 0) goto L_001F4498;
    a0 = (s32) ((u32) a0 + 0x1U);
    v0 = a0 < 8;
    { s32 c_ = v0 != 0; v1 = (s32) ((u32) v1 + 0x18U); if (c_) goto L_001F4478; }
L_001F4498:;
    v0 = (s32) ((u32) a0 << 1);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) 0x530000U;
    s0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) v1 + 0xffffb260U);
    v0 = (s32) 0x530000U;
    a1 = (s32) ((u32) v1 + (u32) s0);
    v0 = (s32) ((u32) v0 + 0xffffb264U);
    (*(volatile u32 *) (u32) a1) = (u32) s5;
    v1 = (s32) ((u32) v0 + (u32) s0);
    v0 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) v1) = (u32) s4;
    v0 = (s32) ((u32) v0 + 0xffffb274U);
    v0 = (s32) ((u32) v0 + (u32) s0);
    { s32 c_ = s1 == 0; (*(volatile u8 *) (u32) v0) = (u8) s2; if (c_) goto L_001F4524; }
    f1.f = (*(volatile f32 *) (u32) s1);
    v0 = (s32) 0x530000U;
    f0.f = (*(volatile f32 *) (u32) (s1 + 4));
    v0 = (s32) ((u32) v0 + 0xffffb268U);
    v0 = (s32) ((u32) v0 + (u32) s0);
    (*(volatile f32 *) (u32) v0) = f1.f;
    (*(volatile f32 *) (u32) (v0 + 4)) = f0.f;
L_001F44F4:;
    if (s3 == 0) goto L_001F451C;
    a0 = (s32) ((u32) a1 + 0x10U);
    a2 = 3;
    a1 = s3; strncpy(a0, a1, a2);
    v0 = (s32) 0x530000U;
    v0 = (s32) ((u32) v0 + 0xffffb273U);
    v0 = (s32) ((u32) v0 + (u32) s0);
    (*(volatile u8 *) (u32) v0) = (u8) 0;
L_001F451C:;
    v0 = 1; goto L_001F454C;
L_001F4524:;
    v0 = (s32) 0x530000U;
    a0 = (s32) 0x3f800000U;
    v0 = (s32) ((u32) v0 + 0xffffb268U);
    v1 = (s32) ((u32) v0 + (u32) s0);
    v0 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) v1) = (u32) a0;
    v0 = (s32) ((u32) v0 + 0xffffb26cU);
    v0 = (s32) ((u32) v0 + (u32) s0);
    (*(volatile u32 *) (u32) v0) = (u32) a0; goto L_001F44F4;
L_001F454C:;
    return v0;
}
