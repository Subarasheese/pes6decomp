/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002E3A50(s32, s32, s32, s32);

void func_002E3080(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;

    s5 = a0;
    s4 = a1;
    if (s5 == 0) goto L_002E3120;
    s0 = (*(volatile s32 *) (u32) (s5 + 32));
    s2 = (s32) ((u32) s0 + 0xffffffffU);
    if (s2 >= 0) { s2 = 0; goto L_002E30BC; }
L_002E30BC:;
    v1 = (s32) ((u32) s2 + (u32) a2);
    at = s0 < v1;
    if (at == 0) goto L_002E30D4;
    at = s2 < s0; goto L_002E30E8;
L_002E30D4:;
    if (v1 >= 0) goto L_002E30E0;
    v1 = 0;
L_002E30E0:;
    s0 = v1;
    at = s2 < s0;
L_002E30E8:;
    { s32 c_ = at == 0; s3 = s2; if (c_) goto L_002E3120; }
    v0 = (s32) ((u32) s2 << 2);
    v0 = (s32) ((u32) v0 + (u32) s2);
    s1 = (s32) ((u32) v0 << 2);
L_002E30FC:;
    v1 = (*(volatile s32 *) (u32) (s5 + 36));
    v0 = (s32) ((u32) s4 + (u32) s3);
    a1 = (s32) ((u32) v0 - (u32) s2);
    a0 = (s32) ((u32) v1 + (u32) s1); func_002E3A50(a0, a1, a2, a3);
    s3 = (s32) ((u32) s3 + 0x1U);
    v1 = s3 < s0;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x14U); if (c_) goto L_002E30FC; }
L_002E3120:;
    return;
}
