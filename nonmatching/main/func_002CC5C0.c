/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Random_Below(s32);

s32 func_002CC5C0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, t8 = 0, t9 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    s64 frame[106];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x3b0000U;
    t7 = (s32) 0x3b0000U;
    s1 = (s32) ((u32) sp + 0x200U);
    f1.f = (*(volatile f32 *) (u32) (v0 + -5920));
    t6 = (*(volatile s32 *) (u32) (sp + 848));
    t5 = (*(volatile s32 *) (u32) (sp + 856));
    t4 = (*(volatile s32 *) (u32) (sp + 864));
    v0 = (s32) 0x3b0000U;
    v1 = (*(volatile s32 *) (u32) (sp + 872));
    f0.f = (*(volatile f32 *) (u32) (v0 + -5916));
    (*(volatile f32 *) (u32) (sp + 144)) = f1.f;
    v0 = (s32) 0x3b0000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + -5912));
    (*(volatile f32 *) (u32) (sp + 148)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (t7 + -5908));
    (*(volatile f32 *) (u32) (sp + 152)) = f1.f;
    v0 = (s32) 0x3b0000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + -5904));
    (*(volatile f32 *) (u32) (sp + 156)) = f0.f;
    t7 = (s32) 0x3b0000U;
    f0.f = (*(volatile f32 *) (u32) (t7 + -5900));
    (*(volatile f32 *) (u32) (sp + 160)) = f1.f;
    v0 = (s32) 0x3b0000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + -5888));
    t7 = (s32) 0x3b0000U;
    (*(volatile f32 *) (u32) (sp + 164)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (t7 + -5884));
    v0 = (s32) 0x3b0000U;
    (*(volatile f32 *) (u32) (sp + 112)) = f1.f;
    f1.f = (*(volatile f32 *) (u32) (v0 + -5880));
    (*(volatile f32 *) (u32) (sp + 116)) = f0.f;
    t7 = (s32) 0x3b0000U;
    f0.f = (*(volatile f32 *) (u32) (t7 + -5876));
    (*(volatile f32 *) (u32) (sp + 120)) = f1.f;
    v0 = (s32) 0x3b0000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + -5872));
    (*(volatile f32 *) (u32) (sp + 124)) = f0.f;
    t7 = (s32) 0x3b0000U;
    f0.f = (*(volatile f32 *) (u32) (t7 + -5868));
    (*(volatile f32 *) (u32) (sp + 128)) = f1.f;
    v0 = 81;
    t7 = 0;
    (*(volatile f32 *) (u32) (sp + 132)) = f0.f;
L_002CC68C:;
    (*(volatile u32 *) (u32) s1) = (u32) t7;
    s0 = (s32) ((u32) t7 + 0x1U);
    (*(volatile u32 *) (u32) (s1 + 4)) = (u32) s0;
    s0 = (s32) ((u32) t7 + 0x2U);
    (*(volatile u32 *) (u32) (s1 + 8)) = (u32) s0;
    s0 = (s32) ((u32) t7 + 0x3U);
    (*(volatile u32 *) (u32) (s1 + 12)) = (u32) s0;
    s0 = (s32) ((u32) t7 + 0x4U);
    (*(volatile u32 *) (u32) (s1 + 16)) = (u32) s0;
    s0 = (s32) ((u32) t7 + 0x5U);
    (*(volatile u32 *) (u32) (s1 + 20)) = (u32) s0;
    s0 = (s32) ((u32) t7 + 0x6U);
    (*(volatile u32 *) (u32) (s1 + 24)) = (u32) s0;
    s0 = (s32) ((u32) t7 + 0x7U);
    (*(volatile u32 *) (u32) (s1 + 28)) = (u32) s0;
    t7 = (s32) ((u32) t7 + 0x8U);
    s0 = t7 < 73;
    { s32 c_ = s0 != 0; s1 = (s32) ((u32) s1 + 0x20U); if (c_) goto L_002CC68C; }
    s0 = (s32) ((u32) t7 << 2);
    s1 = 0;
    s0 = (s32) ((u32) s0 + (u32) sp);
    { s32 c_ = a0 <= 0; (*(volatile u32 *) (u32) (s0 + 512)) = (u32) t7; if (c_) goto L_002CC6F0; }
    s1 = 1;
