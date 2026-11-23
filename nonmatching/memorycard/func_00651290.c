/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00264280(s32, s32);
s32 func_00264300(s32, s32);
s32 func_002643F0(void);
s32 func_002644E0(void);
void func_002E8A20(s32);
s32 func_002E8BD0(void);
s32 func_002E92F0(void);
void func_00622B50(s32);
void func_00639D80(s32);
void func_0063A660(s32);
s32 func_0063A9F0(s32);
s32 func_0063CAB0(s32);
void func_0063EA60(s32, s32, s32, s32);
void func_006455E0(s32, s32, s32, s32);
void func_0064F670(void);
s32 func_00650D50(s32, s32, s32, s32, s32, s32, s32, s32);
void func_00651600(s32, s32, s32, s32, s32, s32, s32, s32);
void memcpy(s32, s32, s32);

s32 func_00651290(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;

    v0 = (s32) 0x660000U;
    a1 = a0;
    s0 = (*(volatile s32 *) (u32) (v0 + -4240));
    a0 = s0; v0 = func_00650D50(a0, a1, a2, a3, a4, a5, a6, a7);
    if (v0 != 0) goto L_006512D0;
    v0 = 0; goto L_0065145C;
L_006512D0:;
    v0 = (s32) 0x660000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -10088)); v0 = func_0063A9F0(a0);
    s1 = v0;
    a0 = s1; v0 = func_0063CAB0(a0);
    a0 = v0; func_00639D80(a0);
    at = (u64) s1 < (u64) (s64) 13;
    if (at == 0) goto L_006513F8;
    v1 = (s32) 0x660000U;
    v0 = (s32) ((u32) s1 << 2);
    v1 = (s32) ((u32) v1 + 0xffffbb80U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x651318U) goto L_00651318; if (t_ == 0x651344U) goto L_00651344; if (t_ == 0x6513b8U) goto L_006513B8; if (t_ == 0x6513c8U) goto L_006513C8; if (t_ == 0x6513e0U) goto L_006513E0; if (t_ == 0x6513f0U) goto L_006513F0; if (t_ == 0x6513f8U) goto L_006513F8; }
L_00651318:;
    func_00651600(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (s32) 0x660000U;
    s1 = (*(volatile s32 *) (u32) (v0 + -4232)); v0 = func_002643F0();
    a0 = (s32) ((u32) s1 + 0x10U);
    a1 = v0;
    a2 = 5040; memcpy(a0, a1, a2);
    goto L_006513F8;
L_00651344:;
    v0 = (s32) 0x660000U;
    s3 = (*(volatile s32 *) (u32) (v0 + -4240)); v0 = func_002644E0();
    s1 = v0;
    s4 = 0;
    v0 = 7;
    (*(volatile u8 *) (u32) (s3 + 12)) = (u8) v0;
    a1 = s4 & 0xff;
L_00651364:;
    a0 = s1;
    s2 = (s32) ((u32) s3 + (u32) s4); v0 = func_00264300(a0, a1);
    (*(volatile u8 *) (u32) (s2 + 44)) = (u8) v0;
    a1 = s4 & 0xff;
    a0 = s1; v0 = func_00264280(a0, a1);
    (*(volatile u8 *) (u32) (s2 + 52)) = (u8) v0;
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = s4 < 5;
    if (v0 != 0) { a1 = s4 & 0xff; goto L_00651364; }
    v0 = (s32) 0x660000U;
    s1 = (*(volatile s32 *) (u32) (v0 + -4232)); v0 = func_002644E0();
    a0 = (s32) ((u32) s1 + 0xcU);
    a1 = v0;
    a2 = 31308; memcpy(a0, a1, a2);
    goto L_006513F8;
L_006513B8:;
    func_0064F670();
    goto L_006513F8;
L_006513C8:;
    v0 = func_002E92F0();
    a0 = v0; func_0063A660(a0);
    goto L_006513F8;
L_006513E0:;
    func_0063EA60(a0, a1, a2, a3);
    goto L_006513F8;
L_006513F0:;
    func_006455E0(a0, a1, a2, a3);
L_006513F8:;
    v0 = func_002E8BD0();
    v1 = 54;
    if (v0 == v1) { a0 = (s32) ((u32) s0 + 0x14U); goto L_00651438; }
    v0 = func_002E8BD0();
    v1 = 20;
    if (v0 == v1) goto L_00651434;
    v0 = func_002E8BD0();
    v1 = 52;
    if (v0 != v1) { a0 = (*(volatile u8 *) (u32) (s0 + 12)); goto L_00651450; }
L_00651434:;
    a0 = (s32) ((u32) s0 + 0x14U);
L_00651438:;
    func_002E8A20(a0);
    a0 = (s32) 0x5f0000U;
    a0 = (s32) ((u32) a0 + 0xffff9100U); func_002E8A20(a0);
    a0 = (*(volatile u8 *) (u32) (s0 + 12));
L_00651450:;
    func_00622B50(a0);
    v0 = 1;
L_0065145C:;
    return v0;
}
