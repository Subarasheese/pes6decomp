/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00153FF0(s32, s32, s32, s32);

s32 func_00215FE0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    s1 = a0;
    s2 = (*(volatile s32 *) (u32) (a0 + 28));
    { s32 c_ = s2 != 0; s0 = 0; if (c_) goto L_00216054; }
    s0 = 1;
L_00216008:;
    { s32 c_ = s0 == 0; v0 = -126; if (c_) goto L_002160DC; }
    (*(volatile u32 *) (u32) (s1 + 32)) = (u32) s0;
    a4 = 0;
    a2 = (*(volatile s32 *) (u32) (s1 + 168));
    v1 = (*(volatile s32 *) (u32) (s1 + 172));
    a0 = (*(volatile s32 *) (u32) a2);
    { s32 c_ = a0 == v1; a3 = 0; if (c_) goto L_002160AC; }
    a1 = a2;
L_00216030:;
    a1 = (s32) ((u32) a1 + 0x4U);
    a4 = (s32) ((u32) a4 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a1);
    if (v0 != v1) goto L_00216030;
    goto L_002160AC;
L_00216054:;
    a1 = (s32) ((u32) s2 << 6);
    a0 = 64; v0 = func_00153FF0(a0, a1, a2, a3);
    if (v0 == 0) goto L_00216084;
    (*(volatile u32 *) (u32) (s1 + 192)) = (u32) v0;
    (*(volatile u32 *) (u32) (s1 + 196)) = (u32) s2;
    v1 = (*(volatile s32 *) (u32) (s1 + 176));
    v0 = (*(volatile s32 *) (u32) (v1 + 12));
    v0 = v0 | 0x1;
    (*(volatile u32 *) (u32) (v1 + 12)) = (u32) v0; goto L_00216008;
L_00216084:;
    v0 = (s32) 0x530000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 31568));
    { s32 c_ = v0 != 0; s0 = -122; if (c_) goto L_00216008; }
    v1 = 1;
    v0 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v0 + 31568)) = (u32) v1;
    v0 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v0 + 31572)) = (u32) s0; goto L_00216008;
L_002160AC:;
    v1 = (s32) 0x210000U;
    v1 = (s32) ((u32) v1 + 0x5c60U);
    if (a0 == v1) goto L_002160D8;
L_002160BC:;
    a2 = (s32) ((u32) a2 + 0x4U);
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a2);
    if (v0 != v1) goto L_002160BC;
L_002160D8:;
    v0 = (s32) ((u32) a3 - (u32) a4);
L_002160DC:;
    return v0;
}