L_002CC6F0:;
    if (s1 == 0) goto L_002CC850;
    t7 = (s32) 0x3b0000U;
    v0 = 0;
    t9 = 0;
    s1 = (s32) ((u32) sp + 0x200U);
    s0 = (s32) ((u32) sp + 0xb0U);
    t7 = (s32) ((u32) t7 + 0xffffc7f0U);
L_002CC710:;
    t8 = (*(volatile s32 *) (u32) s1);
    s2 = 0;
    s3 = (s32) ((u32) t8 << 1);
    s3 = (s32) ((u32) s3 + (u32) t8);
    s3 = (s32) ((u32) s3 << 2);
    s3 = (s32) ((u32) s3 + (u32) t8);
    s3 = (s32) ((u32) s3 << 3);
    { s32 c_ = a0 <= 0; s3 = (s32) ((u32) t7 + (u32) s3); if (c_) goto L_002CC770; }
    s4 = (*(volatile u16 *) (u32) (s3 + 4));
    s5 = a1;
L_002CC740:;
    s3 = (*(volatile s32 *) (u32) s5);
    if (s4 != s3) goto L_002CC760;
    (*(volatile u32 *) (u32) s0) = (u32) t8;
    v0 = (s32) ((u32) v0 + 0x1U);
    s0 = (s32) ((u32) s0 + 0x4U); goto L_002CC770;
L_002CC760:;
    s2 = (s32) ((u32) s2 + 0x1U);
    s3 = s2 < a0;
    { s32 c_ = s3 != 0; s5 = (s32) ((u32) s5 + 0x4U); if (c_) goto L_002CC740; }
L_002CC770:;
    t9 = (s32) ((u32) t9 + 0x1U);
    s2 = t9 < 81;
    { s32 c_ = s2 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_002CC710; }
    { s32 c_ = v0 <= 0; a1 = 0; if (c_) goto L_002CC850; }
    at = v0 < 9;
    { s32 c_ = at != 0; a0 = (s32) ((u32) v0 + 0xfffffff8U); if (c_) goto L_002CC818; }
    { s32 c_ = v0 < 0; t7 = 0; if (c_) goto L_002CC7B4; }
    at = (s32) 0x7fff0000U;
    at = at | 0xffff;
    at = v0 < at;
    if (at == 0) goto L_002CC7B4;
    t7 = 1;
L_002CC7B4:;
    if (t7 == 0) goto L_002CC818;
    s0 = (s32) ((u32) sp + 0xb0U);
    t7 = (s32) ((u32) sp + 0x200U);
L_002CC7C4:;
    t8 = (*(volatile s32 *) (u32) s0);
    a1 = (s32) ((u32) a1 + 0x8U);
    s3 = (*(volatile s32 *) (u32) (s0 + 4));
    s1 = a1 < a0;
    s2 = (*(volatile s32 *) (u32) (s0 + 8));
    (*(volatile u32 *) (u32) t7) = (u32) t8;
    (*(volatile u32 *) (u32) (t7 + 4)) = (u32) s3;
    (*(volatile u32 *) (u32) (t7 + 8)) = (u32) s2;
    t8 = (*(volatile s32 *) (u32) (s0 + 12));
    s3 = (*(volatile s32 *) (u32) (s0 + 16));
    s2 = (*(volatile s32 *) (u32) (s0 + 20));
    (*(volatile u32 *) (u32) (t7 + 12)) = (u32) t8;
    (*(volatile u32 *) (u32) (t7 + 16)) = (u32) s3;
    (*(volatile u32 *) (u32) (t7 + 20)) = (u32) s2;
    s3 = (*(volatile s32 *) (u32) (s0 + 24));
    s2 = (*(volatile s32 *) (u32) (s0 + 28));
    (*(volatile u32 *) (u32) (t7 + 24)) = (u32) s3;
    (*(volatile u32 *) (u32) (t7 + 28)) = (u32) s2;
    s0 = (s32) ((u32) s0 + 0x20U);
    { s32 c_ = s1 != 0; t7 = (s32) ((u32) t7 + 0x20U); if (c_) goto L_002CC7C4; }
L_002CC818:;
    at = a1 < v0;
    if (at == 0) goto L_002CC850;
    a0 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) a0 + (u32) sp);
    s1 = (s32) ((u32) a0 + 0xb0U);
    s0 = (s32) ((u32) a0 + 0x200U);
