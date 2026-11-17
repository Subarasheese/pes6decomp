/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00BB5FB0(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = (s32) ((u32) a0 + 0xfffffd56U);
    at = (u64) v0 < (u64) (s64) 13;
    if (at == 0) goto L_00BB6044;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x830U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xbb5fdcU) goto L_00BB5FDC; if (t_ == 0xbb5fe4U) goto L_00BB5FE4; if (t_ == 0xbb5fecU) goto L_00BB5FEC; if (t_ == 0xbb5ff4U) goto L_00BB5FF4; if (t_ == 0xbb5ffcU) goto L_00BB5FFC; if (t_ == 0xbb6004U) goto L_00BB6004; if (t_ == 0xbb600cU) goto L_00BB600C; if (t_ == 0xbb6014U) goto L_00BB6014; if (t_ == 0xbb601cU) goto L_00BB601C; if (t_ == 0xbb6024U) goto L_00BB6024; if (t_ == 0xbb602cU) goto L_00BB602C; if (t_ == 0xbb6034U) goto L_00BB6034; if (t_ == 0xbb603cU) goto L_00BB603C; }
L_00BB5FDC:;
    v0 = 1434; goto L_00BB6048;
L_00BB5FE4:;
    v0 = 1435; goto L_00BB6048;
L_00BB5FEC:;
    v0 = 1436; goto L_00BB6048;
L_00BB5FF4:;
    v0 = 1437; goto L_00BB6048;
L_00BB5FFC:;
    v0 = 1438; goto L_00BB6048;
L_00BB6004:;
    v0 = 1439; goto L_00BB6048;
L_00BB600C:;
    v0 = 1440; goto L_00BB6048;
L_00BB6014:;
    v0 = 1441; goto L_00BB6048;
L_00BB601C:;
    v0 = 1442; goto L_00BB6048;
L_00BB6024:;
    v0 = 1443; goto L_00BB6048;
L_00BB602C:;
    v0 = 1444; goto L_00BB6048;
L_00BB6034:;
    v0 = 1445; goto L_00BB6048;
L_00BB603C:;
    v0 = 1446; goto L_00BB6048;
L_00BB6044:;
    v0 = 0xffff;
L_00BB6048:;
    return;
}
