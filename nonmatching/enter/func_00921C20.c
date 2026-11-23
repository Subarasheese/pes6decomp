/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001B97C0(s64);
s64 func_001B9890(s64);

void func_00921C20(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    s64 gp = 0x3ef370;
    s64 hi = 0, lo = 0;

    v1 = (s32) ((u32) gp + 0xffffb268U);
    a2 = (*(volatile s32 *) (u32) (gp + -19868));
    a2 = (s32) ((u32) a2 << 2);
    v1 = (s32) ((u32) v1 + (u32) a2);
    v1 = (*(volatile s32 *) (u32) v1);
    a4 = (*(volatile s32 *) (u32) (v1 + 96));
    v1 = (*(volatile s32 *) (u32) (v1 + 200));
    s4 = (s32) ((u32) v1 - (u32) a0);
    at = a1 < s4;
    if (at == 0) { s5 = 0; goto L_00921C80; }
    s4 = a1;
    s5 = 0;
L_00921C80:;
    if (s4 <= 0) goto L_00921DB0;
    v0 = 139;
    v1 = (s32) 0x5a0000U;
    { s64 m_ = (s64) (s32) a4 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); a3 = lo; }
    a2 = (s32) 0x590000U;
    a2 = (s32) ((u32) a2 + 0x1a90U);
    s6 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + 0x2020U);
    s3 = 0;
    v0 = (s32) ((u32) a4 << 4);
    s7 = (s32) ((u32) a2 + (u32) a3);
    a1 = (s32) ((u32) v0 - (u32) a4);
    a0 = (s32) ((u32) a1 << 2);
    v0 = (s32) ((u32) a1 << 3);
    a0 = (s32) ((u32) a0 - (u32) a1);
    v0 = (s32) ((u32) v0 - (u32) a1);
    a0 = (s32) ((u32) a0 << 3);
    s2 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v0 << 8);
    fp = (s32) ((u32) s2 + 0x1U);
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x2980U);
    s1 = (s32) ((u32) v0 + (u32) v1);
L_00921CE0:;
    v1 = (*(volatile s32 *) (u32) (gp + -19868));
    v0 = (s32) ((u32) gp + 0xffffb268U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (s32) ((u32) s6 + (u32) v0);
    v0 = (s32) ((u32) v0 + (u32) s3);
    a0 = (*(volatile s32 *) (u32) (v0 + 204));
    v0 = (s32) ((u32) s7 + (u32) a0);
    at = a0 < 11;
    { s32 c_ = at == 0; s0 = (*(volatile u8 *) (u32) (v0 + 7)); if (c_) goto L_00921D40; }
    v1 = (*(volatile u8 *) (u32) fp);
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) s2 + (u32) v0);
    v0 = (s32) ((u32) v0 + (u32) a0);
    a0 = (*(volatile u8 *) (u32) (v0 + 28)); v0 = func_001B97C0(a0);
    a0 = (*(volatile s32 *) (u32) (gp + -19868)); goto L_00921D6C;
L_00921D40:;
    v0 = (s32) ((u32) s0 << 4);
    v1 = (s32) ((u32) v0 - (u32) s0);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) s1 + (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v0 + 105));
    v0 = (s64) ((u64) v0 << 56);
    a0 = (s64) ((u64) v0 >> 60); v0 = func_001B9890(a0);
    a0 = (*(volatile s32 *) (u32) (gp + -19868));
L_00921D6C:;
    s5 = (s32) ((u32) s5 + 0x1U);
    a1 = (s32) ((u32) gp + 0xffffb268U);
    v1 = s5 < s4;
    a0 = (s32) ((u32) a0 << 2);
    a0 = (s32) ((u32) a1 + (u32) a0);
    a0 = (*(volatile s32 *) (u32) a0);
    a0 = (s32) ((u32) a0 + (u32) s3);
    (*(volatile u32 *) (u32) (a0 + 104)) = (u32) v0;
    a0 = (*(volatile s32 *) (u32) (gp + -19868));
    a0 = (s32) ((u32) a0 << 2);
    a0 = (s32) ((u32) a1 + (u32) a0);
    a0 = (*(volatile s32 *) (u32) a0);
    a0 = (s32) ((u32) a0 + (u32) s3);
    (*(volatile u32 *) (u32) (a0 + 152)) = (u32) s0;
    { s32 c_ = v1 != 0; s3 = (s32) ((u32) s3 + 0x4U); if (c_) goto L_00921CE0; }
L_00921DB0:;
    a0 = (*(volatile s32 *) (u32) (gp + -19868));
    v1 = (s32) ((u32) gp + 0xffffb268U);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    (*(volatile u32 *) (u32) (v1 + 100)) = (u32) s4;
    return;
}
