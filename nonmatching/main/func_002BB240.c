/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_002BB910(f32, f32);
s64 func_00BBBEE0(s64, s64, s64, s64);
s64 func_00BBBF40(s64, s64, s64, s64);
s64 func_00BBBFA0(s64, s64, s64, s64);

s64 func_002BB240(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12, f32 fa13) {
    s64 v0 = 0, v1 = 0, s0 = 0;
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };

    v0 = (s32) 0x5e0000U;
    v1 = (s32) 0x5e0000U;
    a1 = (*(volatile s32 *) (u32) (v0 + 12200));
    s0 = (s64) ((u64) 0 + (u64) (s64) 1);
    v0 = (s32) 0x5e0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 12192));
    v0 = a0 & 0x4;
    { s32 c_ = v0 != 0; (*(volatile u32 *) (u32) (v1 + 12664)) = (u32) a1; if (c_) goto L_002BB2E8; }
    v0 = a0 & 0x1;
    if (v0 != 0) goto L_002BB304;
    v0 = a0 & 0x2;
    if (v0 == 0) goto L_002BB29C;
    v1 = (s32) 0x5e0000U;
    v0 = (s32) 0x5e0000U;
    a0 = (*(volatile u8 *) (u32) (v0 + 12513));
    a1 = (*(volatile u8 *) (u32) (v1 + 12225)); v0 = func_00BBBEE0(a0, a1, a2, a3);
L_002BB29C:;
    v1 = s0 & 0xff;
L_002BB2A0:;
    v0 = 1;
    if (v1 == v0) goto L_002BB320;
L_002BB2AC:;
    v1 = (s32) 0x5e0000U;
    v0 = (s32) 0x5e0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 12668));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (v0 + 12668)) = (u32) v1; v0 = func_002BB910(f12.f, f13.f);
    v0 = (s32) 0x5e0000U;
    v1 = (s32) 0x5e0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 12152));
    v1 = (s32) ((u32) v1 + 0x2f7cU);
    a0 = (s32) ((u32) a0 << 2);
    v0 = 1;
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) v1) = (u32) 0; goto L_002BB338;
L_002BB2E8:;
    v1 = (s32) 0x5e0000U;
    v0 = (s32) 0x5e0000U;
    a0 = (*(volatile u8 *) (u32) (v0 + 12513));
    a1 = (*(volatile u8 *) (u32) (v1 + 12225)); v0 = func_00BBBF40(a0, a1, a2, a3);
    v1 = s0 & 0xff; goto L_002BB2A0;
L_002BB304:;
    v1 = (s32) 0x5e0000U;
    v0 = (s32) 0x5e0000U;
    a0 = (*(volatile u8 *) (u32) (v0 + 12513));
    a1 = (*(volatile u8 *) (u32) (v1 + 12225)); v0 = func_00BBBFA0(a0, a1, a2, a3);
    s0 = v0 & 0xff; goto L_002BB29C;
L_002BB320:;
    v1 = (s32) 0x5e0000U;
    v0 = (s32) 0x5e0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 12192));
    v1 = v1 | 0x8;
    (*(volatile u32 *) (u32) (v0 + 12192)) = (u32) v1; goto L_002BB2AC;
L_002BB338:;
    return v0;
}
