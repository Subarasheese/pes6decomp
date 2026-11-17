/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00BB00D0(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = a0 & 0xffff;
    v0 = (s32) ((u32) v0 + 0xfffffa66U);
    at = (u64) v0 < (u64) (s64) 18;
    if (at == 0) goto L_00BB0190;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xfffffb70U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xbb0100U) goto L_00BB0100; if (t_ == 0xbb0108U) goto L_00BB0108; if (t_ == 0xbb0110U) goto L_00BB0110; if (t_ == 0xbb0118U) goto L_00BB0118; if (t_ == 0xbb0120U) goto L_00BB0120; if (t_ == 0xbb0128U) goto L_00BB0128; if (t_ == 0xbb0130U) goto L_00BB0130; if (t_ == 0xbb0138U) goto L_00BB0138; if (t_ == 0xbb0140U) goto L_00BB0140; if (t_ == 0xbb0148U) goto L_00BB0148; if (t_ == 0xbb0150U) goto L_00BB0150; if (t_ == 0xbb0158U) goto L_00BB0158; if (t_ == 0xbb0160U) goto L_00BB0160; if (t_ == 0xbb0168U) goto L_00BB0168; if (t_ == 0xbb0170U) goto L_00BB0170; if (t_ == 0xbb0178U) goto L_00BB0178; if (t_ == 0xbb0180U) goto L_00BB0180; if (t_ == 0xbb0188U) goto L_00BB0188; }
L_00BB0100:;
    v0 = 536; goto L_00BB0194;
L_00BB0108:;
    v0 = 539; goto L_00BB0194;
L_00BB0110:;
    v0 = 540; goto L_00BB0194;
L_00BB0118:;
    v0 = 541; goto L_00BB0194;
L_00BB0120:;
    v0 = 542; goto L_00BB0194;
L_00BB0128:;
    v0 = 544; goto L_00BB0194;
L_00BB0130:;
    v0 = 554; goto L_00BB0194;
L_00BB0138:;
    v0 = 555; goto L_00BB0194;
L_00BB0140:;
    v0 = 556; goto L_00BB0194;
L_00BB0148:;
    v0 = 537; goto L_00BB0194;
L_00BB0150:;
    v0 = 538; goto L_00BB0194;
L_00BB0158:;
    v0 = 579; goto L_00BB0194;
L_00BB0160:;
    v0 = 580; goto L_00BB0194;
L_00BB0168:;
    v0 = 560; goto L_00BB0194;
L_00BB0170:;
    v0 = 561; goto L_00BB0194;
L_00BB0178:;
    v0 = 557; goto L_00BB0194;
L_00BB0180:;
    v0 = 558; goto L_00BB0194;
L_00BB0188:;
    v0 = 559; goto L_00BB0194;
L_00BB0190:;
    v0 = 0xffff;
L_00BB0194:;
    return;
}
