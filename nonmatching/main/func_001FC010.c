/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001FB8E0(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_001FB9A0(s32, s32, s32, s32, s32);
s32 func_001FBAB0(s32, s32, s32, s32);
s32 func_001FBBF0(s32, s32, s32, s32, f32);
s32 func_001FBDD0(s32, s32, s32, s32, s32, s32);
s32 func_002D3060(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_002D32A0(void);
s32 func_002D36B0(s32, s32, s32, s32);
s32 func_009E1C90(s32, s32, s32, s32);
s32 func_009E1CB0(s32, s32, s32, s32);
s32 func_009E1D30(s32, s32, s32, s32);

s32 func_001FC010(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    union { f32 f; s32 i; } f12 = { fa12 };

    a0 = 1;
    s0 = 0; v0 = func_009E1C90(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    at = (u64) v0 < (u64) (s64) 9;
    if (at == 0) { a0 = 1; goto L_001FC058; }
    v1 = (s32) 0x3d0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x3ec0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x1fc060U) goto L_001FC060; if (t_ == 0x1fc078U) goto L_001FC078; if (t_ == 0x1fc090U) goto L_001FC090; if (t_ == 0x1fc0a8U) goto L_001FC0A8; if (t_ == 0x1fc0c0U) goto L_001FC0C0; if (t_ == 0x1fc0d8U) goto L_001FC0D8; if (t_ == 0x1fc0f0U) goto L_001FC0F0; if (t_ == 0x1fc108U) goto L_001FC108; if (t_ == 0x1fc110U) goto L_001FC110; }
    a0 = 1;
L_001FC058:;
    a1 = 0; v0 = func_009E1D30(a0, a1, a2, a3);
L_001FC060:;
    v0 = func_002D3060(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = func_002D36B0(a0, a1, a2, a3);
    a0 = 1; v0 = func_009E1CB0(a0, a1, a2, a3);
L_001FC078:;
    v0 = func_001FBAB0(a0, a1, a2, a3);
    if (v0 == 0) { v0 = s0; goto L_001FC118; }
    a0 = 1; v0 = func_009E1CB0(a0, a1, a2, a3);
L_001FC090:;
    v0 = func_001FBBF0(a0, a1, a2, a3, f12.f);
    if (v0 == 0) goto L_001FC114;
    a0 = 1; v0 = func_009E1CB0(a0, a1, a2, a3);
L_001FC0A8:;
    v0 = func_001FB8E0(a0, a1, a2, a3, a4, a5, a6, a7);
    if (v0 == 0) goto L_001FC114;
    a0 = 1; v0 = func_009E1CB0(a0, a1, a2, a3);
L_001FC0C0:;
    v0 = func_001FBDD0(a0, a1, a2, a3, a4, a5);
    if (v0 == 0) goto L_001FC114;
    a0 = 1; v0 = func_009E1CB0(a0, a1, a2, a3);
L_001FC0D8:;
    a0 = 14; v0 = func_001FB9A0(a0, a1, a2, a3, a4);
    if (v0 == 0) goto L_001FC114;
    a0 = 1; v0 = func_009E1CB0(a0, a1, a2, a3);
L_001FC0F0:;
    v0 = func_002D32A0();
    if (v0 != 0) goto L_001FC114;
    a0 = 1; v0 = func_009E1CB0(a0, a1, a2, a3);
L_001FC108:;
    a0 = 1; v0 = func_009E1CB0(a0, a1, a2, a3);
L_001FC110:;
    s0 = 1;
L_001FC114:;
    v0 = s0;
L_001FC118:;
    return v0;
}
