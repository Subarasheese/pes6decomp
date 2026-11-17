/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00BB0000(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = a0 & 0xffff;
    v0 = (s32) ((u32) v0 + 0xfffffa66U);
    at = (u64) v0 < (u64) (s64) 18;
    if (at == 0) goto L_00BB00C0;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xfffffb20U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xbb0030U) goto L_00BB0030; if (t_ == 0xbb0038U) goto L_00BB0038; if (t_ == 0xbb0040U) goto L_00BB0040; if (t_ == 0xbb0048U) goto L_00BB0048; if (t_ == 0xbb0050U) goto L_00BB0050; if (t_ == 0xbb0058U) goto L_00BB0058; if (t_ == 0xbb0060U) goto L_00BB0060; if (t_ == 0xbb0068U) goto L_00BB0068; if (t_ == 0xbb0070U) goto L_00BB0070; if (t_ == 0xbb0078U) goto L_00BB0078; if (t_ == 0xbb0080U) goto L_00BB0080; if (t_ == 0xbb0088U) goto L_00BB0088; if (t_ == 0xbb0090U) goto L_00BB0090; if (t_ == 0xbb0098U) goto L_00BB0098; if (t_ == 0xbb00a0U) goto L_00BB00A0; if (t_ == 0xbb00a8U) goto L_00BB00A8; if (t_ == 0xbb00b0U) goto L_00BB00B0; if (t_ == 0xbb00b8U) goto L_00BB00B8; }
L_00BB0030:;
    v0 = 536; goto L_00BB00C4;
L_00BB0038:;
    v0 = 539; goto L_00BB00C4;
L_00BB0040:;
    v0 = 540; goto L_00BB00C4;
L_00BB0048:;
    v0 = 541; goto L_00BB00C4;
L_00BB0050:;
    v0 = 542; goto L_00BB00C4;
L_00BB0058:;
    v0 = 546; goto L_00BB00C4;
L_00BB0060:;
    v0 = 554; goto L_00BB00C4;
L_00BB0068:;
    v0 = 555; goto L_00BB00C4;
L_00BB0070:;
    v0 = 556; goto L_00BB00C4;
L_00BB0078:;
    v0 = 537; goto L_00BB00C4;
L_00BB0080:;
    v0 = 538; goto L_00BB00C4;
L_00BB0088:;
    v0 = 579; goto L_00BB00C4;
L_00BB0090:;
    v0 = 580; goto L_00BB00C4;
L_00BB0098:;
    v0 = 560; goto L_00BB00C4;
L_00BB00A0:;
    v0 = 561; goto L_00BB00C4;
L_00BB00A8:;
    v0 = 557; goto L_00BB00C4;
L_00BB00B0:;
    v0 = 558; goto L_00BB00C4;
L_00BB00B8:;
    v0 = 559; goto L_00BB00C4;
L_00BB00C0:;
    v0 = 0xffff;
L_00BB00C4:;
    return;
}
