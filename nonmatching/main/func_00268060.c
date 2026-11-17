/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002F8250(s32, s32, s32, s32);
s32 func_002F8270(s32, s32, s32, s32);

s32 func_00268060(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, t8 = 0, t9 = 0, fp = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    s64 frame[26];
    s32 sp = (s32) (u32) frame;

    s7 = (s32) 0x590000U;
    s7 = (s32) ((u32) s7 + 0xffffd680U);
    s2 = 0;
    s1 = (s32) ((u32) sp + 0xb0U);
    s0 = a0;
L_002680A0:;
    a0 = s0;
    a1 = s2; v0 = func_002F8270(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) s1) = (u32) v0;
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 4;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_002680A0; }
    s1 = 0;
    s2 = (s32) ((u32) sp + 0xa0U);
L_002680C8:;
    a0 = s0;
    a1 = s1; v0 = func_002F8250(a0, a1, a2, a3);
    s1 = (s32) ((u32) s1 + 0x1U);
    (*(volatile u32 *) (u32) s2) = (u32) v0;
    v1 = s1 < 4;
    { s32 c_ = v1 != 0; s2 = (s32) ((u32) s2 + 0x4U); if (c_) goto L_002680C8; }
    v1 = (s32) 0x3e0000U;
    s2 = (*(volatile s32 *) (u32) (sp + 180));
    f0.f = (*(volatile f32 *) (u32) (v1 + -27640));
    s0 = (*(volatile s32 *) (u32) (sp + 184));
    t8 = (*(volatile s32 *) (u32) (sp + 188));
    a5 = 0;
    t4 = 0;
    fp = (s32) ((u32) sp + 0xa0U);
    (*(volatile f32 *) (u32) (sp + 204)) = f0.f;
    v1 = (*(volatile s32 *) (u32) (sp + 176));
    a3 = (*(volatile u8 *) (u32) (sp + 204));
    a2 = (*(volatile u8 *) (u32) (sp + 205));
    a1 = (*(volatile u8 *) (u32) (sp + 206));
    a0 = (*(volatile u8 *) (u32) (sp + 207));
L_00268120:;
    a4 = (s32) ((u32) s7 + (u32) t4);
    t5 = 0;
    (*(volatile u8 *) (u32) (a4 + 40)) = (u8) a3;
    t5 = (s32) ((u32) t5 + 0x6U);
    (*(volatile u8 *) (u32) (a4 + 41)) = (u8) a2;
    a6 = (s32) ((u32) t5 << 4);
    (*(volatile u8 *) (u32) (a4 + 42)) = (u8) a1;
    s3 = (s32) ((u32) v1 + (u32) t4);
    (*(volatile u8 *) (u32) (a4 + 43)) = (u8) a0;
    s1 = (s32) ((u32) s2 + (u32) t4);
    (*(volatile u8 *) (u32) (a4 + 56)) = (u8) a3;
    t9 = (s32) ((u32) s0 + (u32) t4);
    (*(volatile u8 *) (u32) (a4 + 57)) = (u8) a2;
    t7 = (s32) ((u32) t8 + (u32) t4);
    (*(volatile u8 *) (u32) (a4 + 58)) = (u8) a1;
    t6 = 0;
    (*(volatile u8 *) (u32) (a4 + 59)) = (u8) a0;
    a7 = fp;
    s6 = (*(volatile u8 *) (u32) (s3 + 8));
    a6 = (s32) ((u32) a4 + (u32) a6);
    s5 = (*(volatile u8 *) (u32) (s3 + 9));
    s4 = (*(volatile u8 *) (u32) (s3 + 10));
    s3 = (*(volatile u8 *) (u32) (s3 + 11));
    (*(volatile u8 *) (u32) (a4 + 72)) = (u8) s6;
    (*(volatile u8 *) (u32) (a4 + 73)) = (u8) s5;
    (*(volatile u8 *) (u32) (a4 + 74)) = (u8) s4;
    (*(volatile u8 *) (u32) (a4 + 75)) = (u8) s3;
    s5 = (*(volatile u8 *) (u32) (s1 + 8));
    s4 = (*(volatile u8 *) (u32) (s1 + 9));
    s3 = (*(volatile u8 *) (u32) (s1 + 10));
    s1 = (*(volatile u8 *) (u32) (s1 + 11));
    (*(volatile u8 *) (u32) (a4 + 88)) = (u8) s5;
    (*(volatile u8 *) (u32) (a4 + 89)) = (u8) s4;
    (*(volatile u8 *) (u32) (a4 + 90)) = (u8) s3;
    (*(volatile u8 *) (u32) (a4 + 91)) = (u8) s1;
    s4 = (*(volatile u8 *) (u32) (t9 + 8));
    s3 = (*(volatile u8 *) (u32) (t9 + 9));
    s1 = (*(volatile u8 *) (u32) (t9 + 10));
    s5 = (*(volatile u8 *) (u32) (t9 + 11));
    (*(volatile u8 *) (u32) (a4 + 104)) = (u8) s4;
    (*(volatile u8 *) (u32) (a4 + 105)) = (u8) s3;
    (*(volatile u8 *) (u32) (a4 + 106)) = (u8) s1;
    (*(volatile u8 *) (u32) (a4 + 107)) = (u8) s5;
    s4 = (*(volatile u8 *) (u32) (t7 + 8));
    s3 = (*(volatile u8 *) (u32) (t7 + 9));
    s1 = (*(volatile u8 *) (u32) (t7 + 10));
    t7 = (*(volatile u8 *) (u32) (t7 + 11));
    (*(volatile u8 *) (u32) (a4 + 120)) = (u8) s4;
    (*(volatile u8 *) (u32) (a4 + 121)) = (u8) s3;
    (*(volatile u8 *) (u32) (a4 + 122)) = (u8) s1;
    (*(volatile u8 *) (u32) (a4 + 123)) = (u8) t7;
L_002681F0:;
    a4 = (*(volatile s32 *) (u32) a7);
    if (a4 == 0) goto L_00268220;
    a4 = (s32) ((u32) t4 + (u32) a4);
    s3 = (*(volatile u8 *) (u32) (a4 + 32));
    s1 = (*(volatile u8 *) (u32) (a4 + 33));
    t7 = (*(volatile u8 *) (u32) (a4 + 34));
    a4 = (*(volatile u8 *) (u32) (a4 + 35));
    (*(volatile u8 *) (u32) (a6 + 40)) = (u8) s3;
    (*(volatile u8 *) (u32) (a6 + 41)) = (u8) s1;
    (*(volatile u8 *) (u32) (a6 + 42)) = (u8) t7;
    (*(volatile u8 *) (u32) (a6 + 43)) = (u8) a4;
L_00268220:;
    t6 = (s32) ((u32) t6 + 0x1U);
    a4 = t6 < 4;
    a7 = (s32) ((u32) a7 + 0x4U);
    a6 = (s32) ((u32) a6 + 0x10U);
    { s32 c_ = a4 != 0; t5 = (s32) ((u32) t5 + 0x1U); if (c_) goto L_002681F0; }
    a5 = (s32) ((u32) a5 + 0x1U);
    a4 = a5 < 4;
    { s32 c_ = a4 != 0; t4 = (s32) ((u32) t4 + 0x4U); if (c_) goto L_00268120; }
    return v0;
}