L_002CC834:;
    t7 = (*(volatile s32 *) (u32) s1);
    a1 = (s32) ((u32) a1 + 0x1U);
    a0 = a1 < v0;
    (*(volatile u32 *) (u32) s0) = (u32) t7;
    s1 = (s32) ((u32) s1 + 0x4U);
    { s32 c_ = a0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_002CC834; }
L_002CC850:;
    a0 = 0 < v0;
    if (a0 == 0) goto L_002CC860;
    a0 = 0 < a2;
L_002CC860:;
    if (a0 == 0) goto L_002CC9C8;
    t7 = 0;
    { s32 c_ = v0 <= 0; t8 = 0; if (c_) goto L_002CC8F0; }
    t9 = (s32) ((u32) sp + 0x200U);
    s1 = (s32) ((u32) sp + 0xb0U);
L_002CC87C:;
    a0 = (*(volatile s32 *) (u32) t9);
    { s32 c_ = a2 <= 0; a1 = 0; if (c_) goto L_002CC8E0; }
    s0 = a3;
L_002CC890:;
    s2 = (*(volatile s32 *) (u32) s0);
    s2 = (s32) ((u32) s2 << 2);
    s3 = (s32) ((u32) s2 + (u32) sp);
    s2 = (*(volatile s32 *) (u32) (s3 + 144));
    at = a0 < s2;
    if (at != 0) goto L_002CC8D0;
    s2 = (*(volatile s32 *) (u32) (s3 + 112));
    at = a0 < s2;
    if (at == 0) goto L_002CC8D0;
    (*(volatile u32 *) (u32) s1) = (u32) a0;
    t7 = (s32) ((u32) t7 + 0x1U);
    s1 = (s32) ((u32) s1 + 0x4U); goto L_002CC8E0;
L_002CC8D0:;
    a1 = (s32) ((u32) a1 + 0x1U);
    s2 = a1 < a2;
    { s32 c_ = s2 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_002CC890; }
L_002CC8E0:;
    t8 = (s32) ((u32) t8 + 0x1U);
    a0 = t8 < v0;
    { s32 c_ = a0 != 0; t9 = (s32) ((u32) t9 + 0x4U); if (c_) goto L_002CC87C; }
L_002CC8F0:;
    v0 = t7;
    { s32 c_ = t7 <= 0; a0 = 0; if (c_) goto L_002CC9C8; }
    at = t7 < 9;
    { s32 c_ = at != 0; s1 = (s32) ((u32) t7 + 0xfffffff8U); if (c_) goto L_002CC990; }
    { s32 c_ = t7 < 0; a1 = 0; if (c_) goto L_002CC928; }
    at = (s32) 0x7fff0000U;
    at = at | 0xffff;
    at = t7 < at;
    if (at == 0) goto L_002CC928;
    a1 = 1;
L_002CC928:;
    if (a1 == 0) goto L_002CC990;
    s3 = (s32) ((u32) sp + 0xb0U);
    s2 = (s32) ((u32) sp + 0x200U);
L_002CC938:;
    s0 = (*(volatile s32 *) (u32) s3);
    a0 = (s32) ((u32) a0 + 0x8U);
    a3 = (*(volatile s32 *) (u32) (s3 + 4));
    a1 = a0 < s1;
    a2 = (*(volatile s32 *) (u32) (s3 + 8));
    (*(volatile u32 *) (u32) s2) = (u32) s0;
    (*(volatile u32 *) (u32) (s2 + 4)) = (u32) a3;
    (*(volatile u32 *) (u32) (s2 + 8)) = (u32) a2;
    s0 = (*(volatile s32 *) (u32) (s3 + 12));
    a3 = (*(volatile s32 *) (u32) (s3 + 16));
    a2 = (*(volatile s32 *) (u32) (s3 + 20));
    (*(volatile u32 *) (u32) (s2 + 12)) = (u32) s0;
    (*(volatile u32 *) (u32) (s2 + 16)) = (u32) a3;
    (*(volatile u32 *) (u32) (s2 + 20)) = (u32) a2;
    a3 = (*(volatile s32 *) (u32) (s3 + 24));
    a2 = (*(volatile s32 *) (u32) (s3 + 28));
    (*(volatile u32 *) (u32) (s2 + 24)) = (u32) a3;
    (*(volatile u32 *) (u32) (s2 + 28)) = (u32) a2;
    s3 = (s32) ((u32) s3 + 0x20U);
    { s32 c_ = a1 != 0; s2 = (s32) ((u32) s2 + 0x20U); if (c_) goto L_002CC938; }
