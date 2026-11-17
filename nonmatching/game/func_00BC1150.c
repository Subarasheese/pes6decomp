/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00BC1150(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = a0 & 0xffff;
    v0 = (s32) ((u32) v0 + 0xfffffa36U);
    at = (u64) v0 < (u64) (s64) 16;
    if (at == 0) goto L_00BC1200;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x2060U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xbc1180U) goto L_00BC1180; if (t_ == 0xbc1188U) goto L_00BC1188; if (t_ == 0xbc1190U) goto L_00BC1190; if (t_ == 0xbc1198U) goto L_00BC1198; if (t_ == 0xbc11a0U) goto L_00BC11A0; if (t_ == 0xbc11a8U) goto L_00BC11A8; if (t_ == 0xbc11b0U) goto L_00BC11B0; if (t_ == 0xbc11b8U) goto L_00BC11B8; if (t_ == 0xbc11c0U) goto L_00BC11C0; if (t_ == 0xbc11c8U) goto L_00BC11C8; if (t_ == 0xbc11d0U) goto L_00BC11D0; if (t_ == 0xbc11d8U) goto L_00BC11D8; if (t_ == 0xbc11e0U) goto L_00BC11E0; if (t_ == 0xbc11e8U) goto L_00BC11E8; if (t_ == 0xbc11f0U) goto L_00BC11F0; if (t_ == 0xbc11f8U) goto L_00BC11F8; }
L_00BC1180:;
    v0 = 72; goto L_00BC1204;
L_00BC1188:;
    v0 = 34; goto L_00BC1204;
L_00BC1190:;
    v0 = 36; goto L_00BC1204;
L_00BC1198:;
    v0 = 37; goto L_00BC1204;
L_00BC11A0:;
    v0 = 0; goto L_00BC1204;
L_00BC11A8:;
    v0 = 38; goto L_00BC1204;
L_00BC11B0:;
    v0 = 42; goto L_00BC1204;
L_00BC11B8:;
    v0 = 43; goto L_00BC1204;
L_00BC11C0:;
    v0 = 45; goto L_00BC1204;
L_00BC11C8:;
    v0 = 44; goto L_00BC1204;
L_00BC11D0:;
    v0 = 39; goto L_00BC1204;
L_00BC11D8:;
    v0 = 24; goto L_00BC1204;
L_00BC11E0:;
    v0 = 14; goto L_00BC1204;
L_00BC11E8:;
    v0 = 15; goto L_00BC1204;
L_00BC11F0:;
    v0 = 13; goto L_00BC1204;
L_00BC11F8:;
    v0 = 10; goto L_00BC1204;
L_00BC1200:;
    v0 = 0xffff;
L_00BC1204:;
    return;
}
