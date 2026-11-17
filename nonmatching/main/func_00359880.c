/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Ball_CopyPosition(s32);
s32 Pes6Job_SetField4(s32, s32);
s32 func_0030DBA0(void);
s32 func_0030F270(s32);
s32 func_0030F380(void);
s32 func_00310B60(s32, s32, s32, s32);
s32 func_00338750(s32, s32);
s32 func_003394E0(s32, s32, s32, s32);
s32 func_00340590(f32, f32);
s32 func_00340C80(f32);
s32 memset(s32, s32, s32);

s32 func_00359880(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x590000U;
    v1 = 255;
    s1 = a0;
    a0 = (*(volatile u8 *) (u32) (v0 + 7705));
    if (a0 == v1) { a0 = 1; goto L_003598B8; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v0); hi = (s32) ((s32) a0 % (s32) v0); lo = q_; }
    a0 = hi;
L_003598B8:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s0 = (s32) ((u32) v0 + (u32) v1); v0 = func_0030DBA0();
    if (v0 == 0) goto L_003598EC;
    v0 = func_0030F380();
    if (v0 == 0) { v1 = (*(volatile u8 *) (u32) (s0 + 18)); goto L_00359938; }
L_003598EC:;
    a0 = (s32) 0x620000U;
    a1 = 0;
    a0 = (s32) ((u32) a0 + 0xffffc718U);
    a2 = 12;
    (*(volatile u32 *) (u32) (s1 + 56)) = (u32) 0; v0 = memset(a0, a1, a2);
    a1 = (s32) 0x360000U;
    a2 = (s32) 0x3e0000U;
    a0 = s1;
    a1 = (s32) ((u32) a1 + 0xffff9b10U);
    a2 = (s32) ((u32) a2 + 0x6498U); v0 = Pes6Job_SetField4(a0, a1);
    v0 = (s32) 0x620000U;
    a0 = s1;
    (*(volatile u8 *) (u32) (v0 + -14563)) = (u8) 0;
    a1 = 10; v0 = func_00338750(a0, a1);
    goto L_00359AEC;
L_00359938:;
    v0 = (*(volatile s32 *) (u32) (s1 + 48));
    if (v1 != v0) { v1 = (*(volatile s32 *) (u32) (s1 + 56)); goto L_00359A84; }
    v0 = (*(volatile s32 *) (u32) (s1 + 56));
    if (v0 == 0) { v0 = (s32) 0x3f800000U; goto L_00359960; }
    v0 = (*(volatile s32 *) (u32) (s1 + 40));
    (*(volatile u32 *) (u32) (s1 + 52)) = (u32) v0;
    (*(volatile u32 *) (u32) (s1 + 56)) = (u32) 0;
    v0 = (s32) 0x3f800000U;
L_00359960:;
    v1 = (*(volatile s32 *) (u32) (s1 + 40));
    f12.i = (s32) v0;
    v0 = (*(volatile s32 *) (u32) (s1 + 52));
    s2 = (s32) ((u32) v1 - (u32) v0); v0 = func_00340C80(f12.f);
    at = v0 < s2;
    if (at == 0) goto L_00359AE8;
    a0 = (s32) ((u32) sp + 0x40U); v0 = Pes6Ball_CopyPosition(a0);
    a0 = (s32) ((u32) sp + 0x4cU); v0 = func_0030F270(a0);
    s2 = (*(volatile s16 *) (u32) (s0 + 20));
    f1.f = (*(volatile f32 *) (u32) (s0 + 224));
    f0.f = (*(volatile f32 *) (u32) (s0 + 232));
    f2.i = (s32) s2;
    f2.f = (f32) f2.i;
    f12.f = f2.f * f1.f;
    f13.f = f2.f * f0.f; v0 = func_00340590(f12.f, f13.f);
    if (v0 != 0) goto L_00359AE8;
    a0 = (*(volatile u8 *) (u32) s0);
    a2 = 12288;
    a1 = (*(volatile u16 *) (u32) (s0 + 40));
    a3 = (s32) 0x190000U; v0 = func_00310B60(a0, a1, a2, a3);
    if (v0 != 0) { f0.f = (*(volatile f32 *) (u32) (sp + 76)); goto L_00359A08; }
    f1.i = (s32) s2;
    v0 = (s32) 0x45fc0000U;
    f1.f = (f32) f1.i;
    v0 = v0 | 0x7801;
    f0.f = (*(volatile f32 *) (u32) (sp + 64));
    f1.f = f0.f * f1.f;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_00359AE8;
    f0.f = (*(volatile f32 *) (u32) (sp + 76));
L_00359A08:;
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x46080000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00359AE8;
    v0 = func_0030F380();
    if (v0 != 0) goto L_00359AE8;
    a0 = (*(volatile s32 *) (u32) (s1 + 64));
    a1 = 7;
    a2 = (*(volatile s32 *) (u32) (s1 + 48));
    a3 = 2; v0 = func_003394E0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s1 + 56)) = (u32) 0;
    a1 = (s32) 0x360000U;
    v0 = (*(volatile s32 *) (u32) (s1 + 40));
    a2 = (s32) 0x3e0000U;
    a0 = s1;
    a1 = (s32) ((u32) a1 + 0xffff95e0U);
    a2 = (s32) ((u32) a2 + 0x6498U);
    (*(volatile u32 *) (u32) (s1 + 52)) = (u32) v0; v0 = Pes6Job_SetField4(a0, a1);
    a0 = s1;
    a1 = 1; v0 = func_00338750(a0, a1);
    goto L_00359AE8;
L_00359A84:;
    v0 = (s32) 0x3f400000U;
    f12.i = (s32) v0;
    s0 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (s1 + 56)) = (u32) s0; v0 = func_00340C80(f12.f);
    at = v0 < s0;
    if (at == 0) goto L_00359AE8;
    a0 = (s32) 0x620000U;
    a1 = 0;
    a0 = (s32) ((u32) a0 + 0xffffc718U);
    a2 = 12;
    (*(volatile u32 *) (u32) (s1 + 56)) = (u32) 0; v0 = memset(a0, a1, a2);
    a1 = (s32) 0x360000U;
    a2 = (s32) 0x3e0000U;
    a0 = s1;
    a1 = (s32) ((u32) a1 + 0xffff9b10U);
    a2 = (s32) ((u32) a2 + 0x6498U); v0 = Pes6Job_SetField4(a0, a1);
    v0 = (s32) 0x620000U;
    a0 = s1;
    (*(volatile u8 *) (u32) (v0 + -14563)) = (u8) 0;
    a1 = 10; v0 = func_00338750(a0, a1);
L_00359AE8:;
L_00359AEC:;
    v0 = 1;
    return v0;
}
