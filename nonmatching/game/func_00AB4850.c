/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s64 func_00AB4850(s64 a0, s64 a1, s64 a2) {
    s64 at = 0, v0 = 0, v1 = 0;
    s64 hi = 0, lo = 0;

    a2 = (*(volatile u8 *) (u32) (a0 + 18));
    v1 = (*(volatile u8 *) (u32) (a0 + 17));
    v0 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) v0 - (u32) a2);
    a0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v1 << 4);
    a0 = (s32) ((u32) a0 + 0x2980U);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a2 << 3);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a2 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 133));
    v0 = (s64) ((u64) v0 << 58);
    v0 = (s64) ((u64) v0 >> 61);
    at = (u64) v0 < (u64) (s64) 8;
    if (at == 0) goto L_00AB4A30;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffb360U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xab48c4U) goto L_00AB48C4; if (t_ == 0xab48f4U) goto L_00AB48F4; if (t_ == 0xab4924U) goto L_00AB4924; if (t_ == 0xab495cU) goto L_00AB495C; if (t_ == 0xab4994U) goto L_00AB4994; if (t_ == 0xab49c0U) goto L_00AB49C0; if (t_ == 0xab49f8U) goto L_00AB49F8; if (t_ == 0xab4a30U) goto L_00AB4A30; }
L_00AB48C4:;
    v1 = (s32) ((u32) a1 << 6);
    v0 = (s32) 0x51eb0000U;
    v1 = (s32) ((u32) v1 + (u32) a1);
    v0 = v0 | 0x851f;
    v1 = (s32) ((u32) v1 << 1);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v1 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 5;
    a1 = (s32) ((u32) v0 + (u32) v1); goto L_00AB4A58;
L_00AB48F4:;
    v1 = (s32) ((u32) a1 << 4);
    v0 = (s32) 0x51eb0000U;
    v1 = (s32) ((u32) v1 - (u32) a1);
    v0 = v0 | 0x851f;
    v1 = (s32) ((u32) v1 << 3);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v1 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 5;
    a1 = (s32) ((u32) v0 + (u32) v1); goto L_00AB4A58;
L_00AB4924:;
    v1 = (s32) ((u32) a1 << 3);
    v0 = (s32) 0x51eb0000U;
    v1 = (s32) ((u32) v1 - (u32) a1);
    v0 = v0 | 0x851f;
    v1 = (s32) ((u32) v1 << 3);
    v1 = (s32) ((u32) v1 - (u32) a1);
    v1 = (s32) ((u32) v1 << 1);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v1 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 5;
    a1 = (s32) ((u32) v0 + (u32) v1); goto L_00AB4A58;
L_00AB495C:;
    v1 = (s32) ((u32) a1 << 3);
    v0 = (s32) 0x51eb0000U;
    a0 = (s32) ((u32) v1 + (u32) a1);
    v0 = v0 | 0x851f;
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v1 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 5;
    a1 = (s32) ((u32) v0 + (u32) v1); goto L_00AB4A58;
L_00AB4994:;
    v1 = 106;
    v0 = (s32) 0x51eb0000U;
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = v0 | 0x851f;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v1 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 5;
    a1 = (s32) ((u32) v0 + (u32) v1); goto L_00AB4A58;
L_00AB49C0:;
    v1 = (s32) ((u32) a1 << 1);
    v0 = (s32) 0x51eb0000U;
    v1 = (s32) ((u32) v1 + (u32) a1);
    v0 = v0 | 0x851f;
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (s32) ((u32) v1 << 3);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v1 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 5;
    a1 = (s32) ((u32) v0 + (u32) v1); goto L_00AB4A58;
L_00AB49F8:;
    v1 = (s32) ((u32) a1 << 4);
    v0 = (s32) 0x51eb0000U;
    a0 = (s32) ((u32) v1 + (u32) a1);
    v0 = v0 | 0x851f;
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) v1 << 1);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v1 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 5;
    a1 = (s32) ((u32) v0 + (u32) v1); goto L_00AB4A58;
L_00AB4A30:;
    v1 = 101;
    v0 = (s32) 0x51eb0000U;
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = v0 | 0x851f;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v1 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 5;
    a1 = (s32) ((u32) v0 + (u32) v1);
L_00AB4A58:;
    v0 = a1; return v0;
}
