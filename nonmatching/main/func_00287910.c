/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s64 func_00287910(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0;
    s64 hi = 0, lo = 0;
    s64 frame[2];
    s64 sp = (s32) (u32) frame;

    (*(volatile u64 *) (u32) sp) = (u64) a0;
    (*(volatile u64 *) (u32) (sp + 8)) = (u64) a1;
    a7 = (*(volatile s8 *) (u32) sp);
    a1 = (*(volatile s8 *) (u32) (sp + 1));
    a0 = (*(volatile s8 *) (u32) (sp + 2));
    v1 = (*(volatile s8 *) (u32) (sp + 3));
    a5 = (*(volatile s8 *) (u32) (sp + 8));
    a4 = (*(volatile s8 *) (u32) (sp + 9));
    a6 = (*(volatile s8 *) (u32) (sp + 4));
    a7 = (s32) ((u32) a7 + (u32) a1);
    a7 = (s32) ((u32) a0 + (u32) a7);
    a1 = (*(volatile s8 *) (u32) (sp + 10));
    a7 = (s32) ((u32) v1 + (u32) a7);
    a0 = (*(volatile s8 *) (u32) (sp + 11));
    v1 = (*(volatile s8 *) (u32) (sp + 12));
    a4 = (s32) ((u32) a5 + (u32) a4);
    a6 = (s32) ((u32) a6 + (u32) a7);
    a1 = (s32) ((u32) a1 + (u32) a4);
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffffceU);
    at = (u64) v1 < (u64) a6;
    if (at == 0) { v1 = (s32) ((u32) a2 << 4); goto L_0028797C; }
L_00287974:;
    goto L_00287A00;
L_0028797C:;
    a1 = (s32) 0x590000U;
    a2 = (s32) ((u32) v1 - (u32) a2);
    a1 = (s32) ((u32) a1 + 0x2980U);
    v1 = (s32) ((u32) a3 << 4);
    a0 = (s32) ((u32) v1 - (u32) a3);
    v1 = (s32) ((u32) a2 << 3);
    a2 = (s32) ((u32) v1 - (u32) a2);
    v1 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) v1 - (u32) a0);
    a0 = (s32) ((u32) a2 << 8);
    v1 = (s32) ((u32) v1 << 3);
    a0 = (s32) ((u32) a1 + (u32) a0);
    a4 = (s32) ((u32) v1 + (u32) a0);
    a3 = (*(volatile u8 *) (u32) (a4 + 129));
    v1 = (s32) 0x66660000U;
    v1 = v1 | 0x6667;
    a2 = a3 & 0x7f;
    a0 = (s32) ((u32) a2 << 1);
    a0 = (s32) ((u32) a0 + (u32) a2);
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a1 = (s32) ((u32) a0 >> 31);
    a0 = hi;
    v1 = -128;
    v1 = a3 & v1;
    a0 = (s32) a0 >> 2;
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = a0 & 0xff;
    a0 = (s32) ((u32) a2 - (u32) a0);
    a0 = a0 & 0x7f;
    v1 = v1 | a0;
    (*(volatile u8 *) (u32) (a4 + 129)) = (u8) v1; goto L_00287974;
L_00287A00:;
    return v0;
}
