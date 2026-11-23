/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EE5D0(s64, s64);
void func_001EF860(s64, s64);

void func_00C71DF0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s64 frame[8];
    s64 sp = (s32) (u32) frame;

    v1 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) v1 + 0xffffbd30U);
    a1 = (*(volatile s32 *) (u32) (gp + -19280));
    s0 = (s32) 0xcd0000U;
    a0 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (s32) ((u32) a0 << 4);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) (v1 + 41));
    v1 = (s64) ((u64) v1 << 62);
    v1 = (s64) ((u64) v1 >> 63);
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0xffffced0U); if (c_) goto L_00C71EAC; }
    s1 = 0;
L_00C71E38:;
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = (s32) ((u32) sp + 0x30U); func_001EE5D0(a0, a1);
    f1.f = (*(volatile f32 *) (u32) (sp + 52));
    v0 = (s32) 0xc1a00000U;
    f0.i = (s32) v0;
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = (s32) ((u32) sp + 0x30U);
    f0.f = f1.f + f0.f;
    (*(volatile f32 *) (u32) (sp + 52)) = f0.f; func_001EF860(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < 30;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00C71E38; }
    v1 = (s32) 0xcd0000U;
    a3 = -3;
    a2 = (*(volatile u8 *) (u32) (v1 + -17063));
    a4 = (s64) ((u64) 0 + (u64) (s64) 2);
    a0 = (s32) 0xcd0000U;
    v1 = (s32) 0xcd0000U;
    a2 = a2 & a3;
    a1 = (*(volatile u8 *) (u32) (v1 + -16983));
    a2 = a2 | a4;
    (*(volatile u8 *) (u32) (a0 + -17063)) = (u8) a2;
    a0 = a1 & a3;
    v1 = (s32) 0xcd0000U;
    a0 = a0 | a4;
    (*(volatile u8 *) (u32) (v1 + -16983)) = (u8) a0;
L_00C71EAC:;
    return;
}