L_002CC990:;
    at = a0 < t7;
    if (at == 0) goto L_002CC9C8;
    a1 = (s32) ((u32) a0 << 2);
    a1 = (s32) ((u32) a1 + (u32) sp);
    t7 = (s32) ((u32) a1 + 0xb0U);
    a3 = (s32) ((u32) a1 + 0x200U);
L_002CC9AC:;
    a2 = (*(volatile s32 *) (u32) t7);
    a0 = (s32) ((u32) a0 + 0x1U);
    a1 = a0 < v0;
    (*(volatile u32 *) (u32) a3) = (u32) a2;
    t7 = (s32) ((u32) t7 + 0x4U);
    { s32 c_ = a1 != 0; a3 = (s32) ((u32) a3 + 0x4U); if (c_) goto L_002CC9AC; }
L_002CC9C8:;
    a0 = 0 < v0;
    if (a0 == 0) goto L_002CC9D8;
    a0 = 0 < a4;
L_002CC9D8:;
    if (a0 == 0) goto L_002CCB20;
    a0 = 0;
    { s32 c_ = v0 <= 0; t7 = 0; if (c_) goto L_002CCA48; }
    s2 = (s32) ((u32) sp + 0x200U);
    s1 = (s32) ((u32) sp + 0xb0U);
L_002CC9F4:;
    a2 = (*(volatile s32 *) (u32) s2);
    { s32 c_ = a4 <= 0; a3 = 0; if (c_) goto L_002CCA38; }
    s0 = a5;
L_002CCA08:;
    a1 = (*(volatile s32 *) (u32) s0);
    if (a2 != a1) goto L_002CCA28;
    (*(volatile u32 *) (u32) s1) = (u32) a2;
    a0 = (s32) ((u32) a0 + 0x1U);
    s1 = (s32) ((u32) s1 + 0x4U); goto L_002CCA38;
L_002CCA28:;
    a3 = (s32) ((u32) a3 + 0x1U);
    a1 = a3 < a4;
    { s32 c_ = a1 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_002CCA08; }
L_002CCA38:;
    t7 = (s32) ((u32) t7 + 0x1U);
    a1 = t7 < v0;
    { s32 c_ = a1 != 0; s2 = (s32) ((u32) s2 + 0x4U); if (c_) goto L_002CC9F4; }
L_002CCA48:;
    v0 = a0;
    { s32 c_ = a0 <= 0; t7 = 0; if (c_) goto L_002CCB20; }
    at = a0 < 9;
    { s32 c_ = at != 0; a5 = (s32) ((u32) a0 + 0xfffffff8U); if (c_) goto L_002CCAE8; }
    { s32 c_ = a0 < 0; a1 = 0; if (c_) goto L_002CCA80; }
    at = (s32) 0x7fff0000U;
    at = at | 0xffff;
    at = a0 < at;
    if (at == 0) goto L_002CCA80;
    a1 = 1;
L_002CCA80:;
    if (a1 == 0) goto L_002CCAE8;
    s1 = (s32) ((u32) sp + 0xb0U);
    s0 = (s32) ((u32) sp + 0x200U);
L_002CCA90:;
    a4 = (*(volatile s32 *) (u32) s1);
    t7 = (s32) ((u32) t7 + 0x8U);
    a3 = (*(volatile s32 *) (u32) (s1 + 4));
    a1 = t7 < a5;
    a2 = (*(volatile s32 *) (u32) (s1 + 8));
    (*(volatile u32 *) (u32) s0) = (u32) a4;
    (*(volatile u32 *) (u32) (s0 + 4)) = (u32) a3;
    (*(volatile u32 *) (u32) (s0 + 8)) = (u32) a2;
    a4 = (*(volatile s32 *) (u32) (s1 + 12));
    a3 = (*(volatile s32 *) (u32) (s1 + 16));
    a2 = (*(volatile s32 *) (u32) (s1 + 20));
    (*(volatile u32 *) (u32) (s0 + 12)) = (u32) a4;
    (*(volatile u32 *) (u32) (s0 + 16)) = (u32) a3;
    (*(volatile u32 *) (u32) (s0 + 20)) = (u32) a2;
    a3 = (*(volatile s32 *) (u32) (s1 + 24));
    a2 = (*(volatile s32 *) (u32) (s1 + 28));
    (*(volatile u32 *) (u32) (s0 + 24)) = (u32) a3;
    (*(volatile u32 *) (u32) (s0 + 28)) = (u32) a2;
    s1 = (s32) ((u32) s1 + 0x20U);
    { s32 c_ = a1 != 0; s0 = (s32) ((u32) s0 + 0x20U); if (c_) goto L_002CCA90; }
