/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0021CD70(s64, s64);

void func_00214850(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 frame[10];
    s64 sp = (s32) (u32) frame;

    v1 = (s32) 0x540000U;
    s2 = a1;
    a1 = (*(volatile s32 *) (u32) (v1 + -32252));
    (*(volatile u32 *) (u32) (sp + 76)) = (u32) a0;
    s0 = (*(volatile s16 *) (u32) (sp + 78));
    at = 0 < a1;
    { s32 c_ = at == 0; a4 = 0; if (c_) goto L_0021488C; }
    v1 = (s32) 0x540000U;
    a4 = (*(volatile s32 *) (u32) (v1 + -32256));
L_0021488C:;
    v1 = (s32) 0x540000U;
    a0 = 0;
    v1 = (*(volatile s32 *) (u32) (v1 + -32256));
    { s32 c_ = v1 == 0; a2 = 0; if (c_) goto L_00214924; }
    a2 = a1; goto L_00214924;
L_002148A8:;
    a1 = a1 >> 48;
    if (a1 == v1) goto L_002148F0;
    at = 0 < a2;
    { s32 c_ = at == 0; a3 = 0; if (c_) goto L_002148F0; }
L_002148C0:;
    v1 = (*(volatile s16 *) (u32) (a4 + 2));
    if (v1 != a1) goto L_002148E0;
    v1 = (*(volatile s16 *) (u32) a4);
    if (v1 != s1) goto L_002148E0;
    a0 = a4; goto L_002148F0;
L_002148E0:;
    a3 = (s32) ((u32) a3 + 0x1U);
    v1 = a3 < a2;
    { s32 c_ = v1 != 0; a4 = (s32) ((u32) a4 + 0x10U); if (c_) goto L_002148C0; }
L_002148F0:;
    if (a0 == 0) goto L_00214910;
    at = s2 < -10;
    { s32 c_ = at == 0; a1 = s2; if (c_) goto L_00214908; }
    a1 = -10;
L_00214908:;
    func_0021CD70(a0, a1);
L_00214910:;
    v1 = s2 < -10;
    if (v1 != 0) { a0 = (s64) ((u64) s0 << 48); goto L_0021493C; }
L_0021491C:;
    goto L_00214968;
L_00214924:;
    s1 = (*(volatile s16 *) (u32) (sp + 76));
    v1 = -1;
    if (s1 == v1) goto L_002148F0;
    a1 = (s64) ((u64) s0 << 48); goto L_002148A8;
L_0021493C:;
    v1 = (s32) ((u32) s1 << 2);
    a0 = a0 >> 48;
    a0 = (s32) ((u32) a0 + (u32) v1);
    v1 = (s32) 0x530000U;
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + 0x7b30U);
    a0 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) a0);
    v1 = v1 | 0x1;
    (*(volatile u32 *) (u32) a0) = (u32) v1; goto L_0021491C;
L_00214968:;
    return;
}
