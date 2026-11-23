/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001CDAA0(void);

f32 func_00264900(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };

    v0 = (s32) 0x3f800000U;
    s0 = a0;
    at = (u64) s0 < (u64) (s64) 8;
    f20.i = (s32) v0;
    if (at == 0) { v0 = (s32) 0x42700000U; goto L_00264988; }
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) s0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff92f0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x264944U) goto L_00264944; if (t_ == 0x264954U) goto L_00264954; if (t_ == 0x264964U) goto L_00264964; if (t_ == 0x264974U) goto L_00264974; if (t_ == 0x264984U) goto L_00264984; if (t_ == 0x264994U) goto L_00264994; }
L_00264944:;
    v0 = (s32) 0x41f00000U;
    f0.i = (s32) v0;
    f20.f = f20.f * f0.f;
L_00264954:;
    v0 = (s32) 0x41c00000U;
    f0.i = (s32) v0;
    f20.f = f20.f * f0.f;
L_00264964:;
    v0 = (s32) 0x42700000U;
    f0.i = (s32) v0;
    f20.f = f20.f * f0.f;
L_00264974:;
    v0 = (s32) 0x42700000U;
    f0.i = (s32) v0;
    f20.f = f20.f * f0.f;
L_00264984:;
    v0 = (s32) 0x42700000U;
L_00264988:;
    f0.i = (s32) v0;
    f20.f = f20.f * f0.f;
L_00264994:;
    v0 = func_001CDAA0();
    if (v0 != 0) goto L_002649AC;
    v0 = 60; goto L_002649C8;
L_002649AC:;
    v0 = func_001CDAA0();
    v1 = 1;
    if (v0 != v1) { v0 = 0; goto L_002649C8; }
    v0 = 50; goto L_002649C8;
L_002649C8:;
    f0.i = (s32) v0;
    at = s0 < 6;
    f0.f = (f32) f0.i;
    { s32 c_ = at != 0; f20.f = f20.f * f0.f; if (c_) goto L_002649F8; }
    v0 = (s32) 0x3dcc0000U;
    at = s0 < 7;
    v0 = v0 | 0xcccd;
    f0.i = (s32) v0;
    { s32 c_ = at != 0; f20.f = f20.f * f0.f; if (c_) goto L_002649F8; }
    f20.f = f20.f * f0.f;
L_002649F8:;
    f0.i = f20.i;
    return f0.f;
}