L_002CCAE8:;
    at = t7 < a0;
    if (at == 0) goto L_002CCB20;
    a0 = (s32) ((u32) t7 << 2);
    a0 = (s32) ((u32) a0 + (u32) sp);
    a3 = (s32) ((u32) a0 + 0xb0U);
    a2 = (s32) ((u32) a0 + 0x200U);
L_002CCB04:;
    a1 = (*(volatile s32 *) (u32) a3);
    t7 = (s32) ((u32) t7 + 0x1U);
    a0 = t7 < v0;
    (*(volatile u32 *) (u32) a2) = (u32) a1;
    a3 = (s32) ((u32) a3 + 0x4U);
    { s32 c_ = a0 != 0; a2 = (s32) ((u32) a2 + 0x4U); if (c_) goto L_002CCB04; }
L_002CCB20:;
    a0 = 0 < v0;
    if (a0 == 0) { a2 = 0; goto L_002CCB34; }
    a0 = 0 < a6;
    a2 = 0;
L_002CCB34:;
    if (a0 == 0) goto L_002CCCB0;
    { s32 c_ = v0 <= 0; a3 = 0; if (c_) goto L_002CCBD8; }
    t8 = (s32) 0x3b0000U;
    a5 = (s32) ((u32) sp + 0x200U);
    a4 = (s32) ((u32) sp + 0xb0U);
    s1 = 1;
    t8 = (s32) ((u32) t8 + 0xffffc7f0U);
L_002CCB58:;
    a0 = (*(volatile s32 *) (u32) a5);
    t7 = 0;
    a1 = 0;
    s0 = (s32) ((u32) a0 << 1);
    s0 = (s32) ((u32) s0 + (u32) a0);
    s0 = (s32) ((u32) s0 << 2);
    s0 = (s32) ((u32) s0 + (u32) a0);
    s0 = (s32) ((u32) s0 << 3);
    { s32 c_ = a6 <= 0; s0 = (s32) ((u32) t8 + (u32) s0); if (c_) goto L_002CCBB0; }
    s2 = (*(volatile u16 *) (u32) (s0 + 4));
    s3 = a7;
L_002CCB88:;
    s0 = (*(volatile s32 *) (u32) s3);
    if (s2 != s0) goto L_002CCBA0;
    t7 = s1; goto L_002CCBB0;
L_002CCBA0:;
    a1 = (s32) ((u32) a1 + 0x1U);
    s0 = a1 < a6;
    { s32 c_ = s0 != 0; s3 = (s32) ((u32) s3 + 0x4U); if (c_) goto L_002CCB88; }
L_002CCBB0:;
    if (t7 != 0) goto L_002CCBC8;
    (*(volatile u32 *) (u32) a4) = (u32) a0;
    a2 = (s32) ((u32) a2 + 0x1U);
    a4 = (s32) ((u32) a4 + 0x4U);
L_002CCBC8:;
    a3 = (s32) ((u32) a3 + 0x1U);
    a0 = a3 < v0;
    { s32 c_ = a0 != 0; a5 = (s32) ((u32) a5 + 0x4U); if (c_) goto L_002CCB58; }
L_002CCBD8:;
    v0 = a2;
    { s32 c_ = a2 <= 0; a6 = 0; if (c_) goto L_002CCCB0; }
    at = a2 < 9;
    { s32 c_ = at != 0; a5 = (s32) ((u32) a2 + 0xfffffff8U); if (c_) goto L_002CCC78; }
    { s32 c_ = a2 < 0; a0 = 0; if (c_) goto L_002CCC10; }
    at = (s32) 0x7fff0000U;
    at = at | 0xffff;
    at = a2 < at;
    if (at == 0) goto L_002CCC10;
    a0 = 1;
