/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D7720(s32, s32);
s32 func_00295430(s32);
s32 func_00295530(void);

void func_00923060(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    s64 frame[6];
    s32 sp = (s32) (u32) frame;

    s0 = a0; v0 = func_00295530();
    a0 = v0; v0 = func_00295430(a0);
    a0 = (s32) 0x930000U;
    a1 = 0;
    f0.i = (s32) 0;
    a0 = (s32) ((u32) a0 + 0xffffeb10U);
L_0092308C:;
    v1 = (*(volatile s32 *) (u32) a0);
    if (v0 != v1) { a1 = (s32) ((u32) a1 + 0x1U); goto L_009230B0; }
    v0 = (s32) 0x930000U;
    v1 = (s32) ((u32) a1 << 3);
    v0 = (s32) ((u32) v0 + 0xffffeb14U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    f0.f = (*(volatile f32 *) (u32) v0); goto L_009230C0;
L_009230B0:;
    v1 = (u64) a1 < (u64) (s64) 8;
    { s32 c_ = v1 != 0; a0 = (s32) ((u32) a0 + 0x8U); if (c_) goto L_0092308C; }
L_009230C0:;
    a0 = s0;
    (*(volatile f32 *) (u32) (sp + 40)) = f0.f;
    a1 = (s32) ((u32) sp + 0x20U);
    (*(volatile u32 *) (u32) (sp + 32)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 36)) = (u32) 0; func_001D7720(a0, a1);
    return;
}
