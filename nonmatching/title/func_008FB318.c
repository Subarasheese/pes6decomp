/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_008FAA78(s32, s32, s32, s32);
s32 func_008FBEA0(s32, s32, s32);
void func_008FCB88(s32, s32, s32, s32, s32, s32, s32, s32);
void func_00900558(s32, s32, s32, s32, s32, s32, s32, s32);
void printf(s32, s32, s32, s32, s32, s32, s32, s32);

void func_008FB318(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    s3 = 0;
    s2 = 1;
    s1 = a0;
    s0 = (*(volatile s32 *) (u32) (s1 + 64));
    a2 = (*(volatile s32 *) (u32) (s0 + 236));
    v0 = a2 & 0x3f;
    { s32 c_ = v0 == 0; (*(volatile u32 *) (u32) s0) = (u32) 0; if (c_) goto L_008FB368; }
    a1 = (s32) 0x900000U;
    a0 = s0;
    a1 = (s32) ((u32) a1 + 0x2070U); func_00900558(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = -1; goto L_008FB4B0;
L_008FB368:;
    v0 = (*(volatile s32 *) (u32) (s0 + 2168));
    { s32 c_ = v0 == 0; a0 = (s32) 0x900000U; if (c_) goto L_008FB394; }
    a0 = (s32) ((u32) a0 + 0x20b0U); printf(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = -1; goto L_008FB4B0;
L_008FB384:;
    a0 = (s32) ((u32) a0 + 0x20f0U); printf(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = -1; goto L_008FB4B0;
L_008FB394:;
    (*(volatile u32 *) (u32) (s0 + 2100)) = (u32) 0;
    v0 = -1;
L_008FB3A0:;
    { s32 c_ = s3 == v0; v0 = (u64) s2 < (u64) (s64) 5; if (c_) goto L_008FB3E0; }
L_008FB3A8:;
    a0 = s0; v0 = func_008FAA78(a0, a1, a2, a3);
    s2 = v0;
    { s32 c_ = s2 < 0; v0 = -1; if (c_) goto L_008FB4B0; }
    { s32 c_ = s2 == 0; v0 = (u64) s2 < (u64) (s64) 5; if (c_) goto L_008FB3E0; }
    v1 = (*(volatile s32 *) (u32) (s0 + 388));
    v0 = (*(volatile s32 *) (u32) (s0 + 232));
    { s32 c_ = v1 == v0; v0 = (u64) s2 < (u64) (s64) 5; if (c_) goto L_008FB3E0; }
    v0 = (*(volatile s32 *) (u32) (s0 + 2136));
    { s32 c_ = v0 != 0; v0 = (u64) s2 < (u64) (s64) 5; if (c_) goto L_008FB3A8; }
L_008FB3E0:;
    { s32 c_ = v0 == 0; v0 = (s32) 0x900000U; if (c_) goto L_008FB488; }
    v1 = (s32) ((u32) s2 << 2);
    v0 = (s32) ((u32) v0 + 0x2110U);
    v1 = (s32) ((u32) v1 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) a0; ; if (t_ == 0x8fb400U) goto L_008FB400; if (t_ == 0x8fb414U) goto L_008FB414; if (t_ == 0x8fb444U) goto L_008FB444; if (t_ == 0x8fb468U) goto L_008FB468; }
L_008FB400:;
    a0 = s1; func_008FCB88(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = 1;
    (*(volatile u32 *) (u32) s0) = (u32) v1; goto L_008FB488;
L_008FB414:;
    (*(volatile u32 *) (u32) (s0 + 188)) = (u32) 0;
    a0 = s1;
    (*(volatile u32 *) (u32) (s0 + 184)) = (u32) 0;
    a1 = 0;
    (*(volatile u32 *) (u32) (s0 + 180)) = (u32) 0;
    a2 = (*(volatile s32 *) (u32) (s0 + 168)); v0 = func_008FBEA0(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) (s0 + 180));
    s3 = v0;
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (s0 + 180)) = (u32) v1; goto L_008FB488;
L_008FB444:;
    a1 = (*(volatile s32 *) (u32) (s0 + 184));
    a0 = s1;
    a2 = (*(volatile s32 *) (u32) (s0 + 172)); v0 = func_008FBEA0(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) (s0 + 184));
    s3 = v0;
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (s0 + 184)) = (u32) v1; goto L_008FB488;
L_008FB468:;
    a1 = (*(volatile s32 *) (u32) (s0 + 188));
    a0 = s1;
    a2 = (*(volatile s32 *) (u32) (s0 + 176)); v0 = func_008FBEA0(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) (s0 + 188));
    s3 = v0;
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (s0 + 188)) = (u32) v1;
L_008FB488:;
    v0 = (*(volatile s32 *) (u32) (s0 + 2168));
    { s32 c_ = v0 != 0; a0 = (s32) 0x900000U; if (c_) goto L_008FB384; }
    v0 = (*(volatile s32 *) (u32) (s0 + 2100));
    { s32 c_ = v0 != 0; v0 = 1; if (c_) goto L_008FB4B0; }
    v0 = (*(volatile s32 *) (u32) s0);
    { s32 c_ = v0 == 0; v0 = -1; if (c_) goto L_008FB3A0; }
    v0 = 1;
L_008FB4B0:;
    return;
}
