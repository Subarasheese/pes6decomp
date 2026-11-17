/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00BB1040(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = a0 & 0xffff;
    v0 = (s32) ((u32) v0 + 0xfffffa66U);
    at = (u64) v0 < (u64) (s64) 15;
    if (at == 0) goto L_00BB10E8;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x140U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xbb1070U) goto L_00BB1070; if (t_ == 0xbb1078U) goto L_00BB1078; if (t_ == 0xbb1080U) goto L_00BB1080; if (t_ == 0xbb1088U) goto L_00BB1088; if (t_ == 0xbb1090U) goto L_00BB1090; if (t_ == 0xbb1098U) goto L_00BB1098; if (t_ == 0xbb10a0U) goto L_00BB10A0; if (t_ == 0xbb10a8U) goto L_00BB10A8; if (t_ == 0xbb10b0U) goto L_00BB10B0; if (t_ == 0xbb10b8U) goto L_00BB10B8; if (t_ == 0xbb10c0U) goto L_00BB10C0; if (t_ == 0xbb10c8U) goto L_00BB10C8; if (t_ == 0xbb10d0U) goto L_00BB10D0; if (t_ == 0xbb10d8U) goto L_00BB10D8; if (t_ == 0xbb10e0U) goto L_00BB10E0; }
L_00BB1070:;
    v0 = 671; goto L_00BB10EC;
L_00BB1078:;
    v0 = 672; goto L_00BB10EC;
L_00BB1080:;
    v0 = 665; goto L_00BB10EC;
L_00BB1088:;
    v0 = 666; goto L_00BB10EC;
L_00BB1090:;
    v0 = 673; goto L_00BB10EC;
L_00BB1098:;
    v0 = 674; goto L_00BB10EC;
L_00BB10A0:;
    v0 = 621; goto L_00BB10EC;
L_00BB10A8:;
    v0 = 622; goto L_00BB10EC;
L_00BB10B0:;
    v0 = 623; goto L_00BB10EC;
L_00BB10B8:;
    v0 = 605; goto L_00BB10EC;
L_00BB10C0:;
    v0 = 606; goto L_00BB10EC;
L_00BB10C8:;
    v0 = 607; goto L_00BB10EC;
L_00BB10D0:;
    v0 = 629; goto L_00BB10EC;
L_00BB10D8:;
    v0 = 630; goto L_00BB10EC;
L_00BB10E0:;
    v0 = 631; goto L_00BB10EC;
L_00BB10E8:;
    v0 = 0xffff;
L_00BB10EC:;
    return;
}
