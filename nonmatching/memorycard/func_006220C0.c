/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001F08B0(s64);
s64 func_00623430(void);
s64 func_0063CA40(s64);
void memset(s64, s64, s64);
void sprintf(s64, s64, s64, s64, s64, s64, s64, s64);

s64 func_006220C0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    s64 frame[38];
    s64 sp = (s32) (u32) frame;

    s7 = a1;
    s6 = a0;
    a0 = s7;
    a1 = 0;
    (*(volatile u8 *) (u32) (sp + 300)) = (u8) 0; memset(a0, a1, a2);
    v0 = (s32) 0x660000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -24528)); v0 = func_001F08B0(a0);
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (sp + 232)) = (u32) v0;
    a0 = (*(volatile s32 *) (u32) (v1 + -24524));
    (*(volatile u32 *) (u32) (sp + 228)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 224)) = (u32) v0; v0 = func_001F08B0(a0);
    s1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (sp + 248)) = (u32) v0;
    s2 = 0;
    (*(volatile u32 *) (u32) (sp + 244)) = (u32) v0;
    s1 = (s32) ((u32) s1 + 0xffff9fc0U);
    (*(volatile u32 *) (u32) (sp + 240)) = (u32) v0;
    s0 = (s32) ((u32) sp + 0x100U);
    (*(volatile u32 *) (u32) (sp + 236)) = (u32) v0;
L_00622144:;
    a0 = (*(volatile s32 *) (u32) (s1 + 8)); v0 = func_001F08B0(a0);
    (*(volatile u32 *) (u32) s0) = (u32) v0;
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 8;
    s1 = (s32) ((u32) s1 + 0x4U);
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00622144; }
    v0 = func_00623430();
    v0 = v0 & 0x1;
    if (v0 != 0) goto L_00622188;
    v0 = (s32) 0x660000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -24640)); v0 = func_001F08B0(a0);
    (*(volatile u32 *) (u32) (sp + 256)) = (u32) v0;
L_00622188:;
    v0 = func_00623430();
    v0 = v0 & 0x2;
    if (v0 != 0) { s4 = -1; goto L_006221B0; }
    v0 = (s32) 0x660000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -24636)); v0 = func_001F08B0(a0);
    (*(volatile u32 *) (u32) (sp + 272)) = (u32) v0;
    s4 = -1;
L_006221B0:;
    s0 = 0;
    s3 = s6;
    s2 = (s32) ((u32) sp + 0xe0U);
    s1 = (s32) ((u32) sp + 0x100U);
L_006221C0:;
    if (s0 == 0) goto L_00622298;
    { s32 c_ = s0 >= 0; v0 = s0 & 0x3; if (c_) goto L_006221DC; }
    if (v0 == 0) goto L_006221DC;
    v0 = (s32) ((u32) v0 + 0xfffffffcU);
L_006221DC:;
    if (v0 == 0) goto L_00622230;
    { s32 c_ = s0 >= 0; s5 = (s32) s0 >> 2; if (c_) goto L_006221F4; }
    v0 = (s32) ((u32) s0 + 0x3U);
    s5 = (s32) v0 >> 2;
L_006221F4:;
    if (s5 != 0) goto L_00622210;
    v0 = func_00623430();
    v0 = v0 & 0x1;
    if (v0 == 0) goto L_00622298;
L_00622210:;
    v0 = 1;
    if (s5 != v0) goto L_00622230;
    v0 = func_00623430();
    v0 = v0 & 0x2;
    if (v0 == 0) goto L_00622298;
L_00622230:;
    a0 = (s32) ((u32) s6 + (u32) s0);
    v1 = (*(volatile u8 *) (u32) (a0 + 48));
    v0 = 1;
    if (v1 == v0) goto L_00622250;
    v0 = 8;
    if (v1 != v0) goto L_00622298;
L_00622250:;
    v0 = (*(volatile u8 *) (u32) (a0 + 40));
    if (v0 != 0) goto L_00622298;
    s5 = (*(volatile s32 *) (u32) s3);
    a0 = 5; v0 = func_0063CA40(a0);
    at = s5 < v0;
    if (at == 0) goto L_00622298;
    v0 = -1;
    if (s4 != v0) goto L_006222B0;
    { s32 c_ = s0 == 0; s4 = s0; if (c_) goto L_006222B0; }
    v0 = (s32) ((u32) sp + 0x12cU);
    (*(volatile u32 *) (u32) (s2 + -4)) = (u32) v0; goto L_006222B0;
