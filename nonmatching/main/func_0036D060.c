/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_0028F9D0(s64, s64, s64);
s64 func_00292F30(s64, s64);
s64 func_002C7280(s64, s64);
f32 func_002C7390(s64, s64);
void func_002CA0F0(s64);
s64 func_008BE070(s64, s64, s64, s64);

void func_0036D060(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    s64 frame[18];
    s64 sp = (s32) (u32) frame;

    s3 = a0;
    s0 = a1 & 0xff;
    at = s0 < 33;
    { s32 c_ = at == 0; s2 = a2; if (c_) goto L_0036D1E0; }
    a0 = (s32) ((u32) sp + 0x50U); func_002CA0F0(a0);
    { s32 c_ = s0 <= 0; s1 = 0; if (c_) goto L_0036D1E0; }
L_0036D09C:;
    (*(volatile u32 *) (u32) s2) = (u32) 0;
    a1 = s1 & 0xff;
    (*(volatile u32 *) (u32) (s2 + 4)) = (u32) 0;
    a0 = s3;
    (*(volatile u32 *) (u32) (s2 + 8)) = (u32) 0;
    a2 = 1;
    (*(volatile u8 *) (u32) (s2 + 16)) = (u8) 0;
    a3 = (s32) ((u32) sp + 0x60U);
    (*(volatile u32 *) (u32) (s2 + 12)) = (u32) 0;
    (*(volatile u8 *) (u32) (s2 + 17)) = (u8) 0;
    (*(volatile u8 *) (u32) (s2 + 18)) = (u8) 0;
    (*(volatile u8 *) (u32) (s2 + 19)) = (u8) 0;
    (*(volatile u8 *) (u32) (s2 + 20)) = (u8) 0; v0 = func_008BE070(a0, a1, a2, a3);
    if (v0 == 0) goto L_0036D1D0;
    a0 = (s32) ((u32) sp + 0x60U);
    a1 = 0; f0.f = func_002C7390(a0, a1);
    f0.i = (s32) f0.f;
    a0 = (s32) ((u32) sp + 0x60U);
    a1 = 3;
    v0 = f0.i;
    (*(volatile u32 *) (u32) s2) = (u32) v0; f0.f = func_002C7390(a0, a1);
    f0.i = (s32) f0.f;
    a0 = (s32) ((u32) sp + 0x60U);
    a1 = 5;
    v0 = f0.i;
    (*(volatile u32 *) (u32) (s2 + 4)) = (u32) v0; f0.f = func_002C7390(a0, a1);
    f0.i = (s32) f0.f;
    a0 = (s32) ((u32) sp + 0x50U);
    a1 = (s32) ((u32) sp + 0x60U);
    v0 = f0.i;
    (*(volatile u32 *) (u32) (s2 + 8)) = (u32) v0;
    v0 = (*(volatile u8 *) (u32) (sp + 97));
    v0 = (s64) ((u64) v0 << 56);
    v0 = (s64) ((u64) v0 >> 60);
    (*(volatile u8 *) (u32) (s2 + 16)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (sp + 97));
    v0 = (s64) ((u64) v0 << 56);
    a2 = (s64) ((u64) v0 >> 60); v0 = func_0028F9D0(a0, a1, a2);
    (*(volatile u32 *) (u32) (s2 + 12)) = (u32) v0;
    a0 = (s32) ((u32) sp + 0x60U);
    a1 = 2; v0 = func_002C7280(a0, a1);
    if (v0 == 0) goto L_0036D178;
    v0 = (*(volatile u8 *) (u32) (s2 + 17));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (s2 + 17)) = (u8) v0;
L_0036D178:;
    a0 = (s32) ((u32) sp + 0x60U);
    a1 = 1; v0 = func_002C7280(a0, a1);
    if (v0 == 0) goto L_0036D198;
    v0 = (*(volatile u8 *) (u32) (s2 + 18));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (s2 + 18)) = (u8) v0;
L_0036D198:;
    a0 = (s32) ((u32) sp + 0x60U);
    a1 = 8; v0 = func_00292F30(a0, a1);
    if (v0 != 0) goto L_0036D1C0;
    a0 = (s32) ((u32) sp + 0x60U);
    a1 = 10; v0 = func_00292F30(a0, a1);
    if (v0 == 0) goto L_0036D1D0;
L_0036D1C0:;
    v1 = (*(volatile u8 *) (u32) (s2 + 17));
    (*(volatile u8 *) (u32) (s2 + 19)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (s2 + 18));
    (*(volatile u8 *) (u32) (s2 + 20)) = (u8) v1;
L_0036D1D0:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < s0;
    { s32 c_ = v1 != 0; s2 = (s32) ((u32) s2 + 0x18U); if (c_) goto L_0036D09C; }
L_0036D1E0:;
    return;
}
