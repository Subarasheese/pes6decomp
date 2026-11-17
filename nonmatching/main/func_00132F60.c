/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00103E48(s32, s32);
s32 func_001C6158(s32, s32, s32, s32);

s32 func_00132F60(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, t8 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    v1 = (s32) 0x400000U;
    v0 = (s32) 0x400000U;
    s2 = 0;
    s1 = (s32) 0x400000U;
    s0 = 0;
    (*(volatile u32 *) (u32) (v1 + -18016)) = (u32) 0;
    (*(volatile u32 *) (u32) (v0 + -18012)) = (u32) 0;
    s1 = (s32) ((u32) s1 + 0xffffb790U);
L_00132F94:;
    a1 = (s32) 0x510000U;
    a0 = (s32) ((u32) s1 + 0x220U);
    a1 = (s32) ((u32) a1 + 0xffffad40U); v0 = func_00103E48(a0, a1);
    a1 = (s32) 0x510000U;
    a0 = (s32) ((u32) s1 + 0x2a0U);
    a1 = (s32) ((u32) a1 + 0xffffad40U); v0 = func_00103E48(a0, a1);
    a1 = (s32) 0x510000U;
    a0 = (s32) ((u32) s1 + 0x320U);
    a1 = (s32) ((u32) a1 + 0xffffad40U); v0 = func_00103E48(a0, a1);
    a1 = (s32) 0x510000U;
    a0 = (s32) ((u32) s1 + 0x470U);
    a1 = (s32) ((u32) a1 + 0xffffad40U); v0 = func_00103E48(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 2;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x40U); if (c_) goto L_00132F94; }
    a2 = (s32) 0x400000U;
    a0 = 0;
    f1.i = (s32) 0;
    a2 = (s32) ((u32) a2 + 0xffffb790U);
    a1 = (s32) ((u32) sp + 0x40U);
    v1 = 1;
L_00132FFC:;
    v0 = (*(volatile s32 *) (u32) a2);
    if (v0 == v1) goto L_00133010;
    goto L_00133040;
L_00133010:;
    f0.f = (*(volatile f32 *) (u32) (a2 + 4));
    fcc = f0.f <= f1.f;
    if (!fcc) goto L_00133030;
    f0.f = (*(volatile f32 *) (u32) (a2 + 172));
    fcc = f0.f <= f1.f;
    if (fcc) goto L_00133040;
L_00133030:;
    (*(volatile u32 *) (u32) a1) = (u32) a2;
    a1 = (s32) ((u32) a1 + 0x4U);
    s0 = (s32) ((u32) s0 + 0x1U);
L_00133040:;
    a0 = (s32) ((u32) a0 + 0x1U);
    v0 = a0 < 3;
    { s32 c_ = v0 != 0; a2 = (s32) ((u32) a2 + 0xb0U); if (c_) goto L_00132FFC; }
    a3 = (s32) 0x130000U;
    a0 = (s32) ((u32) sp + 0x40U);
    a1 = s0;
    a2 = 4;
    a3 = (s32) ((u32) a3 + 0x3210U); v0 = func_001C6158(a0, a1, a2, a3);
    at = (u64) 0 < (u64) s0;
    t8 = 0;
    s2 = 0;
    { s32 c_ = at == 0; t5 = 0; if (c_) goto L_00133180; }
    t7 = (s32) 0x400000U;
    s1 = (s32) ((u32) sp + 0x40U);
    t7 = (s32) ((u32) t7 + 0xffffb790U);
    a3 = 3;
    t6 = t7;
    a2 = 4;
    a0 = (s32) 0x400000U;
    v1 = (s32) 0x400000U;
    a7 = 1;
L_001330A0:;
    t4 = (*(volatile s32 *) (u32) s1);
    a1 = (*(volatile s32 *) (u32) t4);
    if (a1 == a7) goto L_001330B8;
    goto L_00133170;
L_001330B8:;
    at = t8 < 2;
    if (at == 0) goto L_00133170;
    f0.f = (*(volatile f32 *) (u32) (t4 + 64));
    a6 = (s32) ((u32) s2 << 2);
    a1 = (s32) ((u32) s2 << 4);
    a5 = (s32) ((u32) a6 + (u32) t7);
    a4 = (s32) ((u32) a1 + (u32) t7);
    s2 = (s32) ((u32) s2 + 0x1U);
    a1 = (s32) ((u32) t6 + (u32) a6);
    (*(volatile f32 *) (u32) (a5 + 544)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (t4 + 68));
    (*(volatile f32 *) (u32) (a5 + 560)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (t4 + 72));
    (*(volatile f32 *) (u32) (a5 + 576)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (t4 + 80));
    (*(volatile f32 *) (u32) (a5 + 672)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (t4 + 84));
    (*(volatile f32 *) (u32) (a5 + 688)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (t4 + 88));
    (*(volatile f32 *) (u32) (a5 + 704)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (t4 + 96));
    (*(volatile f32 *) (u32) (a4 + 800)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (t4 + 100));
    (*(volatile f32 *) (u32) (a4 + 804)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (t4 + 104));
    (*(volatile f32 *) (u32) (a4 + 808)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (t4 + 112));
    (*(volatile f32 *) (u32) (a4 + 1136)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (t4 + 116));
    (*(volatile f32 *) (u32) (a4 + 1140)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (t4 + 120));
    (*(volatile f32 *) (u32) (a4 + 1144)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (t4 + 168));
    { s32 c_ = s2 == a3; (*(volatile f32 *) (u32) (a1 + 1264)) = f0.f; if (c_) goto L_001331A8; }
L_00133148:;
    if (s2 != a2) goto L_00133160;
L_00133150:;
    t7 = (s32) ((u32) t7 + 0x40U);
    t6 = (s32) ((u32) t6 + 0x10U);
    t8 = (s32) ((u32) t8 + 0x1U);
    s2 = 0;
L_00133160:;
    a1 = (*(volatile s32 *) (u32) (a0 + -18016));
    a1 = (s32) ((u32) a1 + 0x1U);
    (*(volatile u32 *) (u32) (v1 + -18016)) = (u32) a1;
L_00133170:;
    t5 = (s32) ((u32) t5 + 0x1U);
    a1 = (u64) t5 < (u64) s0;
    { s32 c_ = a1 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_001330A0; }
L_00133180:;
    v1 = (s32) 0x400000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -18016));
    v1 = (s32) ((u32) v1 + 0x4U);
    { s32 c_ = v1 >= 0; a0 = (s32) v1 >> 2; if (c_) goto L_0013319C; }
    v1 = (s32) ((u32) v1 + 0x3U);
    a0 = (s32) v1 >> 2;
L_0013319C:;
    v1 = (s32) 0x400000U;
    (*(volatile u32 *) (u32) (v1 + -18012)) = (u32) a0; goto L_001331B8;
L_001331A8:;
    if (t8 == 0) goto L_00133150;
    goto L_00133148;
L_001331B8:;
    return v0;
}
