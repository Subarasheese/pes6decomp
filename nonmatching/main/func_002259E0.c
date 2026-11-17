/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6SaveData_IsUnavailable(void);

s32 func_002259E0(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;
    s32 hi = 0, lo = 0;

    s1 = 0;
    s0 = 0;
L_002259FC:;
    v0 = Pes6SaveData_IsUnavailable();
    v1 = 1;
    if (v0 != v1) goto L_00225A18;
    s2 = 0; goto L_00225A58;
L_00225A18:;
    a0 = (*(volatile s32 *) (u32) (gp + -31684));
    if (a0 == 0) goto L_00225A50;
    v1 = s1 & 0xff;
    at = v1 < 80;
    if (at == 0) goto L_00225A50;
    v0 = 1236;
    at = (s32) 0x40000U;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    at = at | 0x4328;
    v0 = (s32) ((u32) a0 + (u32) v0);
    s2 = (s32) ((u32) v0 + (u32) at); goto L_00225A58;
L_00225A50:;
    s2 = 0;
L_00225A58:;
    v0 = Pes6SaveData_IsUnavailable();
    v1 = 1;
    if (v0 != v1) goto L_00225A78;
    v0 = 0; goto L_00225A90;
L_00225A78:;
    if (s2 != 0) goto L_00225A88;
    v0 = 0; goto L_00225A90;
L_00225A88:;
    v0 = (*(volatile u8 *) (u32) (s2 + 2));
L_00225A90:;
    v0 = v0 & 0xff;
    at = (u64) v0 < (u64) (s64) 33;
    if (at == 0) goto L_00225AD0;
    v1 = (s32) 0x3d0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x7cb0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x225ac0U) goto L_00225AC0; if (t_ == 0x225ac8U) goto L_00225AC8; }
L_00225AC0:;
    v1 = 1; goto L_00225AD8;
L_00225AC8:;
    v1 = 0; goto L_00225AD8;
L_00225AD0:;
    v1 = 0;
L_00225AD8:;
    v0 = 1;
    if (v1 != v0) goto L_00225AE8;
    s0 = (s32) ((u32) s0 + 0x1U);
L_00225AE8:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 72;
    if (v0 != 0) goto L_002259FC;
    v0 = s0 & 0xff;
    return v0;
}
