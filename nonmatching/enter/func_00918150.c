/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D7A20(s32, s32, s32);
void func_001D7BE0(s32, s32);
void func_001D7CE0(s32, s32);
s32 func_002F96F0(s32, s32);

void func_00918150(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    s1 = 0;
    s0 = (s32) ((u32) sp + 0x68U);
L_00918168:;
    v1 = (*(volatile s32 *) (u32) (gp + -20020));
    v0 = (s32) ((u32) gp + 0xffffb1d0U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = (s32) ((u32) s1 + 0x1U); v0 = func_002F96F0(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    (*(volatile u32 *) (u32) s0) = (u32) v0;
    at = s1 < 2;
    { s32 c_ = at != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00918168; }
    v1 = (*(volatile s32 *) (u32) (gp + -20020));
    v0 = (s32) ((u32) gp + 0xffffb1d0U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    v1 = (*(volatile u16 *) (u32) (v0 + 48));
    v0 = (*(volatile u16 *) (u32) (v0 + 68));
    at = v0 < v1;
    if (at != 0) { s0 = 0; goto L_00918240; }
    s0 = 0;
    s1 = (s32) ((u32) sp + 0x68U);
L_009181CC:;
    a0 = (*(volatile s32 *) (u32) s1);
    a1 = (s32) ((u32) sp + 0x40U); func_001D7BE0(a0, a1);
    v1 = (*(volatile s32 *) (u32) (gp + -20020));
    v0 = (s32) ((u32) gp + 0xffffb1d0U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 3; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    a1 = (s32) ((u32) sp + 0x50U);
    v0 = (s32) ((u32) s0 + 0x7fU);
    a2 = v0 & 0xffff; v0 = func_001D7A20(a0, a1, a2);
    f1.f = (*(volatile f32 *) (u32) (sp + 80));
    a0 = (*(volatile s32 *) (u32) s1);
    f0.f = (*(volatile f32 *) (u32) (sp + 84));
    a1 = (s32) ((u32) sp + 0x40U);
    (*(volatile f32 *) (u32) (sp + 64)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 68)) = f0.f; func_001D7CE0(a0, a1);
    s0 = (s32) ((u32) s0 + 0x1U);
    at = s0 < 2;
    { s32 c_ = at != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_009181CC; }
    goto L_009182B8;
L_00918240:;
    s1 = (s32) ((u32) sp + 0x68U);
L_00918244:;
    a0 = (*(volatile s32 *) (u32) s1);
    a1 = (s32) ((u32) sp + 0x30U); func_001D7BE0(a0, a1);
    v1 = (*(volatile s32 *) (u32) (gp + -20020));
    v0 = (s32) ((u32) gp + 0xffffb1d0U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 3; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    a1 = (s32) ((u32) sp + 0x50U);
    v0 = 128;
    v0 = (s32) ((u32) v0 - (u32) s0);
    a2 = v0 & 0xffff; v0 = func_001D7A20(a0, a1, a2);
    f1.f = (*(volatile f32 *) (u32) (sp + 80));
    a0 = (*(volatile s32 *) (u32) s1);
    f0.f = (*(volatile f32 *) (u32) (sp + 84));
    a1 = (s32) ((u32) sp + 0x30U);
    (*(volatile f32 *) (u32) (sp + 48)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 52)) = f0.f; func_001D7CE0(a0, a1);
    s0 = (s32) ((u32) s0 + 0x1U);
    at = s0 < 2;
    { s32 c_ = at != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00918244; }
L_009182B8:;
    return;
}