L_00622298:;
    if (s0 == 0) goto L_006222A8;
    v0 = (s32) ((u32) sp + 0x12cU);
    (*(volatile u32 *) (u32) (s2 + -4)) = (u32) v0;
L_006222A8:;
    v0 = (s32) ((u32) sp + 0x12cU);
    (*(volatile u32 *) (u32) s1) = (u32) v0;
L_006222B0:;
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 8;
    s3 = (s32) ((u32) s3 + 0x4U);
    s2 = (s32) ((u32) s2 + 0x4U);
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_006221C0; }
    at = s4 < 4;
    if (at == 0) goto L_00622354;
    v0 = (s32) 0x660000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -24520)); v0 = func_001F08B0(a0);
    a2 = (*(volatile s32 *) (u32) (sp + 268));
    a1 = v0;
    v1 = (*(volatile s32 *) (u32) (sp + 236));
    a0 = s7;
    v0 = (*(volatile s32 *) (u32) (sp + 272));
    (*(volatile u64 *) (u32) sp) = (u64) a2;
    a2 = (*(volatile s32 *) (u32) (sp + 240));
    (*(volatile u64 *) (u32) (sp + 8)) = (u64) v1;
    (*(volatile u64 *) (u32) (sp + 16)) = (u64) v0;
    (*(volatile u64 *) (u32) (sp + 24)) = (u64) a2;
    v1 = (*(volatile s32 *) (u32) (sp + 276));
    v0 = (*(volatile s32 *) (u32) (sp + 244));
    a2 = (*(volatile s32 *) (u32) (sp + 280));
    (*(volatile u64 *) (u32) (sp + 32)) = (u64) v1;
    (*(volatile u64 *) (u32) (sp + 40)) = (u64) v0;
    (*(volatile u64 *) (u32) (sp + 48)) = (u64) a2;
    v1 = (*(volatile s32 *) (u32) (sp + 248));
    v0 = (*(volatile s32 *) (u32) (sp + 284));
    a2 = (*(volatile s32 *) (u32) (sp + 256));
    (*(volatile u64 *) (u32) (sp + 56)) = (u64) v1;
    a3 = (*(volatile s32 *) (u32) (sp + 224));
    a4 = (*(volatile s32 *) (u32) (sp + 260));
    a5 = (*(volatile s32 *) (u32) (sp + 228));
    a6 = (*(volatile s32 *) (u32) (sp + 264));
    a7 = (*(volatile s32 *) (u32) (sp + 232));
    (*(volatile u64 *) (u32) (sp + 64)) = (u64) v0; sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = 0; goto L_00622390;
L_00622354:;
    v0 = (s32) 0x660000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -24516)); v0 = func_001F08B0(a0);
    a1 = v0;
    a2 = (*(volatile s32 *) (u32) (sp + 272));
    v0 = (*(volatile s32 *) (u32) (sp + 284));
    a0 = s7;
    a3 = (*(volatile s32 *) (u32) (sp + 240));
    a4 = (*(volatile s32 *) (u32) (sp + 276));
    a5 = (*(volatile s32 *) (u32) (sp + 244));
    a6 = (*(volatile s32 *) (u32) (sp + 280));
    a7 = (*(volatile s32 *) (u32) (sp + 248));
    (*(volatile u64 *) (u32) sp) = (u64) v0; sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = 0;
L_00622390:;
    a1 = (s32) ((u32) sp + 0x100U);
    v1 = (s32) ((u32) sp + 0x12cU);
L_00622398:;
    v0 = (*(volatile s32 *) (u32) a1);
    if (v0 == v1) { a0 = (s32) ((u32) a0 + 0x1U); goto L_006223AC; }
    v0 = 1; goto L_006223BC;
L_006223AC:;
    v0 = a0 < 8;
    { s32 c_ = v0 != 0; a1 = (s32) ((u32) a1 + 0x4U); if (c_) goto L_00622398; }
    v0 = 0;
L_006223BC:;
    return v0;
}