L_002CCC10:;
    if (a0 == 0) goto L_002CCC78;
    t7 = (s32) ((u32) sp + 0xb0U);
    a7 = (s32) ((u32) sp + 0x200U);
L_002CCC20:;
    a4 = (*(volatile s32 *) (u32) t7);
    a6 = (s32) ((u32) a6 + 0x8U);
    a3 = (*(volatile s32 *) (u32) (t7 + 4));
    a0 = a6 < a5;
    a1 = (*(volatile s32 *) (u32) (t7 + 8));
    (*(volatile u32 *) (u32) a7) = (u32) a4;
    (*(volatile u32 *) (u32) (a7 + 4)) = (u32) a3;
    (*(volatile u32 *) (u32) (a7 + 8)) = (u32) a1;
    a4 = (*(volatile s32 *) (u32) (t7 + 12));
    a3 = (*(volatile s32 *) (u32) (t7 + 16));
    a1 = (*(volatile s32 *) (u32) (t7 + 20));
    (*(volatile u32 *) (u32) (a7 + 12)) = (u32) a4;
    (*(volatile u32 *) (u32) (a7 + 16)) = (u32) a3;
    (*(volatile u32 *) (u32) (a7 + 20)) = (u32) a1;
    a3 = (*(volatile s32 *) (u32) (t7 + 24));
    a1 = (*(volatile s32 *) (u32) (t7 + 28));
    (*(volatile u32 *) (u32) (a7 + 24)) = (u32) a3;
    (*(volatile u32 *) (u32) (a7 + 28)) = (u32) a1;
    t7 = (s32) ((u32) t7 + 0x20U);
    { s32 c_ = a0 != 0; a7 = (s32) ((u32) a7 + 0x20U); if (c_) goto L_002CCC20; }
L_002CCC78:;
    at = a6 < a2;
    if (at == 0) goto L_002CCCB0;
    a0 = (s32) ((u32) a6 << 2);
    a0 = (s32) ((u32) a0 + (u32) sp);
    a3 = (s32) ((u32) a0 + 0xb0U);
    a2 = (s32) ((u32) a0 + 0x200U);
L_002CCC94:;
    a1 = (*(volatile s32 *) (u32) a3);
    a6 = (s32) ((u32) a6 + 0x1U);
    a0 = a6 < v0;
    (*(volatile u32 *) (u32) a2) = (u32) a1;
    a3 = (s32) ((u32) a3 + 0x4U);
    { s32 c_ = a0 != 0; a2 = (s32) ((u32) a2 + 0x4U); if (c_) goto L_002CCC94; }
L_002CCCB0:;
    a0 = 0 < v0;
    if (a0 == 0) goto L_002CCCC0;
    a0 = 0 < t6;
L_002CCCC0:;
    if (a0 == 0) goto L_002CCE40;
    a0 = 0;
    { s32 c_ = v0 <= 0; a7 = 0; if (c_) goto L_002CCD68; }
    s1 = (s32) ((u32) sp + 0x200U);
    s0 = (s32) ((u32) sp + 0xb0U);
    a2 = 1;
L_002CCCE0:;
    a4 = (*(volatile s32 *) (u32) s1);
    a5 = 0;
    { s32 c_ = t6 <= 0; a6 = 0; if (c_) goto L_002CCD40; }
    t7 = t5;
L_002CCCF8:;
    a1 = (*(volatile s32 *) (u32) t7);
    a1 = (s32) ((u32) a1 << 2);
    a3 = (s32) ((u32) a1 + (u32) sp);
    a1 = (*(volatile s32 *) (u32) (a3 + 144));
    at = a4 < a1;
    if (at != 0) goto L_002CCD30;
    a1 = (*(volatile s32 *) (u32) (a3 + 112));
    at = a4 < a1;
    if (at == 0) goto L_002CCD30;
    a5 = a2; goto L_002CCD40;
L_002CCD30:;
    a6 = (s32) ((u32) a6 + 0x1U);
    a1 = a6 < t6;
    { s32 c_ = a1 != 0; t7 = (s32) ((u32) t7 + 0x4U); if (c_) goto L_002CCCF8; }
L_002CCD40:;
    if (a5 != 0) goto L_002CCD58;
    (*(volatile u32 *) (u32) s0) = (u32) a4;
    a0 = (s32) ((u32) a0 + 0x1U);
    s0 = (s32) ((u32) s0 + 0x4U);
