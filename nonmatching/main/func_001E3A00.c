/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Heap_Alloc(s32, s32, s32, s32);
s32 func_001DCCF0(s32);
s32 func_001E3B40(s32);
s32 func_001E3C50(s32, s32);
s32 func_001E3FF0(s32, s32);

s32 func_001E3A00(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };

    v0 = (s32) 0x530000U;
    s2 = a0;
    a0 = (*(volatile s32 *) (u32) (v0 + -20784));
    a1 = 48; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    v1 = (s32) 0x530000U;
    a0 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v1 + -20780)) = (u32) v0;
    a4 = (s32) 0x530000U;
    a5 = (*(volatile s32 *) (u32) (s2 + 24));
    v1 = (s32) 0x530000U;
    s0 = (*(volatile s32 *) (u32) (a0 + -20780));
    a3 = (s32) 0x530000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -20784));
    a2 = (s32) 0x530000U;
    a1 = (s32) 0x530000U;
    s1 = 0;
    (*(volatile u32 *) (u32) (a4 + -20768)) = (u32) a5;
    a0 = (*(volatile s32 *) (u32) (s2 + 8));
    v1 = 0 < v1;
    (*(volatile u32 *) (u32) (a3 + -20764)) = (u32) a0;
    f1.f = (*(volatile f32 *) (u32) (s2 + 44));
    f0.f = (*(volatile f32 *) (u32) (s2 + 48));
    (*(volatile f32 *) (u32) (a2 + -20732)) = f1.f;
    { s32 c_ = v1 != 0; (*(volatile f32 *) (u32) (a1 + -20728)) = f0.f; if (c_) goto L_001E3A84; }
L_001E3A7C:;
    goto L_001E3B20;
L_001E3A84:;
    v0 = (s32) 0x530000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -20768)); v0 = func_001DCCF0(a0);
    v1 = (s32) 0x530000U;
    a0 = (*(volatile s32 *) (u32) (v1 + -21008));
    if (a0 == 0) goto L_001E3AF8;
    v1 = 1;
    if (a0 == v1) goto L_001E3AB8;
    goto L_001E3B00;
L_001E3AB8:;
    v0 = (s32) 0x530000U;
    v1 = (*(volatile s32 *) (u32) (v0 + -21000));
    v0 = 32;
    if (v1 != v0) goto L_001E3AE0;
    a0 = s2;
    a1 = s0; v0 = func_001E3FF0(a0, a1);
    goto L_001E3B00;
L_001E3AE0:;
    a0 = s2;
    a1 = s0; v0 = func_001E3C50(a0, a1);
    goto L_001E3B00;
L_001E3AF8:;
    a0 = s0; v0 = func_001E3B40(a0);
L_001E3B00:;
    v1 = (s32) 0x530000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -20784));
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < v1;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x30U); if (c_) goto L_001E3A84; }
    goto L_001E3A7C;
L_001E3B20:;
    return v0;
}
