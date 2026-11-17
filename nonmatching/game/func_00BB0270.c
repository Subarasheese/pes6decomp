/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00BB0270(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = a0 & 0xffff;
    v0 = (s32) ((u32) v0 + 0xfffffa66U);
    at = (u64) v0 < (u64) (s64) 18;
    if (at == 0) goto L_00BB0330;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xfffffc10U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xbb02a0U) goto L_00BB02A0; if (t_ == 0xbb02a8U) goto L_00BB02A8; if (t_ == 0xbb02b0U) goto L_00BB02B0; if (t_ == 0xbb02b8U) goto L_00BB02B8; if (t_ == 0xbb02c0U) goto L_00BB02C0; if (t_ == 0xbb02c8U) goto L_00BB02C8; if (t_ == 0xbb02d0U) goto L_00BB02D0; if (t_ == 0xbb02d8U) goto L_00BB02D8; if (t_ == 0xbb02e0U) goto L_00BB02E0; if (t_ == 0xbb02e8U) goto L_00BB02E8; if (t_ == 0xbb02f0U) goto L_00BB02F0; if (t_ == 0xbb02f8U) goto L_00BB02F8; if (t_ == 0xbb0300U) goto L_00BB0300; if (t_ == 0xbb0308U) goto L_00BB0308; if (t_ == 0xbb0310U) goto L_00BB0310; if (t_ == 0xbb0318U) goto L_00BB0318; if (t_ == 0xbb0320U) goto L_00BB0320; if (t_ == 0xbb0328U) goto L_00BB0328; }
L_00BB02A0:;
    v0 = 536; goto L_00BB0334;
L_00BB02A8:;
    v0 = 539; goto L_00BB0334;
L_00BB02B0:;
    v0 = 540; goto L_00BB0334;
L_00BB02B8:;
    v0 = 541; goto L_00BB0334;
L_00BB02C0:;
    v0 = 542; goto L_00BB0334;
L_00BB02C8:;
    v0 = 547; goto L_00BB0334;
L_00BB02D0:;
    v0 = 554; goto L_00BB0334;
L_00BB02D8:;
    v0 = 555; goto L_00BB0334;
L_00BB02E0:;
    v0 = 556; goto L_00BB0334;
L_00BB02E8:;
    v0 = 537; goto L_00BB0334;
L_00BB02F0:;
    v0 = 538; goto L_00BB0334;
L_00BB02F8:;
    v0 = 579; goto L_00BB0334;
L_00BB0300:;
    v0 = 580; goto L_00BB0334;
L_00BB0308:;
    v0 = 560; goto L_00BB0334;
L_00BB0310:;
    v0 = 561; goto L_00BB0334;
L_00BB0318:;
    v0 = 557; goto L_00BB0334;
L_00BB0320:;
    v0 = 558; goto L_00BB0334;
L_00BB0328:;
    v0 = 559; goto L_00BB0334;
L_00BB0330:;
    v0 = 0xffff;
L_00BB0334:;
    return;
}
