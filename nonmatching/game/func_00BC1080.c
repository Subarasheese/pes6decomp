/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00BC1080(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = a0 & 0xffff;
    v0 = (s32) ((u32) v0 + 0xfffffa36U);
    at = (u64) v0 < (u64) (s64) 17;
    if (at == 0) goto L_00BC1138;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x2010U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xbc10b0U) goto L_00BC10B0; if (t_ == 0xbc10b8U) goto L_00BC10B8; if (t_ == 0xbc10c0U) goto L_00BC10C0; if (t_ == 0xbc10c8U) goto L_00BC10C8; if (t_ == 0xbc10d0U) goto L_00BC10D0; if (t_ == 0xbc10d8U) goto L_00BC10D8; if (t_ == 0xbc10e0U) goto L_00BC10E0; if (t_ == 0xbc10e8U) goto L_00BC10E8; if (t_ == 0xbc10f0U) goto L_00BC10F0; if (t_ == 0xbc10f8U) goto L_00BC10F8; if (t_ == 0xbc1100U) goto L_00BC1100; if (t_ == 0xbc1108U) goto L_00BC1108; if (t_ == 0xbc1110U) goto L_00BC1110; if (t_ == 0xbc1118U) goto L_00BC1118; if (t_ == 0xbc1120U) goto L_00BC1120; if (t_ == 0xbc1128U) goto L_00BC1128; if (t_ == 0xbc1130U) goto L_00BC1130; }
L_00BC10B0:;
    v0 = 16; goto L_00BC113C;
L_00BC10B8:;
    v0 = 34; goto L_00BC113C;
L_00BC10C0:;
    v0 = 36; goto L_00BC113C;
L_00BC10C8:;
    v0 = 37; goto L_00BC113C;
L_00BC10D0:;
    v0 = 0; goto L_00BC113C;
L_00BC10D8:;
    v0 = 38; goto L_00BC113C;
L_00BC10E0:;
    v0 = 42; goto L_00BC113C;
L_00BC10E8:;
    v0 = 43; goto L_00BC113C;
L_00BC10F0:;
    v0 = 45; goto L_00BC113C;
L_00BC10F8:;
    v0 = 44; goto L_00BC113C;
L_00BC1100:;
    v0 = 39; goto L_00BC113C;
L_00BC1108:;
    v0 = 9; goto L_00BC113C;
L_00BC1110:;
    v0 = 14; goto L_00BC113C;
L_00BC1118:;
    v0 = 15; goto L_00BC113C;
L_00BC1120:;
    v0 = 7; goto L_00BC113C;
L_00BC1128:;
    v0 = 13; goto L_00BC113C;
L_00BC1130:;
    v0 = 10; goto L_00BC113C;
L_00BC1138:;
    v0 = 0xffff;
L_00BC113C:;
    return;
}
