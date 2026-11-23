/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0025EC20(s32);
void memcpy(s32, s32, s32);

void func_00259680(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, t8 = 0, t9 = 0;
    s32 hi1 = 0, lo1 = 0;
    s32 hi = 0, lo = 0;

    v0 = (s32) 0x590000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -12460));
    v0 = (s32) 0x590000U;
    a1 = (*(volatile s32 *) (u32) (v0 + -12444));
    v0 = (s32) 0x590000U;
    a2 = (*(volatile s32 *) (u32) (v0 + -12452)); memcpy(a0, a1, a2);
    v1 = (s32) 0x590000U;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (v1 + -12435));
    v1 = a0 & 0x1;
    { s32 c_ = v1 == 0; v0 = (s32) ((u32) v0 + 0xffffcf48U); if (c_) goto L_002596DC; }
    v1 = (s32) 0x590000U;
    a3 = -1;
    v1 = (*(volatile s16 *) (u32) (v1 + -12462));
    a1 = a3;
    a6 = (s32) ((u32) v1 + 0xffffffffU); goto L_002596EC;
L_002596DC:;
    v1 = (s32) 0x590000U;
    a6 = 0;
    a1 = (*(volatile s16 *) (u32) (v1 + -12462));
    a3 = 1;
L_002596EC:;
    v1 = a0 & 0x2;
    if (v1 == 0) goto L_00259710;
    v1 = (s32) 0x590000U;
    a4 = -1;
    v1 = (*(volatile s16 *) (u32) (v1 + -12464));
    a2 = a4;
    a5 = (s32) ((u32) v1 + 0xffffffffU); goto L_00259720;
L_00259710:;
    v1 = (s32) 0x590000U;
    a5 = 0;
    a2 = (*(volatile s16 *) (u32) (v1 + -12464));
    a4 = 1;
L_00259720:;
    { s32 c_ = a6 == a1; v1 = 0; if (c_) goto L_002597A8; }
    t7 = (s32) 0x590000U;
    t6 = (s32) 0x590000U;
    t5 = (s32) 0x590000U;
    t4 = (s32) 0x590000U;
L_00259738:;
    a7 = a5;
    { s32 c_ = a5 == a2; a0 = 0; if (c_) goto L_00259798; }
L_00259748:;
    s0 = (*(volatile s16 *) (u32) (t7 + -12464));
    { s64 m_ = (s64) (s32) s0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); t9 = lo; }
    s1 = (*(volatile s32 *) (u32) (t6 + -12440));
    t8 = (*(volatile s16 *) (u32) (v0 + 2));
    s0 = (*(volatile s16 *) (u32) (t5 + -12456));
    s1 = (s32) ((u32) s1 + (u32) t9);
    s1 = (s32) ((u32) s1 + (u32) a0);
    t8 = (s32) ((u32) t8 + (u32) a6);
    s1 = (*(volatile u8 *) (u32) s1);
    { s64 m_ = (s64) (s32) s0 * (s64) (s32) t8; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); s0 = lo1; }
    t9 = (*(volatile s32 *) (u32) (t4 + -12460));
    t8 = (*(volatile s16 *) (u32) v0);
    a0 = (s32) ((u32) a0 + 0x1U);
    t9 = (s32) ((u32) t9 + (u32) s0);
    t8 = (s32) ((u32) t9 + (u32) t8);
    t8 = (s32) ((u32) t8 + (u32) a7);
    a7 = (s32) ((u32) a7 + (u32) a4);
    { s32 c_ = a7 != a2; (*(volatile u8 *) (u32) t8) = (u8) s1; if (c_) goto L_00259748; }
L_00259798:;
    a6 = (s32) ((u32) a6 + (u32) a3);
    { s32 c_ = a6 != a1; v1 = (s32) ((u32) v1 + 0x1U); if (c_) goto L_00259738; }
L_002597A8:;
    a0 = 1; func_0025EC20(a0);
    return;
}
