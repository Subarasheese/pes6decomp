/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001F87E0(s32, s32);
void func_00204D90(s32, s32, s32, s32, f32, f32, f32, f32);
void func_00802910(s32, s32, s32, s32);
s32 func_0084A750(s32, s32, s32, s32);
void func_008550D0(s32, s32, s32, s32);
s32 func_00884040(s32, s32, s32, s32);
void func_00C74810(void);

void func_0030A3C0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s32 at = 0, v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7637));
    if (v0 == 0) goto L_0030A53C;
    v0 = func_0084A750(a0, a1, a2, a3);
    if (v0 == 0) goto L_0030A3F0;
    a0 = 5; func_00802910(a0, a1, a2, a3);
L_0030A3F0:;
    v0 = func_00884040(a0, a1, a2, a3);
    if (v0 == 0) { v1 = 0; goto L_0030A420; }
    a0 = 1;
    a1 = 16; v0 = func_001F87E0(a0, a1);
    if (v0 == 0) goto L_0030A41C;
    v1 = 1; goto L_0030A420;
L_0030A41C:;
    v1 = 0;
L_0030A420:;
    if (v1 == 0) { ; goto L_0030A574; }
    v0 = func_0084A750(a0, a1, a2, a3);
    if (v0 == 0) goto L_0030A570;
    a2 = 0;
    a1 = (s32) 0x5f0000U;
    a2 = (s32) ((u32) a2 + 0x1U);
    a0 = 9;
    v1 = (s32) 0x5f0000U;
    at = a2 < 4;
    a1 = (s32) ((u32) a1 + 0xfffffdc0U);
    { s32 c_ = at == 0; (*(volatile u32 *) (u32) (v1 + -576)) = (u32) a0; if (c_) goto L_0030A480; }
    v1 = (s32) ((u32) a2 << 2);
    a0 = (s32) ((u32) a1 + (u32) v1);
L_0030A464:;
    a2 = (s32) ((u32) a2 + 0x1U);
    (*(volatile u32 *) (u32) a0) = (u32) 0;
    v1 = a2 < 4;
    a0 = (s32) ((u32) a0 + 0x4U);
    if (v1 != 0) goto L_0030A464;
L_0030A480:;
    v1 = (s32) 0x3b0000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + 29088));
    a0 = (s32) 0x3b0000U;
    v1 = (s32) 0x3b0000U;
    f2.f = (*(volatile f32 *) (u32) (v1 + 29092));
    (*(volatile f32 *) (u32) (sp + 16)) = f0.f;
    v1 = (s32) 0x3b0000U;
    f1.f = (*(volatile f32 *) (u32) (v1 + 29096));
    (*(volatile f32 *) (u32) (sp + 20)) = f2.f;
    v1 = (s32) 0x3b0000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + 29100));
    (*(volatile f32 *) (u32) (sp + 24)) = f1.f;
    v1 = (s32) 0x3b0000U;
    f1.f = (*(volatile f32 *) (u32) (v1 + 29104));
    (*(volatile f32 *) (u32) (sp + 28)) = f0.f;
    v1 = (s32) 0x3b0000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + 29108));
    (*(volatile f32 *) (u32) (sp + 32)) = f1.f;
    v1 = (s32) 0x3b0000U;
    f1.f = (*(volatile f32 *) (u32) (v1 + 29112));
    (*(volatile f32 *) (u32) (sp + 36)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (a0 + 29116));
    (*(volatile f32 *) (u32) (sp + 40)) = f1.f;
    v1 = (s32) 0x3b0000U;
    f1.f = (*(volatile f32 *) (u32) (v1 + 29120));
    (*(volatile f32 *) (u32) (sp + 44)) = f0.f;
    a0 = (s32) 0x3b0000U;
    f0.f = (*(volatile f32 *) (u32) (a0 + 29124));
    (*(volatile f32 *) (u32) (sp + 48)) = f1.f;
    v1 = (s32) 0x3b0000U;
    f1.f = (*(volatile f32 *) (u32) (v1 + 29128));
    (*(volatile f32 *) (u32) (sp + 52)) = f0.f;
    a0 = (s32) 0x800000U;
    a0 = (s32) ((u32) a0 + 0x7bb0U);
    v1 = (s32) 0x3b0000U;
    (*(volatile u32 *) (u32) (a1 + 40)) = (u32) a0;
    f0.f = (*(volatile f32 *) (u32) (v1 + 29132));
    (*(volatile f32 *) (u32) (sp + 56)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 60)) = f0.f;
    v1 = (*(volatile s32 *) (u32) (a1 + 52));
    a0 = (*(volatile s32 *) (u32) (sp + 52));
    { s32 c_ = v1 != 0; (*(volatile u32 *) (u32) (a1 + 32)) = (u32) a0; if (c_) goto L_0030A570; }
    v1 = (s32) 0x310000U;
    v1 = (s32) ((u32) v1 + 0xffffc1d0U);
    (*(volatile u32 *) (u32) (a1 + 36)) = (u32) v1; goto L_0030A570;
L_0030A53C:;
    v1 = (s32) 0x890000U;
    v0 = (s32) 0x8b0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -22264));
    (*(volatile u32 *) (u32) (v0 + 5328)) = (u32) v1; func_008550D0(a0, a1, a2, a3);
    v1 = (s32) 0x590000U;
    v1 = (*(volatile s8 *) (u32) (v1 + 7605));
    if (v1 != 0) goto L_0030A570;
    func_00204D90(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    func_00C74810();
L_0030A570:;
L_0030A574:;
    return;
}
