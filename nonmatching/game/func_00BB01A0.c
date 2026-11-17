/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00BB01A0(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = a0 & 0xffff;
    v0 = (s32) ((u32) v0 + 0xfffffa66U);
    at = (u64) v0 < (u64) (s64) 18;
    if (at == 0) goto L_00BB0260;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xfffffbc0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xbb01d0U) goto L_00BB01D0; if (t_ == 0xbb01d8U) goto L_00BB01D8; if (t_ == 0xbb01e0U) goto L_00BB01E0; if (t_ == 0xbb01e8U) goto L_00BB01E8; if (t_ == 0xbb01f0U) goto L_00BB01F0; if (t_ == 0xbb01f8U) goto L_00BB01F8; if (t_ == 0xbb0200U) goto L_00BB0200; if (t_ == 0xbb0208U) goto L_00BB0208; if (t_ == 0xbb0210U) goto L_00BB0210; if (t_ == 0xbb0218U) goto L_00BB0218; if (t_ == 0xbb0220U) goto L_00BB0220; if (t_ == 0xbb0228U) goto L_00BB0228; if (t_ == 0xbb0230U) goto L_00BB0230; if (t_ == 0xbb0238U) goto L_00BB0238; if (t_ == 0xbb0240U) goto L_00BB0240; if (t_ == 0xbb0248U) goto L_00BB0248; if (t_ == 0xbb0250U) goto L_00BB0250; if (t_ == 0xbb0258U) goto L_00BB0258; }
L_00BB01D0:;
    v0 = 536; goto L_00BB0264;
L_00BB01D8:;
    v0 = 539; goto L_00BB0264;
L_00BB01E0:;
    v0 = 540; goto L_00BB0264;
L_00BB01E8:;
    v0 = 541; goto L_00BB0264;
L_00BB01F0:;
    v0 = 542; goto L_00BB0264;
L_00BB01F8:;
    v0 = 543; goto L_00BB0264;
L_00BB0200:;
    v0 = 554; goto L_00BB0264;
L_00BB0208:;
    v0 = 555; goto L_00BB0264;
L_00BB0210:;
    v0 = 556; goto L_00BB0264;
L_00BB0218:;
    v0 = 537; goto L_00BB0264;
L_00BB0220:;
    v0 = 538; goto L_00BB0264;
L_00BB0228:;
    v0 = 579; goto L_00BB0264;
L_00BB0230:;
    v0 = 580; goto L_00BB0264;
L_00BB0238:;
    v0 = 560; goto L_00BB0264;
L_00BB0240:;
    v0 = 561; goto L_00BB0264;
L_00BB0248:;
    v0 = 557; goto L_00BB0264;
L_00BB0250:;
    v0 = 558; goto L_00BB0264;
L_00BB0258:;
    v0 = 559; goto L_00BB0264;
L_00BB0260:;
    v0 = 0xffff;
L_00BB0264:;
    return;
}
