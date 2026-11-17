/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_002928B0(s64);
s64 func_00292A30(void);
s64 func_00292AA0(void);

s64 func_002BDD00(s64 a0, s64 a1, s64 a2) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    s64 frame[20];
    s64 sp = (s32) (u32) frame;

    s5 = a0;
    v0 = func_00292AA0();
    if (v0 != 0) { a0 = 0; goto L_002BDD68; }
    v0 = (s32) 0xcb0000U;
    v1 = s5 & 0xff;
    a0 = (*(volatile s32 *) (u32) (v0 + 13056));
    v0 = (s32) ((u32) v1 << 6);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (*(volatile s16 *) (u32) (v0 + 8));
L_002BDD60:;
    goto L_002BDE48;
L_002BDD68:;
    v0 = func_002928B0(a0);
    s4 = (s64) ((u64) v0 << 48);
    a0 = 1;
    v0 = (s32) 0xcb0000U;
    s4 = s4 >> 48;
    s0 = (*(volatile s32 *) (u32) (v0 + 13056));
    a2 = (*(volatile s16 *) (u32) s0);
    v0 = (*(volatile s16 *) (u32) (s0 + 2));
    a1 = (*(volatile s16 *) (u32) (s0 + 4));
    v1 = (*(volatile s16 *) (u32) (s0 + 6));
    s3 = (s32) ((u32) a2 + (u32) v0);
    v0 = (s32) ((u32) s4 + (u32) s3);
    s2 = (s32) ((u32) a1 + (u32) v1);
    (*(volatile u32 *) (u32) (sp + 152)) = (u32) v0; v0 = func_002928B0(a0);
    s1 = (s64) ((u64) v0 << 48);
    a1 = (*(volatile s16 *) (u32) (s0 + 756));
    v0 = (*(volatile s16 *) (u32) (s0 + 758));
    s1 = s1 >> 48;
    a0 = (*(volatile s16 *) (u32) (s0 + 760));
    s7 = (s32) ((u32) sp + 0x9cU);
    v1 = (*(volatile s16 *) (u32) (s0 + 762));
    s0 = (s32) ((u32) a1 + (u32) v0);
    s6 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) s1 + (u32) s0);
    (*(volatile u32 *) (u32) s7) = (u32) v0; v0 = func_00292A30();
    if (v0 == 0) { v1 = (*(volatile s32 *) (u32) (sp + 152)); goto L_002BDE30; }
    v1 = (*(volatile s32 *) (u32) (sp + 152));
    v0 = (*(volatile s32 *) (u32) s7);
    if (v1 != v0) goto L_002BDE1C;
    v1 = (s32) ((u32) s4 << 1);
    v0 = (s32) ((u32) s0 << 1);
    v1 = (s32) ((u32) s3 + (u32) v1);
    v0 = (s32) ((u32) s1 + (u32) v0);
    (*(volatile u32 *) (u32) (sp + 152)) = (u32) v1;
    { s32 c_ = v1 != v0; (*(volatile u32 *) (u32) s7) = (u32) v0; if (c_) goto L_002BDE1C; }
    v1 = (s32) ((u32) v1 + (u32) s2);
    v0 = (s32) ((u32) v0 + (u32) s6);
    (*(volatile u32 *) (u32) s7) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 152)) = (u32) v1;
L_002BDE1C:;
    v0 = s5 & 0xff;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) sp);
    v0 = (*(volatile s16 *) (u32) (v0 + 152)); goto L_002BDD60;
L_002BDE30:;
    v0 = (*(volatile s32 *) (u32) s7);
    v1 = (s32) ((u32) v1 + (u32) s2);
    v0 = (s32) ((u32) v0 + (u32) s6);
    (*(volatile u32 *) (u32) (sp + 152)) = (u32) v1;
    (*(volatile u32 *) (u32) s7) = (u32) v0; goto L_002BDE1C;
L_002BDE48:;
    return v0;
}
