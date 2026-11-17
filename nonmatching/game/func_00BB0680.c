/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00BB0680(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = a0 & 0xffff;
    v0 = (s32) ((u32) v0 + 0xfffffa66U);
    at = (u64) v0 < (u64) (s64) 18;
    if (at == 0) goto L_00BB0740;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xfffffda0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xbb06b0U) goto L_00BB06B0; if (t_ == 0xbb06b8U) goto L_00BB06B8; if (t_ == 0xbb06c0U) goto L_00BB06C0; if (t_ == 0xbb06c8U) goto L_00BB06C8; if (t_ == 0xbb06d0U) goto L_00BB06D0; if (t_ == 0xbb06d8U) goto L_00BB06D8; if (t_ == 0xbb06e0U) goto L_00BB06E0; if (t_ == 0xbb06e8U) goto L_00BB06E8; if (t_ == 0xbb06f0U) goto L_00BB06F0; if (t_ == 0xbb06f8U) goto L_00BB06F8; if (t_ == 0xbb0700U) goto L_00BB0700; if (t_ == 0xbb0708U) goto L_00BB0708; if (t_ == 0xbb0710U) goto L_00BB0710; if (t_ == 0xbb0718U) goto L_00BB0718; if (t_ == 0xbb0720U) goto L_00BB0720; if (t_ == 0xbb0728U) goto L_00BB0728; if (t_ == 0xbb0730U) goto L_00BB0730; if (t_ == 0xbb0738U) goto L_00BB0738; }
L_00BB06B0:;
    v0 = 536; goto L_00BB0744;
L_00BB06B8:;
    v0 = 539; goto L_00BB0744;
L_00BB06C0:;
    v0 = 540; goto L_00BB0744;
L_00BB06C8:;
    v0 = 541; goto L_00BB0744;
L_00BB06D0:;
    v0 = 542; goto L_00BB0744;
L_00BB06D8:;
    v0 = 550; goto L_00BB0744;
L_00BB06E0:;
    v0 = 554; goto L_00BB0744;
L_00BB06E8:;
    v0 = 555; goto L_00BB0744;
L_00BB06F0:;
    v0 = 556; goto L_00BB0744;
L_00BB06F8:;
    v0 = 537; goto L_00BB0744;
L_00BB0700:;
    v0 = 538; goto L_00BB0744;
L_00BB0708:;
    v0 = 579; goto L_00BB0744;
L_00BB0710:;
    v0 = 580; goto L_00BB0744;
L_00BB0718:;
    v0 = 560; goto L_00BB0744;
L_00BB0720:;
    v0 = 561; goto L_00BB0744;
L_00BB0728:;
    v0 = 557; goto L_00BB0744;
L_00BB0730:;
    v0 = 558; goto L_00BB0744;
L_00BB0738:;
    v0 = 559; goto L_00BB0744;
L_00BB0740:;
    v0 = 0xffff;
L_00BB0744:;
    return;
}