L_002CCD58:;
    a7 = (s32) ((u32) a7 + 0x1U);
    a1 = a7 < v0;
    { s32 c_ = a1 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_002CCCE0; }
L_002CCD68:;
    v0 = a0;
    { s32 c_ = a0 <= 0; a6 = 0; if (c_) goto L_002CCE40; }
    at = a0 < 9;
    { s32 c_ = at != 0; a5 = (s32) ((u32) a0 + 0xfffffff8U); if (c_) goto L_002CCE08; }
    { s32 c_ = a0 < 0; a1 = 0; if (c_) goto L_002CCDA0; }
    at = (s32) 0x7fff0000U;
    at = at | 0xffff;
    at = a0 < at;
    if (at == 0) goto L_002CCDA0;
    a1 = 1;
L_002CCDA0:;
    if (a1 == 0) goto L_002CCE08;
    t5 = (s32) ((u32) sp + 0xb0U);
    a7 = (s32) ((u32) sp + 0x200U);
L_002CCDB0:;
    a4 = (*(volatile s32 *) (u32) t5);
    a6 = (s32) ((u32) a6 + 0x8U);
    a3 = (*(volatile s32 *) (u32) (t5 + 4));
    a1 = a6 < a5;
    a2 = (*(volatile s32 *) (u32) (t5 + 8));
    (*(volatile u32 *) (u32) a7) = (u32) a4;
    (*(volatile u32 *) (u32) (a7 + 4)) = (u32) a3;
    (*(volatile u32 *) (u32) (a7 + 8)) = (u32) a2;
    a4 = (*(volatile s32 *) (u32) (t5 + 12));
    a3 = (*(volatile s32 *) (u32) (t5 + 16));
    a2 = (*(volatile s32 *) (u32) (t5 + 20));
    (*(volatile u32 *) (u32) (a7 + 12)) = (u32) a4;
    (*(volatile u32 *) (u32) (a7 + 16)) = (u32) a3;
    (*(volatile u32 *) (u32) (a7 + 20)) = (u32) a2;
    a3 = (*(volatile s32 *) (u32) (t5 + 24));
    a2 = (*(volatile s32 *) (u32) (t5 + 28));
    (*(volatile u32 *) (u32) (a7 + 24)) = (u32) a3;
    (*(volatile u32 *) (u32) (a7 + 28)) = (u32) a2;
    t5 = (s32) ((u32) t5 + 0x20U);
    { s32 c_ = a1 != 0; a7 = (s32) ((u32) a7 + 0x20U); if (c_) goto L_002CCDB0; }
L_002CCE08:;
    at = a6 < a0;
    if (at == 0) goto L_002CCE40;
    a0 = (s32) ((u32) a6 << 2);
    a0 = (s32) ((u32) a0 + (u32) sp);
    a3 = (s32) ((u32) a0 + 0xb0U);
    a2 = (s32) ((u32) a0 + 0x200U);
L_002CCE24:;
    a1 = (*(volatile s32 *) (u32) a3);
    a6 = (s32) ((u32) a6 + 0x1U);
    a0 = a6 < v0;
    (*(volatile u32 *) (u32) a2) = (u32) a1;
    a3 = (s32) ((u32) a3 + 0x4U);
    { s32 c_ = a0 != 0; a2 = (s32) ((u32) a2 + 0x4U); if (c_) goto L_002CCE24; }
L_002CCE40:;
    a0 = 0 < v0;
    if (a0 == 0) goto L_002CCE50;
    a0 = 0 < t4;
L_002CCE50:;
    if (a0 == 0) goto L_002CCFB0;
    a5 = 0;
    { s32 c_ = v0 <= 0; a6 = 0; if (c_) goto L_002CCED8; }
    t6 = (s32) ((u32) sp + 0x200U);
    t5 = (s32) ((u32) sp + 0xb0U);
    a1 = 1;
L_002CCE70:;
    a2 = (*(volatile s32 *) (u32) t6);
    a3 = 0;
    { s32 c_ = t4 <= 0; a4 = 0; if (c_) goto L_002CCEB0; }
    a7 = v1;
L_002CCE88:;
    a0 = (*(volatile s32 *) (u32) a7);
    if (a2 != a0) goto L_002CCEA0;
    a3 = a1; goto L_002CCEB0;
