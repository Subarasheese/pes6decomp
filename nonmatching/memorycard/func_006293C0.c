/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001B8360(s32);
void func_001B8DC0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_001B9030(s32, s32, s32, s32);
s32 func_002E8BD0(void);

void func_006293C0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    s3 = a0;
    s2 = 1;
    s0 = s2; v0 = func_002E8BD0();
    at = (u64) v0 < (u64) (s64) 74;
    if (at == 0) { s0 = 0; goto L_006294E4; }
    v1 = (s32) 0x660000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffa9f0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x629410U) goto L_00629410; if (t_ == 0x62941cU) goto L_0062941C; if (t_ == 0x629428U) goto L_00629428; if (t_ == 0x629434U) goto L_00629434; if (t_ == 0x629440U) goto L_00629440; if (t_ == 0x62944cU) goto L_0062944C; if (t_ == 0x629458U) goto L_00629458; if (t_ == 0x629464U) goto L_00629464; if (t_ == 0x629470U) goto L_00629470; if (t_ == 0x62947cU) goto L_0062947C; if (t_ == 0x629488U) goto L_00629488; if (t_ == 0x629498U) goto L_00629498; if (t_ == 0x6294a4U) goto L_006294A4; if (t_ == 0x6294b0U) goto L_006294B0; if (t_ == 0x6294bcU) goto L_006294BC; if (t_ == 0x6294ccU) goto L_006294CC; if (t_ == 0x6294d8U) goto L_006294D8; }
L_00629410:;
    s0 = 0;
    goto L_006294E4;
L_0062941C:;
    v0 = (s32) 0x660000U;
    s1 = (*(volatile s32 *) (u32) (v0 + -24672)); goto L_006294E4;
L_00629428:;
    v0 = (s32) 0x660000U;
    s1 = (*(volatile s32 *) (u32) (v0 + -24672)); goto L_006294E4;
L_00629434:;
    v0 = (s32) 0x660000U;
    s1 = (*(volatile s32 *) (u32) (v0 + -24672)); goto L_006294E4;
L_00629440:;
    v0 = (s32) 0x660000U;
    s1 = (*(volatile s32 *) (u32) (v0 + -24672)); goto L_006294E4;
L_0062944C:;
    v0 = (s32) 0x660000U;
    s1 = (*(volatile s32 *) (u32) (v0 + -24672)); goto L_006294E4;
L_00629458:;
    v0 = (s32) 0x660000U;
    s1 = (*(volatile s32 *) (u32) (v0 + -24668)); goto L_006294E4;
L_00629464:;
    v0 = (s32) 0x660000U;
    s1 = (*(volatile s32 *) (u32) (v0 + -24668)); goto L_006294E4;
L_00629470:;
    v0 = (s32) 0x660000U;
    s1 = (*(volatile s32 *) (u32) (v0 + -24668)); goto L_006294E4;
L_0062947C:;
    v0 = (s32) 0x660000U;
    s1 = (*(volatile s32 *) (u32) (v0 + -24668)); goto L_006294E4;
L_00629488:;
    v0 = (s32) 0x660000U;
    s1 = (*(volatile s32 *) (u32) (v0 + -24668));
    s2 = 7; goto L_006294E4;
L_00629498:;
    v0 = (s32) 0x660000U;
    s1 = (*(volatile s32 *) (u32) (v0 + -24668)); goto L_006294E4;
L_006294A4:;
    v0 = (s32) 0x660000U;
    s1 = (*(volatile s32 *) (u32) (v0 + -24660)); goto L_006294E4;
L_006294B0:;
    v0 = (s32) 0x660000U;
    s1 = (*(volatile s32 *) (u32) (v0 + -24656)); goto L_006294E4;
L_006294BC:;
    v0 = (s32) 0x660000U;
    s1 = (*(volatile s32 *) (u32) (v0 + -24652));
    s2 = 2; goto L_006294E4;
L_006294CC:;
    v0 = (s32) 0x660000U;
    s1 = (*(volatile s32 *) (u32) (v0 + -24648)); goto L_006294E4;
L_006294D8:;
    v0 = (s32) 0x660000U;
    s2 = 6;
    s1 = (*(volatile s32 *) (u32) (v0 + -24644));
L_006294E4:;
    v0 = 1;
    if (s0 != v0) goto L_00629520;
    if (s3 != v0) goto L_00629518;
    func_001B8DC0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = s2;
    a1 = s1;
    a2 = 1; func_001B9030(a0, a1, a2, a3);
    goto L_00629520;
L_00629518:;
    func_001B8DC0(a0, a1, a2, a3, a4, a5, a6, a7);
L_00629520:;
    a0 = (s32) 0x660000U;
    a0 = (s32) ((u32) a0 + 0xffffc280U); func_001B8360(a0);
    return;
}
