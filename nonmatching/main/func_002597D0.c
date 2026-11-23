/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00259B30(s32);
void func_00259CB0(s32);
void func_0025EC20(s32);
void memcpy(s32, s32, s32);

void func_002597D0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 hi1 = 0, lo1 = 0;
    s32 hi = 0, lo = 0;
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x590000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -12460));
    v0 = (s32) 0x590000U;
    a1 = (*(volatile s32 *) (u32) (v0 + -12444));
    v0 = (s32) 0x590000U;
    a2 = (*(volatile s32 *) (u32) (v0 + -12452)); memcpy(a0, a1, a2);
    a0 = (s32) ((u32) sp + 0x3cU); func_00259CB0(a0);
    s1 = (s32) ((u32) sp + 0x3eU);
    v0 = (s32) 0x590000U;
    v1 = (*(volatile s16 *) (u32) s1);
    s0 = (s32) ((u32) sp + 0x3aU);
    v0 = (*(volatile s16 *) (u32) (v0 + -12462));
    (*(volatile u16 *) (u32) s0) = (u16) v1;
    v0 = (s32) ((u32) v1 + (u32) v0);
    v1 = (*(volatile s16 *) (u32) s0);
    at = v1 < v0;
    if (at == 0) goto L_00259888;
L_00259830:;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile s16 *) (u32) (sp + 60));
    v0 = (*(volatile s16 *) (u32) (v0 + -12464));
    (*(volatile u16 *) (u32) (sp + 56)) = (u16) v1;
    v0 = (s32) ((u32) v1 + (u32) v0);
    v1 = (*(volatile s16 *) (u32) (sp + 56));
    v0 = v1 < v0;
    if (v0 != 0) goto L_00259898;
L_00259858:;
    a0 = (*(volatile s16 *) (u32) s0);
    v0 = (s32) 0x590000U;
    v1 = (*(volatile s16 *) (u32) s1);
    v0 = (*(volatile s16 *) (u32) (v0 + -12462));
    a0 = (s32) ((u32) a0 + 0x1U);
    (*(volatile u16 *) (u32) s0) = (u16) a0;
    v0 = (s32) ((u32) v1 + (u32) v0);
    v1 = (*(volatile s16 *) (u32) s0);
    v0 = v1 < v0;
    if (v0 != 0) goto L_00259830;
L_00259888:;
    a0 = 1; func_0025EC20(a0);
    goto L_00259940;
L_00259898:;
    a0 = (s32) ((u32) sp + 0x38U); v0 = func_00259B30(a0);
    if (v0 != 0) goto L_002598E0;
L_002598A8:;
    a0 = (*(volatile s16 *) (u32) (sp + 56));
    v0 = (s32) 0x590000U;
    v1 = (*(volatile s16 *) (u32) (sp + 60));
    v0 = (*(volatile s16 *) (u32) (v0 + -12464));
    a0 = (s32) ((u32) a0 + 0x1U);
    (*(volatile u16 *) (u32) (sp + 56)) = (u16) a0;
    v0 = (s32) ((u32) v1 + (u32) v0);
    v1 = (*(volatile s16 *) (u32) (sp + 56));
    v0 = v1 < v0;
    if (v0 != 0) goto L_00259898;
    goto L_00259858;
L_002598E0:;
    v0 = (s32) 0x590000U;
    a3 = (*(volatile s16 *) (u32) s0);
    v1 = (*(volatile s16 *) (u32) s1);
    v0 = (*(volatile s16 *) (u32) (v0 + -12464));
    a2 = (*(volatile s16 *) (u32) (sp + 56));
    v1 = (s32) ((u32) a3 - (u32) v1);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); a1 = lo; }
    v0 = (s32) 0x590000U;
    v1 = (*(volatile s16 *) (u32) (sp + 60));
    a0 = (*(volatile s32 *) (u32) (v0 + -12440));
    v1 = (s32) ((u32) a2 - (u32) v1);
    a0 = (s32) ((u32) a0 + (u32) a1);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (*(volatile s16 *) (u32) (v0 + -12456));
    a0 = (*(volatile u8 *) (u32) v1);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a3; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); v1 = lo1; }
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -12460));
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) a2);
    (*(volatile u8 *) (u32) v0) = (u8) a0; goto L_002598A8;
L_00259940:;
    return;
}
