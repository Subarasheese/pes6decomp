/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0019FB60(s32);
s32 func_001A22F0(s32, s32, s32, s32);
s32 func_001A5670(f32);
s32 func_001FCF60(s32, s32, s32, s32, f32, f32, f32, f32);
s32 func_002A96D0(s32, s32, s32, s32, f32);
s32 func_002BC2A0(s32, s32, s32, s32);
s32 func_00B25220(s32, s32, s32, s32);

s32 func_00205200(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };
    union { f32 f; s32 i; } f14 = { fa14 };
    union { f32 f; s32 i; } f15 = { fa15 };

    v1 = a0 & 0xff;
    at = (u64) v1 < (u64) (s64) 34;
    if (at == 0) goto L_00205370;
    a0 = (s32) 0x3d0000U;
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0x4070U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x205230U) goto L_00205230; if (t_ == 0x205250U) goto L_00205250; if (t_ == 0x205260U) goto L_00205260; if (t_ == 0x205278U) goto L_00205278; if (t_ == 0x205288U) goto L_00205288; if (t_ == 0x205298U) goto L_00205298; if (t_ == 0x2052a8U) goto L_002052A8; if (t_ == 0x2052b8U) goto L_002052B8; if (t_ == 0x2052c8U) goto L_002052C8; if (t_ == 0x2052e8U) goto L_002052E8; if (t_ == 0x205300U) goto L_00205300; if (t_ == 0x205320U) goto L_00205320; if (t_ == 0x205330U) goto L_00205330; if (t_ == 0x205348U) goto L_00205348; if (t_ == 0x205358U) goto L_00205358; if (t_ == 0x205368U) goto L_00205368; if (t_ == 0x205370U) goto L_00205370; }
L_00205230:;
    v0 = func_00B25220(a0, a1, a2, a3);
    v0 = func_002A96D0(a0, a1, a2, a3, f12.f);
    v0 = func_001FCF60(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    goto L_00205374;
L_00205250:;
    v0 = func_002A96D0(a0, a1, a2, a3, f12.f);
    goto L_00205370;
L_00205260:;
    v1 = 3;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 10050)) = (u8) v1; v0 = func_001FCF60(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    goto L_00205370;
L_00205278:;
    v0 = func_002A96D0(a0, a1, a2, a3, f12.f);
    goto L_00205370;
L_00205288:;
    v0 = func_002A96D0(a0, a1, a2, a3, f12.f);
    goto L_00205370;
L_00205298:;
    v0 = func_002A96D0(a0, a1, a2, a3, f12.f);
    goto L_00205370;
L_002052A8:;
    v0 = func_002A96D0(a0, a1, a2, a3, f12.f);
    goto L_00205370;
L_002052B8:;
    v0 = func_002A96D0(a0, a1, a2, a3, f12.f);
    goto L_00205370;
L_002052C8:;
    v0 = func_002A96D0(a0, a1, a2, a3, f12.f);
    v0 = func_002BC2A0(a0, a1, a2, a3);
    f12.f = (*(volatile f32 *) (u32) (gp + -22964)); v0 = func_001A5670(f12.f);
    goto L_00205370;
L_002052E8:;
    v0 = func_002A96D0(a0, a1, a2, a3, f12.f);
    v0 = func_002BC2A0(a0, a1, a2, a3);
    goto L_00205370;
L_00205300:;
    v0 = func_0019FB60(a0);
    v0 = func_001A22F0(a0, a1, a2, a3);
    v0 = func_002A96D0(a0, a1, a2, a3, f12.f);
    goto L_00205370;
L_00205320:;
    v0 = func_002A96D0(a0, a1, a2, a3, f12.f);
    goto L_00205370;
L_00205330:;
    v0 = func_002A96D0(a0, a1, a2, a3, f12.f);
    v0 = func_001FCF60(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    goto L_00205370;
L_00205348:;
    v0 = func_002A96D0(a0, a1, a2, a3, f12.f);
    goto L_00205370;
L_00205358:;
    v0 = func_002A96D0(a0, a1, a2, a3, f12.f);
    goto L_00205370;
L_00205368:;
    v0 = func_002A96D0(a0, a1, a2, a3, f12.f);
L_00205370:;
L_00205374:;
    return v0;
}
