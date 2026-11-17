/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00BB0410(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = a0 & 0xffff;
    v0 = (s32) ((u32) v0 + 0xfffffa66U);
    at = (u64) v0 < (u64) (s64) 18;
    if (at == 0) goto L_00BB04D0;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xfffffcb0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xbb0440U) goto L_00BB0440; if (t_ == 0xbb0448U) goto L_00BB0448; if (t_ == 0xbb0450U) goto L_00BB0450; if (t_ == 0xbb0458U) goto L_00BB0458; if (t_ == 0xbb0460U) goto L_00BB0460; if (t_ == 0xbb0468U) goto L_00BB0468; if (t_ == 0xbb0470U) goto L_00BB0470; if (t_ == 0xbb0478U) goto L_00BB0478; if (t_ == 0xbb0480U) goto L_00BB0480; if (t_ == 0xbb0488U) goto L_00BB0488; if (t_ == 0xbb0490U) goto L_00BB0490; if (t_ == 0xbb0498U) goto L_00BB0498; if (t_ == 0xbb04a0U) goto L_00BB04A0; if (t_ == 0xbb04a8U) goto L_00BB04A8; if (t_ == 0xbb04b0U) goto L_00BB04B0; if (t_ == 0xbb04b8U) goto L_00BB04B8; if (t_ == 0xbb04c0U) goto L_00BB04C0; if (t_ == 0xbb04c8U) goto L_00BB04C8; }
L_00BB0440:;
    v0 = 536; goto L_00BB04D4;
L_00BB0448:;
    v0 = 539; goto L_00BB04D4;
L_00BB0450:;
    v0 = 540; goto L_00BB04D4;
L_00BB0458:;
    v0 = 541; goto L_00BB04D4;
L_00BB0460:;
    v0 = 542; goto L_00BB04D4;
L_00BB0468:;
    v0 = 545; goto L_00BB04D4;
L_00BB0470:;
    v0 = 554; goto L_00BB04D4;
L_00BB0478:;
    v0 = 555; goto L_00BB04D4;
L_00BB0480:;
    v0 = 556; goto L_00BB04D4;
L_00BB0488:;
    v0 = 537; goto L_00BB04D4;
L_00BB0490:;
    v0 = 538; goto L_00BB04D4;
L_00BB0498:;
    v0 = 579; goto L_00BB04D4;
L_00BB04A0:;
    v0 = 580; goto L_00BB04D4;
L_00BB04A8:;
    v0 = 560; goto L_00BB04D4;
L_00BB04B0:;
    v0 = 561; goto L_00BB04D4;
L_00BB04B8:;
    v0 = 557; goto L_00BB04D4;
L_00BB04C0:;
    v0 = 558; goto L_00BB04D4;
L_00BB04C8:;
    v0 = 559; goto L_00BB04D4;
L_00BB04D0:;
    v0 = 0xffff;
L_00BB04D4:;
    return;
}
