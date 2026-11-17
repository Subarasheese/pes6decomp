/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00BB0750(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = a0 & 0xffff;
    v0 = (s32) ((u32) v0 + 0xfffffa66U);
    at = (u64) v0 < (u64) (s64) 18;
    if (at == 0) goto L_00BB0810;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xfffffdf0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xbb0780U) goto L_00BB0780; if (t_ == 0xbb0788U) goto L_00BB0788; if (t_ == 0xbb0790U) goto L_00BB0790; if (t_ == 0xbb0798U) goto L_00BB0798; if (t_ == 0xbb07a0U) goto L_00BB07A0; if (t_ == 0xbb07a8U) goto L_00BB07A8; if (t_ == 0xbb07b0U) goto L_00BB07B0; if (t_ == 0xbb07b8U) goto L_00BB07B8; if (t_ == 0xbb07c0U) goto L_00BB07C0; if (t_ == 0xbb07c8U) goto L_00BB07C8; if (t_ == 0xbb07d0U) goto L_00BB07D0; if (t_ == 0xbb07d8U) goto L_00BB07D8; if (t_ == 0xbb07e0U) goto L_00BB07E0; if (t_ == 0xbb07e8U) goto L_00BB07E8; if (t_ == 0xbb07f0U) goto L_00BB07F0; if (t_ == 0xbb07f8U) goto L_00BB07F8; if (t_ == 0xbb0800U) goto L_00BB0800; if (t_ == 0xbb0808U) goto L_00BB0808; }
L_00BB0780:;
    v0 = 536; goto L_00BB0814;
L_00BB0788:;
    v0 = 539; goto L_00BB0814;
L_00BB0790:;
    v0 = 540; goto L_00BB0814;
L_00BB0798:;
    v0 = 541; goto L_00BB0814;
L_00BB07A0:;
    v0 = 542; goto L_00BB0814;
L_00BB07A8:;
    v0 = 551; goto L_00BB0814;
L_00BB07B0:;
    v0 = 554; goto L_00BB0814;
L_00BB07B8:;
    v0 = 555; goto L_00BB0814;
L_00BB07C0:;
    v0 = 556; goto L_00BB0814;
L_00BB07C8:;
    v0 = 537; goto L_00BB0814;
L_00BB07D0:;
    v0 = 538; goto L_00BB0814;
L_00BB07D8:;
    v0 = 579; goto L_00BB0814;
L_00BB07E0:;
    v0 = 580; goto L_00BB0814;
L_00BB07E8:;
    v0 = 560; goto L_00BB0814;
L_00BB07F0:;
    v0 = 561; goto L_00BB0814;
L_00BB07F8:;
    v0 = 557; goto L_00BB0814;
L_00BB0800:;
    v0 = 558; goto L_00BB0814;
L_00BB0808:;
    v0 = 559; goto L_00BB0814;
L_00BB0810:;
    v0 = 0xffff;
L_00BB0814:;
    return;
}
