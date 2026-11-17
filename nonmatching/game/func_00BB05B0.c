/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00BB05B0(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = a0 & 0xffff;
    v0 = (s32) ((u32) v0 + 0xfffffa66U);
    at = (u64) v0 < (u64) (s64) 18;
    if (at == 0) goto L_00BB0670;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xfffffd50U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xbb05e0U) goto L_00BB05E0; if (t_ == 0xbb05e8U) goto L_00BB05E8; if (t_ == 0xbb05f0U) goto L_00BB05F0; if (t_ == 0xbb05f8U) goto L_00BB05F8; if (t_ == 0xbb0600U) goto L_00BB0600; if (t_ == 0xbb0608U) goto L_00BB0608; if (t_ == 0xbb0610U) goto L_00BB0610; if (t_ == 0xbb0618U) goto L_00BB0618; if (t_ == 0xbb0620U) goto L_00BB0620; if (t_ == 0xbb0628U) goto L_00BB0628; if (t_ == 0xbb0630U) goto L_00BB0630; if (t_ == 0xbb0638U) goto L_00BB0638; if (t_ == 0xbb0640U) goto L_00BB0640; if (t_ == 0xbb0648U) goto L_00BB0648; if (t_ == 0xbb0650U) goto L_00BB0650; if (t_ == 0xbb0658U) goto L_00BB0658; if (t_ == 0xbb0660U) goto L_00BB0660; if (t_ == 0xbb0668U) goto L_00BB0668; }
L_00BB05E0:;
    v0 = 536; goto L_00BB0674;
L_00BB05E8:;
    v0 = 539; goto L_00BB0674;
L_00BB05F0:;
    v0 = 540; goto L_00BB0674;
L_00BB05F8:;
    v0 = 541; goto L_00BB0674;
L_00BB0600:;
    v0 = 542; goto L_00BB0674;
L_00BB0608:;
    v0 = 549; goto L_00BB0674;
L_00BB0610:;
    v0 = 554; goto L_00BB0674;
L_00BB0618:;
    v0 = 555; goto L_00BB0674;
L_00BB0620:;
    v0 = 556; goto L_00BB0674;
L_00BB0628:;
    v0 = 537; goto L_00BB0674;
L_00BB0630:;
    v0 = 538; goto L_00BB0674;
L_00BB0638:;
    v0 = 579; goto L_00BB0674;
L_00BB0640:;
    v0 = 580; goto L_00BB0674;
L_00BB0648:;
    v0 = 560; goto L_00BB0674;
L_00BB0650:;
    v0 = 561; goto L_00BB0674;
L_00BB0658:;
    v0 = 557; goto L_00BB0674;
L_00BB0660:;
    v0 = 558; goto L_00BB0674;
L_00BB0668:;
    v0 = 559; goto L_00BB0674;
L_00BB0670:;
    v0 = 0xffff;
L_00BB0674:;
    return;
}