L_002CCEA0:;
    a4 = (s32) ((u32) a4 + 0x1U);
    a0 = a4 < t4;
    { s32 c_ = a0 != 0; a7 = (s32) ((u32) a7 + 0x4U); if (c_) goto L_002CCE88; }
L_002CCEB0:;
    if (a3 != 0) goto L_002CCEC8;
    (*(volatile u32 *) (u32) t5) = (u32) a2;
    a5 = (s32) ((u32) a5 + 0x1U);
    t5 = (s32) ((u32) t5 + 0x4U);
L_002CCEC8:;
    a6 = (s32) ((u32) a6 + 0x1U);
    a0 = a6 < v0;
    { s32 c_ = a0 != 0; t6 = (s32) ((u32) t6 + 0x4U); if (c_) goto L_002CCE70; }
L_002CCED8:;
    v0 = a5;
    { s32 c_ = a5 <= 0; a4 = 0; if (c_) goto L_002CCFB0; }
    at = a5 < 9;
    { s32 c_ = at != 0; a3 = (s32) ((u32) a5 + 0xfffffff8U); if (c_) goto L_002CCF78; }
    { s32 c_ = a5 < 0; v1 = 0; if (c_) goto L_002CCF10; }
    at = (s32) 0x7fff0000U;
    at = at | 0xffff;
    at = a5 < at;
    if (at == 0) goto L_002CCF10;
    v1 = 1;
L_002CCF10:;
    if (v1 == 0) goto L_002CCF78;
    a7 = (s32) ((u32) sp + 0xb0U);
    a6 = (s32) ((u32) sp + 0x200U);
L_002CCF20:;
    a2 = (*(volatile s32 *) (u32) a7);
    a4 = (s32) ((u32) a4 + 0x8U);
    a1 = (*(volatile s32 *) (u32) (a7 + 4));
    v1 = a4 < a3;
    a0 = (*(volatile s32 *) (u32) (a7 + 8));
    (*(volatile u32 *) (u32) a6) = (u32) a2;
    (*(volatile u32 *) (u32) (a6 + 4)) = (u32) a1;
    (*(volatile u32 *) (u32) (a6 + 8)) = (u32) a0;
    a2 = (*(volatile s32 *) (u32) (a7 + 12));
    a1 = (*(volatile s32 *) (u32) (a7 + 16));
    a0 = (*(volatile s32 *) (u32) (a7 + 20));
    (*(volatile u32 *) (u32) (a6 + 12)) = (u32) a2;
    (*(volatile u32 *) (u32) (a6 + 16)) = (u32) a1;
    (*(volatile u32 *) (u32) (a6 + 20)) = (u32) a0;
    a1 = (*(volatile s32 *) (u32) (a7 + 24));
    a0 = (*(volatile s32 *) (u32) (a7 + 28));
    (*(volatile u32 *) (u32) (a6 + 24)) = (u32) a1;
    (*(volatile u32 *) (u32) (a6 + 28)) = (u32) a0;
    a7 = (s32) ((u32) a7 + 0x20U);
    { s32 c_ = v1 != 0; a6 = (s32) ((u32) a6 + 0x20U); if (c_) goto L_002CCF20; }
L_002CCF78:;
    at = a4 < a5;
    if (at == 0) goto L_002CCFB0;
    v1 = (s32) ((u32) a4 << 2);
    v1 = (s32) ((u32) v1 + (u32) sp);
    a2 = (s32) ((u32) v1 + 0xb0U);
    a1 = (s32) ((u32) v1 + 0x200U);
L_002CCF94:;
    a0 = (*(volatile s32 *) (u32) a2);
    a4 = (s32) ((u32) a4 + 0x1U);
    v1 = a4 < v0;
    (*(volatile u32 *) (u32) a1) = (u32) a0;
    a2 = (s32) ((u32) a2 + 0x4U);
    { s32 c_ = v1 != 0; a1 = (s32) ((u32) a1 + 0x4U); if (c_) goto L_002CCF94; }
L_002CCFB0:;
    if (v0 <= 0) { v0 = 0; goto L_002CCFD0; }
    a0 = v0 & 0xffff; v0 = Pes6Random_Below(a0);
    v0 = v0 & 0xffff;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) sp);
    v0 = (*(volatile s32 *) (u32) (v0 + 512));
L_002CCFD0:;
    return v0;
}
