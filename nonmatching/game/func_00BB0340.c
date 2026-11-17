/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00BB0340(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = a0 & 0xffff;
    v0 = (s32) ((u32) v0 + 0xfffffa66U);
    at = (u64) v0 < (u64) (s64) 18;
    if (at == 0) goto L_00BB0400;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xfffffc60U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xbb0370U) goto L_00BB0370; if (t_ == 0xbb0378U) goto L_00BB0378; if (t_ == 0xbb0380U) goto L_00BB0380; if (t_ == 0xbb0388U) goto L_00BB0388; if (t_ == 0xbb0390U) goto L_00BB0390; if (t_ == 0xbb0398U) goto L_00BB0398; if (t_ == 0xbb03a0U) goto L_00BB03A0; if (t_ == 0xbb03a8U) goto L_00BB03A8; if (t_ == 0xbb03b0U) goto L_00BB03B0; if (t_ == 0xbb03b8U) goto L_00BB03B8; if (t_ == 0xbb03c0U) goto L_00BB03C0; if (t_ == 0xbb03c8U) goto L_00BB03C8; if (t_ == 0xbb03d0U) goto L_00BB03D0; if (t_ == 0xbb03d8U) goto L_00BB03D8; if (t_ == 0xbb03e0U) goto L_00BB03E0; if (t_ == 0xbb03e8U) goto L_00BB03E8; if (t_ == 0xbb03f0U) goto L_00BB03F0; if (t_ == 0xbb03f8U) goto L_00BB03F8; }
L_00BB0370:;
    v0 = 536; goto L_00BB0404;
L_00BB0378:;
    v0 = 539; goto L_00BB0404;
L_00BB0380:;
    v0 = 540; goto L_00BB0404;
L_00BB0388:;
    v0 = 541; goto L_00BB0404;
L_00BB0390:;
    v0 = 542; goto L_00BB0404;
L_00BB0398:;
    v0 = 552; goto L_00BB0404;
L_00BB03A0:;
    v0 = 554; goto L_00BB0404;
L_00BB03A8:;
    v0 = 555; goto L_00BB0404;
L_00BB03B0:;
    v0 = 556; goto L_00BB0404;
L_00BB03B8:;
    v0 = 537; goto L_00BB0404;
L_00BB03C0:;
    v0 = 538; goto L_00BB0404;
L_00BB03C8:;
    v0 = 579; goto L_00BB0404;
L_00BB03D0:;
    v0 = 580; goto L_00BB0404;
L_00BB03D8:;
    v0 = 560; goto L_00BB0404;
L_00BB03E0:;
    v0 = 561; goto L_00BB0404;
L_00BB03E8:;
    v0 = 557; goto L_00BB0404;
L_00BB03F0:;
    v0 = 558; goto L_00BB0404;
L_00BB03F8:;
    v0 = 559; goto L_00BB0404;
L_00BB0400:;
    v0 = 0xffff;
L_00BB0404:;
    return;
}
