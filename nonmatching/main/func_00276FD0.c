/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00276FD0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, t8 = 0, t9 = 0;
    u64 qh_v1 = 0;
    u64 qh_a3 = 0;
    u64 qh_a4 = 0;
    u64 qh_a5 = 0;
    u64 qh_t4 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s32 fcc = 0;
    s64 frame[56];
    s64 sp = (s32) (u32) frame;

    a7 = a1 & 0xffff;
    at = 0 < a7;
    if (at == 0) goto L_002771E0;
    f1.f = (*(volatile f32 *) (u32) a0);
    v0 = 3;
    f0.f = (*(volatile f32 *) (u32) (a0 + 4));
    at = v0 < 6;
    (*(volatile f32 *) (u32) (sp + 440)) = f1.f;
    { s32 c_ = at == 0; (*(volatile f32 *) (u32) (sp + 444)) = f0.f; if (c_) goto L_002771C8; }
    v1 = (s32) 0x3b0000U;
    a2 = (s32) 0x3b0000U;
    { u32 a_ = (u32) (v1 + -18736) & ~15U; t4 = *(volatile s64 *) a_; qh_t4 = *(volatile u64 *) (a_ + 8); }
    a6 = (s32) ((u32) sp + 0x1baU);
    a2 = (s32) ((u32) a2 + 0xffffb720U);
    a1 = (s32) ((u32) sp + 0x20U);
    a0 = 7;
    v1 = (s32) 0x3b0000U;
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) t4; *(volatile u64 *) (a_ + 8) = qh_t4; }
    { u32 a_ = (u32) (v1 + -18720) & ~15U; a5 = *(volatile s64 *) a_; qh_a5 = *(volatile u64 *) (a_ + 8); }
    v1 = (s32) 0x3b0000U;
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) a5; *(volatile u64 *) (a_ + 8) = qh_a5; }
    { u32 a_ = (u32) (v1 + -18704) & ~15U; a4 = *(volatile s64 *) a_; qh_a4 = *(volatile u64 *) (a_ + 8); }
    v1 = (s32) 0x3b0000U;
    { u32 a_ = (u32) (sp + 192) & ~15U; *(volatile u64 *) a_ = (u64) a4; *(volatile u64 *) (a_ + 8) = qh_a4; }
    { u32 a_ = (u32) (v1 + -18688) & ~15U; a3 = *(volatile s64 *) a_; qh_a3 = *(volatile u64 *) (a_ + 8); }
    v1 = (s32) 0x3b0000U;
    { u32 a_ = (u32) (sp + 208) & ~15U; *(volatile u64 *) a_ = (u64) a3; *(volatile u64 *) (a_ + 8) = qh_a3; }
    v1 = (*(volatile s64 *) (u32) (v1 + -18672));
    (*(volatile u64 *) (u32) (sp + 224)) = (u64) v1;
L_00277054:;
    { u32 a_ = (u32) (a2 + 0) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    { u32 a_ = (u32) (a1 + 0) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    a2 = (s32) ((u32) a2 + 0x10U);
    a1 = (s32) ((u32) a1 + 0x10U);
    if (a0 > 0) goto L_00277054;
    v1 = (s32) ((u32) sp + 0x1b9U);
    a0 = (*(volatile s64 *) (u32) a2);
    t7 = (*(volatile u8 *) (u32) v1);
    f0.f = (*(volatile f32 *) (u32) (a2 + 8));
    t4 = (*(volatile u8 *) (u32) (sp + 440));
    a5 = (s32) ((u32) sp + 0x1baU);
    t5 = (s32) 0x80000000U;
    a4 = (s32) ((u32) sp + 0xa0U);
    a3 = (s32) ((u32) sp + 0x170U);
    (*(volatile u64 *) (u32) a1) = (u64) a0;
    t6 = (s32) ((u32) t7 << 1);
    a2 = (s32) 0x4f000000U;
    t6 = (s32) ((u32) t6 + (u32) t7);
    t4 = (s32) ((u32) t4 << 2);
    f1.i = (s32) a2;
    t6 = (s32) ((u32) t6 << 2);
    (*(volatile f32 *) (u32) (a1 + 8)) = f0.f;
    t8 = (s32) ((u32) t6 + (u32) sp);
    a1 = (s32) ((u32) sp + 0x20U);
    a0 = (s32) ((u32) sp + 0xf0U);
    v1 = 31;
    a2 = 18;
    t6 = (s32) ((u32) t4 + (u32) sp);
L_002770CC:;
    (*(volatile u8 *) (u32) a6) = (u8) v0;
    s0 = a2;
    s1 = a4;
    t9 = a3;
L_002770E0:;
    t7 = (*(volatile s16 *) (u32) s1);
    s0 = (s32) ((u32) s0 + 0xffffffffU);
    t4 = (*(volatile s16 *) (u32) (s1 + 2));
    (*(volatile u16 *) (u32) t9) = (u16) t7;
    (*(volatile u16 *) (u32) (t9 + 2)) = (u16) t4;
    s1 = (s32) ((u32) s1 + 0x4U);
    { s32 c_ = s0 > 0; t9 = (s32) ((u32) t9 + 0x4U); if (c_) goto L_002770E0; }
    t7 = v1;
    s0 = a1;
    t9 = a0;
L_00277110:;
    t4 = (*(volatile s32 *) (u32) s0);
    t7 = (s32) ((u32) t7 + 0xffffffffU);
    (*(volatile u32 *) (u32) t9) = (u32) t4;
    s0 = (s32) ((u32) s0 + 0x4U);
    t9 = (s32) ((u32) t9 + 0x4U);
    if (t7 > 0) goto L_00277110;
    t4 = (*(volatile u8 *) (u32) a5);
    t4 = (s32) ((u32) t4 << 1);
    t4 = (s32) ((u32) t4 + (u32) t8);
    t4 = (*(volatile u16 *) (u32) (t4 + 368));
    if (t4 < 0) goto L_00277150;
    f0.i = (s32) t4;
    f2.f = (f32) f0.i; goto L_0027716C;
L_00277150:;
    t7 = (s32) ((u32) t4 >> 1);
    t4 = t4 & 0x1;
    t7 = t7 | t4;
    f0.i = (s32) t7;
    f2.f = (f32) f0.i;
    f2.f = f2.f + f2.f;
L_0027716C:;
    f0.f = (*(volatile f32 *) (u32) (t6 + 240));
    f0.f = f0.f * f2.f;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_00277190;
    f0.i = (s32) f0.f;
    t4 = f0.i;
    t4 = t4 & 0xffff; goto L_002771A8;
L_00277190:;
    f0.f = f0.f - f1.f;
    f0.i = (s32) f0.f;
    t4 = f0.i;
    t4 = t4 | t5;
    t4 = t4 & 0xffff;
L_002771A8:;
    t4 = t4 & 0xffff;
    at = t4 < a7;
    if (at == 0) goto L_002771C8;
    v0 = (s32) ((u32) v0 + 0x1U);
    t4 = v0 < 6;
    if (t4 != 0) goto L_002770CC;
L_002771C8:;
    at = v0 < 6;
    if (at != 0) goto L_00277200;
    v0 = 5;
L_002771D8:;
    goto L_00277204;
L_002771E0:;
    v0 = a2 & 0xffff;
    at = 0 < v0;
    if (at == 0) goto L_002771F8;
    v0 = 2; goto L_002771D8;
L_002771F8:;
    v0 = 0; goto L_002771D8;
L_00277200:;
L_00277204:;
    return;
}
