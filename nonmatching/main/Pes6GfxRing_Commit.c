/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void Pes6GfxRing_Commit(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, t8 = 0, t9 = 0;
    u64 qh_a7 = 0;

    v1 = (s32) 0x370000U;
    { u32 a_ = (u32) (v1 + 23808) & ~15U; a7 = *(volatile s64 *) a_; qh_a7 = *(volatile u64 *) (a_ + 8); }
    a5 = (s32) 0x500000U;
    a4 = (s32) 0x500000U;
    a6 = (s32) 0x7000000U;
    a3 = (s32) 0x500000U;
    a1 = (s32) 0x500000U;
    a2 = (s32) 0x500000U;
    a5 = (s32) ((u32) a5 + 0xffffc880U);
    { u32 a_ = (u32) (a0 + 0) & ~15U; *(volatile u64 *) a_ = (u64) a7; *(volatile u64 *) (a_ + 8) = qh_a7; }
    v1 = (s32) 0x500000U;
    a4 = (*(volatile s32 *) (u32) (a4 + -12152));
    a4 = a4 | a6;
    (*(volatile u32 *) (u32) (a0 + 12)) = (u32) a4;
    a0 = (*(volatile s32 *) (u32) (a1 + -12160));
    a3 = (*(volatile s32 *) (u32) (a3 + -12152));
    v1 = (*(volatile s32 *) (u32) (v1 + -12148));
    a0 = (s32) ((u32) a0 + 0x1U);
    a1 = (s32) ((u32) a3 + 0x1U);
    a0 = a0 & 0xff;
    { s32 c_ = v1 == a5; (*(volatile u32 *) (u32) (a2 + -12152)) = (u32) a1; if (c_) goto L_00139D68; }
L_00139CD0:;
    v1 = (s32) 0x500000U;
    s0 = (*(volatile s32 *) (u32) (v1 + -12156));
    if (a0 != s0) goto L_00139DD8;
    a1 = (s32) 0x500000U;
    t7 = (s32) 0x500000U;
    t6 = (*(volatile s32 *) (u32) (a1 + -12160));
    v1 = (s32) 0x440000U;
    a7 = (s32) 0x500000U;
    t7 = (s32) ((u32) t7 + 0xffffc884U);
    a5 = (s32) 0x500000U;
    v1 = (s32) ((u32) v1 + 0xffffc880U);
    a3 = (s32) 0x500000U;
    a7 = (s32) ((u32) a7 + 0xffffc880U);
    a2 = (s32) 0x500000U;
    a6 = (s32) 0x10000000U;
    a1 = (s32) 0x500000U;
    t4 = (*(volatile s32 *) (u32) (a1 + -12148));
    a1 = (s32) 0x500000U;
L_00139D1C:;
    t9 = (s32) ((u32) s0 << 3);
    a4 = (s32) 0xc0000U;
    t5 = (s32) ((u32) v1 + (u32) t9);
    t8 = (*(volatile s32 *) (u32) (a6 + 15408));
    a4 = (s32) ((u32) t5 + (u32) a4);
    a4 = (*(volatile s32 *) (u32) (a4 + 4));
    at = t8 < a4;
    if (at != 0) goto L_00139D98;
L_00139D40:;
    a4 = (s32) ((u32) s0 + 0x1U);
    s0 = a4 & 0xff;
    t9 = (s32) ((u32) s0 << 3);
    a4 = (s32) ((u32) t7 + (u32) t9);
    a4 = (*(volatile s32 *) (u32) a4);
    at = t8 < a4;
    if (at == 0) goto L_00139D40;
    (*(volatile u32 *) (u32) (a5 + -12156)) = (u32) s0; goto L_00139D9C;
L_00139D68:;
    a1 = (s32) 0x500000U;
    a1 = (*(volatile s32 *) (u32) (a1 + -12156));
    a2 = (s32) 0x440000U;
    a2 = (s32) ((u32) a2 + 0xffffc880U);
    v1 = (s32) 0x500000U;
    (*(volatile u32 *) (u32) (v1 + -12148)) = (u32) a2;
    v1 = (s32) 0x500000U;
    a1 = (s32) ((u32) a1 << 3);
    a1 = (s32) ((u32) a5 + (u32) a1);
    a1 = (*(volatile s32 *) (u32) a1);
    (*(volatile u32 *) (u32) (v1 + -12144)) = (u32) a1; goto L_00139CD0;
L_00139D98:;
    (*(volatile u32 *) (u32) (a5 + -12156)) = (u32) s0;
L_00139D9C:;
    if (t6 == s0) goto L_00139E24;
    t5 = (s32) ((u32) v1 + (u32) t9);
    a4 = (s32) 0xc0000U;
    a4 = (s32) ((u32) t5 + (u32) a4);
    t5 = (*(volatile s32 *) (u32) a4);
    a4 = (u64) t5 < (u64) t4;
    if (a4 != 0) goto L_00139E24;
    (*(volatile u32 *) (u32) (a3 + -12144)) = (u32) t5;
L_00139DC8:;
    s0 = (*(volatile s32 *) (u32) (a2 + -12156));
    if (a0 == s0) goto L_00139D1C;
L_00139DD8:;
    v1 = (s32) 0x500000U;
    (*(volatile u32 *) (u32) (v1 + -12160)) = (u32) a0;
    a4 = (s32) ((u32) a0 << 3);
    v1 = (s32) 0x500000U;
    a0 = (s32) 0x500000U;
    a3 = (*(volatile s32 *) (u32) (v1 + -12148));
    a0 = (s32) ((u32) a0 + 0xffffc880U);
    a2 = (s32) ((u32) a0 + (u32) a4);
    a1 = (s32) 0x500000U;
    a1 = (s32) ((u32) a1 + 0xffffc884U);
    a0 = (s32) 0x500000U;
    a1 = (s32) ((u32) a1 + (u32) a4);
    (*(volatile u32 *) (u32) a2) = (u32) a3;
    v1 = (s32) 0x500000U;
    a0 = (*(volatile s32 *) (u32) (a0 + -12152));
    a0 = (s32) ((u32) a0 + 0x1U);
    (*(volatile u32 *) (u32) (v1 + -12152)) = (u32) a0;
    (*(volatile u32 *) (u32) a1) = (u32) a0; goto L_00139E30;
L_00139E24:;
    (*(volatile u32 *) (u32) (a1 + -12144)) = (u32) a7; goto L_00139DC8;
L_00139E30:;
    return;
}
