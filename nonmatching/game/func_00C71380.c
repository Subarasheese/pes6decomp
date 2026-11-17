/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001EDD00(s32, s32, s32, s32);
void func_001EE5D0(s32, s32);
void func_001EEAC0(s32, s32);
void func_001EF860(s32, s32);
void func_001EF900(s32, s32);
void func_001F6C20(s32, s32, s32, s32);
f32 func_001F6F60(s32, s32, s32, s32);
void func_001F6FC0(s32, s32, s32, s32);
void func_00C711D0(s32, s32);
s32 func_00C8B100(s32);
void func_00C8B160(s32, s32);

void func_00C71380(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0xcd0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -12748));
    v0 = (s32) 0xcd0000U;
    s0 = (*(volatile s32 *) (u32) (v0 + -17192)); v0 = func_001EDD00(a0, a1, a2, a3);
    s1 = v0;
    a0 = s0;
    a1 = s1;
    a2 = 0;
    a3 = 0; func_001F6C20(a0, a1, a2, a3);
    a1 = s1;
    a0 = 74; func_00C8B160(a0, a1);
    v0 = (s32) 0xcd0000U;
    s2 = 0;
    s1 = (*(volatile s32 *) (u32) (v0 + -12752));
L_00C713D8:;
    a0 = s1; v0 = func_001EDD00(a0, a1, a2, a3);
    s0 = v0;
    a0 = 1; v0 = func_00C8B100(a0);
    a1 = v0;
    a0 = s0; func_001EEAC0(a0, a1);
    a0 = s0;
    a1 = 0; func_001EF900(a0, a1);
    a1 = s0;
    a0 = (s32) ((u32) s2 + 0x4bU); func_00C8B160(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 4;
    if (v0 != 0) goto L_00C713D8;
    s2 = (s32) 0xcd0000U;
    s0 = 0;
    s2 = (s32) ((u32) s2 + 0xffffbcd0U);
    s1 = (s32) ((u32) sp + 0x58U);
L_00C71430:;
    v0 = (s32) 0xcd0000U;
    a2 = s0 & 0xffff;
    a0 = (*(volatile s32 *) (u32) (v0 + -17192));
    a1 = (s32) ((u32) s2 + 0x14U);
    a3 = 2; func_001F6FC0(a0, a1, a2, a3);
    v0 = (s32) 0xcd0000U;
    a1 = s0 & 0xffff;
    a0 = (*(volatile s32 *) (u32) (v0 + -17192));
    a2 = 2; f0.f = func_001F6F60(a0, a1, a2, a3);
    s0 = (s32) ((u32) s0 + 0x1U);
    s2 = (s32) ((u32) s2 + 0x10U);
    (*(volatile f32 *) (u32) s1) = f0.f;
    v0 = s0 < 2;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00C71430; }
    s1 = (s32) 0xcd0000U;
    s0 = 0;
    s1 = (s32) ((u32) s1 + 0xffffcf78U);
L_00C71480:;
    a0 = (*(volatile s32 *) (u32) s1);
    a1 = (s32) ((u32) sp + 0x40U); func_001EE5D0(a0, a1);
    { s32 c_ = s0 >= 0; v0 = (s32) s0 >> 1; if (c_) goto L_00C7149C; }
    v0 = (s32) ((u32) s0 + 0x1U);
    v0 = (s32) v0 >> 1;
L_00C7149C:;
    v0 = (s32) ((u32) v0 << 2);
    a0 = (*(volatile s32 *) (u32) s1);
    v0 = (s32) ((u32) v0 + (u32) sp);
    a1 = (s32) ((u32) sp + 0x40U);
    f0.f = (*(volatile f32 *) (u32) (v0 + 88));
    (*(volatile f32 *) (u32) (sp + 72)) = f0.f; func_001EF860(a0, a1);
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 4;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00C71480; }
    s2 = (s32) 0xcd0000U;
    s1 = 0;
    s2 = (s32) ((u32) s2 + 0xffffbcd0U);
L_00C714D4:;
    s0 = (*(volatile u16 *) (u32) (s2 + 52));
    a0 = s1;
    a1 = s0; func_00C711D0(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    (*(volatile u16 *) (u32) (s2 + 54)) = (u16) s0;
    v1 = s1 < 2;
    { s32 c_ = v1 != 0; s2 = (s32) ((u32) s2 + 0x4U); if (c_) goto L_00C714D4; }
    return;
}
