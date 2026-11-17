/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00BB0820(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = a0 & 0xffff;
    v0 = (s32) ((u32) v0 + 0xfffffa66U);
    at = (u64) v0 < (u64) (s64) 18;
    if (at == 0) goto L_00BB08E0;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xfffffe40U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xbb0850U) goto L_00BB0850; if (t_ == 0xbb0858U) goto L_00BB0858; if (t_ == 0xbb0860U) goto L_00BB0860; if (t_ == 0xbb0868U) goto L_00BB0868; if (t_ == 0xbb0870U) goto L_00BB0870; if (t_ == 0xbb0878U) goto L_00BB0878; if (t_ == 0xbb0880U) goto L_00BB0880; if (t_ == 0xbb0888U) goto L_00BB0888; if (t_ == 0xbb0890U) goto L_00BB0890; if (t_ == 0xbb0898U) goto L_00BB0898; if (t_ == 0xbb08a0U) goto L_00BB08A0; if (t_ == 0xbb08a8U) goto L_00BB08A8; if (t_ == 0xbb08b0U) goto L_00BB08B0; if (t_ == 0xbb08b8U) goto L_00BB08B8; if (t_ == 0xbb08c0U) goto L_00BB08C0; if (t_ == 0xbb08c8U) goto L_00BB08C8; if (t_ == 0xbb08d0U) goto L_00BB08D0; if (t_ == 0xbb08d8U) goto L_00BB08D8; }
L_00BB0850:;
    v0 = 536; goto L_00BB08E4;
L_00BB0858:;
    v0 = 539; goto L_00BB08E4;
L_00BB0860:;
    v0 = 540; goto L_00BB08E4;
L_00BB0868:;
    v0 = 541; goto L_00BB08E4;
L_00BB0870:;
    v0 = 542; goto L_00BB08E4;
L_00BB0878:;
    v0 = 553; goto L_00BB08E4;
L_00BB0880:;
    v0 = 554; goto L_00BB08E4;
L_00BB0888:;
    v0 = 555; goto L_00BB08E4;
L_00BB0890:;
    v0 = 556; goto L_00BB08E4;
L_00BB0898:;
    v0 = 537; goto L_00BB08E4;
L_00BB08A0:;
    v0 = 538; goto L_00BB08E4;
L_00BB08A8:;
    v0 = 579; goto L_00BB08E4;
L_00BB08B0:;
    v0 = 580; goto L_00BB08E4;
L_00BB08B8:;
    v0 = 560; goto L_00BB08E4;
L_00BB08C0:;
    v0 = 561; goto L_00BB08E4;
L_00BB08C8:;
    v0 = 557; goto L_00BB08E4;
L_00BB08D0:;
    v0 = 558; goto L_00BB08E4;
L_00BB08D8:;
    v0 = 559; goto L_00BB08E4;
L_00BB08E0:;
    v0 = 0xffff;
L_00BB08E4:;
    return;
}
