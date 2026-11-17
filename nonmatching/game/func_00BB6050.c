/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00BB6050(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = (s32) ((u32) a0 + 0xfffffda0U);
    at = (u64) v0 < (u64) (s64) 13;
    if (at == 0) goto L_00BB60E4;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x870U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xbb607cU) goto L_00BB607C; if (t_ == 0xbb6084U) goto L_00BB6084; if (t_ == 0xbb608cU) goto L_00BB608C; if (t_ == 0xbb6094U) goto L_00BB6094; if (t_ == 0xbb609cU) goto L_00BB609C; if (t_ == 0xbb60a4U) goto L_00BB60A4; if (t_ == 0xbb60acU) goto L_00BB60AC; if (t_ == 0xbb60b4U) goto L_00BB60B4; if (t_ == 0xbb60bcU) goto L_00BB60BC; if (t_ == 0xbb60c4U) goto L_00BB60C4; if (t_ == 0xbb60ccU) goto L_00BB60CC; if (t_ == 0xbb60d4U) goto L_00BB60D4; if (t_ == 0xbb60dcU) goto L_00BB60DC; }
L_00BB607C:;
    v0 = 1434; goto L_00BB60E8;
L_00BB6084:;
    v0 = 1435; goto L_00BB60E8;
L_00BB608C:;
    v0 = 1436; goto L_00BB60E8;
L_00BB6094:;
    v0 = 1437; goto L_00BB60E8;
L_00BB609C:;
    v0 = 1438; goto L_00BB60E8;
L_00BB60A4:;
    v0 = 1439; goto L_00BB60E8;
L_00BB60AC:;
    v0 = 1440; goto L_00BB60E8;
L_00BB60B4:;
    v0 = 1441; goto L_00BB60E8;
L_00BB60BC:;
    v0 = 1442; goto L_00BB60E8;
L_00BB60C4:;
    v0 = 1443; goto L_00BB60E8;
L_00BB60CC:;
    v0 = 1444; goto L_00BB60E8;
L_00BB60D4:;
    v0 = 1445; goto L_00BB60E8;
L_00BB60DC:;
    v0 = 1446; goto L_00BB60E8;
L_00BB60E4:;
    v0 = 0xffff;
L_00BB60E8:;
    return;
}
