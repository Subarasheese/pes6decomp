/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00363800(s64, s64, s64, s64);

void func_00363010(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, t8 = 0, t9 = 0;
    u64 qh_a2 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    s64 frame[14];
    s64 sp = (s32) (u32) frame;

    s0 = 0;
    v0 = 18;
L_00363028:;
    if (s0 == v0) { s0 = (s32) ((u32) s0 + 0x1U); goto L_00363198; }
    v0 = 16;
    if (s0 == v0) goto L_00363194;
    v0 = 17;
    if (s0 == v0) goto L_00363194;
    v0 = (s32) 0x620000U;
    v0 = (s32) ((u32) v0 + 0xffffec50U);
    s1 = (s32) ((u32) v0 + (u32) s0);
    v0 = (*(volatile u8 *) (u32) s1);
    if (v0 == 0) goto L_00363194;
    v0 = (s32) 0x620000U;
    v1 = (*(volatile s32 *) (u32) (gp + -21324));
    a3 = (*(volatile u8 *) (u32) (v0 + -4784));
    a0 = 0;
    a1 = 0;
    a7 = (s32) ((u32) sp + 0x30U);
    a6 = (s32) ((u32) sp + 0x50U);
    a5 = 5;
    v0 = (s32) 0x3c0000U;
    a4 = 110;
    { u32 a_ = (u32) (v0 + -29536) & ~15U; a2 = *(volatile s64 *) a_; qh_a2 = *(volatile u64 *) (a_ + 8); }
    v0 = (s32) 0x3c0000U;
    { u32 a_ = (u32) (sp + 48) & ~15U; *(volatile u64 *) a_ = (u64) a2; *(volatile u64 *) (a_ + 8) = qh_a2; }
    f0.f = (*(volatile f32 *) (u32) (v0 + -29520));
    v0 = a3 & 0x1;
    v0 = (u64) 0 < (u64) v0;
    a3 = (s64) ((u64) 0 + (u64) (s64) 46);
    t8 = (s32) ((u32) 0 - (u32) v0);
    v0 = (s32) 0x620000U;
    (*(volatile f32 *) (u32) (sp + 64)) = f0.f;
    v0 = (s32) ((u32) v0 + 0xffffed50U); goto L_00363154;
L_003630B8:;
    a2 = (*(volatile u8 *) (u32) (a2 + 2));
    at = a2 < 4;
    if (at != 0) { a1 = (s32) ((u32) a1 + 0x1U); goto L_00363154; }
    a2 = a2 & 0xff;
    a2 = (s32) ((u32) a2 << 1);
    a2 = (s32) ((u32) v1 + (u32) a2);
    { s32 c_ = t8 != 0; t9 = (*(volatile u16 *) (u32) a2); if (c_) goto L_0036313C; }
    a2 = t9 < 96;
    if (a2 != 0) goto L_00363130;
    at = t9 < 106;
    if (at == 0) goto L_00363130;
    t5 = a5;
    t7 = a7;
    t6 = a6;
L_00363100:;
    t4 = (*(volatile s16 *) (u32) t7);
    t5 = (s32) ((u32) t5 + 0xffffffffU);
    a2 = (*(volatile s16 *) (u32) (t7 + 2));
    (*(volatile u16 *) (u32) t6) = (u16) t4;
    (*(volatile u16 *) (u32) (t6 + 2)) = (u16) a2;
    t7 = (s32) ((u32) t7 + 0x4U);
    { s32 c_ = t5 > 0; t6 = (s32) ((u32) t6 + 0x4U); if (c_) goto L_00363100; }
    a2 = (s32) ((u32) t9 << 1);
    a2 = (s32) ((u32) a2 + (u32) sp);
    t9 = (*(volatile u16 *) (u32) (a2 + -112)); goto L_0036313C;
L_00363130:;
    if (t9 != a4) { a2 = t9 & 0xffff; goto L_00363140; }
    t9 = a3;
L_0036313C:;
    a2 = t9 & 0xffff;
L_00363140:;
    if (s0 != a2) goto L_00363150;
    a0 = 1; goto L_00363160;
L_00363150:;
    a1 = (s32) ((u32) a1 + 0x1U);
L_00363154:;
    a2 = a1 < 8;
    if (a2 != 0) { a2 = (s32) ((u32) v0 + (u32) a1); goto L_003630B8; }
L_00363160:;
    if (a0 != 0) goto L_00363194;
    v0 = (s32) 0x620000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -5022));
    if (v0 == 0) { a0 = 7; goto L_0036317C; }
    a0 = 6;
L_0036317C:;
    a1 = s0;
    a2 = 0; func_00363800(a0, a1, a2, a3);
    (*(volatile u8 *) (u32) s1) = (u8) 0;
    (*(volatile u16 *) (u32) (gp + -21336)) = (u16) 0;
    (*(volatile u32 *) (u32) (gp + -21332)) = (u32) 0;
L_00363194:;
    s0 = (s32) ((u32) s0 + 0x1U);
L_00363198:;
    v0 = s0 < 256;
    if (v0 != 0) { v0 = 18; goto L_00363028; }
    v0 = 0;
    return;
}
