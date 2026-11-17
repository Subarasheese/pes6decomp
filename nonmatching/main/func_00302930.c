/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002D4BE0(s64, s64, s64, s64);
void func_00305E60(s64, s64);
s64 func_00BD9ED0(s64, s64, s64, s64);
s64 func_00BDA1E0(s64, s64, s64, s64);

s64 func_00302930(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;

    s2 = a0;
    s0 = (*(volatile s32 *) (u32) (a0 + 24));
    v0 = (*(volatile s32 *) (u32) (s0 + 28));
    { s32 c_ = v0 <= 0; s1 = 0; if (c_) goto L_00302960; }
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    (*(volatile u32 *) (u32) (s0 + 28)) = (u32) v0;
L_00302960:;
    v1 = (*(volatile s32 *) (u32) (s0 + 36));
    v0 = 2;
    if (v1 == v0) goto L_003029AC;
    v0 = 1;
    if (v1 == v0) goto L_003029AC;
    v0 = func_00BDA1E0(a0, a1, a2, a3);
    v1 = 1;
    if (v0 != v1) { s1 = v1 & 0xff; goto L_00302A4C; }
    v0 = func_00BD9ED0(a0, a1, a2, a3);
    v1 = 1;
    if (v0 != v1) { v0 = (*(volatile s32 *) (u32) (s0 + 28)); goto L_00302A50; }
    s1 = v1 & 0xff; goto L_00302A4C;
L_003029AC:;
    v0 = (s32) 0xcb0000U;
    v1 = 3;
    v0 = (*(volatile s32 *) (u32) (v0 + 24356));
    if (v0 == v1) { v1 = (*(volatile s32 *) (u32) (gp + -32252)); goto L_003029C8; }
    s1 = (s64) ((u64) 0 + (u64) (s64) 1);
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
L_003029C8:;
    f0.f = (*(volatile f32 *) (u32) (v1 + 16));
    f0.i = (s32) f0.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_003029E0; }
L_003029E0:;
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
    v0 = (s32) 0x46530000U;
    v0 = v0 | 0x4400;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (!fcc) { s1 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_00302A4C; }
    f0.f = (*(volatile f32 *) (u32) (v1 + 24));
    f0.i = (s32) f0.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_00302A20; }
L_00302A20:;
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
    v0 = (s32) 0x46090000U;
    v0 = v0 | 0x4400;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_00302A4C;
    s1 = (s64) ((u64) 0 + (u64) (s64) 1);
L_00302A4C:;
    v0 = (*(volatile s32 *) (u32) (s0 + 28));
L_00302A50:;
    if (v0 == 0) goto L_00302A5C;
    s1 = 0;
L_00302A5C:;
    if (s1 == 0) { v0 = 0; goto L_00302AB4; }
    v1 = (*(volatile s32 *) (u32) (s0 + 36));
    v0 = 2;
    if (v1 == v0) goto L_00302A88;
    v0 = 1;
    if (v1 == v0) goto L_00302A88;
    goto L_00302AA0;
L_00302A88:;
    v0 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + 0x4e88U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); func_002D4BE0(a0, a1, a2, a3);
L_00302AA0:;
    a1 = (s32) 0x300000U;
    a0 = s2;
    a1 = (s32) ((u32) a1 + 0x2ad0U); func_00305E60(a0, a1);
    v0 = 1;
L_00302AB4:;
    return v0;
}
