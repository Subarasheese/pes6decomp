/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s32);
void func_001F17C0(s32);
void func_001F18D0(s32, s32);
void func_001F1990(s32, s32, s32, s32);
void func_001F2770(s32, f32);
s32 func_0026A950(s32, s32, s32, s32, s32);
void func_0026A9F0(s32, f32);
s32 func_00308400(void);

s32 func_008F83B0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s32 hi = 0, lo = 0;
    f32 acc = 0;
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    v0 = func_00308400();
    if (v0 == 0) goto L_008F83D4;
    v0 = 0; goto L_008F85B8;
L_008F83D4:;
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    v0 = (*(volatile s32 *) (u32) v0);
    if (v0 <= 0) { v0 = 0; goto L_008F85B8; }
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0xf802; SD_call(a0);
    v1 = (s32) 0x3b0000U;
    v0 = (s32) 0x3b0000U;
    a1 = (*(volatile s32 *) (u32) (v1 + -5680));
    a0 = (*(volatile s32 *) (u32) a1);
    v1 = 11;
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    (*(volatile u32 *) (u32) a1) = (u32) a0;
    a0 = (*(volatile s32 *) (u32) (v0 + -5680));
    s1 = (*(volatile s32 *) (u32) a0);
    f3.f = (*(volatile f32 *) (u32) (a0 + 16));
    f2.f = (*(volatile f32 *) (u32) (a0 + 20));
    f1.f = (*(volatile f32 *) (u32) (a0 + 24));
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) s1 / (s32) v1); hi = (s32) ((s32) s1 % (s32) v1); lo = q_; }
    f0.f = (*(volatile f32 *) (u32) (a0 + 28));
    (*(volatile f32 *) (u32) (sp + 48)) = f3.f;
    (*(volatile f32 *) (u32) (sp + 52)) = f2.f;
    (*(volatile f32 *) (u32) (sp + 56)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 60)) = f0.f;
    v0 = hi;
    s0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) a0 + (u32) s0);
    a0 = (*(volatile s32 *) (u32) (v0 + 1400)); func_001F1990(a0, a1, a2, a3);
    v0 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) s1 + 0x424U);
    a1 = (*(volatile s32 *) (u32) (v0 + -5680));
    v1 = (s32) ((u32) v1 + (u32) a1);
    v0 = 22;
    v1 = (*(volatile s8 *) (u32) v1);
    if (v1 == v0) { v0 = (s32) ((u32) s1 << 2); goto L_008F848C; }
    f1.f = (*(volatile f32 *) (u32) (sp + 48));
    v0 = (s32) 0x41800000U;
    f0.i = (s32) v0;
    f0.f = f1.f + f0.f;
    (*(volatile f32 *) (u32) (sp + 48)) = f0.f;
    v0 = (s32) ((u32) s1 << 2);
L_008F848C:;
    a0 = (*(volatile s32 *) (u32) (a1 + 1392));
    v0 = (s32) ((u32) a1 + (u32) v0);
    a2 = (s32) ((u32) sp + 0x30U);
    a4 = (*(volatile s32 *) (u32) (v0 + 36));
    a3 = 0;
    a1 = 23; v0 = func_0026A950(a0, a1, a2, a3, a4);
    a0 = (s32) 0x3b0000U;
    a1 = (s32) 0x3b0000U;
    a2 = (*(volatile s32 *) (u32) (a0 + -5680));
    v1 = (s32) 0x3b0000U;
    a1 = (s32) ((u32) a1 + 0xffffb520U);
    a2 = (s32) ((u32) a2 + (u32) s0);
    a0 = (s32) ((u32) s1 + 0x424U);
    (*(volatile u32 *) (u32) (a2 + 1400)) = (u32) v0;
    v1 = (*(volatile s32 *) (u32) (v1 + -5680));
    v0 = (s32) ((u32) a0 + (u32) v1);
    v0 = (*(volatile s8 *) (u32) v0);
    v1 = (s32) ((u32) v1 + (u32) s0);
    a0 = (*(volatile s32 *) (u32) (v1 + 1400));
    v0 = (s32) ((u32) v0 << 2);
    a1 = (s32) ((u32) a1 + (u32) v0); func_001F18D0(a0, a1);
    v0 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) s1 + 0x424U);
    a0 = (*(volatile s32 *) (u32) (v0 + -5680));
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = 22;
    v1 = (*(volatile s8 *) (u32) v1);
    if (v1 != v0) { s0 = 0; goto L_008F8518; }
    v0 = (s32) ((u32) a0 + (u32) s0);
    a0 = (*(volatile s32 *) (u32) (v0 + 1400)); func_001F17C0(a0);
    s0 = 0;
L_008F8518:;
    v0 = (s32) 0x3b0000U;
    v1 = 11;
    a0 = (*(volatile s32 *) (u32) (v0 + -5680));
    f0.i = (s32) s0;
    f2.f = (f32) f0.i;
    v0 = (*(volatile s32 *) (u32) a0);
    v0 = (s32) ((u32) s0 + (u32) v0);
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) v1); hi = (s32) ((s32) v0 % (s32) v1); lo = q_; }
    f3.f = (*(volatile f32 *) (u32) (a0 + 28));
    f1.f = (*(volatile f32 *) (u32) (a0 + 20));
    f0.i = (s32) 0;
    acc = f0.f + f1.f;
    v0 = hi;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) a0 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 1400));
    f12.f = acc + f3.f * f2.f; func_0026A9F0(a0, f12.f);
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 11;
    if (v0 != 0) goto L_008F8518;
    v0 = (s32) 0x3b0000U;
    v1 = (*(volatile s32 *) (u32) (v0 + -5680));
    v0 = (*(volatile s32 *) (u32) (v1 + 8));
    f0.f = (*(volatile f32 *) (u32) v1);
    a0 = (*(volatile s32 *) (u32) (v1 + 1396));
    v0 = (s32) ((u32) v0 + 0xfffffff5U);
    f1.i = (s32) v0;
    f1.f = (f32) f1.i;
    f0.f = (f32) f0.i;
    f12.f = f0.f / f1.f;
    func_001F2770(a0, f12.f);
    v0 = 0;
L_008F85B8:;
    return v0;
}
