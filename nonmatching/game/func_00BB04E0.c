/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00BB04E0(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = a0 & 0xffff;
    v0 = (s32) ((u32) v0 + 0xfffffa66U);
    at = (u64) v0 < (u64) (s64) 18;
    if (at == 0) goto L_00BB05A0;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xfffffd00U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xbb0510U) goto L_00BB0510; if (t_ == 0xbb0518U) goto L_00BB0518; if (t_ == 0xbb0520U) goto L_00BB0520; if (t_ == 0xbb0528U) goto L_00BB0528; if (t_ == 0xbb0530U) goto L_00BB0530; if (t_ == 0xbb0538U) goto L_00BB0538; if (t_ == 0xbb0540U) goto L_00BB0540; if (t_ == 0xbb0548U) goto L_00BB0548; if (t_ == 0xbb0550U) goto L_00BB0550; if (t_ == 0xbb0558U) goto L_00BB0558; if (t_ == 0xbb0560U) goto L_00BB0560; if (t_ == 0xbb0568U) goto L_00BB0568; if (t_ == 0xbb0570U) goto L_00BB0570; if (t_ == 0xbb0578U) goto L_00BB0578; if (t_ == 0xbb0580U) goto L_00BB0580; if (t_ == 0xbb0588U) goto L_00BB0588; if (t_ == 0xbb0590U) goto L_00BB0590; if (t_ == 0xbb0598U) goto L_00BB0598; }
L_00BB0510:;
    v0 = 536; goto L_00BB05A4;
L_00BB0518:;
    v0 = 539; goto L_00BB05A4;
L_00BB0520:;
    v0 = 540; goto L_00BB05A4;
L_00BB0528:;
    v0 = 541; goto L_00BB05A4;
L_00BB0530:;
    v0 = 542; goto L_00BB05A4;
L_00BB0538:;
    v0 = 548; goto L_00BB05A4;
L_00BB0540:;
    v0 = 554; goto L_00BB05A4;
L_00BB0548:;
    v0 = 555; goto L_00BB05A4;
L_00BB0550:;
    v0 = 556; goto L_00BB05A4;
L_00BB0558:;
    v0 = 537; goto L_00BB05A4;
L_00BB0560:;
    v0 = 538; goto L_00BB05A4;
L_00BB0568:;
    v0 = 579; goto L_00BB05A4;
L_00BB0570:;
    v0 = 580; goto L_00BB05A4;
L_00BB0578:;
    v0 = 560; goto L_00BB05A4;
L_00BB0580:;
    v0 = 561; goto L_00BB05A4;
L_00BB0588:;
    v0 = 557; goto L_00BB05A4;
L_00BB0590:;
    v0 = 558; goto L_00BB05A4;
L_00BB0598:;
    v0 = 559; goto L_00BB05A4;
L_00BB05A0:;
    v0 = 0xffff;
L_00BB05A4:;
    return;
}
