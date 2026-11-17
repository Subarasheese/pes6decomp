/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001D7A20(s64, s64, s64);
void func_001D7BE0(s64, s64);
void func_001D7CE0(s64, s64);
void func_001D7D80(s64, s64, s64, s64);
s64 func_002F96F0(s64, s64);

void func_00C78170(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s64 frame[14];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0xcd0000U;
    v0 = (s32) ((u32) v0 + 0xffffbe10U);
    a0 = (*(volatile s32 *) (u32) (gp + -19260));
    v1 = (s32) ((u32) a0 << 5);
    v1 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 4; v0 = func_002F96F0(a0, a1);
    s1 = v0;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u16 *) (u32) (v0 + 7662));
    v0 = v0 & 0x10;
    v0 = (s32) v0 >> 4;
    if (v0 == 0) { v0 = 2; goto L_00C781D0; }
    v0 = 0;
L_00C781D0:;
    v0 = v0 & 0xffff;
    a0 = s1;
    a1 = (s64) ((u64) v0 << 48);
    a1 = a1 >> 48; func_001D7D80(a0, a1, a2, a3);
    s0 = 0;
    at = s0 < 4;
    if (at == 0) goto L_00C782B0;
    v0 = 3;
L_00C781F8:;
    if (s0 == v0) goto L_00C78230;
    v0 = 2;
    if (s0 == v0) goto L_00C78230;
    v0 = 1;
    if (s0 == v0) goto L_00C78228;
    if (s0 == 0) goto L_00C78228;
    goto L_00C78238;
L_00C78228:;
    s2 = (s64) ((u64) 0 + (u64) (s64) 2); goto L_00C78238;
L_00C78230:;
    s2 = (s64) ((u64) 0 + (u64) (s64) 3);
L_00C78238:;
    a0 = s1;
    a1 = (s32) ((u32) sp + 0x60U);
    a2 = s2; v0 = func_001D7A20(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (gp + -19260));
    v0 = (s32) 0xcd0000U;
    v0 = (s32) ((u32) v0 + 0xffffbe10U);
    v1 = (s32) ((u32) a0 << 5);
    v1 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s0; v0 = func_002F96F0(a0, a1);
    s3 = v0;
    a1 = (s32) ((u32) sp + 0x50U);
    a0 = s3; func_001D7BE0(a0, a1);
    f1.f = (*(volatile f32 *) (u32) (sp + 96));
    a0 = s3;
    f0.f = (*(volatile f32 *) (u32) (sp + 100));
    a1 = (s32) ((u32) sp + 0x50U);
    (*(volatile f32 *) (u32) (sp + 80)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 84)) = f0.f; func_001D7CE0(a0, a1);
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = s0 < 4;
    if (v1 != 0) { v0 = 3; goto L_00C781F8; }
L_00C782B0:;
    return;
}
