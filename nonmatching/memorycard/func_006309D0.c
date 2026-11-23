/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Sprite_SetPositionZ(s64, f32);
s64 func_001CDA50(s64);
s64 func_001D5A10(s64);
void func_001D7D60(s64, s64);
void func_001D7D80(s64, s64, s64, s64);
void func_001D7E40(s64, s64, s64, s64);
void func_001D7F10(s64, s64, s64, s64);
s64 func_001D7F90(s64, s64, s64, s64);
s64 func_001F08B0(s64);
s64 func_0063AD90(s64, s64, s64, s64);
void func_00654B50(s64);
void sprintf(s64, s64, s64, s64, s64, s64, s64, s64);

void func_006309D0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7, f32 fa12) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };

    s1 = (s32) 0x660000U;
    v1 = (*(volatile u8 *) (u32) (gp + -21022));
    s1 = (s32) ((u32) s1 + 0xffffd070U);
    { s32 c_ = v1 == 0; s0 = (s32) ((u32) gp + 0xffffade0U); if (c_) goto L_00630B9C; }
    v1 = (*(volatile u8 *) (u32) (s0 + 1));
    { s32 c_ = v1 != 0; (*(volatile u8 *) (u32) (s0 + 2)) = (u8) 0; if (c_) goto L_00630A2C; }
    a0 = (*(volatile s32 *) (u32) s1);
    if (a0 == 0) { (*(volatile u32 *) (u32) (s1 + 4)) = (u32) 0; goto L_00630B9C; }
    func_001D7F10(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) s1) = (u32) 0;
    (*(volatile u32 *) (u32) (s1 + 4)) = (u32) 0;
    goto L_00630B9C;
L_00630A2C:;
    v0 = (*(volatile s32 *) (u32) s1);
    if (v0 != 0) { v1 = (*(volatile u8 *) (u32) s0); goto L_00630A88; }
    v0 = (s32) 0x10000U;
    a0 = v0 | 0x383; v0 = func_001D5A10(a0);
    a0 = v0; v0 = func_001D7F90(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) s1) = (u32) v0;
    a0 = v0;
    a1 = 0; func_001D7E40(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) s1);
    a1 = 1; func_001D7D60(a0, a1);
    v0 = (s32) 0x443b0000U;
    v0 = v0 | 0x8000;
    f12.i = (s32) v0;
    a0 = (*(volatile s32 *) (u32) s1); Pes6Sprite_SetPositionZ(a0, f12.f);
    a0 = 0; func_00654B50(a0);
    v1 = (*(volatile u8 *) (u32) s0);
L_00630A88:;
    v0 = 7;
    if (v1 != v0) { v0 = 8; goto L_00630AA8; }
    v0 = (s32) 0x660000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -24248)); v0 = func_001F08B0(a0);
    s2 = v0; goto L_00630B40;
L_00630AA8:;
    if (v1 != v0) { v1 = v1 ^ 0x1; goto L_00630AC4; }
    v0 = (s32) 0x660000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -24244)); v0 = func_001F08B0(a0);
    s2 = v0; goto L_00630B40;
L_00630AC4:;
    v0 = (s32) 0x660000U;
    v1 = (u64) v1 < (u64) (s64) 1;
    v0 = (s32) ((u32) v0 + 0xffffa140U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_001F08B0(a0);
    a0 = (*(volatile u8 *) (u32) s0);
    s2 = v0;
    v0 = a0 < 2;
    if (v0 != 0) { a0 = 1; goto L_00630B44; }
    v1 = (s32) 0x660000U;
    v0 = (s32) 0x660000U;
    v1 = (s32) ((u32) v1 + 0xffff8280U);
    v0 = (s32) ((u32) v0 + 0xffffa120U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_001F08B0(a0);
    a0 = (s32) 0x660000U;
    a1 = (s32) 0x660000U;
    a2 = v0;
    a3 = s2;
    a0 = (s32) ((u32) a0 + 0xffffcff0U);
    a1 = (s32) ((u32) a1 + 0xffffaeb8U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    s2 = (s32) 0x660000U;
    s2 = (s32) ((u32) s2 + 0xffffcff0U);
L_00630B40:;
    a0 = 1;
L_00630B44:;
    v0 = func_001CDA50(a0);
    v1 = 5;
    if (v0 == v1) { s3 = 0; goto L_00630B5C; }
    s3 = (s64) ((u64) 0 + (u64) (s64) 1);
L_00630B5C:;
    v0 = (*(volatile u8 *) (u32) s0);
    v0 = v0 < 2;
    if (v0 != 0) { a0 = (*(volatile s32 *) (u32) s1); goto L_00630B78; }
    v0 = (s32) ((u32) s3 + 0x2U);
    s3 = v0 & 0xff;
    a0 = (*(volatile s32 *) (u32) s1);
L_00630B78:;
    a3 = s2;
    a2 = s3 & 0xff;
    a1 = (s32) ((u32) s1 + 0x4U); v0 = func_0063AD90(a0, a1, a2, a3);
    if (v0 == 0) goto L_00630B9C;
    a0 = (*(volatile s32 *) (u32) s1);
    a1 = s3 & 0xff; func_001D7D80(a0, a1, a2, a3);
L_00630B9C:;
    return;
}
