/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void DelayThread(s32);
void WaitSema(void);
s32 func_00105360(void);
void func_00105370(void);
void func_00105380(void);
s32 func_00115ED8(s32, s32, s32);
s32 func_00116D28(void);
void printf(s32, s32, s32, s32, s32, s32, s32, s32);
s32 sceSifBindRpc(s32, s32, s32);
s32 sceSifCallRpc(s32, s32, s32, s32, s32, s32, s32, s32);
void sceSifInitRpc(void);

s32 func_001153C0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 frame[18];
    s32 sp = (s32) (u32) frame;

    s2 = (s32) 0x370000U;
    v0 = (*(volatile s32 *) (u32) (s2 + 18004));
    s1 = 0;
    if (v0 >= 0) goto L_00115460;
    v0 = (s32) 0x3c0000U;
    s0 = 1;
    v0 = (s32) ((u32) v0 + 0x4470U);
    (*(volatile u32 *) (u32) (sp + 24)) = (u32) s0;
    (*(volatile u32 *) (u32) (sp + 36)) = (u32) v0;
    a0 = (s32) ((u32) sp + 0x10U);
    (*(volatile u32 *) (u32) (sp + 20)) = (u32) s0;
    s3 = -1; v0 = func_00105360();
    { s32 c_ = v0 != s3; (*(volatile u32 *) (u32) (s2 + 18004)) = (u32) v0; if (c_) goto L_00115420; }
    v0 = -101; goto L_00115638;
L_00115420:;
    v0 = (s32) 0x3c0000U;
    (*(volatile u32 *) (u32) (sp + 20)) = (u32) s0;
    v0 = (s32) ((u32) v0 + 0x4480U);
    (*(volatile u32 *) (u32) (sp + 24)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 36)) = (u32) v0;
    a0 = (s32) ((u32) sp + 0x10U); v0 = func_00105360();
    s0 = v0;
    v0 = (s32) 0x370000U;
    { s32 c_ = s0 != s3; (*(volatile u32 *) (u32) (v0 + 18008)) = (u32) s0; if (c_) goto L_00115460; }
    a0 = (*(volatile s32 *) (u32) (s2 + 18004)); func_00105370();
    (*(volatile u32 *) (u32) (s2 + 18004)) = (u32) s0;
    v0 = -101; goto L_00115638;
L_00115460:;
    a0 = 0;
    a1 = 0;
    a2 = 0; v0 = func_00115ED8(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s2 + 18004)); WaitSema();
    a0 = 0; sceSifInitRpc();
    s0 = (s32) 0x3f0000U; goto L_0011549C;
L_00115488:;
    s1 = (s32) ((u32) s1 + 0x1U); DelayThread(a0);
    v1 = s1 < 512;
    { s32 c_ = v1 == 0; a0 = (s32) 0x3c0000U; if (c_) goto L_0011561C; }
L_0011549C:;
    a1 = (s32) 0x80000000U;
    a0 = (s32) ((u32) s0 + 0x3880U);
    a1 = a1 | 0x400;
    a2 = 0; v0 = sceSifBindRpc(a0, a1, a2);
    { s32 c_ = v0 >= 0; s3 = (s32) ((u32) s0 + 0x3880U); if (c_) goto L_001154E4; }
    a0 = (s32) 0x3c0000U;
    a0 = (s32) ((u32) a0 + 0x4498U); printf(a0, a1, a2, a3, a4, a5, a6, a7);
L_001154C8:;
    goto L_001154C8;
L_001154E4:;
    v0 = (*(volatile s32 *) (u32) (s3 + 36));
    { s32 c_ = v0 == 0; a0 = 10000; if (c_) goto L_00115488; }
    v0 = func_00116D28();
    v1 = (s32) 0x370000U;
    { s32 c_ = v0 >= 0; (*(volatile u32 *) (u32) (v1 + 18012)) = (u32) v0; if (c_) goto L_0011552C; }
    a0 = (*(volatile s32 *) (u32) (s2 + 18004));
    s1 = (s32) 0x370000U;
    s0 = -1; func_00105370();
    a0 = (*(volatile s32 *) (u32) (s1 + 18008));
    (*(volatile u32 *) (u32) (s2 + 18004)) = (u32) s0; func_00105370();
    (*(volatile u32 *) (u32) (s1 + 18008)) = (u32) s0;
    v0 = -101; goto L_00115638;
L_0011552C:;
    s1 = (s32) 0x3f0000U;
    s4 = s3;
    s0 = (s32) ((u32) s1 + 0x4e40U);
    a3 = (s32) 0x3f0000U;
    a3 = (s32) ((u32) a3 + 0x3900U);
    (*(volatile u32 *) (u32) sp) = (u32) 0;
    a0 = s4;
    a1 = 254;
    a2 = 0;
    a4 = 48;
    a5 = s0;
    a6 = 12;
    a7 = 0; v0 = sceSifCallRpc(a0, a1, a2, a3, a4, a5, a6, a7);
    if (v0 >= 0) { v0 = (*(volatile s32 *) (u32) (s0 + 4)); goto L_00115598; }
    a0 = (*(volatile s32 *) (u32) (s2 + 18004));
    s1 = (s32) 0x370000U;
    (*(volatile u32 *) (u32) (s4 + 36)) = (u32) 0;
    s0 = -1; func_00105370();
    a0 = (*(volatile s32 *) (u32) (s1 + 18008));
    (*(volatile u32 *) (u32) (s2 + 18004)) = (u32) s0; func_00105370();
    (*(volatile u32 *) (u32) (s1 + 18008)) = (u32) s0;
    v0 = -91; goto L_00115638;
L_00115598:;
    v0 = v0 < 522;
    { s32 c_ = v0 == 0; a0 = (s32) 0x3c0000U; if (c_) goto L_001155D8; }
    s1 = (s32) 0x370000U;
    a0 = (s32) ((u32) a0 + 0x44d0U);
    s0 = -1; printf(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (*(volatile s32 *) (u32) (s2 + 18004));
    (*(volatile u32 *) (u32) (s4 + 36)) = (u32) 0; func_00105370();
    a0 = (*(volatile s32 *) (u32) (s1 + 18008));
    (*(volatile u32 *) (u32) (s2 + 18004)) = (u32) s0; func_00105370();
    (*(volatile u32 *) (u32) (s1 + 18008)) = (u32) s0;
    v0 = -120; goto L_00115638;
L_001155D8:;
    v0 = (*(volatile s32 *) (u32) (s0 + 8));
    v0 = v0 < 526;
    { s32 c_ = v0 == 0; a0 = (s32) 0x3c0000U; if (c_) goto L_0011562C; }
    s1 = (s32) 0x370000U;
    a0 = (s32) ((u32) a0 + 0x44f8U);
    s0 = -1; printf(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (*(volatile s32 *) (u32) (s2 + 18004));
    (*(volatile u32 *) (u32) (s3 + 36)) = (u32) 0; func_00105370();
    a0 = (*(volatile s32 *) (u32) (s1 + 18008));
    (*(volatile u32 *) (u32) (s2 + 18004)) = (u32) s0; func_00105370();
    (*(volatile u32 *) (u32) (s1 + 18008)) = (u32) s0;
    v0 = -121; goto L_00115638;
L_0011561C:;
    a0 = (s32) ((u32) a0 + 0x44b0U); printf(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = -91; goto L_00115638;
L_0011562C:;
    a0 = (*(volatile s32 *) (u32) (s2 + 18004)); func_00105380();
    v0 = (*(volatile s32 *) (u32) (s1 + 20032));
L_00115638:;
    return v0;
}
