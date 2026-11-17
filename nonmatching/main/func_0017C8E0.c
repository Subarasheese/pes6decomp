/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Heap_Alloc(s32, s32, s32, s32);
s32 Pes6Heap_Free(s32, s32);
s32 func_00141380(s32);
s32 func_00141390(s32);
s32 func_0017CA70(s32, s32, s32, s32, s32, s32, f32, f32);

s32 func_0017C8E0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };

    s7 = a1;
    s5 = a0;
    s4 = 0;
    s2 = 0;
    v0 = (*(volatile s8 *) (u32) (a0 + 4));
    at = 0 < v0;
    { s32 c_ = at == 0; s1 = 0; if (c_) goto L_0017C968; }
    s0 = 0;
L_0017C930:;
    v0 = (*(volatile s32 *) (u32) (s5 + 20));
    v0 = (s32) ((u32) v0 + (u32) s0);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_00141390(a0);
    v0 = s4 < v0;
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) (s5 + 20)); goto L_0017CA28; }
L_0017C950:;
    v0 = (*(volatile s8 *) (u32) (s5 + 4));
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < v0;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x8U); if (c_) goto L_0017C930; }
L_0017C968:;
    v0 = (*(volatile s32 *) (u32) (s5 + 20));
    s6 = (s32) ((u32) s1 << 3);
    v0 = (s32) ((u32) v0 + (u32) s6);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_00141380(a0);
    v1 = (*(volatile s8 *) (u32) (s5 + 3));
    fp = v0;
    at = 0 < v1;
    { s32 c_ = at == 0; s1 = 0; if (c_) goto L_0017CA20; }
    s2 = 0;
L_0017C994:;
    v0 = (*(volatile s32 *) (u32) (s5 + 12));
    s0 = (s32) ((u32) v0 + (u32) s2);
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    if (a0 == 0) goto L_0017C9B0;
    v0 = Pes6Heap_Free(a0, a1);
L_0017C9B0:;
    a0 = 1;
    a1 = 32; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    s3 = v0;
    (*(volatile u32 *) (u32) (s0 + 4)) = (u32) s3;
    a0 = (*(volatile s32 *) (u32) s0);
    if (a0 == 0) goto L_0017C9D8;
    v0 = Pes6Heap_Free(a0, a1);
L_0017C9D8:;
    a0 = s4;
    a1 = 272; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) s0) = (u32) v0;
    a1 = v0;
    v1 = (*(volatile s32 *) (u32) (s5 + 20));
    a0 = s3;
    a2 = fp;
    a3 = s7;
    v0 = (s32) ((u32) s6 + (u32) v1);
    a5 = (*(volatile s32 *) (u32) (v0 + 4));
    a4 = s4; v0 = func_0017CA70(a0, a1, a2, a3, a4, a5, f12.f, f13.f);
    v1 = (*(volatile s8 *) (u32) (s5 + 3));
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < v1;
    { s32 c_ = v1 != 0; s2 = (s32) ((u32) s2 + 0x8U); if (c_) goto L_0017C994; }
L_0017CA20:;
    goto L_0017CA40;
L_0017CA28:;
    v0 = (s32) ((u32) v0 + (u32) s0);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_00141390(a0);
    s4 = v0;
    s1 = s2; goto L_0017C950;
L_0017CA40:;
    return v0;
}
