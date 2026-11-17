/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00130000(s32, s32, s32, s32, f32);
void func_00131AC0(s32, s32);
void func_00131B00(s32);
void func_001321F0(s32, s32);
void func_00132800(s32, s32);
s32 func_00141000(s32);

void func_0017CA70(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };

    at = (u64) 0 < (u64) a4;
    s3 = a0;
    s2 = a1;
    s1 = a3;
    s0 = a5;
    { s32 c_ = at == 0; a5 = 0; if (c_) goto L_0017CAF0; }
    a3 = 0;
    v1 = -1;
L_0017CAAC:;
    v0 = (s32) ((u32) a3 + 0x110U);
    v0 = (s32) ((u32) s2 + (u32) v0);
    (*(volatile u32 *) (u32) (a1 + 260)) = (u32) v0;
    a0 = (*(volatile s16 *) (u32) a2);
    if (a0 == v1) goto L_0017CB5C;
    v0 = (s32) ((u32) a0 << 4);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) ((u32) v0 << 4);
    v0 = (s32) ((u32) s2 + (u32) v0);
    (*(volatile u32 *) (u32) (a1 + 264)) = (u32) v0;
L_0017CAD8:;
    a5 = (s32) ((u32) a5 + 0x1U);
    v0 = (u64) a5 < (u64) a4;
    a3 = (s32) ((u32) a3 + 0x110U);
    a1 = (s32) ((u32) a1 + 0x110U);
    { s32 c_ = v0 != 0; a2 = (s32) ((u32) a2 + 0x2U); if (c_) goto L_0017CAAC; }
L_0017CAF0:;
    v0 = (s32) ((u32) a5 << 4);
    v0 = (s32) ((u32) v0 + (u32) a5);
    a0 = s3;
    v0 = (s32) ((u32) v0 << 4);
    v0 = (s32) ((u32) v0 + (u32) s2);
    (*(volatile u32 *) (u32) (v0 + -12)) = (u32) 0; func_00131B00(a0);
    a0 = s3;
    a1 = s2; func_00131AC0(a0, a1);
    a0 = s0; v0 = func_00141000(a0);
    a0 = s2;
    a1 = v0; func_00132800(a0, a1);
    a0 = s0; v0 = func_00141000(a0);
    a0 = s3;
    a1 = v0; func_001321F0(a0, a1);
    if (s1 == 0) goto L_0017CB68;
    a0 = s3;
    a1 = s1; func_00130000(a0, a1, a2, a3, f12.f);
    goto L_0017CB68;
L_0017CB5C:;
    (*(volatile u32 *) (u32) (a1 + 264)) = (u32) 0; goto L_0017CAD8;
L_0017CB68:;
    return;
}
