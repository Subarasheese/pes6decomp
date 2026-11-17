/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00BB11B0(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = a0 & 0xffff;
    v0 = (s32) ((u32) v0 + 0xfffffa66U);
    at = (u64) v0 < (u64) (s64) 14;
    if (at == 0) goto L_00BB1250;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x1c0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xbb11e0U) goto L_00BB11E0; if (t_ == 0xbb11e8U) goto L_00BB11E8; if (t_ == 0xbb11f0U) goto L_00BB11F0; if (t_ == 0xbb11f8U) goto L_00BB11F8; if (t_ == 0xbb1200U) goto L_00BB1200; if (t_ == 0xbb1208U) goto L_00BB1208; if (t_ == 0xbb1210U) goto L_00BB1210; if (t_ == 0xbb1218U) goto L_00BB1218; if (t_ == 0xbb1220U) goto L_00BB1220; if (t_ == 0xbb1228U) goto L_00BB1228; if (t_ == 0xbb1230U) goto L_00BB1230; if (t_ == 0xbb1238U) goto L_00BB1238; if (t_ == 0xbb1240U) goto L_00BB1240; if (t_ == 0xbb1248U) goto L_00BB1248; }
L_00BB11E0:;
    v0 = 667; goto L_00BB1254;
L_00BB11E8:;
    v0 = 668; goto L_00BB1254;
L_00BB11F0:;
    v0 = 665; goto L_00BB1254;
L_00BB11F8:;
    v0 = 666; goto L_00BB1254;
L_00BB1200:;
    v0 = 603; goto L_00BB1254;
L_00BB1208:;
    v0 = 604; goto L_00BB1254;
L_00BB1210:;
    v0 = 629; goto L_00BB1254;
L_00BB1218:;
    v0 = 630; goto L_00BB1254;
L_00BB1220:;
    v0 = 631; goto L_00BB1254;
L_00BB1228:;
    v0 = 624; goto L_00BB1254;
L_00BB1230:;
    v0 = 625; goto L_00BB1254;
L_00BB1238:;
    v0 = 626; goto L_00BB1254;
L_00BB1240:;
    v0 = 670; goto L_00BB1254;
L_00BB1248:;
    v0 = 669; goto L_00BB1254;
L_00BB1250:;
    v0 = 0xffff;
L_00BB1254:;
    return;
}
