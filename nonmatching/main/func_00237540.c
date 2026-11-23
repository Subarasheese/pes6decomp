/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00223A90(void);

s32 func_00237540(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 hi = 0, lo = 0;

    s1 = a1;
    a1 = 0;
    at = a1 < 14;
    if (at == 0) goto L_00237588;
    v1 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) v1 + 0xffff9b30U);
    v0 = (s32) ((u32) v1 + (u32) a1);
L_0023756C:;
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 == a0) goto L_00237588;
    a1 = (s32) ((u32) a1 + 0x1U);
    v0 = a1 < 14;
    if (v0 != 0) { v0 = (s32) ((u32) v1 + (u32) a1); goto L_0023756C; }
L_00237588:;
    v0 = 14;
    if (a1 != v0) { s0 = 0; goto L_002375FC; }
    s0 = 0;
    at = s0 < 6;
    if (at == 0) goto L_002375D0;
    v1 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) v1 + 0xffff9b40U);
    v0 = (s32) ((u32) v1 + (u32) s0);
L_002375B0:;
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 == a0) goto L_002375D0;
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 6;
    if (v0 != 0) { v0 = (s32) ((u32) v1 + (u32) s0); goto L_002375B0; }
L_002375D0:;
    v0 = func_00223A90();
    at = s0 < 6;
    if (at == 0) { a0 = 0; goto L_002375F4; }
    v1 = 9052;
    { s64 m_ = (s64) (s32) s0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) ((u32) v0 + 0x2bc0U);
L_002375F4:;
    at = (u64) s1 < (u64) (s64) 6; goto L_00237664;
L_002375FC:;
    at = s0 < 14;
    if (at == 0) goto L_00237630;
    v1 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) v1 + 0xffff9b30U);
    v0 = (s32) ((u32) v1 + (u32) s0);
L_00237614:;
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 == a0) goto L_00237630;
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 14;
    if (v0 != 0) { v0 = (s32) ((u32) v1 + (u32) s0); goto L_00237614; }
L_00237630:;
    v0 = func_00223A90();
    at = s0 < 14;
    if (at == 0) { a0 = 0; goto L_00237660; }
    v1 = (s32) ((u32) s0 << 2);
    a0 = (s32) ((u32) v1 + (u32) s0);
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = (s32) ((u32) v1 << 5);
    a0 = (s32) ((u32) v0 + (u32) v1); goto L_00237660;
L_00237660:;
    at = (u64) s1 < (u64) (s64) 6;
L_00237664:;
    if (at == 0) { v0 = (*(volatile u8 *) (u32) (a0 + 7)); goto L_002376B8; }
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) s1 << 2);
    v1 = (s32) ((u32) v1 + 0xffff8820U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x237688U) goto L_00237688; if (t_ == 0x237694U) goto L_00237694; if (t_ == 0x23769cU) goto L_0023769C; if (t_ == 0x2376a4U) goto L_002376A4; if (t_ == 0x2376acU) goto L_002376AC; if (t_ == 0x2376b4U) goto L_002376B4; }
L_00237688:;
    v0 = (*(volatile u8 *) (u32) (a0 + 7));
    goto L_002376B8;
L_00237694:;
    v0 = (*(volatile u8 *) (u32) (a0 + 6)); goto L_002376B8;
L_0023769C:;
    v0 = (*(volatile u8 *) (u32) (a0 + 5)); goto L_002376B8;
L_002376A4:;
    v0 = (*(volatile u8 *) (u32) (a0 + 3)); goto L_002376B8;
L_002376AC:;
    v0 = (*(volatile u8 *) (u32) (a0 + 2)); goto L_002376B8;
L_002376B4:;
    v0 = (*(volatile u8 *) (u32) (a0 + 1));
L_002376B8:;
    v0 = v0 & 0xff;
    a0 = 10;
    v1 = (s32) ((u32) v0 >> 4);
    if ((s32) a0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) a0); hi = (s32) ((s32) v1 % (s32) a0); lo = q_; }
    v0 = v0 & 0xf;
    v1 = hi;
    if ((s32) a0 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) a0); hi = (s32) ((s32) v0 % (s32) a0); lo = q_; }
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 1);
    v1 = v0 & 0xff;
    v0 = hi;
    v0 = v0 & 0xff;
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = v0 & 0xff;
    return v0;
}
