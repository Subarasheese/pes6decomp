/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00BB1260(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = a0 & 0xffff;
    v0 = (s32) ((u32) v0 + 0xfffffa66U);
    at = (u64) v0 < (u64) (s64) 14;
    if (at == 0) goto L_00BB1300;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x200U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xbb1290U) goto L_00BB1290; if (t_ == 0xbb1298U) goto L_00BB1298; if (t_ == 0xbb12a0U) goto L_00BB12A0; if (t_ == 0xbb12a8U) goto L_00BB12A8; if (t_ == 0xbb12b0U) goto L_00BB12B0; if (t_ == 0xbb12b8U) goto L_00BB12B8; if (t_ == 0xbb12c0U) goto L_00BB12C0; if (t_ == 0xbb12c8U) goto L_00BB12C8; if (t_ == 0xbb12d0U) goto L_00BB12D0; if (t_ == 0xbb12d8U) goto L_00BB12D8; if (t_ == 0xbb12e0U) goto L_00BB12E0; if (t_ == 0xbb12e8U) goto L_00BB12E8; if (t_ == 0xbb12f0U) goto L_00BB12F0; if (t_ == 0xbb12f8U) goto L_00BB12F8; }
L_00BB1290:;
    v0 = 667; goto L_00BB1304;
L_00BB1298:;
    v0 = 668; goto L_00BB1304;
L_00BB12A0:;
    v0 = 665; goto L_00BB1304;
L_00BB12A8:;
    v0 = 666; goto L_00BB1304;
L_00BB12B0:;
    v0 = 603; goto L_00BB1304;
L_00BB12B8:;
    v0 = 604; goto L_00BB1304;
L_00BB12C0:;
    v0 = 629; goto L_00BB1304;
L_00BB12C8:;
    v0 = 630; goto L_00BB1304;
L_00BB12D0:;
    v0 = 631; goto L_00BB1304;
L_00BB12D8:;
    v0 = 624; goto L_00BB1304;
L_00BB12E0:;
    v0 = 625; goto L_00BB1304;
L_00BB12E8:;
    v0 = 626; goto L_00BB1304;
L_00BB12F0:;
    v0 = 670; goto L_00BB1304;
L_00BB12F8:;
    v0 = 669; goto L_00BB1304;
L_00BB1300:;
    v0 = 0xffff;
L_00BB1304:;
    return;
}
