/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_002643F0(void);
s64 func_002644E0(void);
s64 func_002E92F0(void);
void func_0063A760(s64, s64);
void func_0063E260(s64, s64, s64, s64);
void func_00645340(s64, s64, s64, s64);
void func_006453D0(void);
void func_0064EDF0(s64, s64, s64, s64);

void func_00651130(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 gp = 0x3ef370;

    v1 = (s32) 0x660000U;
    a1 = (s32) 0x660000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -4240));
    s0 = (*(volatile s32 *) (u32) (a1 + -4232));
    v1 = (*(volatile u8 *) (u32) (v1 + 12));
    at = (u64) v1 < (u64) (s64) 13;
    { s32 c_ = at == 0; s1 = a0; if (c_) goto L_0065127C; }
    a1 = (s32) 0x660000U;
    v1 = (s32) ((u32) v1 << 2);
    a1 = (s32) ((u32) a1 + 0xffffbb40U);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x65117cU) goto L_0065117C; if (t_ == 0x6511ccU) goto L_006511CC; if (t_ == 0x651218U) goto L_00651218; if (t_ == 0x651228U) goto L_00651228; if (t_ == 0x651244U) goto L_00651244; if (t_ == 0x651254U) goto L_00651254; if (t_ == 0x65127cU) goto L_0065127C; }
L_0065117C:;
    v0 = func_002643F0();
    a3 = (s32) ((u32) s0 + 0x10U);
    a1 = 315;
    a2 = v0;
L_00651190:;
    a0 = (*(volatile s64 *) (u32) a3);
    a1 = (s32) ((u32) a1 + 0xffffffffU);
    v1 = (*(volatile s64 *) (u32) (a3 + 8));
    (*(volatile u64 *) (u32) a2) = (u64) a0;
    a3 = (s32) ((u32) a3 + 0x10U);
    (*(volatile u64 *) (u32) (a2 + 8)) = (u64) v1;
    { s32 c_ = a1 > 0; a2 = (s32) ((u32) a2 + 0x10U); if (c_) goto L_00651190; }
    v1 = (*(volatile s16 *) (u32) (gp + -21812));
    a0 = (*(volatile s16 *) (u32) (gp + -21810));
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) a0 + (u32) v1);
    (*(volatile u8 *) (u32) (v0 + 936)) = (u8) v1;
    (*(volatile u8 *) (u32) (v0 + 937)) = (u8) s1; goto L_0065127C;
L_006511CC:;
    v0 = func_002644E0();
    a2 = (s32) ((u32) s0 + 0xcU);
    a0 = 7827;
    a1 = v0;
L_006511E0:;
    v1 = (*(volatile s32 *) (u32) a2);
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    (*(volatile u32 *) (u32) a1) = (u32) v1;
    a2 = (s32) ((u32) a2 + 0x4U);
    a1 = (s32) ((u32) a1 + 0x4U);
    if (a0 > 0) goto L_006511E0;
    v1 = (*(volatile s16 *) (u32) (gp + -21812));
    a0 = (*(volatile s16 *) (u32) (gp + -21810));
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) a0 + (u32) v1);
    (*(volatile u8 *) (u32) (v0 + 19272)) = (u8) v1;
    (*(volatile u8 *) (u32) (v0 + 19273)) = (u8) s1; goto L_0065127C;
L_00651218:;
    func_0064EDF0(a0, a1, a2, a3);
    (*(volatile u8 *) (u32) (gp + -21776)) = (u8) s1; goto L_0065127C;
L_00651228:;
    v0 = func_002E92F0();
    a0 = (s32) ((u32) s0 + 0xcU);
    a1 = v0; func_0063A760(a0, a1);
    goto L_00651280;
L_00651244:;
    func_0063E260(a0, a1, a2, a3);
    goto L_0065127C;
L_00651254:;
    v1 = (*(volatile s32 *) (u32) (gp + -21880));
    v0 = 11;
    if (v1 != v0) goto L_00651274;
    func_00645340(a0, a1, a2, a3);
    goto L_0065127C;
L_00651274:;
    func_006453D0();
L_0065127C:;
L_00651280:;
    return;
}
