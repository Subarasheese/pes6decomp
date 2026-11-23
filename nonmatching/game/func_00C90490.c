/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00C90490(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, t8 = 0, t9 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };

    v1 = (s32) 0xcd0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -10020));
    if (v1 == 0) goto L_00C90678;
    { s32 c_ = a0 <= 0; a4 = 0; if (c_) goto L_00C90678; }
    at = a0 < 9;
    { s32 c_ = at != 0; v1 = (s32) ((u32) a0 + 0xfffffff8U); if (c_) goto L_00C90620; }
    { s32 c_ = a0 < 0; a2 = 0; if (c_) goto L_00C904DC; }
    at = (s32) 0x7fff0000U;
    at = at | 0xffff;
    at = a0 < at;
    if (at == 0) goto L_00C904DC;
    a2 = 1;
L_00C904DC:;
    if (a2 == 0) goto L_00C90620;
    a3 = a1;
    a2 = 0;
    t8 = (s32) 0xcd0000U;
    t7 = (s32) 0xcd0000U;
    t6 = (s32) 0xcd0000U;
    t5 = (s32) 0xcd0000U;
    t4 = (s32) 0xcd0000U;
    a7 = (s32) 0xcd0000U;
    a6 = (s32) 0xcd0000U;
    a5 = (s32) 0xcd0000U;
L_00C9050C:;
    s0 = (*(volatile s32 *) (u32) (t8 + -10024));
    a4 = (s32) ((u32) a4 + 0x8U);
    f2.f = (*(volatile f32 *) (u32) a3);
    t9 = a4 < v1;
    f1.f = (*(volatile f32 *) (u32) (a3 + 4));
    f0.f = (*(volatile f32 *) (u32) (a3 + 8));
    s0 = (s32) ((u32) s0 + (u32) a2);
    (*(volatile f32 *) (u32) s0) = f2.f;
    (*(volatile f32 *) (u32) (s0 + 4)) = f1.f;
    (*(volatile f32 *) (u32) (s0 + 8)) = f0.f;
    s0 = (*(volatile s32 *) (u32) (t7 + -10024));
    f2.f = (*(volatile f32 *) (u32) (a3 + 12));
    f1.f = (*(volatile f32 *) (u32) (a3 + 16));
    f0.f = (*(volatile f32 *) (u32) (a3 + 20));
    s0 = (s32) ((u32) s0 + (u32) a2);
    (*(volatile f32 *) (u32) (s0 + 12)) = f2.f;
    (*(volatile f32 *) (u32) (s0 + 16)) = f1.f;
    (*(volatile f32 *) (u32) (s0 + 20)) = f0.f;
    s0 = (*(volatile s32 *) (u32) (t6 + -10024));
    f2.f = (*(volatile f32 *) (u32) (a3 + 24));
    f1.f = (*(volatile f32 *) (u32) (a3 + 28));
    f0.f = (*(volatile f32 *) (u32) (a3 + 32));
    s0 = (s32) ((u32) s0 + (u32) a2);
    (*(volatile f32 *) (u32) (s0 + 24)) = f2.f;
    (*(volatile f32 *) (u32) (s0 + 28)) = f1.f;
    (*(volatile f32 *) (u32) (s0 + 32)) = f0.f;
    s0 = (*(volatile s32 *) (u32) (t5 + -10024));
    f2.f = (*(volatile f32 *) (u32) (a3 + 36));
    f1.f = (*(volatile f32 *) (u32) (a3 + 40));
    f0.f = (*(volatile f32 *) (u32) (a3 + 44));
    s0 = (s32) ((u32) s0 + (u32) a2);
    (*(volatile f32 *) (u32) (s0 + 36)) = f2.f;
    (*(volatile f32 *) (u32) (s0 + 40)) = f1.f;
    (*(volatile f32 *) (u32) (s0 + 44)) = f0.f;
    s0 = (*(volatile s32 *) (u32) (t4 + -10024));
    f2.f = (*(volatile f32 *) (u32) (a3 + 48));
    f1.f = (*(volatile f32 *) (u32) (a3 + 52));
    f0.f = (*(volatile f32 *) (u32) (a3 + 56));
    s0 = (s32) ((u32) s0 + (u32) a2);
    (*(volatile f32 *) (u32) (s0 + 48)) = f2.f;
    (*(volatile f32 *) (u32) (s0 + 52)) = f1.f;
    (*(volatile f32 *) (u32) (s0 + 56)) = f0.f;
    s0 = (*(volatile s32 *) (u32) (a7 + -10024));
    f2.f = (*(volatile f32 *) (u32) (a3 + 60));
    f1.f = (*(volatile f32 *) (u32) (a3 + 64));
    f0.f = (*(volatile f32 *) (u32) (a3 + 68));
    s0 = (s32) ((u32) s0 + (u32) a2);
    (*(volatile f32 *) (u32) (s0 + 60)) = f2.f;
    (*(volatile f32 *) (u32) (s0 + 64)) = f1.f;
    (*(volatile f32 *) (u32) (s0 + 68)) = f0.f;
    s0 = (*(volatile s32 *) (u32) (a6 + -10024));
    f2.f = (*(volatile f32 *) (u32) (a3 + 72));
    f1.f = (*(volatile f32 *) (u32) (a3 + 76));
    f0.f = (*(volatile f32 *) (u32) (a3 + 80));
    s0 = (s32) ((u32) s0 + (u32) a2);
    (*(volatile f32 *) (u32) (s0 + 72)) = f2.f;
    (*(volatile f32 *) (u32) (s0 + 76)) = f1.f;
    (*(volatile f32 *) (u32) (s0 + 80)) = f0.f;
    s0 = (*(volatile s32 *) (u32) (a5 + -10024));
    f2.f = (*(volatile f32 *) (u32) (a3 + 84));
    f1.f = (*(volatile f32 *) (u32) (a3 + 88));
    f0.f = (*(volatile f32 *) (u32) (a3 + 92));
    s0 = (s32) ((u32) s0 + (u32) a2);
    a2 = (s32) ((u32) a2 + 0x60U);
    (*(volatile f32 *) (u32) (s0 + 84)) = f2.f;
    a3 = (s32) ((u32) a3 + 0x60U);
    (*(volatile f32 *) (u32) (s0 + 88)) = f1.f;
    { s32 c_ = t9 != 0; (*(volatile f32 *) (u32) (s0 + 92)) = f0.f; if (c_) goto L_00C9050C; }
