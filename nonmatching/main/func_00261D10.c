/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00259B30(s64);

s64 func_00261D10(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s64 hi1 = 0, lo1 = 0;
    s64 hi = 0, lo = 0;
    s64 frame[16];
    s64 sp = (s32) (u32) frame;

    v1 = (s32) 0x590000U;
    s5 = 0;
    s3 = (s32) 0x590000U;
    s3 = (s32) ((u32) s3 + 0xffffd394U);
    a1 = (*(volatile s16 *) (u32) (v1 + -11376));
    a0 = (*(volatile s16 *) (u32) s3);
    v1 = (s32) 0x590000U;
    v1 = (*(volatile s16 *) (u32) (v1 + -11374));
    (*(volatile u16 *) (u32) (sp + 124)) = (u16) a0;
    a0 = (s32) ((u32) a1 + 0xffffffffU);
    a0 = (s64) ((u64) a0 << 48);
    at = 0 < v1;
    { s32 c_ = at == 0; a0 = a0 >> 48; if (c_) goto L_00261DC0; }
    s2 = (s64) ((u64) a0 << 48);
    s1 = (s32) ((u32) sp + 0x7eU);
    s2 = s2 >> 48;
L_00261D74:;
    v1 = (s32) 0x590000U;
    a0 = (*(volatile s16 *) (u32) (s3 + 2));
    v1 = (*(volatile s16 *) (u32) (v1 + -11376));
    s4 = 0;
    a0 = (s32) ((u32) a0 + (u32) s2);
    v1 = 0 < v1;
    { s32 c_ = v1 != 0; (*(volatile u16 *) (u32) s1) = (u16) a0; if (c_) goto L_00261E04; }
L_00261D98:;
    v1 = (s32) 0x590000U;
    a1 = (*(volatile s16 *) (u32) (sp + 124));
    a0 = (s32) ((u32) s5 + 0x1U);
    v1 = (*(volatile s16 *) (u32) (v1 + -11374));
    s5 = (s64) ((u64) a0 << 48);
    s5 = s5 >> 48;
    a0 = (s32) ((u32) a1 + 0x1U);
    v1 = s5 < v1;
    { s32 c_ = v1 != 0; (*(volatile u16 *) (u32) (sp + 124)) = (u16) a0; if (c_) goto L_00261D74; }
L_00261DC0:;
    v1 = (s32) 0x590000U;
    a6 = (*(volatile s16 *) (u32) (v1 + -11372));
    a0 = (s32) 0x590000U;
    a3 = (s32) 0x590000U;
    a0 = (*(volatile s16 *) (u32) (a0 + -11366));
    a2 = (s32) 0x590000U;
    a1 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    (*(volatile u16 *) (u32) (a3 + -11364)) = (u16) a6;
    a5 = (*(volatile s16 *) (u32) (v1 + -11370));
    v1 = (s32) 0x590000U;
    (*(volatile u16 *) (u32) (a2 + -11362)) = (u16) a5;
    a4 = (*(volatile s16 *) (u32) (v1 + -11368));
    v1 = (s32) 0x590000U;
    (*(volatile u16 *) (u32) (a1 + -11360)) = (u16) a4;
    (*(volatile u16 *) (u32) (v1 + -11358)) = (u16) a0; goto L_00261EA8;
L_00261E04:;
    s0 = (s64) ((u64) s5 << 48);
    s0 = s0 >> 48;
L_00261E10:;
    a0 = (s32) ((u32) sp + 0x7cU); v0 = func_00259B30(a0);
    if (v0 != 0) goto L_00261E50;
L_00261E20:;
    v1 = (s32) 0x590000U;
    a1 = (*(volatile s16 *) (u32) s1);
    a0 = (s32) ((u32) s4 + 0x1U);
    v1 = (*(volatile s16 *) (u32) (v1 + -11376));
    s4 = (s64) ((u64) a0 << 48);
    s4 = s4 >> 48;
    a0 = (s32) ((u32) a1 + 0xffffffffU);
    v1 = s4 < v1;
    { s32 c_ = v1 != 0; (*(volatile u16 *) (u32) s1) = (u16) a0; if (c_) goto L_00261E10; }
    goto L_00261D98;
L_00261E50:;
    v1 = (s32) 0x590000U;
    v1 = (*(volatile s16 *) (u32) (v1 + -11376));
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) s0; lo = (s32) m_; hi = (s32) (m_ >> 32); a3 = lo; }
    a1 = (s64) ((u64) s4 << 48);
    a1 = a1 >> 48;
    a0 = (*(volatile s16 *) (u32) s1);
    v1 = (s32) 0x590000U;
    a2 = (*(volatile s32 *) (u32) (v1 + -11348));
    a2 = (s32) ((u32) a2 + (u32) a3);
    v1 = (s32) 0x590000U;
    a1 = (s32) ((u32) a2 + (u32) a1);
    v1 = (*(volatile s16 *) (u32) (v1 + -11340));
    a2 = (*(volatile u8 *) (u32) a1);
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a0; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); a1 = lo1; }
    v1 = (s32) 0x590000U;
    a0 = (*(volatile s16 *) (u32) (sp + 124));
    v1 = (*(volatile s32 *) (u32) (v1 + -11344));
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u8 *) (u32) v1) = (u8) a2; goto L_00261E20;
L_00261EA8:;
    return v0;
}
