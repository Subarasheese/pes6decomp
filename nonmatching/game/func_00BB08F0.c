/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00BB08F0(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = a0 & 0xffff;
    v0 = (s32) ((u32) v0 + 0xfffffa66U);
    at = (u64) v0 < (u64) (s64) 15;
    if (at == 0) goto L_00BB0998;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xfffffe90U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xbb0920U) goto L_00BB0920; if (t_ == 0xbb0928U) goto L_00BB0928; if (t_ == 0xbb0930U) goto L_00BB0930; if (t_ == 0xbb0938U) goto L_00BB0938; if (t_ == 0xbb0940U) goto L_00BB0940; if (t_ == 0xbb0948U) goto L_00BB0948; if (t_ == 0xbb0950U) goto L_00BB0950; if (t_ == 0xbb0958U) goto L_00BB0958; if (t_ == 0xbb0960U) goto L_00BB0960; if (t_ == 0xbb0968U) goto L_00BB0968; if (t_ == 0xbb0970U) goto L_00BB0970; if (t_ == 0xbb0978U) goto L_00BB0978; if (t_ == 0xbb0980U) goto L_00BB0980; if (t_ == 0xbb0988U) goto L_00BB0988; if (t_ == 0xbb0990U) goto L_00BB0990; }
L_00BB0920:;
    v0 = 112; goto L_00BB099C;
L_00BB0928:;
    v0 = 116; goto L_00BB099C;
L_00BB0930:;
    v0 = 117; goto L_00BB099C;
L_00BB0938:;
    v0 = 133; goto L_00BB099C;
L_00BB0940:;
    v0 = 135; goto L_00BB099C;
L_00BB0948:;
    v0 = 134; goto L_00BB099C;
L_00BB0950:;
    v0 = 136; goto L_00BB099C;
L_00BB0958:;
    v0 = 60; goto L_00BB099C;
L_00BB0960:;
    v0 = 61; goto L_00BB099C;
L_00BB0968:;
    v0 = 62; goto L_00BB099C;
L_00BB0970:;
    v0 = 63; goto L_00BB099C;
L_00BB0978:;
    v0 = 56; goto L_00BB099C;
L_00BB0980:;
    v0 = 57; goto L_00BB099C;
L_00BB0988:;
    v0 = 58; goto L_00BB099C;
L_00BB0990:;
    v0 = 59; goto L_00BB099C;
L_00BB0998:;
    v0 = 0xffff;
L_00BB099C:;
    return;
}
