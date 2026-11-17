/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00209540(s64, s64, s64);
s64 func_009B33A0(s64, s64, s64);

s64 func_00BD5880(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12, f32 fa13) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };

    s2 = a0;
    s1 = 0;
    v0 = (*(volatile s32 *) (u32) (a0 + 4));
    v0 = (*(volatile u8 *) (u32) (v0 + 12));
    { s32 c_ = v0 != 0; s0 = 0; if (c_) goto L_00BD58B4; }
    v0 = 0; goto L_00BD58CC;
L_00BD58B4:;
    f0.i = (s32) f12.f;
    a1 = f0.i;
    f0.i = (s32) f13.f;
    a2 = f0.i;
    a0 = (*(volatile s32 *) (u32) s2); v0 = func_009B33A0(a0, a1, a2);
L_00BD58CC:;
    a2 = (*(volatile s32 *) (u32) s2);
    a0 = (s32) 0xcb0000U;
    a3 = 0;
    a0 = (s32) ((u32) a0 + 0x2418U);
    a1 = (*(volatile s32 *) (u32) (a2 + 28));
L_00BD58E0:;
    v1 = a3 & 0xff;
    v1 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = (*(volatile u16 *) (u32) v1);
    at = v1 < a1;
    if (at == 0) goto L_00BD5960;
    a3 = (s32) ((u32) a3 + 0x1U);
    v1 = a3 < 6;
    if (v1 != 0) goto L_00BD58E0;
    v1 = 2; goto L_00BD5964;
L_00BD5914:;
    if (at == 0) goto L_00BD5950;
    s0 = (s64) ((u64) 0 + (u64) (s64) 1161); goto L_00BD5950;
L_00BD5924:;
    at = (s32) 0x20000U;
    at = at | 0x4000;
    at = (u64) v0 < (u64) at;
    if (at == 0) goto L_00BD5950;
    s0 = (s64) ((u64) 0 + (u64) (s64) 1117); goto L_00BD5950;
L_00BD5940:;
    at = (u64) v0 < (u64) at;
    if (at == 0) goto L_00BD5950;
    s0 = (s64) ((u64) 0 + (u64) (s64) 1163);
L_00BD5950:;
    if (s0 != 0) { a0 = (*(volatile s32 *) (u32) (a2 + 4)); goto L_00BD5988; }
L_00BD5958:;
    v0 = s1; goto L_00BD599C;
L_00BD5960:;
    v1 = 2;
L_00BD5964:;
    if (a3 == v1) goto L_00BD5924;
    v1 = 1;
    if (a3 == v1) goto L_00BD5924;
    if (a3 == 0) { at = (u64) v0 < (u64) (s64) 16384; goto L_00BD5914; }
    at = (s32) 0x90000U; goto L_00BD5940;
L_00BD5988:;
    a1 = s0;
    a2 = 0; func_00209540(a0, a1, a2);
    s1 = 1; goto L_00BD5958;
L_00BD599C:;
    return v0;
}
