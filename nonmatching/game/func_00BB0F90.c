/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00BB0F90(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = a0 & 0xffff;
    v0 = (s32) ((u32) v0 + 0xfffffa66U);
    at = (u64) v0 < (u64) (s64) 14;
    if (at == 0) goto L_00BB1030;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x100U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xbb0fc0U) goto L_00BB0FC0; if (t_ == 0xbb0fc8U) goto L_00BB0FC8; if (t_ == 0xbb0fd0U) goto L_00BB0FD0; if (t_ == 0xbb0fd8U) goto L_00BB0FD8; if (t_ == 0xbb0fe0U) goto L_00BB0FE0; if (t_ == 0xbb0fe8U) goto L_00BB0FE8; if (t_ == 0xbb0ff0U) goto L_00BB0FF0; if (t_ == 0xbb0ff8U) goto L_00BB0FF8; if (t_ == 0xbb1000U) goto L_00BB1000; if (t_ == 0xbb1008U) goto L_00BB1008; if (t_ == 0xbb1010U) goto L_00BB1010; if (t_ == 0xbb1018U) goto L_00BB1018; if (t_ == 0xbb1020U) goto L_00BB1020; if (t_ == 0xbb1028U) goto L_00BB1028; }
L_00BB0FC0:;
    v0 = 671; goto L_00BB1034;
L_00BB0FC8:;
    v0 = 672; goto L_00BB1034;
L_00BB0FD0:;
    v0 = 665; goto L_00BB1034;
L_00BB0FD8:;
    v0 = 666; goto L_00BB1034;
L_00BB0FE0:;
    v0 = 673; goto L_00BB1034;
L_00BB0FE8:;
    v0 = 674; goto L_00BB1034;
L_00BB0FF0:;
    v0 = 629; goto L_00BB1034;
L_00BB0FF8:;
    v0 = 630; goto L_00BB1034;
L_00BB1000:;
    v0 = 631; goto L_00BB1034;
L_00BB1008:;
    v0 = 624; goto L_00BB1034;
L_00BB1010:;
    v0 = 625; goto L_00BB1034;
L_00BB1018:;
    v0 = 626; goto L_00BB1034;
L_00BB1020:;
    v0 = 670; goto L_00BB1034;
L_00BB1028:;
    v0 = 669; goto L_00BB1034;
L_00BB1030:;
    v0 = 0xffff;
L_00BB1034:;
    return;
}
