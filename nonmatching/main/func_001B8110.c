/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001B70A0(s32, s32, s32, s32, f32);
void func_001D7840(s32, s32);
void func_001DEF30(s32, s32);
s32 func_001F08B0(s32);
void func_002E19B0(s32, s32);
void memcpy(s32, s32, s32);
void memset(s32, s32, s32);
s32 strcmp(s32, s32);

void func_001B8110(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };

    s5 = a1;
    s4 = a0;
    if (s4 == 0) goto L_001B8328;
    if (s5 == 0) goto L_001B8328;
    at = s5 < 14;
    if (at == 0) goto L_001B8328;
    v0 = (s32) 0x520000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 10632));
    if (v0 != 0) goto L_001B8170;
    v1 = 1;
    v0 = (s32) 0x520000U;
    (*(volatile u32 *) (u32) (v0 + 10636)) = (u32) v1; func_001B70A0(a0, a1, a2, a3, f12.f);
L_001B8170:;
    s0 = (s32) 0x520000U;
    s1 = 0;
    s0 = (s32) ((u32) s0 + 0x2980U);
L_001B817C:;
    a0 = (s32) ((u32) s0 + 0x70U);
    a1 = 0;
    a2 = 128; memset(a0, a1, a2);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 24;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x80U); if (c_) goto L_001B817C; }
    func_001B70A0(a0, a1, a2, a3, f12.f);
    { s32 c_ = s5 <= 0; s3 = 0; if (c_) goto L_001B8328; }
L_001B81AC:;
    s0 = (*(volatile s32 *) (u32) s4);
    at = (u64) s0 < (u64) (s64) 15;
    { s32 c_ = at == 0; s1 = (*(volatile s32 *) (u32) (s4 + 4)); if (c_) goto L_001B81E0; }
    v1 = (s32) 0x3d0000U;
    v0 = (s32) ((u32) s0 << 2);
    v1 = (s32) ((u32) v1 + 0x14d0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x1b81d8U) goto L_001B81D8; if (t_ == 0x1b81e0U) goto L_001B81E0; }
L_001B81D8:;
    v1 = 1; goto L_001B81E8;
L_001B81E0:;
    v1 = 0;
L_001B81E8:;
    v0 = 1;
    if (v1 != v0) goto L_001B82A0;
    v0 = (s32) 0x6c0000U;
    a0 = v0 | 0x23; v0 = func_001F08B0(a0);
    a0 = s1;
    a1 = v0; v0 = strcmp(a0, a1);
    if (v0 == 0) goto L_001B8258;
    v0 = (s32) 0x6c0000U;
    a0 = v0 | 0x29; v0 = func_001F08B0(a0);
    a0 = s1;
    a1 = v0; v0 = strcmp(a0, a1);
    if (v0 == 0) goto L_001B8258;
    v0 = (s32) 0x6c0000U;
    a0 = v0 | 0x28; v0 = func_001F08B0(a0);
    a0 = s1;
    a1 = v0; v0 = strcmp(a0, a1);
    if (v0 != 0) goto L_001B8260;
L_001B8258:;
    v1 = 0; goto L_001B8268;
L_001B8260:;
    v1 = 1;
L_001B8268:;
    v0 = 1;
    if (v1 != v0) goto L_001B82A0;
    if (s1 == 0) goto L_001B82A0;
    v0 = (s32) 0x520000U;
    v1 = (s32) ((u32) s0 << 7);
    v0 = (s32) ((u32) v0 + 0x2980U);
    a1 = s1;
    v0 = (s32) ((u32) v0 + (u32) v1);
    a2 = 128;
    a0 = (s32) ((u32) v0 + 0x70U); memcpy(a0, a1, a2);
L_001B82A0:;
    s1 = (s32) 0x520000U;
    s1 = (s32) ((u32) s1 + 0x2980U);
    s2 = 0;
    s0 = s1;
L_001B82B0:;
    a0 = (*(volatile s32 *) (u32) (s1 + 16));
    if (a0 == 0) goto L_001B82C8;
    a1 = 0; func_001DEF30(a0, a1);
L_001B82C8:;
    a0 = (*(volatile s32 *) (u32) (s1 + 3280));
    if (a0 == 0) goto L_001B82E0;
    a1 = 0; func_001DEF30(a0, a1);
L_001B82E0:;
    a0 = (s32) ((u32) s0 + 0x1930U);
    a1 = 0; func_002E19B0(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    s1 = (s32) ((u32) s1 + 0x4U);
    v0 = s2 < 24;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x24U); if (c_) goto L_001B82B0; }
    v0 = (s32) 0x520000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 10624));
    a1 = 0; func_001D7840(a0, a1);
    func_001B70A0(a0, a1, a2, a3, f12.f);
    s3 = (s32) ((u32) s3 + 0x1U);
    v1 = s3 < s5;
    { s32 c_ = v1 != 0; s4 = (s32) ((u32) s4 + 0x8U); if (c_) goto L_001B81AC; }
L_001B8328:;
    return;
}
