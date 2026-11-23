/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_001832F0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, t8 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s32 fcc = 0;

    a5 = (*(volatile s32 *) (u32) a2);
    at = 0 < a5;
    { s32 c_ = at == 0; t5 = 0; if (c_) goto L_00183548; }
    a6 = a0;
    a4 = 1;
L_00183308:;
    f0.f = (*(volatile f32 *) (u32) a6);
    fcc = f12.f <= f0.f;
    { s32 c_ = !fcc; v1 = a4; if (c_) goto L_0018331C; }
    v1 = 0;
L_0018331C:;
    v1 = v1 ^ 0x1;
    if (v1 != 0) { t5 = (s32) ((u32) t5 + 0x1U); goto L_0018353C; }
    t4 = (s32) ((u32) a5 + 0xffffffffU);
    v1 = t4 < t5;
    if (v1 != 0) goto L_00183548;
    a4 = (s32) ((u32) t4 - (u32) t5);
    a4 = (s32) ((u32) a4 + 0x1U);
    at = a4 < 9;
    { s32 c_ = at != 0; v1 = (s32) ((u32) t5 + 0x8U); if (c_) goto L_001834F8; }
    t6 = (*(volatile s32 *) (u32) a2);
    a7 = 0;
    a6 = 0;
    a5 = 0;
    a4 = 0;
    t6 = (s32) ((u32) t6 + 0xffffffffU);
    t6 = t6 < t5;
    { s32 c_ = t6 != 0; t7 = 0; if (c_) goto L_0018356C; }
    t6 = (s32) 0x80000000U;
    t6 = t6 | 0x1;
    t6 = t5 < t6;
    if (t6 != 0) goto L_0018356C;
    t7 = 1; goto L_0018356C;
L_0018338C:;
    t6 = (s32) 0x80000000U;
    t6 = t6 | 0x1;
    t7 = (s32) ((u32) t7 + 0xffffffffU);
    t6 = t7 < t6;
    if (t6 != 0) goto L_001833A8;
    a4 = 1;
L_001833A8:;
    if (a4 == 0) goto L_001833C0;
    a4 = (s32) 0x80000000U;
    if (t5 == a4) goto L_001833C0;
    a5 = 1;
L_001833C0:;
    if (a5 == 0) goto L_00183408;
    a5 = (*(volatile s32 *) (u32) a2);
    t6 = (s32) 0x80000000U;
    a4 = (s32) ((u32) 0 - (u32) t5);
    a4 = a4 & t6;
    t7 = (s32) ((u32) a5 + 0xffffffffU);
    a5 = t7 & t6;
    { s32 c_ = a5 != a4; t8 = 1; if (c_) goto L_001833FC; }
    a4 = (s32) ((u32) t7 - (u32) t5);
    a4 = a4 & t6;
    if (a5 == a4) goto L_001833FC;
    t8 = 0;
L_001833FC:;
    if (t8 == 0) goto L_00183408;
    a6 = 1;
L_00183408:;
    if (a6 == 0) goto L_0018344C;
    a4 = (*(volatile s32 *) (u32) a2);
    a5 = (s32) 0x80000000U;
    a4 = (s32) ((u32) a4 + 0xffffffffU);
    a6 = (s32) ((u32) a4 - (u32) t5);
    a4 = a6 & a5;
    { s32 c_ = a4 != 0; t6 = 1; if (c_) goto L_00183440; }
    a4 = (s32) ((u32) a6 + 0x1U);
    a4 = a4 & a5;
    if (a4 == 0) goto L_00183440;
    t6 = 0;
L_00183440:;
    if (t6 == 0) goto L_0018344C;
    a7 = 1;
L_0018344C:;
    if (a7 == 0) goto L_001834F8;
    a4 = (s32) ((u32) t4 << 2);
    a6 = (s32) ((u32) a0 + (u32) a4);
    a5 = (s32) ((u32) a1 + (u32) a4);