L_00C90620:;
    at = a4 < a0;
    if (at == 0) goto L_00C90678;
    v1 = (s32) ((u32) a4 << 1);
    v1 = (s32) ((u32) v1 + (u32) a4);
    a3 = (s32) ((u32) v1 << 2);
    a5 = (s32) ((u32) a1 + (u32) a3);
    v1 = (s32) 0xcd0000U;
L_00C90640:;
    a2 = (*(volatile s32 *) (u32) (v1 + -10024));
    a4 = (s32) ((u32) a4 + 0x1U);
    f2.f = (*(volatile f32 *) (u32) a5);
    a1 = a4 < a0;
    f1.f = (*(volatile f32 *) (u32) (a5 + 4));
    f0.f = (*(volatile f32 *) (u32) (a5 + 8));
    a2 = (s32) ((u32) a2 + (u32) a3);
    a3 = (s32) ((u32) a3 + 0xcU);
    (*(volatile f32 *) (u32) a2) = f2.f;
    a5 = (s32) ((u32) a5 + 0xcU);
    (*(volatile f32 *) (u32) (a2 + 4)) = f1.f;
    { s32 c_ = a1 != 0; (*(volatile f32 *) (u32) (a2 + 8)) = f0.f; if (c_) goto L_00C90640; }
L_00C90678:;
    return v0;
}