L_00183460:;
    f0.f = (*(volatile f32 *) (u32) a6);
    t4 = (s32) ((u32) t4 + 0xfffffff8U);
    at = t4 < v1;
    (*(volatile f32 *) (u32) (a6 + 4)) = f0.f;
    a4 = (*(volatile s32 *) (u32) a5);
    (*(volatile u32 *) (u32) (a5 + 4)) = (u32) a4;
    f0.f = (*(volatile f32 *) (u32) (a6 + -4));
    (*(volatile f32 *) (u32) a6) = f0.f;
    a4 = (*(volatile s32 *) (u32) (a5 + -4));
    (*(volatile u32 *) (u32) a5) = (u32) a4;
    f0.f = (*(volatile f32 *) (u32) (a6 + -8));
    (*(volatile f32 *) (u32) (a6 + -4)) = f0.f;
    a4 = (*(volatile s32 *) (u32) (a5 + -8));
    (*(volatile u32 *) (u32) (a5 + -4)) = (u32) a4;
    f0.f = (*(volatile f32 *) (u32) (a6 + -12));
    (*(volatile f32 *) (u32) (a6 + -8)) = f0.f;
    a4 = (*(volatile s32 *) (u32) (a5 + -12));
    (*(volatile u32 *) (u32) (a5 + -8)) = (u32) a4;
    f0.f = (*(volatile f32 *) (u32) (a6 + -16));
    (*(volatile f32 *) (u32) (a6 + -12)) = f0.f;
    a4 = (*(volatile s32 *) (u32) (a5 + -16));
    (*(volatile u32 *) (u32) (a5 + -12)) = (u32) a4;
    f0.f = (*(volatile f32 *) (u32) (a6 + -20));
    (*(volatile f32 *) (u32) (a6 + -16)) = f0.f;
    a4 = (*(volatile s32 *) (u32) (a5 + -20));
    (*(volatile u32 *) (u32) (a5 + -16)) = (u32) a4;
    f0.f = (*(volatile f32 *) (u32) (a6 + -24));
    (*(volatile f32 *) (u32) (a6 + -20)) = f0.f;
    a4 = (*(volatile s32 *) (u32) (a5 + -24));
    (*(volatile u32 *) (u32) (a5 + -20)) = (u32) a4;
    f0.f = (*(volatile f32 *) (u32) (a6 + -28));
    (*(volatile f32 *) (u32) (a6 + -24)) = f0.f;
    a4 = (*(volatile s32 *) (u32) (a5 + -28));
    a6 = (s32) ((u32) a6 + 0xffffffe0U);
    (*(volatile u32 *) (u32) (a5 + -24)) = (u32) a4;
    { s32 c_ = at == 0; a5 = (s32) ((u32) a5 + 0xffffffe0U); if (c_) goto L_00183460; }
L_001834F8:;
    v1 = t4 < t5;
    if (v1 != 0) goto L_00183548;
    v1 = (s32) ((u32) t4 << 2);
    a5 = (s32) ((u32) a0 + (u32) v1);
    a4 = (s32) ((u32) a1 + (u32) v1);
L_00183510:;
    f0.f = (*(volatile f32 *) (u32) a5);
    t4 = (s32) ((u32) t4 + 0xffffffffU);
    at = t4 < t5;
    (*(volatile f32 *) (u32) (a5 + 4)) = f0.f;
    v1 = (*(volatile s32 *) (u32) a4);
    a5 = (s32) ((u32) a5 + 0xfffffffcU);
    (*(volatile u32 *) (u32) (a4 + 4)) = (u32) v1;
    { s32 c_ = at == 0; a4 = (s32) ((u32) a4 + 0xfffffffcU); if (c_) goto L_00183510; }
    goto L_00183548;
L_0018353C:;
    v1 = t5 < a5;
    { s32 c_ = v1 != 0; a6 = (s32) ((u32) a6 + 0x4U); if (c_) goto L_00183308; }
L_00183548:;
    v1 = (s32) ((u32) t5 << 2);
    a0 = (s32) ((u32) a0 + (u32) v1);
    v1 = (s32) ((u32) a1 + (u32) v1);
    (*(volatile f32 *) (u32) a0) = f12.f;
    (*(volatile u32 *) (u32) v1) = (u32) a3;
    v1 = (*(volatile s32 *) (u32) a2);
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) a2) = (u32) v1; goto L_0018357C;
L_0018356C:;
    if (t7 == 0) goto L_001833A8;
    t7 = (*(volatile s32 *) (u32) a2); goto L_0018338C;
L_0018357C:;
    return;
}
